#pragma once

// managed includes
#include "vtkXMLPStructuredDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPImageDataWriter : public vtkXMLPStructuredDataWriter
{

public:
// Did not wrap:  static vtkXMLPImageDataWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPImageDataWriter *NewInstance ();
  vtkXMLPImageDataWriter^ NewInstance();


  // vtkXMLPImageDataWriter *SafeDownCast (vtkObject* o);
  static vtkXMLPImageDataWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetDefaultFileExtension ();
/// <summary>
/// <para>Get the default file extension for files written by this writer.</para>
/// </summary>
  System::String^ GetDefaultFileExtension();


// Did not wrap:  vtkXMLPImageDataWriter ();


// Did not wrap:  ~vtkXMLPImageDataWriter ();


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  void WritePrimaryElementAttributes (ostream &os, vtkIndent indent);


// Did not wrap:  vtkXMLStructuredDataWriter *CreateStructuredPieceWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkXMLPImageDataWriter (const vtkXMLPImageDataWriter &);


// Did not wrap:  void vtkXMLPImageDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPImageDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPImageDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPImageDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPImageDataWriter();


};

} // end vtkIO
