#pragma once

// managed includes
#include "vtkXMLStructuredDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLImageDataWriter : public vtkXMLStructuredDataWriter
{

public:
// Did not wrap:  static vtkXMLImageDataWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLImageDataWriter *NewInstance ();
  vtkXMLImageDataWriter^ NewInstance();


  // vtkXMLImageDataWriter *SafeDownCast (vtkObject* o);
  static vtkXMLImageDataWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetDefaultFileExtension ();
/// <summary>
/// <para>Get the default file extension for files written by this writer.</para>
/// </summary>
  System::String^ GetDefaultFileExtension();


// Did not wrap:  vtkXMLImageDataWriter ();


// Did not wrap:  ~vtkXMLImageDataWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void WritePrimaryElementAttributes (ostream &os, vtkIndent indent);


// Did not wrap:  void GetInputExtent (int *extent);


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  vtkXMLImageDataWriter (const vtkXMLImageDataWriter &);


// Did not wrap:  void vtkXMLImageDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLImageDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLImageDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLImageDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLImageDataWriter();


};

} // end vtkIO
