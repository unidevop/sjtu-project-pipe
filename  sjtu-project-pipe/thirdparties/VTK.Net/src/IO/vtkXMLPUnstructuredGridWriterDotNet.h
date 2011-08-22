#pragma once

// managed includes
#include "vtkXMLPUnstructuredDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPUnstructuredGridWriter : public vtkXMLPUnstructuredDataWriter
{

public:
// Did not wrap:  static vtkXMLPUnstructuredGridWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPUnstructuredGridWriter *NewInstance ();
  vtkXMLPUnstructuredGridWriter^ NewInstance();


  // vtkXMLPUnstructuredGridWriter *SafeDownCast (vtkObject* o);
  static vtkXMLPUnstructuredGridWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetDefaultFileExtension ();
/// <summary>
/// <para>Get the default file extension for files written by this writer.</para>
/// </summary>
  System::String^ GetDefaultFileExtension();


// Did not wrap:  vtkXMLPUnstructuredGridWriter ();


// Did not wrap:  ~vtkXMLPUnstructuredGridWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  vtkXMLUnstructuredDataWriter *CreateUnstructuredPieceWriter ();


// Did not wrap:  vtkXMLPUnstructuredGridWriter (const vtkXMLPUnstructuredGridWriter &);


// Did not wrap:  void vtkXMLPUnstructuredGridWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPUnstructuredGridWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPUnstructuredGridWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPUnstructuredGridWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPUnstructuredGridWriter();


};

} // end vtkIO
