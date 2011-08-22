#pragma once

// managed includes
#include "vtkDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkRectilinearGridWriter : public vtkDataWriter
{

public:
// Did not wrap:  static vtkRectilinearGridWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRectilinearGridWriter *NewInstance ();
  vtkRectilinearGridWriter^ NewInstance();


  // vtkRectilinearGridWriter *SafeDownCast (vtkObject* o);
  static vtkRectilinearGridWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkRectilinearGrid *GetInput ();
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkRectilinearGrid^ GetInput();


  // vtkRectilinearGrid *GetInput (int port);
/// <summary>
/// <para>Get the input to this writer.</para>
/// </summary>
  vtkRectilinearGrid^ GetInput(int port);


// Did not wrap:  vtkRectilinearGridWriter ();


// Did not wrap:  ~vtkRectilinearGridWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkRectilinearGridWriter (const vtkRectilinearGridWriter &);


// Did not wrap:  void vtkRectilinearGridWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRectilinearGridWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRectilinearGridWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRectilinearGridWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRectilinearGridWriter();


};

} // end vtkIO
