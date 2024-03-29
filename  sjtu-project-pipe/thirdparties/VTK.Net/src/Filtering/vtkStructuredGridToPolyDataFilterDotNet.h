#pragma once

// managed includes
#include "vtkPolyDataSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkStructuredGrid;

public ref class vtkStructuredGridToPolyDataFilter : public vtkPolyDataSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredGridToPolyDataFilter *NewInstance ();
  vtkStructuredGridToPolyDataFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkStructuredGrid *input);
/// <summary>
/// <para>Set / get the input Grid or filter.</para>
/// </summary>
  void SetInput(vtkStructuredGrid^ input);


  // vtkStructuredGrid *GetInput ();
/// <summary>
/// <para>Set / get the input Grid or filter.</para>
/// </summary>
  vtkStructuredGrid^ GetInput();


// Did not wrap:  vtkStructuredGridToPolyDataFilter ();


// Did not wrap:  ~vtkStructuredGridToPolyDataFilter ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkStructuredGridToPolyDataFilter (const vtkStructuredGridToPolyDataFilter &);


// Did not wrap:  void vtkStructuredGridToPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredGridToPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredGridToPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredGridToPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredGridToPolyDataFilter();


};

} // end vtkFiltering
