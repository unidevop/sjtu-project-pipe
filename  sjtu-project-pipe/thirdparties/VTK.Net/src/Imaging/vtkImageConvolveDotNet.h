#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageConvolve : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageConvolve *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Construct an instance of vtkImageConvolve filter.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Construct an instance of vtkImageConvolve filter.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkImageConvolve *NewInstance ();
/// <summary>
/// <para>Construct an instance of vtkImageConvolve filter.</para>
/// </summary>
  vtkImageConvolve^ NewInstance();


  // vtkImageConvolve *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Construct an instance of vtkImageConvolve filter.</para>
/// </summary>
  static vtkImageConvolve^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int  *GetKernelSize ();
/// <summary>
/// <para>Get the kernel size</para>
/// </summary>
  array<int>^ GetKernelSize();


  // void SetKernel3x3 (const double kernel[9]);
/// <summary>
/// <para>Set the kernel to be a given 3x3 or 5x5 or 7x7 kernel.</para>
/// </summary>
  void SetKernel3x3(array<double>^ kernel);


  // void SetKernel5x5 (const double kernel[25]);
/// <summary>
/// <para>Set the kernel to be a given 3x3 or 5x5 or 7x7 kernel.</para>
/// </summary>
  void SetKernel5x5(array<double>^ kernel);


// Did not wrap:  double *GetKernel3x3 ();


  // void GetKernel3x3 (double kernel[9]);
/// <summary>
/// <para>Return an array that contains the kernel.</para>
/// </summary>
  void GetKernel3x3(array<double>^ kernel);


// Did not wrap:  double *GetKernel5x5 ();


  // void GetKernel5x5 (double kernel[25]);
/// <summary>
/// <para>Return an array that contains the kernel.</para>
/// </summary>
  void GetKernel5x5(array<double>^ kernel);


  // void SetKernel3x3x3 (const double kernel[27]);
/// <summary>
/// <para>Set the kernel to be a 3x3x3 or 5x5x5 or 7x7x7 kernel.</para>
/// </summary>
  void SetKernel3x3x3(array<double>^ kernel);


// Did not wrap:  double *GetKernel3x3x3 ();


  // void GetKernel3x3x3 (double kernel[27]);
/// <summary>
/// <para>Return an array that contains the kernel</para>
/// </summary>
  void GetKernel3x3x3(array<double>^ kernel);


// Did not wrap:  vtkImageConvolve ();


// Did not wrap:  ~vtkImageConvolve ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  void GetKernel (double *kernel);


// Did not wrap:  double *GetKernel ();


// Did not wrap:  void SetKernel (const double *kernel, int sizeX, int sizeY, int sizeZ);


// Did not wrap:  vtkImageConvolve (const vtkImageConvolve &);


// Did not wrap:  void vtkImageConvolve 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageConvolve(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageConvolve(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageConvolve();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageConvolve();


};

} // end vtkImaging
