#pragma once

// managed includes
#include "vtkPolyDataSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkPolyData;

public ref class vtkPolyDataToPolyDataFilter : public vtkPolyDataSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataToPolyDataFilter *NewInstance ();
  vtkPolyDataToPolyDataFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkPolyData *input);
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  void SetInput(vtkPolyData^ input);


  // vtkPolyData *GetInput ();
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  vtkPolyData^ GetInput();


// Did not wrap:  vtkPolyDataToPolyDataFilter ();


// Did not wrap:  ~vtkPolyDataToPolyDataFilter ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkPolyDataToPolyDataFilter (const vtkPolyDataToPolyDataFilter &);


// Did not wrap:  void vtkPolyDataToPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataToPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataToPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataToPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataToPolyDataFilter();


};

} // end vtkFiltering
