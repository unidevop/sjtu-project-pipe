#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageGaussianSmooth : public vtkThreadedImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageGaussianSmooth *NewInstance ();
  vtkImageGaussianSmooth^ NewInstance();


  // vtkImageGaussianSmooth *SafeDownCast (vtkObject* o);
  static vtkImageGaussianSmooth^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImageGaussianSmooth *New ();


  // void SetStandardDeviations (double , double , double );
/// <summary>
/// <para>Sets/Gets the Standard deviation of the gaussian in pixel units.</para>
/// </summary>
  void SetStandardDeviations(double arg0, double arg1, double arg2);


  // void SetStandardDeviations (double  a[3]);
/// <summary>
/// <para>Sets/Gets the Standard deviation of the gaussian in pixel units.</para>
/// </summary>
  void SetStandardDeviations(array<double>^ a);


  // void SetStandardDeviation (double std);this SetStandardDeviations std std std 
/// <summary>
/// <para>Sets/Gets the Standard deviation of the gaussian in pixel units.</para>
/// </summary>
  void SetStandardDeviation(double std);


  // void SetStandardDeviations (double a, double b);this SetStandardDeviations a b 
/// <summary>
/// <para>Sets/Gets the Standard deviation of the gaussian in pixel units.</para>
/// </summary>
  void SetStandardDeviations(double a, double b);


  // double  *GetStandardDeviations ();
/// <summary>
/// <para>Sets/Gets the Standard deviation of the gaussian in pixel units.</para>
/// </summary>
  array<double>^ GetStandardDeviations();


  // void SetStandardDeviation (double a, double b);this SetStandardDeviations a b 
/// <summary>
/// <para>Sets/Gets the Standard deviation of the gaussian in pixel units. These methods are provided for compatibility with old scripts</para>
/// </summary>
  void SetStandardDeviation(double a, double b);


  // void SetStandardDeviation (double a, double b, double c);this SetStandardDeviations a b c 
/// <summary>
/// <para>Sets/Gets the Radius Factors of the gaussian (no unit). The radius factors determine how far out the gaussian kernel will  go before being clamped to zero.</para>
/// </summary>
  void SetStandardDeviation(double a, double b, double c);


  // void SetRadiusFactors (double , double , double );
/// <summary>
/// <para>Sets/Gets the Radius Factors of the gaussian (no unit). The radius factors determine how far out the gaussian kernel will  go before being clamped to zero.</para>
/// </summary>
  void SetRadiusFactors(double arg0, double arg1, double arg2);


  // void SetRadiusFactors (double  a[3]);
/// <summary>
/// <para>Sets/Gets the Radius Factors of the gaussian (no unit). The radius factors determine how far out the gaussian kernel will  go before being clamped to zero.</para>
/// </summary>
  void SetRadiusFactors(array<double>^ a);


  // void SetRadiusFactors (double f, double f2);this SetRadiusFactors f f2 
/// <summary>
/// <para>Sets/Gets the Radius Factors of the gaussian (no unit). The radius factors determine how far out the gaussian kernel will  go before being clamped to zero.</para>
/// </summary>
  void SetRadiusFactors(double f, double f2);


  // void SetRadiusFactor (double f);this SetRadiusFactors f f f 
/// <summary>
/// <para>Sets/Gets the Radius Factors of the gaussian (no unit). The radius factors determine how far out the gaussian kernel will  go before being clamped to zero.</para>
/// </summary>
  void SetRadiusFactor(double f);


  // double  *GetRadiusFactors ();
/// <summary>
/// <para>Sets/Gets the Radius Factors of the gaussian (no unit). The radius factors determine how far out the gaussian kernel will  go before being clamped to zero.</para>
/// </summary>
  array<double>^ GetRadiusFactors();


  // void SetDimensionality (int );
/// <summary>
/// <para>Set/Get the dimensionality of this filter. This determines whether a one, two, or three dimensional gaussian is performed.</para>
/// </summary>
  void SetDimensionality(int arg0);


  // int GetDimensionality ();
/// <summary>
/// <para>Set/Get the dimensionality of this filter. This determines whether a one, two, or three dimensional gaussian is performed.</para>
/// </summary>
  int GetDimensionality();


// Did not wrap:  vtkImageGaussianSmooth ();


// Did not wrap:  ~vtkImageGaussianSmooth ();


// Did not wrap:  void ComputeKernel (double *kernel, int min, int max, double std);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void InternalRequestUpdateExtent (int *, int *);


// Did not wrap:  void ExecuteAxis (int axis, vtkImageData *inData, int inExt[6], vtkImageData *outData, int outExt[6], int *pcycle, int target, int *pcount, int total, vtkInformation *inInfo);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  vtkImageGaussianSmooth (const vtkImageGaussianSmooth &);


// Did not wrap:  void vtkImageGaussianSmooth 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageGaussianSmooth(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageGaussianSmooth(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageGaussianSmooth();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageGaussianSmooth();


};

} // end vtkImaging
