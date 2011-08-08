#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkWarpLens : public vtkPointSetAlgorithm
{

public:
// Did not wrap:  static vtkWarpLens *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWarpLens *NewInstance ();
  vtkWarpLens^ NewInstance();


  // vtkWarpLens *SafeDownCast (vtkObject* o);
  static vtkWarpLens^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetKappa (double kappa);
/// <summary>
/// <para>Specify second order symmetric radial lens distortion parameter. This is obsoleted by newer instance variables.</para>
/// </summary>
  void SetKappa(double kappa);


  // double GetKappa ();
/// <summary>
/// <para>Specify second order symmetric radial lens distortion parameter. This is obsoleted by newer instance variables.</para>
/// </summary>
  double GetKappa();


  // void SetCenter (double centerX, double centerY);
/// <summary>
/// <para>Specify the center of radial distortion in pixels. This is obsoleted by newer instance variables.</para>
/// </summary>
  void SetCenter(double centerX, double centerY);


  // double *GetCenter ();
/// <summary>
/// <para>Specify the center of radial distortion in pixels. This is obsoleted by newer instance variables.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetPrincipalPoint (double , double );
/// <summary>
/// <para>Specify the calibrated principal point of the camera/lens</para>
/// </summary>
  void SetPrincipalPoint(double arg0, double arg1);


  // void SetPrincipalPoint (double  a[2]);
/// <summary>
/// <para>Specify the calibrated principal point of the camera/lens</para>
/// </summary>
  void SetPrincipalPoint(array<double>^ a);


  // double  *GetPrincipalPoint ();
/// <summary>
/// <para>Specify the calibrated principal point of the camera/lens</para>
/// </summary>
  array<double>^ GetPrincipalPoint();


  // void SetK1 (double );
/// <summary>
/// <para>Specify the symmetric radial distortion parameters for the lens</para>
/// </summary>
  void SetK1(double arg0);


  // double GetK1 ();
/// <summary>
/// <para>Specify the symmetric radial distortion parameters for the lens</para>
/// </summary>
  double GetK1();


  // void SetK2 (double );
/// <summary>
/// <para>Specify the symmetric radial distortion parameters for the lens</para>
/// </summary>
  void SetK2(double arg0);


  // double GetK2 ();
/// <summary>
/// <para>Specify the symmetric radial distortion parameters for the lens</para>
/// </summary>
  double GetK2();


  // void SetP1 (double );
/// <summary>
/// <para>Specify the decentering distortion parameters for the lens</para>
/// </summary>
  void SetP1(double arg0);


  // double GetP1 ();
/// <summary>
/// <para>Specify the decentering distortion parameters for the lens</para>
/// </summary>
  double GetP1();


  // void SetP2 (double );
/// <summary>
/// <para>Specify the decentering distortion parameters for the lens</para>
/// </summary>
  void SetP2(double arg0);


  // double GetP2 ();
/// <summary>
/// <para>Specify the decentering distortion parameters for the lens</para>
/// </summary>
  double GetP2();


  // void SetFormatWidth (double );
/// <summary>
/// <para>Specify the imager format width / height in mm</para>
/// </summary>
  void SetFormatWidth(double arg0);


  // double GetFormatWidth ();
/// <summary>
/// <para>Specify the imager format width / height in mm</para>
/// </summary>
  double GetFormatWidth();


  // void SetFormatHeight (double );
/// <summary>
/// <para>Specify the imager format width / height in mm</para>
/// </summary>
  void SetFormatHeight(double arg0);


  // double GetFormatHeight ();
/// <summary>
/// <para>Specify the imager format width / height in mm</para>
/// </summary>
  double GetFormatHeight();


  // void SetImageWidth (int );
/// <summary>
/// <para>Specify the image width / height in pixels</para>
/// </summary>
  void SetImageWidth(int arg0);


  // int GetImageWidth ();
/// <summary>
/// <para>Specify the image width / height in pixels</para>
/// </summary>
  int GetImageWidth();


  // void SetImageHeight (int );
/// <summary>
/// <para>Specify the image width / height in pixels</para>
/// </summary>
  void SetImageHeight(int arg0);


  // int GetImageHeight ();
/// <summary>
/// <para>Specify the image width / height in pixels</para>
/// </summary>
  int GetImageHeight();


// Did not wrap:  vtkWarpLens ();


// Did not wrap:  ~vtkWarpLens ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkWarpLens (const vtkWarpLens &);


// Did not wrap:  void vtkWarpLens 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWarpLens(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWarpLens(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWarpLens();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWarpLens();


};

} // end vtkGraphics
