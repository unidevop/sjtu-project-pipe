#pragma once

// managed includes
#include "vtkDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataSetWriter : public vtkDataWriter
{

public:
// Did not wrap:  static vtkDataSetWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetWriter *NewInstance ();
  vtkDataSetWriter^ NewInstance();


  // vtkDataSetWriter *SafeDownCast (vtkObject* o);
  static vtkDataSetWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkDataSet^ GetInput();


  // vtkDataSet *GetInput (int port);
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkDataSet^ GetInput(int port);


// Did not wrap:  vtkDataSetWriter ();


// Did not wrap:  ~vtkDataSetWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkDataSetWriter (const vtkDataSetWriter &);


// Did not wrap:  void vtkDataSetWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetWriter();


};

} // end vtkIO
