#pragma once

// managed includes
#include "vtkPolyDataSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkStructuredPointsToPolyDataFilter : public vtkPolyDataSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredPointsToPolyDataFilter *NewInstance ();
  vtkStructuredPointsToPolyDataFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkImageData *input);
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  void SetInput(vtkImageData^ input);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  vtkImageData^ GetInput();


// Did not wrap:  vtkStructuredPointsToPolyDataFilter ();


// Did not wrap:  ~vtkStructuredPointsToPolyDataFilter ();


// Did not wrap:  void ComputeInputUpdateExtents (vtkDataObject *output);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkStructuredPointsToPolyDataFilter (const vtkStructuredPointsToPolyDataFilter &);


// Did not wrap:  void vtkStructuredPointsToPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredPointsToPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredPointsToPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredPointsToPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredPointsToPolyDataFilter();


};

} // end vtkFiltering
