#pragma once

// managed includes
#include "vtkPolyDataSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRectilinearGrid;

public ref class vtkRectilinearGridToPolyDataFilter : public vtkPolyDataSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRectilinearGridToPolyDataFilter *NewInstance ();
  vtkRectilinearGridToPolyDataFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkRectilinearGrid *input);
/// <summary>
/// <para>Set / get the input Grid or filter.</para>
/// </summary>
  void SetInput(vtkRectilinearGrid^ input);


  // vtkRectilinearGrid *GetInput ();
/// <summary>
/// <para>Set / get the input Grid or filter.</para>
/// </summary>
  vtkRectilinearGrid^ GetInput();


// Did not wrap:  vtkRectilinearGridToPolyDataFilter ();


// Did not wrap:  ~vtkRectilinearGridToPolyDataFilter ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkRectilinearGridToPolyDataFilter (const vtkRectilinearGridToPolyDataFilter &);


// Did not wrap:  void vtkRectilinearGridToPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRectilinearGridToPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRectilinearGridToPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRectilinearGridToPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRectilinearGridToPolyDataFilter();


};

} // end vtkFiltering
