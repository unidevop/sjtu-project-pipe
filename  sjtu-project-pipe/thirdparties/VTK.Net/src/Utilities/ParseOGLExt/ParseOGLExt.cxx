/*=========================================================================

  Program:   Visualization Toolkit
  Module:    $RCSfile: ParseOGLExt.cxx,v $

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
/* A program that will read in OpenGL extension header files and output VTK
 * code that handles extensions in a more platform-independent manner.
 */


/*
 * Copyright 2003 Sandia Corporation.
 * Under the terms of Contract DE-AC04-94AL85000, there is a non-exclusive
 * license for use of this work by or on behalf of the
 * U.S. Government. Redistribution and use in source and binary forms, with
 * or without modification, are permitted provided that this Notice and any
 * statement of authorship are reproduced on all copies.
 */

#include "vtkSystemIncludes.h"

#include "Tokenizer.h"

#include <vtkstd/list>
#include <vtkstd/set>
#include <vtkstd/map>
#include <vtkstd/string>

#include <string.h>
#include <ctype.h>

// #define this if you want debug output as the parser does its work

// #define DEBUG_PARSE

static vtkstd::set< vtkstd::pair< vtkstd::string, vtkstd::string > > ConstantsAlreadyWritten;

static vtkstd::string ToUpper(vtkstd::string s)
{
  vtkstd::string u;

  for (vtkstd::string::size_type i = 0; i < s.length(); i++)
    {
    u.append(1, (char)toupper(s[i]));
    }

  return u;
}

class Extension {
public:
  vtkstd::string name;
  enum {GL, WGL, GLX} type;

  Extension() {}
  Extension(char *line);
  static bool isExtension(char *line);

  static inline void WriteSupportWrapperBegin(ostream &out, int itype) {
    switch (itype)
      {
      case WGL:
        out << "#ifdef WIN32" << endl;
        break;
      case GLX:
       out << "#ifdef VTK_USE_X" << endl;
        break;
      case GL:
        break;
      }
  }
  inline void WriteSupportWrapperBegin(ostream &out) const {
    WriteSupportWrapperBegin(out, this->type);
  }
  static inline void WriteSupportWrapperEnd(ostream &out, int itype) {
    if ((itype == WGL) || (itype == GLX))
      {
      out << "#endif" << endl;
      }
  }
  inline void WriteSupportWrapperEnd(ostream &out) const {
    WriteSupportWrapperEnd(out, this->type);
  }

  static inline const char *TypeToCapString(int t) {
    switch (t)
      {
      case GL: return "GL";
      case GLX: return "GLX";
      case WGL: return "WGL";
      }
    return NULL;
  }
  static inline const char *TypeToString(int t) {
    switch (t)
      {
      case GL: return "gl";
      case GLX: return "glX";
      case WGL: return "wgl";
      }
    return NULL;
  }

  bool operator<(const Extension &obj) const { return this->name < obj.name; }
};

Extension::Extension(char *line)
{
  Tokenizer t(line);

  t.GetNextToken();

  this->name = t.GetNextToken();

  Tokenizer nameTokens(this->name, "_");
  vtkstd::string header = nameTokens.GetNextToken();
  if (header == "WGL")
    {
    this->type = WGL;
    }
  else if (header == "GLX")
    {
    this->type = GLX;
    }
  else
    {
    this->type = GL;
    }
}

bool Extension::isExtension(char *line)
{
  Tokenizer t(line);

  if (t.GetNextToken() != "#ifndef") return false;

  Tokenizer nameTokens(t.GetNextToken(), "_");
  vtkstd::string header = nameTokens.GetNextToken();
  if ((header == "GL") || (header == "WGL") || (header == "GLX"))
    {
    return true;
    }

  return false;
} 

static Extension currentExtension;

class Constant {
public:
  vtkstd::string name;
  vtkstd::string value;

  Constant(char *line);
  static bool isConstant(char *line);

  bool operator<(const Constant &obj) const { return this->name < obj.name; }
};

static vtkstd::map<vtkstd::string, vtkstd::string> EncounteredConstants;

Constant::Constant(char *line)
{
  // Assumes isConstant is true.
  Tokenizer t(line);

  t.GetNextToken();

  this->name = t.GetNextToken();
  vtkstd::string fullname = this->name;
  if (currentExtension.type == Extension::GL)
    {
    // Skip the "GL_"
    this->name = this->name.substr(3);
    }
  else
    {
    // Skip the "GLX_" or "WGL_"
    this->name = this->name.substr(4);
    }
  // Make sure name does not start with a numeric.
  if ((this->name[0] >= '0') && (this->name[0] <= '9'))
    {
    this->name = '_' + this->name;
    }

  this->value = t.GetNextToken();
  // Sometimes, one constant points to another.  Handle this properly.
  vtkstd::map<vtkstd::string, vtkstd::string>::iterator found
    = EncounteredConstants.find(value);
  if (found != EncounteredConstants.end())
    {
    this->value = found->second;
    }

  // Now record this as found.
  EncounteredConstants[fullname] = this->value;
}

bool Constant::isConstant(char *line)
{
  Tokenizer t(line);

  if (t.GetNextToken() != "#define")
    {
    return false;
    }

  vtkstd::string n = t.GetNextToken();
  if (   (   (currentExtension.type == Extension::GL)
          && (strncmp(n.c_str(), "GL_", 3) == 0) )
      || (   (currentExtension.type == Extension::WGL)
          && (strncmp(n.c_str(), "WGL_", 4) == 0) )
      || (   (currentExtension.type == Extension::GLX)
          && (strncmp(n.c_str(), "GLX_", 4) == 0) ) )
    {
    return true;
    }
  return false;
}

class Typedef {
public:
  vtkstd::string definition;

  Typedef(char *line);
  static bool isTypedef(char *line);

  bool operator<(const Typedef &obj) const { return this->definition < obj.definition; }
};

Typedef::Typedef(char *line)
{
  // Assumes isTypedef is true.
  this->definition = line;
}

bool Typedef::isTypedef(char *line)
{
  Tokenizer t(line);

  // Hack for some SGI stuff that declares a multiline struct.
  if (   (t.GetNextToken() == "typedef")
      && ((t.GetNextToken() != "struct") || (t.GetNextToken() != "{")) )
    {
    return true;
    }

  // Hack for how some WIN32 things are declared.
  if (strncmp(line, "DECLARE_HANDLE(", 15) == 0)
    {
    return true;
    }

  return false;
}

class Function {
public:
  vtkstd::string returnType;
  vtkstd::string entry;
  vtkstd::string name;
  vtkstd::string arguments;
  int extensionType;

  Function(char *line);
  static bool isFunction(char *line);
  const char *GetProcType();

  bool operator<(const Function &obj) const { return this->name < obj.name; }
};

Function::Function(char *line) : extensionType(currentExtension.type)
{
  // Assumes isFunction returns true.

  Tokenizer t(line, " \n\t(");

  t.GetNextToken();
  vtkstd::string token = t.GetNextToken();
  this->returnType = "";
  while ((token == "const") || (token == "unsigned"))
    {
    this->returnType += token + " ";
    token = t.GetNextToken();
    }
  this->returnType += token;

  token = t.GetNextToken();
  if (token == "*")
    {
    this->returnType += " *";
    token = t.GetNextToken();
    }
  else if (token[0] == '*')
    {
    this->returnType += " *";
    token = token.substr(1);
    }

#ifdef DEBUG_PARSE
  cerr << "Function return type: " << this->returnType << endl;
#endif

  if (currentExtension.type == Extension::GL)
    {
    this->entry = "APIENTRY";
    token = t.GetNextToken();
    }
  else if (currentExtension.type == Extension::WGL)
    {
    this->entry = "WINAPI";
    token = t.GetNextToken();
    }
  else
    {
    this->entry = "";
    }

#ifdef DEBUG_PARSE
  cerr << "Function entry: " << this->entry << endl;
#endif

  if (currentExtension.type == Extension::GL)
    {
    // Strip off "gl"
    this->name = token.substr(2);
    }
  else
    {
    // Strip off "glX" or "wgl"
    this->name = token.substr(3);
    }

#ifdef DEBUG_PARSE
  cerr << "Function name: " << this->name << endl;
#endif

  this->arguments = t.GetRemainingString();

#ifdef DEBUG_PARSE  
  cerr << "Function arguments: " << this->arguments << endl;
#endif
}

bool Function::isFunction(char *line)
{
  Tokenizer t(line);

  vtkstd::string modifier = t.GetNextToken();
  vtkstd::string sreturnType = t.GetNextToken();
  if (sreturnType == "const")
    {
    // We don't really need the return type, just to skip over const.
    sreturnType += " ";
    sreturnType += t.GetNextToken();
    }

  vtkstd::string sentry = t.GetNextToken();
  if (sentry == "*")
    {
    sreturnType += " *";
    sentry = t.GetNextToken();
    }
  else if (sentry.size() && sentry[0] == '*')
    {
    sreturnType += " *";
    sentry = sentry.substr(1);
    }

  return (   (   (currentExtension.type == Extension::GL)
              && (modifier == "GLAPI") && (sentry == "APIENTRY") )
          || (   (currentExtension.type == Extension::GL)
              && (modifier == "extern") && (sentry == "APIENTRY") )
          || (   (currentExtension.type == Extension::WGL)
              && (modifier == "extern") && (sentry == "WINAPI") )
          || (   (currentExtension.type == Extension::GLX)
              && (modifier == "extern") ) );
}

const char *Function::GetProcType()
{
  static vtkstd::string proctype;

  proctype = "PFN";
  proctype += Extension::TypeToCapString(this->extensionType);
  proctype += ToUpper(this->name);
  proctype += "PROC";

  return proctype.c_str();
}

static vtkstd::list<Extension> extensions;
static vtkstd::set<Extension> extensionset;
static vtkstd::map<Extension, vtkstd::list<Constant> > consts;
static vtkstd::map<Extension, vtkstd::list<Typedef> > types;
static vtkstd::map<Extension, vtkstd::list<Function> > functs;

static void ParseLine(char *line)
{
  static bool inExtension = false;
  static int ifLevel = 0;

  Tokenizer tokens(line);
  vtkstd::string firstToken = tokens.GetNextToken();

  if (Extension::isExtension(line))
    {
    currentExtension = Extension(line);
#ifdef DEBUG_PARSE
    cerr << "Recognized extension: " << line << endl;
#endif

    // There are some exceptions to the extensions we support.  This is
    // because someone has placed some funky nonstandard stuff in the
    // header files.
    if (   (currentExtension.name == "GLX_SGIX_video_source")
        || (currentExtension.name == "GLX_SGIX_dmbuffer")
        || (currentExtension.name == "GLX_SGIX_hyperpipe") )
      {
      inExtension = false;
      return;
      }

  // Only add extension to list if it is not already in it.
    if (extensionset.find(currentExtension) == extensionset.end())
      {
      if (currentExtension.name == "GLX_ARB_get_proc_address")
        {
        // Special case where GLX_VERSION_1_4 depends on a typedef in
        // GLX_ARB_get_proc_address, so we have to move the latter up.
        extensions.push_front(currentExtension);
        }
      else
        {
        extensions.push_back(currentExtension);
        }
      extensionset.insert(currentExtension);
      }
    inExtension = true;
    ifLevel = 0;
    }
 else if (inExtension)
    {
    if (strncmp(firstToken.c_str(), "#if", 3) == 0)
      {
      ifLevel++;
      }
    else if (firstToken == "#endif")
      {
      if (ifLevel == 0)
        {
        inExtension = false;
        }
      else
        {
        ifLevel--;
        }
      }
    else if (   Constant::isConstant(line)
             && (strncmp(currentExtension.name.c_str(), (line+8),
                         currentExtension.name.length()) != 0) )
      {
#ifdef DEBUG_PARSE
      cerr << "Recognized constant: " << line << endl;
#endif
      consts[currentExtension].push_back(line);
      }
    else if (Function::isFunction(line))
      {
#ifdef DEBUG_PARSE
      cerr << "Recognized function: " << line << endl;
#endif
      functs[currentExtension].push_back(line);
      }
    else if (Typedef::isTypedef(line))
      {
#ifdef DEBUG_PARSE
      cerr << "Recognized typedef: " << line << endl;
#endif
      types[currentExtension].push_back(line);
      }
    }
  else
    {
#ifdef DEBUG_PARSE
    cerr << "Unrecognized line: " << line << endl;
#endif
    }
}

static void WriteHeader(ostream &file, const char *generator,
                        char **srcs, int num_srcs)
{
  file << "// -*- c++ -*-" << endl << endl;
  file << "//DO NOT EDIT!" << endl;
  file << "//This file was created with " << generator << endl
       << "//from";
  for (int i = 0; i < num_srcs; i++)
    {
    file << " " << srcs[i];
    }
  file << endl << endl;
  file << "/*" << endl
       << " * Copyright 2003 Sandia Corporation." << endl
       << " * Under the terms of Contract DE-AC04-94AL85000, there is a non-exclusive" << endl
       << " * license for use of this work by or on behalf of the" << endl
       << " * U.S. Government. Redistribution and use in source and binary forms, with" << endl
       << " * or without modification, are permitted provided that this Notice and any" << endl
       << " * statement of authorship are reproduced on all copies." << endl
       << " */" << endl << endl;
}

static void WriteClassDeclarationGuts(ostream &hfile, int type)
{
  for (vtkstd::list<Extension>::iterator iextension = extensions.begin();
       iextension != extensions.end(); iextension++)
    {
    if (iextension->type != type) continue;
    hfile << "  //Definitions for " << iextension->name.c_str() << endl;
    vtkstd::map<Extension, vtkstd::list<Constant> >::iterator cExts
      = consts.find(*iextension);
    if (cExts != consts.end())
      {
      hfile << "  enum " << cExts->first.name.c_str() << "_consts {" << endl;
      bool wroteFirst = false;

      for (vtkstd::list<Constant>::iterator iconst = cExts->second.begin();
           iconst != cExts->second.end(); iconst++)
        {

        // New versions of the NVIDIA OpenGL headers for Linux can
        // #define the same constant with the same value in multiple
        // sections.  This utility will happily parse those and write
        // out duplicate enums in different enum classes, which
        // confuses the C++ preprocessor terribly.  Don't write out a
        // definition for an enum with a name/value pair that's
        // already been used.
        if ( ConstantsAlreadyWritten.find( vtkstd::make_pair( iconst->name, 
                                                              iconst->value ) )
             == ConstantsAlreadyWritten.end() )
          {
          if (wroteFirst)
            {
            hfile << "," << endl;
            }
          else
            {
            wroteFirst = true;
            }
          hfile << "    " << iconst->name.c_str() << " = "
                << iconst->value.c_str();

          ConstantsAlreadyWritten.insert( vtkstd::make_pair( iconst->name, 
                                                             iconst->value ) );
          
          }
        else
          {
          hfile << "/* skipping duplicate " << iconst->name.c_str()
                << " = " << iconst->value.c_str() << " */" << endl;
          }
        }
      hfile << endl << "  };" << endl;
      }
    vtkstd::map<Extension, vtkstd::list<Typedef> >::iterator tExts
      = types.find(*iextension);
    if (tExts != types.end())
      {
      for (vtkstd::list<Typedef>::iterator itype = tExts->second.begin();
           itype != tExts->second.end(); itype++)
        {
        hfile << "  " << itype->definition.c_str() << endl;
        }
      }
    vtkstd::map<Extension, vtkstd::list<Function> >::iterator fExts
      = functs.find(*iextension);
    if (fExts != functs.end())
      {
      for (vtkstd::list<Function>::iterator ifunc = fExts->second.begin();
           ifunc != fExts->second.end(); ifunc++)
        {
        hfile << "  extern VTK_RENDERING_EXPORT " << ifunc->GetProcType()
              << " " << ifunc->name.c_str() << ";" << endl;
        }
      }
    }
}

static void WriteFunctionPointerDeclarations(ostream &cxxfile, int type)
{
  Extension::WriteSupportWrapperBegin(cxxfile, type);
  for (vtkstd::map<Extension, vtkstd::list<Function> >::iterator fExts
         = functs.begin();
       fExts != functs.end(); fExts++)
    {
    if (fExts->first.type != type) continue;
    cxxfile << "//Functions for " << fExts->first.name.c_str() << endl;
    for (vtkstd::list<Function>::iterator ifunc = fExts->second.begin();
         ifunc != fExts->second.end(); ifunc++)
      {
      cxxfile << "vtk" << Extension::TypeToString(type) << "::"
              << ifunc->GetProcType()
              << " vtk" << Extension::TypeToString(type) << "::"
              << ifunc->name.c_str() << " = NULL;" << endl;
      }
    }
  Extension::WriteSupportWrapperEnd(cxxfile, type);
  cxxfile << endl;
}

static void WriteCode(ostream &hfile, ostream &cxxfile)
{
  // Write data for header file ---------------------------------
  hfile << "#ifndef _vtkgl_h" << endl
        << "#define _vtkgl_h" << endl << endl;
  hfile << "#include \"vtkToolkits.h\"" << endl;
  hfile << "#include \"vtkSystemIncludes.h\"" << endl;
  hfile << "#include \"vtkWindows.h\"" << endl;
  hfile << "#include \"vtkOpenGL.h\"" << endl;
  hfile << "#include <stddef.h>" << endl << endl;
  hfile << "//#ifdef __APPLE__" << endl
        << "//#include <OpenGL/glu.h>" << endl
        << "//#else" << endl
        << "//#include <GL/glu.h>" << endl
        << "//#endif" << endl << endl;
  hfile << "#ifdef VTK_USE_X" << endl
        << "#include <GL/glx.h>" << endl
        << "#endif" << endl << endl;
  hfile << "class vtkOpenGLExtensionManager;" << endl << endl;
  hfile << "#ifndef APIENTRY" << endl
        << "#define APIENTRY" << endl
        << "#define VTKGL_APIENTRY_DEFINED" << endl
        << "#endif" << endl << endl;
  hfile << "#ifndef APIENTRYP" << endl
        << "#define APIENTRYP APIENTRY *" << endl
        << "#define VTKGL_APIENTRYP_DEFINED" << endl
        << "#endif" << endl << endl;

  hfile << "/* Undefine all constants to avoid name conflicts.  They should be defined  */" << endl
        << "/* with GL_, GLX_, or WGL_ preprended to them anyway, but sometimes you run */" << endl
        << "/* into a header file that gets it wrong.                                   */" << endl;
  for (vtkstd::map<Extension, vtkstd::list<Constant> >::iterator constlist
         = consts.begin();
       constlist != consts.end(); constlist++)
    {
    for (vtkstd::list<Constant>::iterator c = (*constlist).second.begin();
         c != (*constlist).second.end(); c++)
      {
      hfile << "#ifdef " << (*c).name.c_str() << endl;
      hfile << "#undef " << (*c).name.c_str() << endl;
      hfile << "#endif" << endl;
      }
    }

  Extension::WriteSupportWrapperBegin(hfile, Extension::GL);
  hfile << endl << "namespace vtkgl {" << endl;
  ConstantsAlreadyWritten.clear();
  WriteClassDeclarationGuts(hfile, Extension::GL);
  hfile << endl << "  // Method to load functions for a particular extension.";
  hfile << endl << "  int LoadExtension(const char *name, "
        << "vtkOpenGLExtensionManager *manager);" << endl;
  hfile << endl << "  // Strings containing special version extensions.";
  hfile << endl << "  const char *GLVersionExtensionsString();" << endl;
  hfile << endl << "  const char *GLXVersionExtensionsString();" << endl;
  hfile << "}" << endl;
  Extension::WriteSupportWrapperEnd(hfile, Extension::GL);

  Extension::WriteSupportWrapperBegin(hfile, Extension::GLX);
  hfile << "namespace vtkglX {" << endl;
  // glxext.h is not written very well.  Add some typedefs that may not
  // be defined.
  hfile << "  //Miscellaneous definitions." << endl;
  hfile << "  typedef XID GLXContextID;" << endl;
  hfile << "  typedef XID GLXPbuffer;" << endl;
  hfile << "  typedef XID GLXWindow;" << endl;
  hfile << "  typedef XID GLXFBConfigID;" << endl;
  hfile << "  typedef struct __GLXFBConfigRec *GLXFBConfig;" << endl;
  hfile << "  typedef int int32_t;" << endl;
  hfile << "  typedef long long int64_t;" << endl;
  ConstantsAlreadyWritten.clear();
  WriteClassDeclarationGuts(hfile, Extension::GLX);
  hfile << "}" << endl;
  Extension::WriteSupportWrapperEnd(hfile, Extension::GLX);

  Extension::WriteSupportWrapperBegin(hfile, Extension::WGL);
  hfile << "namespace vtkwgl {" << endl;
  ConstantsAlreadyWritten.clear();
  WriteClassDeclarationGuts(hfile, Extension::WGL);
  hfile << "}" << endl;
  Extension::WriteSupportWrapperEnd(hfile, Extension::WGL);

  hfile << endl
        << "#ifdef VTKGL_APIENTRY_DEFINED" << endl
        << "#undef APIENTRY" << endl
        << "#endif" << endl << endl;
  hfile << "#ifdef VTKGL_APIENTRYP_DEFINED" << endl
        << "#undef APIENTRYP" << endl
        << "#endif" << endl << endl;
  hfile << "#endif //_vtkgl_h" << endl;

  // Write data for C++ file --------------------------------------------
  cxxfile << "#include \"vtkgl.h\"" << endl;
  cxxfile << "#include \"vtkOpenGLExtensionManager.h\"" << endl << endl;

  // Write function pointer declarations.
  WriteFunctionPointerDeclarations(cxxfile, Extension::GL);
  WriteFunctionPointerDeclarations(cxxfile, Extension::GLX);
  WriteFunctionPointerDeclarations(cxxfile, Extension::WGL);

  vtkstd::list<Extension>::iterator iextension;

  // Write function to load function pointers.
  cxxfile << "int vtkgl::LoadExtension(const char *name, vtkOpenGLExtensionManager *manager)" << endl
          << "{" << endl;
  for (iextension = extensions.begin();
       iextension != extensions.end(); iextension++)
    {
    iextension->WriteSupportWrapperBegin(cxxfile);
    cxxfile << "  if (strcmp(name, \"" << iextension->name.c_str()
            << "\") == 0)" << endl
            << "    {" << endl;
    vtkstd::string vtkglclass = "vtk";
    vtkglclass += Extension::TypeToString(iextension->type);
    vtkstd::list<Function>::iterator ifunct;
    for (ifunct = functs[*iextension].begin();
         ifunct != functs[*iextension].end(); ifunct++)
      {
      cxxfile << "    " << vtkglclass.c_str() << "::"
              << ifunct->name.c_str() << " = (" << vtkglclass.c_str() << "::"
              << ifunct->GetProcType()
              << ")manager->GetProcAddress(\""
              << Extension::TypeToString(iextension->type)
              << ifunct->name.c_str() << "\");" << endl;
      }
    cxxfile << "    return 1";
    for (ifunct = functs[*iextension].begin();
         ifunct != functs[*iextension].end(); ifunct++)
      {
      cxxfile << " && (" << vtkglclass.c_str() << "::" << ifunct->name.c_str()
              << " != NULL)";
      }
    cxxfile << ";" << endl;
    cxxfile << "    }" << endl;
    iextension->WriteSupportWrapperEnd(cxxfile);
    }
  cxxfile << "  vtkGenericWarningMacro(<< \"Nothing known about extension \" << name" << endl
          << "                         << \".  vtkgl may need to be updated.\");" << endl;
  cxxfile << "  return 0;" << endl
          << "}" << endl;

  // Write functions to report special version extension strings.
  cxxfile << endl << "const char *vtkgl::GLVersionExtensionsString()" << endl
          << "{" << endl
          << "  return \"";
  for (iextension = extensions.begin();
       iextension != extensions.end(); iextension++)
    {
    if (strncmp("GL_VERSION_", iextension->name.c_str(), 11) == 0)
      {
      cxxfile << iextension->name.c_str() << " ";
      }
    }
  cxxfile << "\";" << endl
          << "}" << endl;

  cxxfile << endl << "const char *vtkgl::GLXVersionExtensionsString()" << endl
          << "{" << endl
          << "  return \"";
  for (iextension = extensions.begin();
       iextension != extensions.end(); iextension++)
    {
    if (strncmp("GLX_VERSION_", iextension->name.c_str(), 12) == 0)
      {
      cxxfile << iextension->name.c_str() << " ";
      }
    }
  cxxfile << "\";" << endl
          << "}" << endl;
}

int main(int argc, char **argv)
{
  if (argc < 3)
    {
    cerr << "USAGE: " << argv[0] << "<output dir> <header files>" << endl;
    return 1;
    }

  vtkstd::string outputDir = argv[1];

  for (int i = 2; i < argc; i++)
    {
#ifdef DEBUG_PARSE
    cerr << "*** Parsing declarations from file " << argv[i] << endl;
#endif
    ifstream file(argv[i]);
    if (!file)
      {
      cerr << "Could not open " << argv[i] << endl;
      return 2;
      }

    while (!file.eof())
      {
      static char buf[4096];    // What are the odds of needing more?
      file.getline(buf, 4096);
      ParseLine(buf);
      }
    file.close();
    }

  ofstream hfile((outputDir + "/vtkgl.h").c_str());
  WriteHeader(hfile, argv[0], argv+1, argc-1);
  ofstream cxxfile((outputDir + "/vtkgl.cxx").c_str());
  WriteHeader(cxxfile, argv[0], argv+1, argc-1);

  WriteCode(hfile, cxxfile);

  hfile.close();
  cxxfile.close();

  return 0;
}
