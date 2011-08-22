#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageSpatialFilter : public vtkImageToImageFilter
{

public:
// Did not wrap:  static vtkImageSpatialFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageSpatialFilter *NewInstance ();
  vtkImageSpatialFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int *GetKernelSize ();return this KernelSize 
/// <summary>
/// <para>Get the Kernel middle.</para>
/// </summary>
  array<int>^ GetKernelSize();


  // int *GetKernelMiddle ();return this KernelMiddle 
  array<int>^ GetKernelMiddle();


// Did not wrap:  vtkImageSpatialFilter ();


// Did not wrap:  ~vtkImageSpatialFilter ();


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteInformation (vtkImageData *inData, vtkImageData *outData);


// Did not wrap:  void ComputeOutputWholeExtent (int extent[6], int handleBoundaries);


// Did not wrap:  void ComputeInputUpdateExtent (int extent[6], int wholeExtent[6]);


// Did not wrap:  vtkImageSpatialFilter (const vtkImageSpatialFilter &);


// Did not wrap:  void vtkImageSpatialFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageSpatialFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageSpatialFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageSpatialFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageSpatialFilter();


};

} // end vtkImaging
