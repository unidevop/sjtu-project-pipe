#pragma once

// managed includes
#include "vtkDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPolyDataWriter : public vtkDataWriter
{

public:
// Did not wrap:  static vtkPolyDataWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataWriter *NewInstance ();
  vtkPolyDataWriter^ NewInstance();


  // vtkPolyDataWriter *SafeDownCast (vtkObject* o);
  static vtkPolyDataWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkPolyData *GetInput ();
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkPolyData^ GetInput();


  // vtkPolyData *GetInput (int port);
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkPolyData^ GetInput(int port);


// Did not wrap:  vtkPolyDataWriter ();


// Did not wrap:  ~vtkPolyDataWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkPolyDataWriter (const vtkPolyDataWriter &);


// Did not wrap:  void vtkPolyDataWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataWriter();


};

} // end vtkIO
