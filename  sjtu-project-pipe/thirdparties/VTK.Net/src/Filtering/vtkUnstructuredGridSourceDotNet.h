#pragma once

// managed includes
#include "vtkSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkUnstructuredGrid;

public ref class vtkUnstructuredGridSource : public vtkSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridSource *NewInstance ();
  vtkUnstructuredGridSource^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkUnstructuredGrid *GetOutput ();
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkUnstructuredGrid^ GetOutput();


  // vtkUnstructuredGrid *GetOutput (int idx);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  vtkUnstructuredGrid^ GetOutput(int idx);


  // void SetOutput (vtkUnstructuredGrid *output);
/// <summary>
/// <para>Get the output of this source.</para>
/// </summary>
  void SetOutput(vtkUnstructuredGrid^ output);


// Did not wrap:  vtkUnstructuredGridSource ();


// Did not wrap:  ~vtkUnstructuredGridSource ();


// Did not wrap:  void ComputeInputUpdateExtents (vtkDataObject *output);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkUnstructuredGridSource (const vtkUnstructuredGridSource &);


// Did not wrap:  void vtkUnstructuredGridSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridSource();


};

} // end vtkFiltering
