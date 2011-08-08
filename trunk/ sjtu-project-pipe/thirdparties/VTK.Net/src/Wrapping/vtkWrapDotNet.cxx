#include <stdio.h>
#include <string>
#include <map>
#include <list>
#include <stdexcept>
#include <locale>
#include <new>
#include <assert.h>
#include <stdarg.h>
#include <strstream>

#include "vtkParse.h"
#include "vtkType.h"


// #define DOTNET_KIT_IS_NAMESPACE

using namespace std;

static const char* g_kitContentFile = "/Wrapping/DotNet/class_kits.txt";
static const char* g_kitLibFile = "/Wrapping/DotNet/kit_dependencies.txt";


#ifdef _WIN32
#include "Windows.h"
void DebugString(const std::string& msg)
  {
  ::OutputDebugString(msg.c_str());
  }
#define vsnprintf _vsnprintf
#define HAVE_VSNPRINTF
#else
void DebugString(const std::string& msg)
  {
  fprintf(stderr, msg.c_str());
  }
#endif

class SprintString : public std::string {
  static const int BufferCnt;
  static char threadUnsafeBuffer[];
public:
  SprintString( const char* sMessage, ... );
  };


const int SprintString::BufferCnt = 400;
char SprintString::threadUnsafeBuffer[BufferCnt];

/*!	This creates an STL string from a printf-like constructor.
It uses temporary storage on the stack for small strings but
dynamically allocates memory for larger strings.  If you use
this for exceptions, avoid huge strings, especially if, for
instance, the exception declares that you are out of memory.
*/
SprintString::SprintString( const char* sMessage, ... )
  {
  assert( 0 != sMessage );
  if ( 0 == sMessage ) throw exception(
    "Passed null pointer in constructor." );

  char buffer[ BufferCnt ];
  va_list marker;

#ifdef HAVE_VSNPRINTF
  // Try to write the string to a buffer on the stack.
  va_start( marker, sMessage );
  int writtenNotIncludingNull = vsnprintf( buffer, BufferCnt-1, sMessage, marker );
  va_end( marker );

  // If the string fit in the buffer,
  if ( writtenNotIncludingNull >= 0 ) {
    this->append( buffer, writtenNotIncludingNull );

    } else {
      // Write the string to a dynamically allocated buffer.
      char *sBuff;
      size_t bufferMultiple = 1;
      size_t messageCnt = strlen( sMessage ) + 1;
      do {
        size_t buffCnt = messageCnt + bufferMultiple * BufferCnt;
        bufferMultiple++;

        try {
          sBuff = new char[ buffCnt ];
          } catch ( std::bad_alloc& ) {
            sBuff = 0;
          }
        assert( 0 != sBuff );
        if ( 0 == sBuff ) {
          // If we can't allocate memory,
          //   then use our inviolable stash of memory to get the message out.
          va_start( marker, sMessage );
          vsnprintf( threadUnsafeBuffer, BufferCnt-1, sMessage, marker );
          va_end( marker );
          this->append( threadUnsafeBuffer );
          return;
          }

        va_start( marker, sMessage );
        writtenNotIncludingNull = vsnprintf( sBuff, buffCnt-1, sMessage, marker );
        va_end( marker );

        } while ( writtenNotIncludingNull < 0 );

      this->append( sBuff, writtenNotIncludingNull );
      delete[] sBuff;
    }
#else

  // Try to write the string to a buffer on the stack.
  va_start( marker, sMessage );
  int writtenNotIncludingNull = vsprintf( buffer, sMessage, marker );
  va_end( marker );

  assert( writtenNotIncludingNull < BufferCnt );
  if ( writtenNotIncludingNull >= BufferCnt ) {
    throw Exception("Overwrote internal buffer.  Memory error.");
    }
  this->append( buffer, writtenNotIncludingNull );

#endif
  }


class vtkContext
  {
  string m_kit;
  string m_base;
  string m_identity;
  static vtkContext* m_instance;
  map<string,string> m_classname;
  map<string,bool>   m_dependencies;

  public:
    void Initialize(const string& identity, const string& wrapFileName)
      {
      this->SetIdentity(identity);
      string::size_type lastSlash = wrapFileName.find_last_of("/",wrapFileName.size());
      string::size_type buildRoot = wrapFileName.find_last_of("/",lastSlash-1);
      string buildBaseDir = wrapFileName.substr(0, buildRoot);
      this->FindClassName(buildBaseDir);
      this->ReadAllowedKits(buildBaseDir);
      }
    enum Role
      {
      None,
      Interface,
      Identity,
      Base
      };
    static vtkContext* Instance()
      {
      if ( 0 == m_instance ) m_instance = new vtkContext();
      return m_instance;
      }
    void SetKit(const string& kit) { m_kit = kit; }
    void SetBase(const string& base) { m_base = base; }
    string GetBase() { return m_base; }
    void SetIdentity(const string& identity) {
      m_identity = identity;
      }
    string GetIdentity() { return m_identity; }
    string GetKit() {
      if ( (m_kit.length() == 0) && (m_identity.length()>0) )
        {
        SetKit(GetKit(m_identity));
        }
      return m_kit;
      }
    string GetKit(const string& className)
      {
      map<string,string>::iterator findIter = m_classname.find(className);
      if ( m_classname.end() == findIter )
        {
        DebugString(SprintString("Class %s not in kit contents.\n",
          className.c_str()));
        return "KitNotFound";
        }
      return findIter->second;
      }
    bool ClassInAllowedKits(const string& className)
      {
      const string classKit = this->GetKit(className);
      map<string,bool>::const_iterator findClass = m_dependencies.find(classKit);
      bool bAllowed = (findClass != m_dependencies.end());
      if ( !bAllowed )
        {
        DebugString(SprintString("Class %s, referenced by %s, depends on a later kit.\n",
          className.c_str(), m_identity.c_str()));
        }
      return (bAllowed);
      }
    Role GetRole(const string& classname)
      {
      if ( m_base.compare(classname) == 0 ) return Base;
      if ( m_identity.compare(classname) == 0 ) return Identity;
      return Interface;
      }
  protected:
    vtkContext()
      {
      }
    ~vtkContext() {}
    void FindClassName(const string& buildBaseDir)
      {
      string kitContentFile = buildBaseDir;
      kitContentFile.append(g_kitContentFile);
      FILE* fp = fopen(kitContentFile.c_str(),"r");
      const int lineCnt = 1024;
      char line[lineCnt];
      char sClass[255], sKit[255];
      while ( NULL != fgets(line, lineCnt, fp) )
        {
        int retVal = sscanf(line,"%s %s", sClass, sKit);
        if ( 2 == retVal )
          {
          m_classname[sClass] = sKit;
          }
        }
      fclose(fp);
      }

    void ReadAllowedKits(const string& buildBaseDir)
      {
      string kitLibFile = buildBaseDir;
      kitLibFile.append(g_kitLibFile);
      FILE* fp = fopen(kitLibFile.c_str(), "r");
      if ( 0 == fp ) return;

      const int lineCnt = 1024;
      char line[lineCnt];
      map<string,list<string>*>* kits = new map<string,list<string>*>();
      while ( NULL != fgets(line, lineCnt, fp) )
        {
        const char* curPos = line;
        char headKit[255];
        char dependentKit[255];
        int bHaveHead = sscanf(curPos, "%s", headKit);
        if ( bHaveHead > 0 )
          {
          curPos += strlen(headKit)+1;
          list<string>* deps = new list<string>();
          while ( sscanf(curPos, "%s", dependentKit) > 0 )
            {
            deps->push_back(dependentKit);
            curPos += strlen(dependentKit)+1;
            }
          kits->insert(pair<string,list<string>*>(headKit, deps));
          }
        }
      fclose(fp);

      m_dependencies[this->GetKit()] = true;
      size_t depCnt = 0;
      while (m_dependencies.size() != depCnt)
        {
        depCnt = m_dependencies.size();
        map<string,list<string>*>::const_iterator kitIter = kits->begin();
        while (kitIter != kits->end())
          {
          map<string,bool>::iterator findDep = m_dependencies.find(kitIter->first);
          if (m_dependencies.end() != findDep)
            {
            list<string>* depList = kitIter->second;
            list<string>::const_iterator addToDeps = depList->begin();
            while (addToDeps != depList->end())
              {
              m_dependencies[*addToDeps] = true;
              addToDeps++;
              }
            }
          kitIter++;
          }
        }
      }
  };

vtkContext* vtkContext::m_instance = 0;


class vtkHeaderFile
  {
  string m_headerFileName;
  string m_namespace;
  list<string> m_managedInclude;
  list<string> m_nativeInclude;
  list<string> m_outsideReference;
  list<string> m_insideReference;
  list<string> m_method;
  list<string> m_protected;
  string m_className;
  string m_baseName;
  public:
    vtkHeaderFile(const string& sourceFileName)
      {
      m_headerFileName = sourceFileName;
      size_t dotPos = m_headerFileName.find_last_of('.');
      size_t len = m_headerFileName.length();
      m_headerFileName.replace(dotPos, len-dotPos, ".h");

      this->SetNamespace(vtkContext::Instance()->GetKit());
      }

    void SetNamespace(const string& ns)
      {
      m_namespace = ns;
      }

    void AddManagedInclude(const string& include)
      {
      m_managedInclude.push_back(include);
      }

    void AddNativeInclude(const string& include)
      {
      m_nativeInclude.push_back(include);
      }

    void AddClassReference(const string& vtkclass, bool ns)
      {
      if (ns) m_outsideReference.push_back(vtkclass);
      else m_insideReference.push_back(vtkclass);
      }

    void SetClass(const string& classname, const string& basename)
      {
      m_className = classname;
      m_baseName = basename;
      }

    void AddProtected(const string& line)
      {
      m_protected.push_back(line);
      }

    void AddMethod(const string& method)
      {
      m_method.push_back(method);
      }

    bool WriteFile()
      {
      FILE* fh = fopen(m_headerFileName.c_str(), "w");
      fprintf(fh,"#pragma once\n\n// managed includes\n");
      list<string>::const_iterator manIter = m_managedInclude.begin();
      while ( manIter != m_managedInclude.end() )
        {
        fprintf(fh,"#include \"%s\"\n", manIter->c_str());
        manIter++;
        }
      fprintf(fh,"\n// native includes\n");
      list<string>::const_iterator natIter = m_nativeInclude.begin();
      while ( natIter != m_nativeInclude.end() )
        {
        fprintf(fh,"#include \"%s\"\n", natIter->c_str());
        natIter++;
        }
      fprintf(fh,"\n");
      list<string>::const_iterator outIter = m_outsideReference.begin();
      while ( outIter != m_outsideReference.end() )
        {
        fprintf(fh,"%s\n", outIter->c_str());
        outIter++;
        }
      fprintf(fh,"using namespace System;\n\n");
#ifdef DOTNET_KIT_IS_NAMESPACE
      fprintf(fh,"namespace %s {\n\n", m_namespace.c_str());
#else
      fprintf(fh,"namespace vtk {\n\n");
#endif // DOTNET_KIT_IS_NAMESPACE
      list<string>::const_iterator inIter = m_insideReference.begin();
      while ( inIter != m_insideReference.end() )
        {
        fprintf(fh,"%s\n", inIter->c_str());
        inIter++;
        }
      fprintf(fh,"\npublic ref class %s", m_className.c_str());
      if ( m_baseName.length() > 0 )
        {
        fprintf(fh," : public %s\n{\n", m_baseName.c_str());
        }
      else
        {
        fprintf(fh,"\n{\n");
        }

      if ( m_protected.size() > 0 )
        {
        fprintf(fh,"\nprotected:\n");
        list<string>::const_iterator protIter = m_protected.begin();
        while ( protIter != m_protected.end() )
          {
          fprintf(fh, "%s\n", protIter->c_str());
          protIter++;
          }
        }

      fprintf(fh,"\npublic:\n");

      list<string>::const_iterator methIter = m_method.begin();
      while ( methIter != m_method.end() )
        {
        fprintf(fh,"%s\n\n", methIter->c_str());
        methIter++;
        }

      fprintf(fh,"\n};\n\n} // end %s\n", m_namespace.c_str());

      fclose(fh);
      return true;
      }
  };





class vtkSourceFile
  {
  FILE* m_sourceFile;

  string m_namespace;
  list<string> m_managedInclude;
  list<string> m_nativeInclude;
  list<string> m_method;
  string m_className;
  string m_baseName;
  public:
    vtkSourceFile(FILE* fp) : m_sourceFile(fp)
      {
      this->SetNamespace(vtkContext::Instance()->GetKit());
      }


    void SetNamespace(const string& ns)
      {
      m_namespace = ns;
      }

    void AddManagedInclude(const string& include)
      {
      m_managedInclude.push_back(include);
      }

    void AddNativeInclude(const string& include)
      {
      m_nativeInclude.push_back(include);
      }

    void SetClass(const string& classname, const string& basename)
      {
      m_className = classname;
      m_baseName = basename;
      }

    void AddMethod(const string& method)
      {
      m_method.push_back(method);
      }

    void WriteFile()
      {
      fprintf(m_sourceFile, "\n\n// managed includes\n");
      list<string>::const_iterator manIter = m_managedInclude.begin();
      while ( manIter != m_managedInclude.end() )
        {
        fprintf(m_sourceFile,"#include \"%s\"\n", manIter->c_str());
        manIter++;
        }
      fprintf(m_sourceFile, "\n// native includes\n");
      list<string>::const_iterator natIter = m_nativeInclude.begin();
      while ( natIter != m_nativeInclude.end() )
        {
        fprintf(m_sourceFile,"#include \"%s\"\n", natIter->c_str());
        natIter++;
        }
      fprintf(m_sourceFile,"\nusing namespace System;\n\n");
#ifdef DOTNET_KIT_IS_NAMESPACE
      fprintf(m_sourceFile,"namespace %s {\n\n", m_namespace.c_str());
#else
      fprintf(m_sourceFile,"namespace vtk {\n\n");
#endif

      list<string>::const_iterator methIter = m_method.begin();
      while ( methIter != m_method.end() )
        {
        fprintf(m_sourceFile, "%s\n\n\n", methIter->c_str());
        methIter++;
        }

      fprintf(m_sourceFile,"\n\n} // end namespace %s\n", m_namespace.c_str());
      }
  };


// In the header, before the declaration, you either get
// #include "vtkObject.h" // if you are the base class
// or
// public __gc vtkObject; // if you are referenced in a method
// or nothing. // if you are in another assembly.
//
// In a method declaration
// vtkCommon::vtkObject
// or vtkObject
// depending on whether you are in the same assembly.
// 
// In the source file headers, it's
// #include "vtkObject.h"
// #include "vtk/vtkObject.h"
// and referenced with
// vtkObject or vtkCommon::vtkObject
// or ::vtkObject
//
// So the reference is one of
// 1. declared class
// 2. base class
// 3. method signature
// and it is either in this assembly or not
// and we want either the managed or unmanaged name.
class vtkClassReference
  {
  private:
    string m_name;
  public:
    vtkClassReference() {}
    vtkClassReference(const string& name) : m_name(name) {
      }
    vtkClassReference(const vtkClassReference& ref) : m_name(ref.m_name) {}
    bool IsUnknown() {
      if ( !vtkContext::Instance()->ClassInAllowedKits(m_name) ) return true;
      return false;
      }
    bool Matches(const string& name) { return (0==m_name.compare(name)); }
    string ManagedString() const
      {
#ifdef DOTNET_KIT_IS_NAMESPACE
      string mykit = vtkContext::Instance()->GetKit(m_name);
      if ( mykit.compare(vtkContext::Instance()->GetKit()) == 0 )
        {
        return m_name;
        }
      mykit.append("::");
      mykit.append(m_name);
      return mykit;
#else
      return m_name;
#endif
      }
    void AddReferenceToHeader(vtkHeaderFile* header) const
      {
      vtkContext::Role role = vtkContext::Instance()->GetRole(m_name);
      switch (role)
        {
        case vtkContext::Interface:
          {
          string mykit = vtkContext::Instance()->GetKit(m_name);
          if ( mykit.compare(vtkContext::Instance()->GetKit()) == 0 )
            {
            string ref("ref class ");
            ref.append(this->ManagedString());
            ref.append(";");
            header->AddClassReference(ref,false);
            }
          else
            {
            // Don't add reference if in another kit.
            }
          }
          break;

        case vtkContext::Identity:
          // Nothing to include if it's the class we're defining.
          break;

        case vtkContext::Base:
          {
          string mykit = vtkContext::Instance()->GetKit(m_name);
          if ( mykit.compare(vtkContext::Instance()->GetKit()) == 0 )
            {
            header->AddManagedInclude(SprintString("%sDotNet.h", m_name.c_str()));
            }
          }
          break;
        }
      }
    void AddReferenceToSource(vtkSourceFile* source) const
      {
      vtkContext::Role role = vtkContext::Instance()->GetRole(m_name);
      switch (role)
        {
        case vtkContext::Interface:
          {
          string mykit = vtkContext::Instance()->GetKit(m_name);
          if ( mykit.compare(vtkContext::Instance()->GetKit()) == 0 )
            {
            source->AddManagedInclude(SprintString("%sDotNet.h", m_name.c_str()));
            source->AddNativeInclude(SprintString("%s.h", m_name.c_str()));
            }
          else
            {
            // Don't add an #include for managed classes in another assembly.
            source->AddNativeInclude(SprintString("%s.h", m_name.c_str()));
            }
          }
          break;

        case vtkContext::Identity:
          source->AddManagedInclude(SprintString("%sDotNet.h", m_name.c_str()));
          source->AddNativeInclude(SprintString("%s.h", m_name.c_str()));
          break;

        case vtkContext::Base:
          break;
        }
      }
    bool operator==(const vtkClassReference& ref) const
      {
      return (0 == this->m_name.compare(ref.m_name));
      }
    bool operator<(const vtkClassReference& ref) const
      {
      return (this->m_name.compare(ref.m_name)<0);
      }
  };


typedef map<vtkClassReference,size_t> ClassReferenceMap;
typedef pair<vtkClassReference,size_t> ClassReferencePair;


// vtkIdType can be int or long. Defined in vtkType.h.
static const char* baseSignedTypeNames[] =
  {
  "None",
  "float",
  "void",
  "char",
  "int",
  "short",
  "long",
  "double",
  "randomClass",
  "vtkRandomClass",
#if VTK_SIZEOF_ID_TYPE==VTK_SIZEOF_INT
  "int", // vtkIdType
#else
  "long long", // vtkIdType
#endif
  "signed __int64", // long long
  "__int64", // __int64
  "signed char" // This entry is always signed char.
  };

// vtkIdType can be int or long. Defined in vtkType.h.
static const char* baseUnsignedTypeNames[] =
  {
  "None",
  "float",
  "void",
  "unsigned char",
  "unsigned int",
  "unsigned short",
  "unsigned long",
  "double",
  "randomClass",
  "vtkRandomClass",
#if VTK_SIZEOF_ID_TYPE==VTK_SIZEOF_INT
  "unsigned int", // vtkIdType
#else
  "unsigned long long", // vtkIdType
#endif
  "unsigned __int64", // unsigned long long
  "unsigned __int64", // this entry always __int64, which is unsigned.
  "signed char" // this entry always signed char
  };

class vtkArgument
  {
  protected:
    string m_name;
    int m_digits[5];
    bool m_bIsReturn;
  public:
    vtkArgument(int digits[]) : m_bIsReturn(true) { this->CopyDigits(digits); }
    vtkArgument(int digits[], const std::string& name) : m_name(name), m_bIsReturn(false)
      { this->CopyDigits(digits); }
    virtual ~vtkArgument() {}

    virtual string TypeString() const = 0;

    // If it's a return value
    virtual string DeclarationReturnString(string middle) const { return middle; }
    virtual string AcceptNativeReturn(const string& ret) const = 0;
    virtual string TranslateForReturn() const = 0;

    // If it's a method argument
    virtual string DeclarationString() const = 0;
    virtual string TranslateToNative() const  { return string(""); }
    virtual string PresentToNative() const = 0;
    virtual string TranslateToManaged() const { return string(""); }

    virtual void AddReferences(ClassReferenceMap&) const {}

    bool IsConst() const { return ((m_digits[3]==1) || (m_digits[3]==3)); }
    bool IsStatic() const { return ((m_digits[3]==2) || (m_digits[3]==3)); }
    virtual bool IsWrappable() const { return true; }
  protected:
    void CopyDigits(int digits[])
      {
      for (size_t cpIdx=0; cpIdx<5; cpIdx++ ) m_digits[cpIdx] = digits[cpIdx];
      }
    string TypeToString(const int* dig) const
      {
      string name;
      if ( dig[0] < 0xe )
        {
        if ( 1 == dig[1] )
          {
          name.append(baseUnsignedTypeNames[dig[0]]);
          }
        else
          {
          name.append(baseSignedTypeNames[dig[0]]);
          }
        }
      if ( name.length() == 0 ) name = "unknownArgType";
      return name;
      }
  };



class vtkSimpleArgument : public vtkArgument
  {
  public:
    vtkSimpleArgument(int digits[]) : vtkArgument(digits) {}
    vtkSimpleArgument(int digits[], string name) : vtkArgument(digits,name) {}
    virtual ~vtkSimpleArgument() {}
    virtual string TypeString() const
      {
      return SprintString("%s", this->TypeToString(m_digits).c_str());
      }
    virtual string DeclarationReturnString(string middle) const
      {
      middle.insert(0,SprintString("%s ",this->TypeToString(m_digits).c_str()));
      return middle;
      }
    virtual string AcceptNativeReturn(const string& ret) const
      {
      if ( 2 == m_digits[0] ) return SprintString("%s;\n", ret.c_str());
      return SprintString("%s retVal = %s;\n",TypeToString(m_digits).c_str(), ret.c_str());
      }
    virtual string TranslateForReturn() const {
      if ( 2 == m_digits[0] ) return string("");
      return string("  return retVal;\n");
      }

    virtual string DeclarationString() const
      {
      SprintString sArg("%s %s",
        this->TypeToString(m_digits).c_str(),
        m_name.c_str());
      return sArg;
      }
    virtual string PresentToNative() const { return m_name; }
  };


class vtkStringArgument : public vtkArgument
  {
  public:
    vtkStringArgument(int digits[], string name) : vtkArgument(digits,name) {}
    virtual ~vtkStringArgument() {}
    virtual string TypeString() const
      {
        return string("System::String^");
      }
    virtual string DeclarationReturnString(string middle) const
      {
      middle.insert(0,"System::String^ ");
      return middle;
      }
    virtual string AcceptNativeReturn(const string& ret) const
      {
      return SprintString("const char* retVal = %s;\n", ret.c_str());
      }
    virtual string TranslateForReturn() const
      {
      string sTrans("  System::String^ sRetVal = "
        "System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));\n"
        "  return sRetVal;\n");
      return sTrans;
      }

    virtual string DeclarationString() const
      {
      SprintString sArg("System::String^ %s",
        m_name.c_str());
      return sArg;
      }

    virtual string TranslateToNative() const
      {
      SprintString ret("  char* %sWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal"
        "::StringToHGlobalAnsi(%s).ToPointer());\n", m_name.c_str(), m_name.c_str());
      return ret;
      }
    virtual string PresentToNative() const { return SprintString("%sWrap",m_name.c_str()); }
    virtual string TranslateToManaged() const
      {
      string sTrans;
      if ( !IsConst() )
        {
        sTrans.append(SprintString("  %s->Remove(0,%s->Length);\n", m_name.c_str(),m_name.c_str()));
        sTrans.append(SprintString("  %s->Insert(0,"
          "System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(%sWrap)));\n",
          m_name.c_str(), m_name.c_str()));
        sTrans.append(SprintString("System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(%sWrap));\n",
          m_name.c_str()));
        }
      else
        {
        sTrans.append(SprintString("  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(%sWrap));\n",
          m_name.c_str()));
        }
      return sTrans;
      }
  };

class vtkArrayArgument : public vtkArgument
  {
  int m_argCnt;
  bool m_bHaveHint;
  int m_hintSize;
  public:
    // An argument
    vtkArrayArgument(int digits[], int cnt, string name) : vtkArgument(digits,name),
      m_argCnt(cnt), m_bHaveHint(false), m_hintSize(0)
      {}
    // A return value
    vtkArrayArgument(int digits[], int hintSize) : vtkArgument(digits,string("")),
      m_argCnt(0), m_bHaveHint(true), m_hintSize(hintSize)
      {}
    virtual ~vtkArrayArgument() {}
    virtual string TypeString() const
      {
        SprintString whole("array<%s>^",
          this->TypeToString(m_digits).c_str());
        return whole;
      }
    virtual string DeclarationReturnString(string middle) const
      {
      SprintString whole("array<%s>^ %s",
        this->TypeToString(m_digits).c_str(),
        middle.c_str());
      return whole;
      }
    virtual string AcceptNativeReturn(const string& ret) const
      {
      return SprintString("const %s* retVal = %s;\n",
        TypeToString(m_digits).c_str(), ret.c_str());
      }
    virtual string TranslateForReturn() const
      {
      const string& sType = TypeToString(m_digits);
      SprintString sRet("  array<%s>^ mRetVal = gcnew array<%s>(%i);\n",
        sType.c_str(), sType.c_str(), m_hintSize);
      sRet.append(SprintString("  for (size_t cprIdx=0; cprIdx<%i; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];\n"
        "  return mRetVal;\n", m_hintSize));
      return sRet;
      }

    virtual string DeclarationString() const
      {
      SprintString sArg("array<%s>^ %s",
        this->TypeToString(m_digits).c_str(),
        m_name.c_str());
      return sArg;
      }

    virtual string TranslateToNative() const
      {
      SprintString tn("  pin_ptr<%s> %sPin = &%s[0];\n",
        TypeToString(m_digits).c_str(), m_name.c_str(), m_name.c_str());
      tn.append(SprintString("  %s* native%sPin = %sPin;\n",
        TypeToString(m_digits).c_str(), m_name.c_str(), m_name.c_str()));
      return tn;
      }
    virtual string PresentToNative() const
      {
      return SprintString("native%sPin", m_name.c_str());
      }
  };


class vtkRefArgument : public vtkArgument
  {
  bool m_bHaveHint;
  int m_hintSize;
  public:
    vtkRefArgument(int digits[], string name) : vtkArgument(digits,name),
      m_bHaveHint(false), m_hintSize(0)
      {}
    vtkRefArgument(int digits[], int hintSize) : vtkArgument(digits,string("")),
      m_bHaveHint(true), m_hintSize(hintSize)
      {}
    virtual ~vtkRefArgument() {}
    virtual string TypeString() const
      {
      SprintString whole("%s%%",
        this->TypeToString(m_digits).c_str());
      return whole;
      }
    virtual string DeclarationReturnString(string middle) const
      {
      SprintString whole("%s%% %s",
        this->TypeToString(m_digits).c_str(),
        middle.c_str());
      return whole;
      }
    virtual string AcceptNativeReturn(const string& ret) const
      {
      return SprintString("const %s& retVal = %s;\n",
        TypeToString(m_digits).c_str(), ret.c_str());
      }
    virtual string TranslateForReturn() const
      {
      const string& sType = TypeToString(m_digits);
      SprintString sRet("  array<%s>^ mRetVal = new array<%s>(%i);\n",
        sType.c_str(), sType.c_str(), m_hintSize);
      sRet.append(SprintString("  for (size_t cprIdx=0; cprIdx<%i; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];\n"
        "  return mRetVal;\n", m_hintSize));
      return sRet;
      }

    virtual string DeclarationString() const
      {
      SprintString sArg("%s%% %s",
        this->TypeToString(m_digits).c_str(),
        m_name.c_str());
      return sArg;
      }

    virtual string TranslateToNative() const
      {
      SprintString tn("  pin_ptr<%s> %sPin = &%s;\n",
        TypeToString(m_digits).c_str(), m_name.c_str(), m_name.c_str());
      return tn;
      }
    virtual string PresentToNative() const
      {
      return SprintString("*%sPin", m_name.c_str());
      }
    virtual string TranslateToManaged() const
      {
      return string("");
      }
  };


class vtkVoidPtrArgument : public vtkArgument
  {
  bool m_bHaveHint;
  int m_hintSize;
  public:
    vtkVoidPtrArgument(int digits[], string name) : vtkArgument(digits,name),
      m_bHaveHint(false), m_hintSize(0)
      {}
    vtkVoidPtrArgument(int digits[], int hintSize) : vtkArgument(digits,string("")),
      m_bHaveHint(true), m_hintSize(hintSize)
      {}
    virtual ~vtkVoidPtrArgument() {}
    virtual string TypeString() const
      {
      return string("System::IntPtr");
      }
    virtual string DeclarationReturnString(string middle) const
      {
      SprintString whole("System::IntPtr %s",
        middle.c_str());
      return whole;
      }
    virtual string AcceptNativeReturn(const string& ret) const
      {
      return SprintString("void* retVal = %s;\n", ret.c_str());
      }
    virtual string TranslateForReturn() const
      {
      return string("  IntPtr retValWrap(retVal);\n  return retValWrap;\n");
      }

    virtual string DeclarationString() const
      {
      SprintString sArg("System::IntPtr %s",
        m_name.c_str());
      return sArg;
      }

    virtual string TranslateToNative() const
      {
      return string("");
      }
    virtual string PresentToNative() const
      {
      return SprintString("%s.ToPointer()", m_name.c_str());
      }
    virtual string TranslateToManaged() const
      {
      return string("");
      }
  };


class vtkTwoArrayArgument : public vtkArgument
  {
  int m_argCnt[2];
  bool m_bHaveHint;
  int m_hintSize;
  public:
    vtkTwoArrayArgument(int digits[], int cnt[2], string name) : vtkArgument(digits,name),
      m_bHaveHint(false), m_hintSize(0)
      { m_argCnt[0] = cnt[0]; m_argCnt[1] = cnt[1];}
    vtkTwoArrayArgument(int digits[], int cnt[2], int hintSize) : vtkArgument(digits,string("")),
      m_bHaveHint(true), m_hintSize(hintSize)
      { m_argCnt[0] = cnt[0]; m_argCnt[1] = cnt[1];}
    virtual ~vtkTwoArrayArgument() {}
    virtual string TypeString() const
      {
      SprintString whole("array<%s,2>^",
        this->TypeToString(m_digits).c_str());
      return whole;
      }
    virtual bool IsWrappable() const
      {
      if ( m_argCnt[0] == 0 ) return false;
      if ( m_argCnt[1] == 0 ) return false;
      return true;
      }

    virtual string DeclarationReturnString(string middle) const
      {
      SprintString whole("array<%s,2>^ %s",
        this->TypeToString(m_digits).c_str(),
        middle.c_str());
      return whole;
      }
    virtual string AcceptNativeReturn(const string& ret) const
      {
      return SprintString("const %s* retVal = %s;\n",
        TypeToString(m_digits).c_str(), ret.c_str());
      }
    virtual string TranslateForReturn() const
      {
      const string& sType = TypeToString(m_digits);
      SprintString sRet("  array<%s>^ mRetVal = new array<%s,2>(%i);\n",
        sType.c_str(), sType.c_str(), m_hintSize);
      sRet.append(SprintString("  for (size_t cprIdx=0; cprIdx<%i; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];\n"
        "  return mRetVal;\n", m_hintSize));
      return sRet;
      }

    virtual string DeclarationString() const
      {
      SprintString sArg("array<%s,2>^ %s",
        this->TypeToString(m_digits).c_str(),
        m_name.c_str());
      return sArg;
      }

    virtual string TranslateToNative() const
      {
      string typeName = TypeToString(m_digits);
      SprintString tn(
        "  %s native%s[%d][%d];\n"
        "  for (size_t i%s=0; i%s<%d; i%s++)\n"
        "    for (size_t j%s=0; j%s<%d; j%s++)\n"
        "      native%s[i%s][j%s] = %s[i%s,j%s];\n",
        typeName.c_str(), m_name.c_str(), m_argCnt[0], m_argCnt[1],
        m_name.c_str(), m_name.c_str(), m_argCnt[0], m_name.c_str(),
        m_name.c_str(), m_name.c_str(), m_argCnt[1], m_name.c_str(),
        m_name.c_str(), m_name.c_str(),m_name.c_str(),
        m_name.c_str(), m_name.c_str(),m_name.c_str()
        );
      return tn;
      }
    virtual string PresentToNative() const
      {
      return SprintString("native%s", m_name.c_str());
      }
    virtual string TranslateToManaged() const
      {
        if ( this->IsConst() ) return string("");
      string typeName = TypeToString(m_digits);
      SprintString tn(
        "  for (size_t i%s=0; i%s<%d; i%s++)\n"
        "    for (size_t j%s=0; j%s<%d; j%s++)\n"
        "      %s[i%s,j%s] = native%s[i%s][j%s];\n",
        m_name.c_str(), m_name.c_str(), m_argCnt[0], m_name.c_str(),
        m_name.c_str(), m_name.c_str(), m_argCnt[1], m_name.c_str(),
        m_name.c_str(), m_name.c_str(),m_name.c_str(),
        m_name.c_str(), m_name.c_str(),m_name.c_str()
      );
      return tn;
      }
  };


class vtkClassArgument : public vtkArgument
  {
  string m_class;
  vtkClassReference* m_ref;
  public:
    vtkClassArgument(int digits[], const string& classname, string name) :
        vtkArgument(digits,name), m_class(classname)
          {
          m_ref = new vtkClassReference(m_class);
          }
        virtual ~vtkClassArgument() { delete m_ref; }
        virtual bool IsWrappable() const
          {
          if ( m_ref->IsUnknown() ) return false;
          return true;
          }

    virtual string TypeString() const
      {
          SprintString whole("%s^",
            m_ref->ManagedString().c_str());
          return whole;
      }
        virtual string DeclarationReturnString(string middle) const
          {
          SprintString whole("%s^ %s",
            m_ref->ManagedString().c_str(), middle.c_str());
          return whole;
          }
        virtual string AcceptNativeReturn(const string& ret) const
          {
          string sRet;
          if ( this->IsConst() )
            {
            sRet.append(SprintString("::%s* retVal = const_cast<::%s*>(static_cast<const ::%s*>(%s));\n",
              m_class.c_str(), m_class.c_str(), m_class.c_str(), ret.c_str()));
            }
          else
            {
            sRet.append(SprintString("::%s* retVal = static_cast<::%s*>(%s);\n",
              m_class.c_str(), m_class.c_str(), ret.c_str()));
            }
          return sRet;
          }
        virtual string TranslateForReturn() const {
          string sRet;
          if ( this->IsConst() )
            {
            sRet.append(SprintString("  return gcnew %s(IntPtr(retVal), true);\n",
              m_ref->ManagedString().c_str()));
            }
          else
            {
            sRet.append(SprintString("  return gcnew %s(IntPtr(retVal), false);\n",
              m_ref->ManagedString().c_str()));
            }
          return sRet;
          }

        virtual string DeclarationString() const
          {
          SprintString sArg("%s^ %s",
            m_ref->ManagedString().c_str(),
            m_name.c_str()
            );
          return sArg;
          }
        virtual void AddReferences(ClassReferenceMap& reference) const
          {
          reference[*m_ref] = 1;
          }

        virtual string TranslateToNative() const
          {
          string trans;
          if ( m_class.compare("vtkObjectBase")==0)
            {
            trans.append(SprintString("  ::%s* %sWrap = static_cast<::%s*>(%s->GetNativePointer().ToPointer());\n",
              m_class.c_str(), m_name.c_str(), m_class.c_str(), m_name.c_str()));
            }
          else
            {
#ifdef DOTNET_KIT_IS_NAMESPACE
            trans.append(SprintString("  ::%s* %sWrap = vtkCommon::ConvertManagedToNative<::%s>(%s->GetNativePointer());\n",
              m_class.c_str(), m_name.c_str(), m_class.c_str(), m_name.c_str()));
#else
            trans.append(SprintString("  ::%s* %sWrap = vtk::ConvertManagedToNative<::%s>(%s->GetNativePointer());\n",
              m_class.c_str(), m_name.c_str(), m_class.c_str(), m_name.c_str()));
#endif
            }
          return trans;
          }
        virtual string PresentToNative() const
          {
          return SprintString("%sWrap", m_name.c_str());
          }
  };


class vtkOStreamArgument : public vtkArgument
  {
  string m_class;
  public:
    vtkOStreamArgument(int digits[], string name) :
        vtkArgument(digits,name)
          {
          }
        virtual ~vtkOStreamArgument() {}
        virtual bool IsWrappable() const
          {
          if ( m_name.size() == 0 ) return false;
          return true;
          }
    virtual string TypeString() const
      {
        return string("System::IO::TextWriter^");
      }
        virtual string DeclarationReturnString(string middle) const
          {
          return middle;
          }
        virtual string AcceptNativeReturn(const string& ret) const
          {
          return SprintString("::%s* retVal = static_cast<::%s*>(%s);\n",
            m_class.c_str(), m_class.c_str(), ret.c_str());
          }
        virtual string TranslateForReturn() const {
          SprintString sRet("  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(%sWrap.str())));",
            m_name.c_str());
          sRet.append(SprintString("  %s->Write(sRetVal);\n", m_name.c_str()));
          return sRet;
          }

        virtual string DeclarationString() const
          {
          SprintString sArg("System::IO::TextWriter^ %s",
            m_name.c_str()
            );
          return sArg;
          }
        virtual void AddReferences(ClassReferenceMap&) const
          {
          }

        virtual string TranslateToNative() const
          {
          SprintString trans("  ostrstream %sWrap;\n", m_name.c_str());
          return trans;
          }
        virtual string PresentToNative() const
          {
          return SprintString("%sWrap", m_name.c_str());
          }
        virtual string TranslateToManaged() const {
          SprintString sRet("  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(%sWrap.str())));",
            m_name.c_str());
          sRet.append(SprintString("  %s->Write(sRetVal);\n", m_name.c_str()));
          return sRet;
          }
  };



class vtkIndentArgument : public vtkArgument
  {
  string m_class;
  public:
    vtkIndentArgument(int digits[], string name) :
        vtkArgument(digits,name)
          {
          }
        virtual ~vtkIndentArgument() {}
        virtual bool IsWrappable() const
          {
          if ( m_name.size() == 0 ) return false;
          return true;
          }
    virtual string TypeString() const
      {
        return string("int");
      }
        virtual string DeclarationReturnString(string middle) const
          {
          return middle;
          }
        virtual string AcceptNativeReturn(const string& ret) const
          {
          return ret;
          }
        virtual string TranslateForReturn() const {
          return "";
          }

        virtual string DeclarationString() const
          {
          SprintString sArg("int %s",
            m_name.c_str()
            );
          return sArg;
          }
          
        virtual void AddReferences(ClassReferenceMap&) const
          {
          }

        virtual string TranslateToNative() const
          {
          SprintString trans("  vtkIndent %sWrap(%s);\n", m_name.c_str(), m_name.c_str());
          return trans;
          }
        virtual string PresentToNative() const
          {
          return SprintString("%sWrap", m_name.c_str());
          }
        virtual string TranslateToManaged() const {
          return "";
          }
  };


class vtkArgumentFactory
  {
  static vtkArgumentFactory* m_instance;
  public:
    static vtkArgumentFactory* GetInstance() {
      if ( 0 == m_instance )
        {
        m_instance = new vtkArgumentFactory();
        }
      return m_instance;
      }

    vtkArgument* Create(int argCnt[2], char* argClass, int argType, const string& name,
      bool bHaveHint, int hintSize)
      {
      static const size_t digitCnt = 5;
      int digits[digitCnt];
      for (size_t digitIdx=0; digitIdx<digitCnt; digitIdx++)
        {
        digits[digitIdx] = argType % 0x10;
        argType /= 0x10;
        }

      if ( 8 == digits[0] )
        {
        if ( 0 != argClass )
          {
          if ( 0 == strcmp(argClass,"size_t") )
            {
            digits[0] = 4; // int
            digits[1] = 1; // unsigned
            }
          else if ( 0 == strcmp(argClass,"ostream") )
            {
            return new vtkOStreamArgument(digits, name);
            }
          else if ( 0 == strcmp(argClass,"vtkIndent") )
            {
            return new vtkIndentArgument(digits, name);
            }
          }
        }

      // argument is a function
      if ( 5 == digits[3] )
        {
        return 0;
        }

      bool bReturn = (name.size() == 0);
      bool bNativeType = (digits[0]!=8) && (digits[0]!=9);
      bool bVoid = (digits[0]==2);
      bool bSignedChar = (digits[0]==3 && digits[1]!=1);
      bool bPointer = (digits[2]==3);

      if ( bSignedChar && bPointer )
        {
        return new vtkStringArgument(digits,name);
        }
      if ( bNativeType && (digits[2]==0) )
        {
        return new vtkSimpleArgument(digits,name);
        }
      else if ( bNativeType && bPointer )
        {
        if ( bVoid )
          {
          return new vtkVoidPtrArgument(digits,name);
          }
        else
          {
          if ( !bReturn )
            {
            return new vtkArrayArgument(digits,argCnt[0],name);
            }
          else
            {
            if ( bHaveHint )
              {
              if ( hintSize > 0 )
                {
                return new vtkArrayArgument(digits,hintSize);
                }
              else
                {
                DebugString("No hintsize?");
                }
              }
            else return 0;
            }
          }
        }
      else if ( bNativeType && (6==digits[2]) )
        {
        if ( !bReturn ) return new vtkTwoArrayArgument(digits,argCnt,name);
        return 0;
        }
      else if ( (digits[0]==9) && bPointer )
        {
        return new vtkClassArgument(digits,argClass,name);
        }
      else if ( bNativeType && (1==digits[2]) )
        {
        if ( !bReturn ) return new vtkRefArgument(digits,name);
        else return 0;
        }

      return 0;
      }

  private:
    vtkArgumentFactory() {}
  };

vtkArgumentFactory* vtkArgumentFactory::m_instance = 0;

static const int knownMethodNoWrapCnt = 4;
static const char* knownMethodNoWrap[] =
  {
  "New",
  "Delete",
  "new",
  "delete"
  };

static const int knownMethodRenameCnt = 2;
static const char* knownMethodRename[] =
  {
  "Finalize",
  "Dispose"
  };

static const char* notArgName[] =
  {
  "void",
  "short",
  "float",
  "int",
  "double",
  "long",
  "char",
  "array"
  };
static const size_t notArgNameCnt = 8;

class vtkMethod
  {
  public:
    vtkMethod() {}
    virtual ~vtkMethod() {}
    // A method can fail to be wrapped if its arguments won't wrap.
    virtual bool IsWrappable()
      {
      return false;
      }
    // The method returns a string which uniquely identifies its signature
    // so that we don't make two methods with the same signature,
    // which can happen when vtkIdType is the same as int.
    virtual string ProvideHash() { return string(""); }
    // Asks the method to add references to vtk classes to a container.
    virtual void AddReferences(ClassReferenceMap&)
      {
      }
    // Asks the method to put its information into the header file.
    virtual void PrintHeader(vtkHeaderFile*) const
      {
      }
    // Asks the method to put its information in the source file.
    virtual void PrintSource(vtkSourceFile*) const
      {
      }
  };


class vtkWrapMethod : public vtkMethod
  {
  protected:
    FunctionInfo* m_funInfo;
    size_t m_argCnt;
    static const size_t m_argCntMax = 30;
    list<vtkArgument*> m_arg;
    vtkArgument* m_returnValue;
    bool m_bIsWrappable;
    bool m_bInitialized;
    string m_name;

  public:
    vtkWrapMethod(FunctionInfo* funInfo) : m_bIsWrappable(true),
      m_funInfo(funInfo), m_bInitialized(false), m_returnValue(0)
      {
      m_bIsWrappable = true;
      m_funInfo = funInfo;
      if ( 0 != m_funInfo->Name )
        {
        m_name = string(m_funInfo->Name);
        bool bRename = false;
        for (size_t renIdx=0; renIdx<knownMethodRenameCnt; renIdx++)
          {
          if ( 0==strcmp(m_funInfo->Name, knownMethodRename[renIdx]) ) bRename = true;
          }
        if ( bRename ) m_name.append("Wrap");
        }
      else
        {
        m_name = string("");
        }
      }
    virtual ~vtkWrapMethod()
      {
      list<vtkArgument*>::iterator delIter = m_arg.begin();
      while ( delIter != m_arg.end() )
        {
        delete *delIter;
        delIter++;
        }
      if ( 0 != m_returnValue) delete m_returnValue;
      }

    virtual bool IsWrappable()
      {
      if ( !m_bInitialized ) this->Initialize();
      if (!m_bIsWrappable) return false;
      for( size_t knownNameIdx=0; knownNameIdx<knownMethodNoWrapCnt; knownNameIdx++ )
        {
        if ( m_funInfo->Name &&
          (0 == strcmp(m_funInfo->Name, knownMethodNoWrap[knownNameIdx])) ) return false;
        }
      list<vtkArgument*>::iterator refIter = m_arg.begin();
      while ( refIter != m_arg.end() )
        {
        if (!(*refIter)->IsWrappable()) return false;
        refIter++;
        }

      if (!m_returnValue->IsWrappable()) return false;

      return true;
      }

    virtual string ProvideHash()
      {
      if ( !m_bInitialized ) this->Initialize();

      std::string sHash;
      if ( 0 != m_returnValue ) sHash.append(m_returnValue->DeclarationString());
      if ( m_funInfo->Name ) sHash.append(SprintString("_%s", m_funInfo->Name));
      list<vtkArgument*>::const_iterator inIdx = m_arg.begin();
      while ( inIdx != m_arg.end() )
        {
        sHash.append("_");
        sHash.append((*inIdx)->TypeString());
        inIdx++;
        }
      return sHash;
      }

    virtual void AddReferences( ClassReferenceMap& reference )
      {
      if ( !m_bInitialized ) this->Initialize();
      if ( !IsWrappable() ) return;

      m_returnValue->AddReferences(reference);
      list<vtkArgument*>::iterator refIter = m_arg.begin();
      while ( refIter != m_arg.end() )
        {
        (*refIter)->AddReferences(reference);
        refIter++;
        }
      }

  void ReplaceInString(string& line, char c, const string& replace) const
    {
    string::size_type foundIdx = line.find(c);
    while ( string::npos != foundIdx )
      {
      line.replace(foundIdx, 1, replace);
      foundIdx = line.find(c, foundIdx+1);
      }
    }

  list<string>* BreakIntoParagraphs(const char* comment) const
    {
    string docstring(comment);
    list<string::size_type> paraBreaks;

    string::size_type firstReturnIdx = 0;
    string::size_type secondReturnIdx = docstring.find('\n');
    while ( string::npos != secondReturnIdx )
      {
      if ( secondReturnIdx > firstReturnIdx )
        {
        string::size_type txtIdx =
          docstring.find_first_not_of(" \n\t", firstReturnIdx);
        if ( string::npos != txtIdx && txtIdx > secondReturnIdx )
          {
          paraBreaks.push_back(firstReturnIdx);
          }
        }
      firstReturnIdx = secondReturnIdx;
      secondReturnIdx = docstring.find('\n', secondReturnIdx+1);
      }
    string::size_type htmlParaIdx = docstring.find("<p>");
    while ( string::npos != htmlParaIdx )
      {
      paraBreaks.push_back(htmlParaIdx);
      htmlParaIdx = docstring.find("<p>", htmlParaIdx+1);
      }
    paraBreaks.push_back(strlen(comment));
    paraBreaks.sort();

    list<string>* paragraphs = new list<string>();
    list<string::size_type>::const_iterator paraIter = paraBreaks.begin();
    string::size_type lastIdx = 0;
    while (paraIter != paraBreaks.end())
      {
      if ( *paraIter > lastIdx )
        {
        string paragraph(comment, lastIdx, *paraIter-lastIdx);
        string::size_type eReturnIter = paragraph.find('\n');
        while ( eReturnIter != string::npos )
          {
          paragraph.erase(eReturnIter, 1);
          eReturnIter = paragraph.find('\n', eReturnIter);
          }
        string::size_type eParaIter = paragraph.find("<p>");
        while ( eParaIter != string::npos )
          {
          paragraph.erase(eParaIter, 3);
          eParaIter = paragraph.find("<p>", eParaIter);
          }
        string::size_type eWhite = paragraph.find_first_not_of(" \n\t");
        paragraph.erase(0, eWhite);

        // You have to replace ampersands first.
        ReplaceInString(paragraph, '&', "&amp;");
        ReplaceInString(paragraph, '<', "&lt;");
        ReplaceInString(paragraph, '>', "&gt;");
        ReplaceInString(paragraph, '\"', "&quot;");

        if ( paragraph.length() > 0 )
          {
          paragraphs->push_back(paragraph);
          }
        }
      lastIdx = *paraIter;
      paraIter++;
      }
    return paragraphs;
    }

    virtual void PrintHeader( vtkHeaderFile* header ) const
      {
      ostrstream xmlStream;

      xmlStream << "  // " << m_funInfo->Signature << endl;

      if ( 0 != m_funInfo->Comment )
        {
        list<string>* paragraphs = this->BreakIntoParagraphs(m_funInfo->Comment);
        
        xmlStream << "/// <summary>" << endl;

        list<string>::const_iterator paraIter = paragraphs->begin();
        while (paraIter != paragraphs->end() )
          {
          xmlStream << "/// <para>" << *paraIter << "</para>" << endl;
          paraIter++;
          }
        delete paragraphs;
        xmlStream << "/// </summary>" << endl;
        }

      if ( 0 != m_funInfo->IsLegacy )
        {
        xmlStream << "  [Obsolete(\"This method declared deprecated\")]" << endl;
        }
      xmlStream << "  ";
      if ( m_returnValue->IsStatic() ) xmlStream << "static ";
      xmlStream << m_returnValue->DeclarationReturnString(this->ArgumentList());
      xmlStream << ";" << endl;
      xmlStream << '\0';

      header->AddMethod(xmlStream.str());
      }

    virtual void PrintSource(vtkSourceFile* source) const
      {
      string classname = vtkContext::Instance()->GetIdentity();
      string qualDecl = SprintString("%s::%s",
        classname.c_str(),
        this->ArgumentList().c_str());
      string sRet = m_returnValue->DeclarationReturnString(qualDecl);
      sRet.append("\n{\n");

      list<vtkArgument*>::const_iterator inIdx = m_arg.begin();
      while ( inIdx != m_arg.end() )
        {
        sRet.append((*inIdx)->TranslateToNative());
        inIdx++;
        }


      string presentArgList;
      if ( m_returnValue->IsStatic() )
        {
        presentArgList.append(SprintString("::%s::%s(",classname.c_str(),
          m_funInfo->Name));
        }
      else
        {
        if ( classname.compare("vtkObjectBase")==0 )
          {
          presentArgList.append(SprintString(
            "static_cast<::vtkObjectBase*>(m_instance.ToPointer())->%s(",
            m_funInfo->Name));
          }
        else
          {
#ifdef DOTNET_KIT_IS_NAMESPACE
          presentArgList.append(SprintString("vtkCommon::ConvertManagedToNative<::%s>(m_instance)->%s(",
            classname.c_str(),
            m_funInfo->Name));
#else
          presentArgList.append(SprintString("vtk::ConvertManagedToNative<::%s>(m_instance)->%s(",
            classname.c_str(),
            m_funInfo->Name));
#endif
          }
        }
      bool bFirst = true;
      list<vtkArgument*>::const_iterator presIdx = m_arg.begin();
      while ( presIdx != m_arg.end() )
        {
        if (bFirst) bFirst = false;
        else presentArgList.append(", ");
        presentArgList.append((*presIdx)->PresentToNative());
        presIdx++;
        }
      presentArgList.append(")");

      sRet.append("  ");
      sRet.append(m_returnValue->AcceptNativeReturn(presentArgList));

      list<vtkArgument*>::const_iterator outIdx = m_arg.begin();
      while ( outIdx != m_arg.end() )
        {
        sRet.append((*outIdx)->TranslateToManaged());
        outIdx++;
        }

      sRet.append(m_returnValue->TranslateForReturn());

      sRet.append("}\n");
      source->AddMethod(sRet);
      }

  protected:
    string ArgumentList() const
      {
      SprintString argList("%s(", m_name.c_str());

      bool bFirst = true;
      list<vtkArgument*>::const_iterator prIdx = m_arg.begin();
      while ( prIdx != m_arg.end() )
        {
        if (bFirst) bFirst = false;
        else argList.append(", ");

        argList.append((*prIdx)->DeclarationString());
        prIdx++;
        }
      argList.append(")");

      return argList;
      }

    virtual void Initialize()
      {
      const string& classname = vtkContext::Instance()->GetIdentity();
      m_argCnt = m_funInfo->NumberOfArguments;
      for ( size_t argIdx=0; argIdx<m_argCnt; argIdx++ )
        {
        string name = this->PullArgNameFromSignature(argIdx, m_funInfo->ArgTypes[argIdx]);
        int counts[2];
        this->PullCountsFromSig(argIdx, counts);
        if ( counts[0] != m_funInfo->ArgCounts[argIdx] )
        {
          DebugString(SprintString("Counts do not match signature for %s::%s.\n",
          classname.c_str(), m_funInfo->Name));
        }
        vtkArgument* maybeArg = vtkArgumentFactory::GetInstance()->Create(
          counts,
          m_funInfo->ArgClasses[argIdx],
          m_funInfo->ArgTypes[argIdx],
          name,
          (m_funInfo->HaveHint!=0),
          m_funInfo->HintSize);
        if ( maybeArg )
          {
          m_arg.push_back(maybeArg);
          }
        else
          {
          m_bIsWrappable = false;
          char funname[100];
          if ( m_funInfo->Name ) strcpy(funname,m_funInfo->Name);
          else strcpy(funname,"return");

          char nameClass[100];
          if ( m_funInfo->ArgClasses[argIdx] ) strcpy(nameClass,m_funInfo->ArgClasses[argIdx]);
          else strcpy(nameClass,"");

          SprintString sDeny("Deny %s::%s arg: %s %i %i %s\n",
            classname.c_str(), funname,
            name.c_str(), m_funInfo->ArgTypes[argIdx], m_funInfo->ArgCounts[argIdx],
            nameClass); 
          DebugString(sDeny);
          }
        }

      m_returnValue = vtkArgumentFactory::GetInstance()->Create(
        0,
        m_funInfo->ReturnClass,
        m_funInfo->ReturnType,
        "",
        (m_funInfo->HaveHint!=0),
        m_funInfo->HintSize);
      if ( 0 == m_returnValue )
        {
        m_bIsWrappable = false;
        SprintString sDeny("Deny %s::%s retval: %i\n",
          classname.c_str(), m_funInfo->Name, m_funInfo->ReturnType); 
        DebugString(sDeny);
        }
      m_bInitialized = true;
      }
      
    void PullCountsFromSig(size_t argCnt, int* counts)
    {
      string sigArg = PullArgSectionFromSignature(argCnt);
      PullCountsFromArg(sigArg, counts);
    }
      
    void PullCountsFromArg(const string& arg, int* counts)
    {
      counts[0] = 0;
      counts[1] = 0;
      size_t countsIdx = 0;
      size_t i=0;
      while ( i<arg.length()-1 && countsIdx<2 )
      {
        if ( '[' == arg[i] && isdigit(arg[i+1]))
        {
          i++;
          while ( i<arg.length() && isdigit(arg[i]) )
          {
            counts[countsIdx] = 10*counts[countsIdx]+(arg[i]-'0');
            i++;
          }
          countsIdx++;
        }
        i++;
      }
    }
      
    string PullArgSectionFromSignature(size_t argCnt)
    {
      const char* sig = m_funInfo->Signature;
      const char* leftParen = strchr(sig,'(');
      const char* rightParen = strchr(sig,')');
      if ( 0 == leftParen || 0 == rightParen ) return string("");
      
      const char* search = leftParen;
      size_t argIdx = 0;
      while ( search && argIdx < argCnt && search < rightParen)
      {
        search = strchr(search+1, ',');
        argIdx++;
      }
      if ( argIdx != argCnt ) return string("");
      const char* rightComma = strchr(search+1, ',');
      if ( 0 == rightComma ) rightComma = rightParen;
      return string(search+1, 0, rightComma-search-1);
    }

    string PullArgNameFromSignature(size_t nameIdx, int argType)
      {
      string argName;
      // Don't even try if this is a class argument which isn't vtk.
      if ( argType%10 == 8 ) return SprintString("arg%i",(int)nameIdx);

      const char* sig = m_funInfo->Signature;
      size_t foundIdx=0;
      const char* searchIdx=sig;
      bool bFound = false;
      while ( (*searchIdx != ';') && (*searchIdx != '\0') )
        {
        // Find a comma or parenthesis
        if ( (*searchIdx == ',') || (*searchIdx == ')') )
          {
          if ( foundIdx == nameIdx )
            {
            // head back to get the argument
            const char* searchBackIdx = searchIdx-1;
            while ( !bFound && (*searchBackIdx!=',') && (*searchBackIdx!='('))
              {
              while (!isalnum(*searchBackIdx) && searchBackIdx>sig)
                searchBackIdx--;
              size_t argLen = 0;
              while ((isalnum(*searchBackIdx) || ('_' == *searchBackIdx)) && searchBackIdx>sig)
                {
                if ( !isdigit(*searchBackIdx) ) bFound = true;
                searchBackIdx--;
                argLen++;
                }
              if ( bFound ) argName.assign(searchBackIdx+1,argLen);
              }
            }
          foundIdx++;
          }
        searchIdx++;
        }
      if ( !bFound || IsNotArgName(argName) ) argName = SprintString("arg%i",(int)nameIdx);
      return argName;
      }
  private:

    bool IsNotArgName(const string& name)
      {
      if ( name.size() == 0 ) return false;
      if ( !isalpha(name.at(0)) ) return false;
      for (size_t searchIdx=0; searchIdx<notArgNameCnt; searchIdx++)
        {
        if ( name.compare(notArgName[searchIdx])==0 ) return true;
        }
      if ( name.compare(0,3,"vtk")==0 ) return true;
      return false;
      }
  };


class vtkReportMethod : public vtkMethod
  {
  FunctionInfo* m_funInfo;
  public:
    vtkReportMethod(FunctionInfo* funInfo) : m_funInfo(funInfo) {}
    virtual ~vtkReportMethod() {}
    virtual bool IsWrappable()
      {
      return false;
      }
    virtual void AddReferences(ClassReferenceMap&)
      {
      }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      SprintString sReport("// Did not wrap:  %s\n", m_funInfo->Signature);
      header->AddMethod(sReport);
      }
    virtual void PrintSource(vtkSourceFile*) const
      {
      }
  };

class vtkPrintSelfMethod : public vtkMethod
  {
  FunctionInfo* m_funInfo;
  public:
    vtkPrintSelfMethod(FunctionInfo* funInfo) : m_funInfo(funInfo) {}
    virtual ~vtkPrintSelfMethod() {}
    virtual bool IsWrappable() {
      if ( m_funInfo->NumberOfArguments != 2) return false;
      if ( m_funInfo->ArgTypes[0] != 0x108 ) return false;
      if ( m_funInfo->ArgTypes[1] != 0x9 ) return false;
      return true;
    }
    virtual string ProvideHash() {
      string sName = "2_PrintSelf_108_8vtkIndent";
      return sName;
      }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      string sRet = "  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);\n\n"
                    "  virtual System::String^ ToString() override;\n";
      header->AddMethod(sRet);
      }
    virtual void PrintSource(vtkSourceFile* source) const
      {
      const string& classname = vtkContext::Instance()->GetIdentity();
      SprintString convertInstance("vtk::ConvertManagedToNative<::%s>(m_instance)",
        classname.c_str());
      if ( classname.compare("vtkObjectBase")==0)
      {
        convertInstance = "static_cast<::vtkObjectBase*>(m_instance.ToPointer())";
      }
      SprintString sRet(
        "  /// <summary>\n"
        "  /// PrintSelf writes the state of this object to a TextWriter.\n"
        "  /// </summary>\n"
        "  void %s::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)\n"
        "  {\n"
        "    std::ostrstream writeStream;\n"
        "    vtkIndent indent(indentLevel);\n"
        "    %s->PrintSelf(writeStream,indent);\n"
        "    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));\n"
        "    writer->Write(sRetVal);\n"
        "  }\n"
        "\n"
        "  /// <summary>\n"
        "  /// This returns the state of this object as a string. It is equivalent to PrintSelf.\n"
        "  /// </summary>\n"
        "  System::String^ %s::ToString()\n"
        "  {\n"
        "    std::ostrstream writeStream;\n"
        "    vtkIndent indent;\n"
        "    %s->PrintSelf(writeStream,indent);\n"
        "    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));\n"
        "    return sRetVal;\n"
        "  }\n"
        "\n",
        classname.c_str(), convertInstance.c_str(),
        classname.c_str(), convertInstance.c_str());
      source->AddMethod(sRet);
      }
  };


class vtkConstructor : public vtkMethod
  {
  public:
    vtkConstructor() {}
    virtual ~vtkConstructor() {}
    virtual bool IsWrappable() { return true; }
    virtual string ProvideHash() {
      string sHash = vtkContext::Instance()->GetIdentity();
      sHash.append("_IntPtr");
      return sHash;
      }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      SprintString sRet(
        "  /// <summary>\n"
        "  /// This constructor is used to convert native pointers into managed wrapper classes.\n"
        "  /// </summary>\n"
        "  %s(System::IntPtr native, bool bConst);", vtkContext::Instance()->GetIdentity().c_str());
      header->AddMethod(sRet);
      }
    virtual void PrintSource(vtkSourceFile* source) const
      {
      const string& classname = vtkContext::Instance()->GetIdentity();
      const string& basename = vtkContext::Instance()->GetBase();
      SprintString sRet("  %s::%s(System::IntPtr native, bool bConst) : %s(native, bConst) {}\n",
        classname.c_str(), classname.c_str(), basename.c_str());
      source->AddMethod(sRet);
      }
  };

class vtkDummyConstructor : public vtkMethod
  {
  public:
    vtkDummyConstructor() {}
    virtual ~vtkDummyConstructor() {}
    virtual bool IsWrappable() { return true; }
    virtual string ProvideHash() {
      string sHash = vtkContext::Instance()->GetIdentity();
      sHash.append("_bool");
      return sHash;
      }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      SprintString sRet(
        "  /// <summary>\n"
        "  /// This constructor is called only by derived classes. It asks "
        "base classes not allocate a native instance.\n"
        "  /// </summary>\n"
        "  %s(bool donothing);", vtkContext::Instance()->GetIdentity().c_str());
      header->AddMethod(sRet);
      }
    virtual void PrintSource(vtkSourceFile* source) const
      {
      const string& classname = vtkContext::Instance()->GetIdentity();
      const string& basename = vtkContext::Instance()->GetBase();
      SprintString sRet("  %s::%s(bool donothing) : %s(donothing) {}\n",
        classname.c_str(), classname.c_str(), basename.c_str());
      source->AddMethod(sRet);
      }
  };

class vtkVoidConstructor : public vtkMethod
  {
  public:
    vtkVoidConstructor() {}
    virtual ~vtkVoidConstructor() {}
    virtual bool IsWrappable() { return true; }
    virtual string ProvideHash() { return vtkContext::Instance()->GetIdentity(); }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      SprintString sRet(
        "  /// <summary>\n"
        "  /// This constructor creates a wrapper class. It is the one to call."
        "  /// </summary>\n"
      "  %s();", vtkContext::Instance()->GetIdentity().c_str());
      header->AddMethod(sRet);
      }
    virtual void PrintSource(vtkSourceFile* source) const
      {
      const string& classname = vtkContext::Instance()->GetIdentity();
      const string& basename = vtkContext::Instance()->GetBase();
      SprintString sRet("  %s::%s() : %s(false) {\n"
        "  this->SetNativePointer(IntPtr(::%s::New()));\n"
        "}\n",
        classname.c_str(), classname.c_str(), basename.c_str(), classname.c_str(),
        classname.c_str());
      source->AddMethod(sRet);
      }
  };
class vtkDestructor : public vtkMethod
  {
  public:
    vtkDestructor() {}
    virtual ~vtkDestructor() {}
    virtual bool IsWrappable() { return true; }
    virtual string ProvideHash() {
      string sHash = vtkContext::Instance()->GetIdentity();
      sHash.insert(0,"~");
      return sHash;
      }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      SprintString sRet(
        "  /// <summary>\n"
        "  /// This method calls Delete() on the native instance.\n"
        "  /// Use it to release resources in a timely fashion.\n"
        "  /// </summary>\n"
        "  /// <remarks>\n"
        "  /// If this method is not called, then the finalizer will \n"
        "  /// call Delete on this instance.\n"
        "  /// </remarks>\n"
        "  virtual ~%s();", vtkContext::Instance()->GetIdentity().c_str());
      header->AddMethod(sRet);
      }
    virtual void PrintSource(vtkSourceFile* source) const
      {
      const string& classname = vtkContext::Instance()->GetIdentity();
      SprintString sRet("  %s::~%s() { }\n",
        classname.c_str(), classname.c_str());
      source->AddMethod(sRet);
      }
  };
  
  
class vtkObjectBaseMethods : public vtkMethod
  {
  public:
    vtkObjectBaseMethods() {}
    virtual ~vtkObjectBaseMethods() {}
    virtual bool IsWrappable() { return true; }
    virtual string ProvideHash() { return string("vtkObjectBaseMethods"); }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      string sRet = string(
        "/// <summary>\n"
        "/// Returns a pointer to the instance contained by this wrapper.\n"
        "/// Will be null if the instance is const.\n"
        "/// </summary>\n"
        "virtual System::IntPtr GetNativePointer();\n"
        "/// <summary>\n"
        "/// Returns a pointer to the instance contained by this wrapper.\n"
        "/// </summary>\n"
        "virtual System::IntPtr GetNativeConstPointer();\n"
        "vtkObjectBase();\n"
        "vtkObjectBase(bool donothing);\n"
        "vtkObjectBase(System::IntPtr ptr, bool bConst);\n"
        "/// <summary>\n"
        "/// This method allows a derived class to set the instance\n"
        "/// contained by this wrapper.\n"
        "/// </summary>\n"
        "void SetNativePointer(IntPtr ptr);\n"
        "~vtkObjectBase();\n"
        "!vtkObjectBase();\n"
        "private:\n"
        "void SetNativePointer(IntPtr ptr, bool bConst, bool bOwn);\n");
      header->AddMethod(sRet);
      }
    virtual void PrintSource(vtkSourceFile* source) const
      {
      string sRet = string(
        "System::IntPtr vtkObjectBase::GetNativePointer() {\n"
        "	 if (m_const) return IntPtr::Zero;\n"
        "  return m_instance;\n"
        "}\n"
        "System::IntPtr vtkObjectBase::GetNativeConstPointer() {\n"
        "	 return m_instance;\n"
        "}\n\n"
        "vtkObjectBase::vtkObjectBase() {}\n\n"
        "vtkObjectBase::vtkObjectBase(bool)\n"
        "{\n"
        "}\n\n"
        "vtkObjectBase::vtkObjectBase(System::IntPtr ptr, bool bConst)\n"
        "{\n"
        "  this->SetNativePointer(ptr, bConst, false);\n"
        "}\n\n"
        "vtkObjectBase::~vtkObjectBase() {\n"
        "  if ( (IntPtr::Zero != m_instance) && !m_const)\n"
        "  {\n"
        "    static_cast<::vtkObjectBase*>(m_instance.ToPointer())->Delete();\n"
        "    m_instance = IntPtr::Zero;\n"
        "  }\n"
        "}\n"
        "vtkObjectBase::!vtkObjectBase() {\n"
        "  if ( (IntPtr::Zero != m_instance) && !m_const)\n"
        "  {\n"
        "    static_cast<::vtkObjectBase*>(m_instance.ToPointer())->Delete();\n"
        "    m_instance = IntPtr::Zero;\n"
        "  }\n"
        "}\n\n"
        "void vtkObjectBase::SetNativePointer(IntPtr ptr)\n"
        "{\n"
        "  this->SetNativePointer(ptr, false, true);\n"
        "}\n\n"
        "void vtkObjectBase::SetNativePointer(IntPtr ptr, bool bConst, bool bOwn)\n"
        "{\n"
        "  String^ name = this->GetType()->Name;\n"
        "  if ( IntPtr::Zero == ptr ) {\n"
        "    throw gcnew System::ApplicationException(String::Format(\n"
        "      \"Could not create class {0} from null native pointer.\", name));\n"
        "  }\n"
        "  m_instance = ptr;\n"
        "  m_const = bConst;\n"
        "  if ( !bConst && !bOwn )\n"
        "  {\n"
        "    // cannot register const classes.  They could disappear under us.\n"
        "    ::vtkObjectBase* ninstance = static_cast<::vtkObjectBase*>(m_instance.ToPointer());\n"
        "    ninstance->Register(static_cast<::vtkObjectBase*>(nullptr));\n"
        "  }\n"
        "}\n");
      source->AddMethod(sRet);
      }
  };

class vtkObjectMethods : public vtkMethod
  {
  public:
    vtkObjectMethods() {}
    virtual ~vtkObjectMethods() {}
    virtual bool IsWrappable() { return true; }
    virtual string ProvideHash() { return string("vtkObjectMethods"); }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      header->AddManagedInclude("vtkDotNetCommand.h");
      string sRet = string(
        "/// <summary>\n"
        "/// Add an observer to this class.\n"
        "/// </summary>\n"
        "/// <param name=\"eid\">The event id from the VTK enum EventId</param>\n"
        "/// <remarks>\n"
        "/// The wrapper creates a vtkDotNetCommand to save a pointer to the vtkDotNetCallback.\n"
        "/// The vtkDotNetCommand receives events and forwards them to the callback.\n"
        "/// </remarks>\n"
        "  unsigned long AddObserver(unsigned long eid,	vtkDotNetCallback^ delegateCallback);\n");
      header->AddMethod(sRet);
      string sClient = string(
        "/// <summary>\n"
        "/// Add an observer to this class.\n"
        "/// </summary>\n"
        "/// <param name=\"eid\">The event id from the VTK enum EventId</param>\n"
        "/// <param name=\"data\">When registering an observer, the data member can store\n"
        "/// any managed object, and it will be passed to the vtkDotNetCallback\n"
        "/// when it is called.</param>\n"
        "/// <remarks>\n"
        "/// The wrapper creates a vtkDotNetCommand to save a pointer to the vtkDotNetCallback.\n"
        "/// The vtkDotNetCommand receives events and forwards them to the callback.\n"
        "/// </remarks>\n"
        "  unsigned long AddObserver(unsigned long eid,	vtkDotNetCallback^ delegateCallback, Object^ data);\n");
      header->AddMethod(sClient);
      }
    virtual void PrintSource(vtkSourceFile* source) const
      {
      string sRet = string(
        "unsigned long vtkObject::AddObserver(unsigned long eid, vtkDotNetCallback^ delegateCallback)\n"
        "{\n"
        "  vtkDotNetCommand* cmd = vtkDotNetCommand::New();\n"
        "  cmd->SetCallback(delegateCallback);\n"
        "  ::vtkObject* obj = ::vtkObject::SafeDownCast(static_cast<::vtkObjectBase*>(m_instance.ToPointer()));\n"
        "  unsigned long observerId = obj->AddObserver(eid, cmd);\n"
        "  cmd->Delete();\n"
        "  return observerId;\n"
        "}\n");
      source->AddMethod(sRet);
      string sClient = string(
        "unsigned long vtkObject::AddObserver(unsigned long eid, vtkDotNetCallback^ delegateCallback,\n"
        "                                     Object^ data)\n"
        "{\n"
        "  vtkDotNetCommand* cmd = vtkDotNetCommand::New();\n"
        "  cmd->SetCallback(delegateCallback);\n"
        "  cmd->SetClientData(data);\n"
        "  ::vtkObject* obj = ::vtkObject::SafeDownCast(static_cast<::vtkObjectBase*>(m_instance.ToPointer()));\n"
        "  unsigned long observerId = obj->AddObserver(eid, cmd);\n"
        "  cmd->Delete();\n"
        "  return observerId;\n"
        "}\n");
      source->AddMethod(sClient);
      }
  };

class vtkWindowHandles : public vtkMethod
  {
  public:
    vtkWindowHandles() {}
    virtual ~vtkWindowHandles() {}
    virtual bool IsWrappable() { return true; }
    virtual string ProvideHash() {
      string sHash = vtkContext::Instance()->GetIdentity();
      sHash.insert(0,"SetWindowId");
      return sHash;
      }
    virtual void PrintHeader(vtkHeaderFile* header) const
      {
      SprintString sRet(
        "  /// <summary>\n"
        "  /// Sets the HWND for the render window.\n"
        "  /// </summary>\n"
        "  void SetWindowId(System::IntPtr hWindow);\n\n"
        "  /// <summary>\n"
        "  /// Sets the HWND for the parent of the render window.\n"
        "  /// </summary>\n"
        "  void SetParentId(System::IntPtr hParent);\n");
      header->AddMethod(sRet);
      }
    virtual void PrintSource(vtkSourceFile* source) const
      {
      SprintString sRet(
        "void vtkWin32OpenGLRenderWindow::SetWindowId(System::IntPtr hWindow) {\n"
        "  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetWindowId(\n"
        "    hWindow.ToPointer());\n"
        "}\n\n"
        "void vtkWin32OpenGLRenderWindow::SetParentId(System::IntPtr hParent) {\n"
        "  vtk::ConvertManagedToNative<::vtkWin32OpenGLRenderWindow>(m_instance)->SetParentId(\n"
        "    hParent.ToPointer());\n"
        "}\n");
      source->AddMethod(sRet);
      }
  };

class vtkMethodFactory
  {
  private:
    static vtkMethodFactory* m_instance;
  public:
    static vtkMethodFactory* GetInstance()
      {
      if ( 0 == m_instance )
        {
        m_instance = new vtkMethodFactory();
        }
      return m_instance;
      }

    vtkMethod* GetMethod(FunctionInfo* funInfo)
      {
      if ( 0 != funInfo->Name )
        {
        if (strcmp(funInfo->Name, "PrintSelf") == 0 )
          {
          return new vtkPrintSelfMethod(funInfo);
          }
        }
      if ( this->WillWrap(funInfo) ) return new vtkWrapMethod(funInfo);
      return new vtkReportMethod(funInfo);
      }
  protected:
    vtkMethodFactory() {}
  private:
    bool WillWrap(FunctionInfo* funInfo)
      {
      if ( funInfo->IsPublic==0 ) return false;
      if ( 0 == funInfo->Name ) return false;
      if ( vtkContext::Instance()->GetIdentity().compare(funInfo->Name)==0 ) return false;
      for (size_t checkIdx=0; checkIdx<knownMethodNoWrapCnt; checkIdx++)
        {
        if ( strcmp(knownMethodNoWrap[checkIdx],funInfo->Name) == 0 ) return false;
        }
      return true;
      }
  };

vtkMethodFactory* vtkMethodFactory::m_instance = 0;


typedef list<vtkMethod*> MethodList;

class vtkClass
  {
  FileInfo* m_fileInfo;
  vtkClassReference m_className;
  vtkClassReference m_baseClass;
  size_t m_methodCnt;
  MethodList m_method;
  ClassReferenceMap m_reference;
  map<string,int> m_uniqueMethod;

  public:
    vtkClass(FileInfo* fileInfo) : m_fileInfo(fileInfo), m_className(fileInfo->ClassName)
      {
      vtkContext::Instance()->SetIdentity(fileInfo->ClassName);
      if ( m_fileInfo->NumberOfSuperClasses > 0 )
        {
        m_baseClass = vtkClassReference(m_fileInfo->SuperClasses[0]);
        vtkContext::Instance()->SetBase(m_fileInfo->SuperClasses[0]);
        }

      m_methodCnt = m_fileInfo->NumberOfFunctions;
      vtkMethodFactory* factory = vtkMethodFactory::GetInstance();
      for ( size_t methodIdx=0; methodIdx<m_methodCnt; methodIdx++ )
        {
        FunctionInfo* trialMethodInfo = &m_fileInfo->Functions[methodIdx];
        vtkMethod* aMethod = factory->GetMethod(trialMethodInfo);

        const string& methodHash = aMethod->ProvideHash();
        if ( m_uniqueMethod.find(methodHash) == m_uniqueMethod.end() )
          {
          if ( aMethod->IsWrappable() )
            {
            m_uniqueMethod.insert(map<string,int>::value_type(methodHash,1));
            m_method.push_back(aMethod);
            }
          else
            {
            delete aMethod;
            m_method.push_back(new vtkReportMethod(trialMethodInfo));
            }
          }
        else
          {
          delete aMethod;
          m_method.push_back(new vtkReportMethod(trialMethodInfo));
          }

        }
      if ( m_className.Matches("vtkObjectBase") )
        {
        m_method.push_back(new vtkObjectBaseMethods());
        }
      else
        {
        if ( m_className.Matches("vtkObject") )
          {
          m_method.push_back(new vtkObjectMethods());
          }
        else if ( m_className.Matches("vtkWin32OpenGLRenderWindow") )
          {
          m_method.push_back(new vtkWindowHandles());
          }
        m_method.push_back(new vtkConstructor());
        m_method.push_back(new vtkDummyConstructor());
        m_method.push_back(new vtkVoidConstructor());
        m_method.push_back(new vtkDestructor());
        }
      }

    ~vtkClass()
      {
      MethodList::iterator delIter = m_method.begin();
      while ( delIter != m_method.end() )
        {
        delete *delIter;
        delIter++;
        }
      }

    bool IsWrappable()
      {
      if ( m_fileInfo->NumberOfSuperClasses > 1 ) return false;
      if ( (m_fileInfo->NumberOfSuperClasses == 0 ) &&
        !strcmp(m_fileInfo->ClassName,"vtkObjectBase") ) return false;

      return true;
      }

    void WriteHeader(vtkHeaderFile* header)
      {
      DetermineReferences();

      if ( m_className.Matches("vtkObjectBase") )
        {
        header->SetClass(m_className.ManagedString(), "System::Object");
        }
      else
        {
        header->SetClass(m_className.ManagedString(), m_baseClass.ManagedString());
        }

      ClassReferenceMap::iterator refIter = m_reference.begin();
      while ( refIter != m_reference.end() )
        {
        refIter->first.AddReferenceToHeader(header);
        refIter++;
        }

      if( m_className.Matches("vtkObjectBase") )
        {
        header->AddProtected("  IntPtr m_instance;");
        header->AddProtected("  bool m_const;");
        }
      else
        {
        m_baseClass.AddReferenceToHeader(header);      
        }

      MethodList::const_iterator pmIter = m_method.begin();
      while ( pmIter != m_method.end() )
        {
        (*pmIter)->PrintHeader(header);
        pmIter++;
        }
      }

    void WriteSource(vtkSourceFile* source)
      {
      // already know references.
      source->SetClass(m_className.ManagedString(), m_baseClass.ManagedString());

      source->AddNativeInclude("strstream");
      source->AddManagedInclude("vtkDotNetConvert.h");
      m_className.AddReferenceToSource(source);

      ClassReferenceMap::iterator refIter = m_reference.begin();
      while ( refIter != m_reference.end() )
        {
        refIter->first.AddReferenceToSource(source);
        refIter++;
        }

      MethodList::const_iterator pmIter = m_method.begin();
      while ( pmIter != m_method.end() )
        {
        (*pmIter)->PrintSource(source);
        pmIter++;
        }
      }

  private:
    void DetermineReferences()
      {
      MethodList::iterator arIter = m_method.begin();
      while ( arIter != m_method.end() )
        {
        (*arIter)->AddReferences(m_reference);
        arIter++;
        }

      ClassReferenceMap::iterator myRef = m_reference.find(m_className);
      if ( myRef != m_reference.end() ) m_reference.erase(myRef);
      }
  };




extern "C" void vtkParseOutput(FILE *fp,FileInfo *fi)
  {
  //const char* basename = "c:/dev/out/vtkcvs/build/Common/vtkObjectBaseWrap.cxx";
  vtkContext::Instance()->Initialize(fi->ClassName, fi->OutputFileName);

  vtkClass* aClass = new vtkClass(fi);

  vtkHeaderFile* header = new vtkHeaderFile(fi->OutputFileName);
  aClass->WriteHeader(header);
  header->WriteFile();
  delete header;

  vtkSourceFile* source = new vtkSourceFile(fp);
  aClass->WriteSource(source);
  source->WriteFile();
  delete source;

  delete aClass;
  }
