#pragma once

// managed includes
#include "vtkPolyDataSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkUnstructuredGrid;

public ref class vtkUnstructuredGridToPolyDataFilter : public vtkPolyDataSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridToPolyDataFilter *NewInstance ();
  vtkUnstructuredGridToPolyDataFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkUnstructuredGrid *input);
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  void SetInput(vtkUnstructuredGrid^ input);


  // vtkUnstructuredGrid *GetInput ();
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  vtkUnstructuredGrid^ GetInput();


  // virtual void ComputeInputUpdateExtents (vtkDataObject *output);
/// <summary>
/// <para>Do not let datasets return more than requested.</para>
/// </summary>
  void ComputeInputUpdateExtents(vtkDataObject^ output);


// Did not wrap:  vtkUnstructuredGridToPolyDataFilter ();


// Did not wrap:  ~vtkUnstructuredGridToPolyDataFilter ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkUnstructuredGridToPolyDataFilter (const vtkUnstructuredGridToPolyDataFilter &);


// Did not wrap:  void vtkUnstructuredGridToPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridToPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridToPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridToPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridToPolyDataFilter();


};

} // end vtkFiltering
