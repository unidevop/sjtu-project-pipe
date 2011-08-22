#pragma once

// managed includes
#include "vtkSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRectilinearGrid;

public ref class vtkRectilinearGridSource : public vtkSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRectilinearGridSource *NewInstance ();
  vtkRectilinearGridSource^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkRectilinearGrid *GetOutput ();
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkRectilinearGrid^ GetOutput();


  // vtkRectilinearGrid *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkRectilinearGrid^ GetOutput(int idx);


  // void SetOutput (vtkRectilinearGrid *output);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  void SetOutput(vtkRectilinearGrid^ output);


// Did not wrap:  vtkRectilinearGridSource ();


// Did not wrap:  ~vtkRectilinearGridSource ();


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkRectilinearGridSource (const vtkRectilinearGridSource &);


// Did not wrap:  void vtkRectilinearGridSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRectilinearGridSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRectilinearGridSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRectilinearGridSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRectilinearGridSource();


};

} // end vtkFiltering
