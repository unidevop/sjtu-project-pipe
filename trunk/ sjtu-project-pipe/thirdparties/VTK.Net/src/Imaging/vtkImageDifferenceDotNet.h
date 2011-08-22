#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageDifference : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageDifference *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageDifference *NewInstance ();
  vtkImageDifference^ NewInstance();


  // vtkImageDifference *SafeDownCast (vtkObject* o);
  static vtkImageDifference^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetImage (vtkDataObject *image);this SetInput image 
/// <summary>
/// <para>Specify the Image to compare the input to.</para>
/// </summary>
  void SetImage(vtkDataObject^ image);


  // vtkImageData *GetImage ();
/// <summary>
/// <para>Specify the Image to compare the input to.</para>
/// </summary>
  vtkImageData^ GetImage();


  // double GetError (void );
/// <summary>
/// <para>Return the total error in comparing the two images.</para>
/// </summary>
  double GetError();


  // void GetError (double *e);e this GetError 
/// <summary>
/// <para>Return the total error in comparing the two images.</para>
/// </summary>
  void GetError(array<double>^ e);


  // double GetThresholdedError (void );
/// <summary>
/// <para>Return the total thresholded error in comparing the two images. The thresholded error is the error for a given pixel minus the threshold and clamped at a minimum of zero. </para>
/// </summary>
  double GetThresholdedError();


  // void GetThresholdedError (double *e);e this GetThresholdedError 
/// <summary>
/// <para>Return the total thresholded error in comparing the two images. The thresholded error is the error for a given pixel minus the threshold and clamped at a minimum of zero. </para>
/// </summary>
  void GetThresholdedError(array<double>^ e);


  // void SetThreshold (int );
/// <summary>
/// <para>Specify a threshold tolerance for pixel differences.</para>
/// </summary>
  void SetThreshold(int arg0);


  // int GetThreshold ();
/// <summary>
/// <para>Specify a threshold tolerance for pixel differences.</para>
/// </summary>
  int GetThreshold();


  // void SetAllowShift (int );
/// <summary>
/// <para>Specify whether the comparison will allow a shift of one pixel between the images.  If set, then the minimum difference between input images will be used to determine the difference. Otherwise, the difference is computed directly between pixels of identical row/column values.</para>
/// </summary>
  void SetAllowShift(int arg0);


  // int GetAllowShift ();
/// <summary>
/// <para>Specify whether the comparison will allow a shift of one pixel between the images.  If set, then the minimum difference between input images will be used to determine the difference. Otherwise, the difference is computed directly between pixels of identical row/column values.</para>
/// </summary>
  int GetAllowShift();


  // void AllowShiftOn ();
/// <summary>
/// <para>Specify whether the comparison will allow a shift of one pixel between the images.  If set, then the minimum difference between input images will be used to determine the difference. Otherwise, the difference is computed directly between pixels of identical row/column values.</para>
/// </summary>
  void AllowShiftOn();


  // void AllowShiftOff ();
/// <summary>
/// <para>Specify whether the comparison will allow a shift of one pixel between the images.  If set, then the minimum difference between input images will be used to determine the difference. Otherwise, the difference is computed directly between pixels of identical row/column values.</para>
/// </summary>
  void AllowShiftOff();


  // void SetAveraging (int );
/// <summary>
/// <para>Specify whether the comparison will include comparison of averaged 3x3 data between the images. For graphics renderings you normally would leave this on. For imaging operations it should be off.</para>
/// </summary>
  void SetAveraging(int arg0);


  // int GetAveraging ();
/// <summary>
/// <para>Specify whether the comparison will include comparison of averaged 3x3 data between the images. For graphics renderings you normally would leave this on. For imaging operations it should be off.</para>
/// </summary>
  int GetAveraging();


  // void AveragingOn ();
/// <summary>
/// <para>Specify whether the comparison will include comparison of averaged 3x3 data between the images. For graphics renderings you normally would leave this on. For imaging operations it should be off.</para>
/// </summary>
  void AveragingOn();


  // void AveragingOff ();
/// <summary>
/// <para>Specify whether the comparison will include comparison of averaged 3x3 data between the images. For graphics renderings you normally would leave this on. For imaging operations it should be off.</para>
/// </summary>
  void AveragingOff();


// Did not wrap:  vtkImageDifference ();


// Did not wrap:  ~vtkImageDifference ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  vtkImageDifference (const vtkImageDifference &);


// Did not wrap:  void vtkImageDifference 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageDifference(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageDifference(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageDifference();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageDifference();


};

} // end vtkImaging
