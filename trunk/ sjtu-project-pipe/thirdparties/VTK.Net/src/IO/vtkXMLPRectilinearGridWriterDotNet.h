#pragma once

// managed includes
#include "vtkXMLPStructuredDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkXMLPRectilinearGridWriter : public vtkXMLPStructuredDataWriter
{

public:
// Did not wrap:  static vtkXMLPRectilinearGridWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLPRectilinearGridWriter *NewInstance ();
  vtkXMLPRectilinearGridWriter^ NewInstance();


  // vtkXMLPRectilinearGridWriter *SafeDownCast (vtkObject* o);
  static vtkXMLPRectilinearGridWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetDefaultFileExtension ();
/// <summary>
/// <para>Get the default file extension for files written by this writer.</para>
/// </summary>
  System::String^ GetDefaultFileExtension();


// Did not wrap:  vtkXMLPRectilinearGridWriter ();


// Did not wrap:  ~vtkXMLPRectilinearGridWriter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  const char *GetDataSetName ();


// Did not wrap:  vtkXMLStructuredDataWriter *CreateStructuredPieceWriter ();


// Did not wrap:  void WritePData (vtkIndent indent);


// Did not wrap:  vtkXMLPRectilinearGridWriter (const vtkXMLPRectilinearGridWriter &);


// Did not wrap:  void vtkXMLPRectilinearGridWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLPRectilinearGridWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLPRectilinearGridWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLPRectilinearGridWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLPRectilinearGridWriter();


};

} // end vtkIO
