#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLParser : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLParser *NewInstance ();
  vtkXMLParser^ NewInstance();


  // vtkXMLParser *SafeDownCast (vtkObject* o);
  static vtkXMLParser^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLParser *New ();


  // long TellG ();
/// <summary>
/// <para>Used by subclasses and their supporting classes.  These methods wrap around the tellg and seekg methods of the input stream to work-around stream bugs on various platforms.</para>
/// </summary>
  long TellG();


  // void SeekG (long position);
/// <summary>
/// <para>Used by subclasses and their supporting classes.  These methods wrap around the tellg and seekg methods of the input stream to work-around stream bugs on various platforms.</para>
/// </summary>
  void SeekG(long position);


  // virtual int Parse ();
/// <summary>
/// <para>Parse the XML input.</para>
/// </summary>
  int Parse();


  // virtual int Parse (const char *inputString);
/// <summary>
/// <para>Parse the XML message. If length is specified, parse only the first &quot;length&quot; characters</para>
/// </summary>
  int Parse(System::String^ inputString);


  // virtual int Parse (const char *inputString, unsigned int length);
/// <summary>
/// <para>Parse the XML message. If length is specified, parse only the first &quot;length&quot; characters</para>
/// </summary>
  int Parse(System::String^ inputString, unsigned int length);


  // virtual int InitializeParser ();
/// <summary>
/// <para>When parsing fragments of XML or streaming XML, use the following three methods.  InitializeParser method initialize parser but does not perform any actual parsing.  ParseChunk parses framgent of XML. This has to match to what was already parsed. CleanupParser finishes parsing. If there were errors, CleanupParser will report them.</para>
/// </summary>
  int InitializeParser();


  // virtual int ParseChunk (const char *inputString, unsigned int length);
/// <summary>
/// <para>When parsing fragments of XML or streaming XML, use the following three methods.  InitializeParser method initialize parser but does not perform any actual parsing.  ParseChunk parses framgent of XML. This has to match to what was already parsed. CleanupParser finishes parsing. If there were errors, CleanupParser will report them.</para>
/// </summary>
  int ParseChunk(System::String^ inputString, unsigned int length);


  // virtual int CleanupParser ();
/// <summary>
/// <para>When parsing fragments of XML or streaming XML, use the following three methods.  InitializeParser method initialize parser but does not perform any actual parsing.  ParseChunk parses framgent of XML. This has to match to what was already parsed. CleanupParser finishes parsing. If there were errors, CleanupParser will report them.</para>
/// </summary>
  int CleanupParser();


  // void SetFileName (char *);
/// <summary>
/// <para>Set and get file name.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Set and get file name.</para>
/// </summary>
  System::String^ GetFileName();


// Did not wrap:  vtkXMLParser ();


// Did not wrap:  ~vtkXMLParser ();


// Did not wrap:  virtual int ParseXML ();


// Did not wrap:  virtual int ParsingComplete ();


// Did not wrap:  virtual void StartElement (const char *name, const char *atts);


// Did not wrap:  virtual void EndElement (const char *name);


// Did not wrap:  virtual void CharacterDataHandler (const char *data, int length);


// Did not wrap:  virtual void ReportStrayAttribute (const char *element, const char *attr, const char *value);


// Did not wrap:  virtual void ReportMissingAttribute (const char *element, const char *attr);


// Did not wrap:  virtual void ReportBadAttribute (const char *element, const char *attr, const char *value);


// Did not wrap:  virtual void ReportUnknownElement (const char *element);


// Did not wrap:  virtual void ReportXmlParseError ();


// Did not wrap:  unsigned long GetXMLByteIndex ();


// Did not wrap:  virtual int ParseBuffer (const char *buffer, unsigned int count);


// Did not wrap:  int ParseBuffer (const char *buffer);


// Did not wrap:  static int IsSpace (char c);


// Did not wrap:  vtkXMLParser (const vtkXMLParser &);


// Did not wrap:  void vtkXMLParser 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLParser(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLParser(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLParser();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLParser();


};

} // end vtkIO
