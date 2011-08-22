#pragma once

// managed includes
#include "vtkImageSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkDataSetToImageFilter : public vtkImageSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetToImageFilter *NewInstance ();
  vtkDataSetToImageFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkDataSet *input);
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  void SetInput(vtkDataSet^ input);


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  vtkDataSet^ GetInput();


// Did not wrap:  vtkDataSetToImageFilter ();


// Did not wrap:  ~vtkDataSetToImageFilter ();


// Did not wrap:  void ComputeInputUpdateExtents (vtkDataObject *output);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkDataSetToImageFilter (const vtkDataSetToImageFilter &);


// Did not wrap:  void vtkDataSetToImageFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetToImageFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetToImageFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetToImageFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetToImageFilter();


};

} // end vtkFiltering
