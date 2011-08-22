#pragma once

// managed includes
#include "vtkDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridWriter : public vtkDataWriter
{

public:
// Did not wrap:  static vtkUnstructuredGridWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridWriter *NewInstance ();
  vtkUnstructuredGridWriter^ NewInstance();


  // vtkUnstructuredGridWriter *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGridWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkUnstructuredGrid *GetInput ();
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkUnstructuredGrid^ GetInput();


  // vtkUnstructuredGrid *GetInput (int port);
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkUnstructuredGrid^ GetInput(int port);


// Did not wrap:  vtkUnstructuredGridWriter ();


// Did not wrap:  ~vtkUnstructuredGridWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkUnstructuredGridWriter (const vtkUnstructuredGridWriter &);


// Did not wrap:  void vtkUnstructuredGridWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridWriter();


};

} // end vtkIO
