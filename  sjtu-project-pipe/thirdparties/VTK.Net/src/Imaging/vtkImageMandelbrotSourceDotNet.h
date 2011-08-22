#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMandelbrotSource : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageMandelbrotSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMandelbrotSource *NewInstance ();
  vtkImageMandelbrotSource^ NewInstance();


  // vtkImageMandelbrotSource *SafeDownCast (vtkObject* o);
  static vtkImageMandelbrotSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetWholeExtent (int extent[6]);
/// <summary>
/// <para>Set/Get the extent of the whole output Volume.</para>
/// </summary>
  void SetWholeExtent(array<int>^ extent);


  // void SetWholeExtent (int minX, int maxX, int minY, int maxY, int minZ, int maxZ);
/// <summary>
/// <para>Set/Get the extent of the whole output Volume.</para>
/// </summary>
  void SetWholeExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ);


  // int  *GetWholeExtent ();
/// <summary>
/// <para>Set/Get the extent of the whole output Volume.</para>
/// </summary>
  array<int>^ GetWholeExtent();


  // void SetConstantSize (int );
/// <summary>
/// <para>This flag determines whether the Size or spacing of  a data set remain constant (when extent is changed).   By default, size remains constant.</para>
/// </summary>
  void SetConstantSize(int arg0);


  // int GetConstantSize ();
/// <summary>
/// <para>This flag determines whether the Size or spacing of  a data set remain constant (when extent is changed).   By default, size remains constant.</para>
/// </summary>
  int GetConstantSize();


  // void ConstantSizeOn ();
/// <summary>
/// <para>This flag determines whether the Size or spacing of  a data set remain constant (when extent is changed).   By default, size remains constant.</para>
/// </summary>
  void ConstantSizeOn();


  // void ConstantSizeOff ();
/// <summary>
/// <para>This flag determines whether the Size or spacing of  a data set remain constant (when extent is changed).   By default, size remains constant.</para>
/// </summary>
  void ConstantSizeOff();


  // void SetProjectionAxes (int x, int y, int z);
/// <summary>
/// <para>Set the projection from  the 4D space (4 parameters / 2 imaginary numbers) to the axes of the 3D Volume.  0=C_Real, 1=C_Imaginary, 2=X_Real, 4=X_Imaginary</para>
/// </summary>
  void SetProjectionAxes(int x, int y, int z);


  // void SetProjectionAxes (int a[3]);this SetProjectionAxes a a a 
/// <summary>
/// <para>Set the projection from  the 4D space (4 parameters / 2 imaginary numbers) to the axes of the 3D Volume.  0=C_Real, 1=C_Imaginary, 2=X_Real, 4=X_Imaginary</para>
/// </summary>
  void SetProjectionAxes(array<int>^ a);


  // int  *GetProjectionAxes ();
/// <summary>
/// <para>Set the projection from  the 4D space (4 parameters / 2 imaginary numbers) to the axes of the 3D Volume.  0=C_Real, 1=C_Imaginary, 2=X_Real, 4=X_Imaginary</para>
/// </summary>
  array<int>^ GetProjectionAxes();


  // void SetOriginCX (double , double , double , double );
/// <summary>
/// <para>Imaginary and real value for C (constant in equation)  and X (initial value).</para>
/// </summary>
  void SetOriginCX(double arg0, double arg1, double arg2, double arg3);


  // void SetOriginCX (double  a[4]);
/// <summary>
/// <para>Imaginary and real value for C (constant in equation)  and X (initial value).</para>
/// </summary>
  void SetOriginCX(array<double>^ a);


  // double  *GetOriginCX ();
/// <summary>
/// <para>Imaginary and real value for C (constant in equation)  and X (initial value).void SetOriginCX(double cReal, double cImag, double xReal, double xImag);</para>
/// </summary>
  array<double>^ GetOriginCX();


  // void SetSampleCX (double , double , double , double );
/// <summary>
/// <para>Imaginary and real value for C (constant in equation)  and X (initial value).</para>
/// </summary>
  void SetSampleCX(double arg0, double arg1, double arg2, double arg3);


  // void SetSampleCX (double  a[4]);
/// <summary>
/// <para>Imaginary and real value for C (constant in equation)  and X (initial value).</para>
/// </summary>
  void SetSampleCX(array<double>^ a);


  // double  *GetSampleCX ();
/// <summary>
/// <para>Imaginary and real value for C (constant in equation)  and X (initial value).void SetOriginCX(double cReal, double cImag, double xReal, double xImag);</para>
/// </summary>
  array<double>^ GetSampleCX();


  // void SetSizeCX (double cReal, double cImag, double xReal, double xImag);
/// <summary>
/// <para>Just a different way of setting the sample.   This sets the size of the 4D volume.  SampleCX is computed from size and extent. Size is ignored when a dimension i 0 (collapsed).</para>
/// </summary>
  void SetSizeCX(double cReal, double cImag, double xReal, double xImag);


  // double *GetSizeCX ();
/// <summary>
/// <para>Just a different way of setting the sample.   This sets the size of the 4D volume.  SampleCX is computed from size and extent. Size is ignored when a dimension i 0 (collapsed).</para>
/// </summary>
  array<double>^ GetSizeCX();


  // void GetSizeCX (double s[4]);
/// <summary>
/// <para>Just a different way of setting the sample.   This sets the size of the 4D volume.  SampleCX is computed from size and extent. Size is ignored when a dimension i 0 (collapsed).</para>
/// </summary>
  void GetSizeCX(array<double>^ s);


  // void SetMaximumNumberOfIterations (unsigned short );
/// <summary>
/// <para>The maximum number of cycles run to see if the value goes over 2</para>
/// </summary>
  void SetMaximumNumberOfIterations(unsigned short arg0);


  // unsigned GetMaximumNumberOfIterationsMinValue ();
/// <summary>
/// <para>The maximum number of cycles run to see if the value goes over 2</para>
/// </summary>
  unsigned short GetMaximumNumberOfIterationsMinValue();


  // unsigned GetMaximumNumberOfIterationsMaxValue ();
/// <summary>
/// <para>The maximum number of cycles run to see if the value goes over 2</para>
/// </summary>
  unsigned short GetMaximumNumberOfIterationsMaxValue();


  // short unsigned GetMaximumNumberOfIterations ();
/// <summary>
/// <para>The maximum number of cycles run to see if the value goes over 2</para>
/// </summary>
  unsigned short GetMaximumNumberOfIterations();


  // void Zoom (double factor);
/// <summary>
/// <para>Convienence for Viewer.  Pan 3D volume relative to spacing.  Zoom constant factor.</para>
/// </summary>
  void Zoom(double factor);


  // void Pan (double x, double y, double z);
/// <summary>
/// <para>Convienence for Viewer.  Pan 3D volume relative to spacing.  Zoom constant factor.</para>
/// </summary>
  void Pan(double x, double y, double z);


  // void CopyOriginAndSample (vtkImageMandelbrotSource *source);
/// <summary>
/// <para>Convienence for Viewer.  Copy the OriginCX and the SpacingCX. What about other parameters ???</para>
/// </summary>
  void CopyOriginAndSample(vtkImageMandelbrotSource^ source);


// Did not wrap:  vtkImageMandelbrotSource ();


// Did not wrap:  ~vtkImageMandelbrotSource ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  double EvaluateSet (double p[4]);


// Did not wrap:  vtkImageMandelbrotSource (const vtkImageMandelbrotSource &);


// Did not wrap:  void vtkImageMandelbrotSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMandelbrotSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMandelbrotSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMandelbrotSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMandelbrotSource();


};

} // end vtkImaging
