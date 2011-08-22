#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageShrink3D : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageShrink3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageShrink3D *NewInstance ();
  vtkImageShrink3D^ NewInstance();


  // vtkImageShrink3D *SafeDownCast (vtkObject* o);
  static vtkImageShrink3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetShrinkFactors (int , int , int );
/// <summary>
/// <para>Set/Get the shrink factors</para>
/// </summary>
  void SetShrinkFactors(int arg0, int arg1, int arg2);


  // void SetShrinkFactors (int  a[3]);
/// <summary>
/// <para>Set/Get the shrink factors</para>
/// </summary>
  void SetShrinkFactors(array<int>^ a);


  // int  *GetShrinkFactors ();
/// <summary>
/// <para>Set/Get the shrink factors</para>
/// </summary>
  array<int>^ GetShrinkFactors();


  // void SetShift (int , int , int );
/// <summary>
/// <para>Set/Get the pixel to use as origin.</para>
/// </summary>
  void SetShift(int arg0, int arg1, int arg2);


  // void SetShift (int  a[3]);
/// <summary>
/// <para>Set/Get the pixel to use as origin.</para>
/// </summary>
  void SetShift(array<int>^ a);


  // int  *GetShift ();
/// <summary>
/// <para>Set/Get the pixel to use as origin.</para>
/// </summary>
  array<int>^ GetShift();


  // void SetAveraging (int );
/// <summary>
/// <para>Choose Mean, Minimum, Maximum, Median or sub sampling. The neighborhood operations are not centered on the sampled pixel. This may cause a half pixel shift in your output image. You can changed &quot;Shift&quot; to get around this. vtkImageGaussianSmooth or vtkImageMean with strides.</para>
/// </summary>
  void SetAveraging(int arg0);


  // int GetAveraging ();return this GetMean 
/// <summary>
/// <para>Choose Mean, Minimum, Maximum, Median or sub sampling. The neighborhood operations are not centered on the sampled pixel. This may cause a half pixel shift in your output image. You can changed &quot;Shift&quot; to get around this. vtkImageGaussianSmooth or vtkImageMean with strides.</para>
/// </summary>
  int GetAveraging();


  // void AveragingOn ();
/// <summary>
/// <para>Choose Mean, Minimum, Maximum, Median or sub sampling. The neighborhood operations are not centered on the sampled pixel. This may cause a half pixel shift in your output image. You can changed &quot;Shift&quot; to get around this. vtkImageGaussianSmooth or vtkImageMean with strides.</para>
/// </summary>
  void AveragingOn();


  // void AveragingOff ();
/// <summary>
/// <para>Choose Mean, Minimum, Maximum, Median or sub sampling. The neighborhood operations are not centered on the sampled pixel. This may cause a half pixel shift in your output image. You can changed &quot;Shift&quot; to get around this. vtkImageGaussianSmooth or vtkImageMean with strides.</para>
/// </summary>
  void AveragingOff();


  // void SetMean (int );
  void SetMean(int arg0);


  // int GetMean ();
  int GetMean();


  // void MeanOn ();
  void MeanOn();


  // void MeanOff ();
  void MeanOff();


  // void SetMinimum (int );
  void SetMinimum(int arg0);


  // int GetMinimum ();
  int GetMinimum();


  // void MinimumOn ();
  void MinimumOn();


  // void MinimumOff ();
  void MinimumOff();


  // void SetMaximum (int );
  void SetMaximum(int arg0);


  // int GetMaximum ();
  int GetMaximum();


  // void MaximumOn ();
  void MaximumOn();


  // void MaximumOff ();
  void MaximumOff();


  // void SetMedian (int );
  void SetMedian(int arg0);


  // int GetMedian ();
  int GetMedian();


  // void MedianOn ();
  void MedianOn();


  // void MedianOff ();
  void MedianOff();


// Did not wrap:  vtkImageShrink3D ();


// Did not wrap:  ~vtkImageShrink3D ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  void InternalRequestUpdateExtent (int *inExt, int *outExt);


// Did not wrap:  vtkImageShrink3D (const vtkImageShrink3D &);


// Did not wrap:  void vtkImageShrink3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageShrink3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageShrink3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageShrink3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageShrink3D();


};

} // end vtkImaging
