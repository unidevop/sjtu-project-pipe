#pragma once

// managed includes
#include "vtkXMLParserDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLFileReadTester : public vtkXMLParser
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLFileReadTester *NewInstance ();
  vtkXMLFileReadTester^ NewInstance();


  // vtkXMLFileReadTester *SafeDownCast (vtkObject* o);
  static vtkXMLFileReadTester^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkXMLFileReadTester *New ();


  // int TestReadFile ();
/// <summary>
/// <para>Try to read the file given by FileName.  Returns 1 if the file is a VTK XML file, and 0 otherwise.</para>
/// </summary>
  int TestReadFile();


  // void SetFileName (char *);
/// <summary>
/// <para>Get/Set the name of the file tested by TestReadFile().</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Get/Set the name of the file tested by TestReadFile().</para>
/// </summary>
  System::String^ GetFileName();


  // char *GetFileDataType ();
/// <summary>
/// <para>Get the data type of the XML file tested.  If the file could not be read, returns NULL.</para>
/// </summary>
  System::String^ GetFileDataType();


  // char *GetFileVersion ();
/// <summary>
/// <para>Get the file version of the XML file tested.  If the file could not be read, returns NULL.</para>
/// </summary>
  System::String^ GetFileVersion();


// Did not wrap:  vtkXMLFileReadTester ();


// Did not wrap:  ~vtkXMLFileReadTester ();


// Did not wrap:  void StartElement (const char *name, const char *atts);


// Did not wrap:  int ParsingComplete ();


// Did not wrap:  void ReportStrayAttribute (const char *, const char *, const char *);


// Did not wrap:  void ReportMissingAttribute (const char *, const char *);


// Did not wrap:  void ReportBadAttribute (const char *, const char *, const char *);


// Did not wrap:  void ReportUnknownElement (const char *);


// Did not wrap:  void ReportXmlParseError ();


// Did not wrap:  void SetFileDataType (char *);


// Did not wrap:  void SetFileVersion (char *);


// Did not wrap:  vtkXMLFileReadTester (const vtkXMLFileReadTester &);


// Did not wrap:  void vtkXMLFileReadTester 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLFileReadTester(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLFileReadTester(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLFileReadTester();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLFileReadTester();


};

} // end vtkIO
