#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageSpatialAlgorithm : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageSpatialAlgorithm *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageSpatialAlgorithm *NewInstance ();
  vtkImageSpatialAlgorithm^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int *GetKernelSize ();return this KernelSize 
/// <summary>
/// <para>Get the Kernel middle.</para>
/// </summary>
  array<int>^ GetKernelSize();


  // int *GetKernelMiddle ();return this KernelMiddle 
  array<int>^ GetKernelMiddle();


// Did not wrap:  vtkImageSpatialAlgorithm ();


// Did not wrap:  ~vtkImageSpatialAlgorithm ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ComputeOutputWholeExtent (int extent[6], int handleBoundaries);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void InternalRequestUpdateExtent (int *extent, int *inExtent, int *wholeExtent);


// Did not wrap:  vtkImageSpatialAlgorithm (const vtkImageSpatialAlgorithm &);


// Did not wrap:  void vtkImageSpatialAlgorithm 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageSpatialAlgorithm(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageSpatialAlgorithm(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageSpatialAlgorithm();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageSpatialAlgorithm();


};

} // end vtkImaging
