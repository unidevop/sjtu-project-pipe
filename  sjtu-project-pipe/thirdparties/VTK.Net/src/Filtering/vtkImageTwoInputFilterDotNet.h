#pragma once

// managed includes
#include "vtkImageMultipleInputFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkImageTwoInputFilter : public vtkImageMultipleInputFilter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageTwoInputFilter *NewInstance ();
  vtkImageTwoInputFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput1 (vtkImageData *input);
/// <summary>
/// <para>Set the Input1 of this filter. If a ScalarType has not been set, then the ScalarType of the input is used.</para>
/// </summary>
  void SetInput1(vtkImageData^ input);


  // virtual void SetInput2 (vtkImageData *input);
/// <summary>
/// <para>Set the Input2 of this filter. If a ScalarType has not been set, then the ScalarType of the input is used.</para>
/// </summary>
  void SetInput2(vtkImageData^ input);


  // vtkImageData *GetInput1 ();
/// <summary>
/// <para>Get the inputs to this filter.</para>
/// </summary>
  vtkImageData^ GetInput1();


  // vtkImageData *GetInput2 ();
/// <summary>
/// <para>Get the inputs to this filter.</para>
/// </summary>
  vtkImageData^ GetInput2();


// Did not wrap:  vtkImageTwoInputFilter ();


// Did not wrap:  ~vtkImageTwoInputFilter ();


// Did not wrap:  vtkImageTwoInputFilter (const vtkImageTwoInputFilter &);


// Did not wrap:  void vtkImageTwoInputFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageTwoInputFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageTwoInputFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageTwoInputFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageTwoInputFilter();


};

} // end vtkFiltering
