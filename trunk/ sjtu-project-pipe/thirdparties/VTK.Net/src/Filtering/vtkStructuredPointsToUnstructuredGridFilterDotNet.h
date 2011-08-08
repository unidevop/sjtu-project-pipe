#pragma once

// managed includes
#include "vtkUnstructuredGridSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkStructuredPointsToUnstructuredGridFilter : public vtkUnstructuredGridSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredPointsToUnstructuredGridFilter *NewInstance ();
  vtkStructuredPointsToUnstructuredGridFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkImageData *input);
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  void SetInput(vtkImageData^ input);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Set / get the input data or filter.</para>
/// </summary>
  vtkImageData^ GetInput();


// Did not wrap:  vtkStructuredPointsToUnstructuredGridFilter ();


// Did not wrap:  ~vtkStructuredPointsToUnstructuredGridFilter ();


// Did not wrap:  void ComputeInputUpdateExtents (vtkDataObject *output);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkStructuredPointsToUnstructuredGridFilter (const vtkStructuredPointsToUnstructuredGridFilter &);


// Did not wrap:  void vtkStructuredPointsToUnstructuredGridFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredPointsToUnstructuredGridFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredPointsToUnstructuredGridFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredPointsToUnstructuredGridFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredPointsToUnstructuredGridFilter();


};

} // end vtkFiltering
