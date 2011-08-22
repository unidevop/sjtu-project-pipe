#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCamera;
ref class vtkTupleInterpolator;

public ref class vtkCameraInterpolator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCameraInterpolator *NewInstance ();
  vtkCameraInterpolator^ NewInstance();


  // vtkCameraInterpolator *SafeDownCast (vtkObject* o);
  static vtkCameraInterpolator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCameraInterpolator *New ();


  // int GetNumberOfCameras ();
/// <summary>
/// <para>Return the number of cameras in the list of cameras.</para>
/// </summary>
  int GetNumberOfCameras();


  // double GetMinimumT ();
/// <summary>
/// <para>Obtain some information about the interpolation range. The numbers returned are undefined if the list of cameras is empty.</para>
/// </summary>
  double GetMinimumT();


  // double GetMaximumT ();
/// <summary>
/// <para>Obtain some information about the interpolation range. The numbers returned are undefined if the list of cameras is empty.</para>
/// </summary>
  double GetMaximumT();


  // void Initialize ();
/// <summary>
/// <para>Clear the list of cameras.</para>
/// </summary>
  void Initialize();


  // void AddCamera (double t, vtkCamera *camera);
/// <summary>
/// <para>Add another camera to the list of cameras defining the camera function. Note that using the same time t value more than once replaces the previous camera value at t. At least one camera must be added to define a function.</para>
/// </summary>
  void AddCamera(double t, vtkCamera^ camera);


  // void RemoveCamera (double t);
/// <summary>
/// <para>Delete the camera at a particular parameter t. If there is no camera defined at location t, then the method does nothing.</para>
/// </summary>
  void RemoveCamera(double t);


  // void InterpolateCamera (double t, vtkCamera *camera);
/// <summary>
/// <para>Interpolate the list of cameras and determine a new camera (i.e., fill in the camera provided). If t is outside the range of (min,max) values, then t is clamped to lie within this range.</para>
/// </summary>
  void InterpolateCamera(double t, vtkCamera^ camera);


  // void SetInterpolationType (int );
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the instance variable interpolators (i.e., position, focal point, clipping range, orientation, etc.) interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  void SetInterpolationType(int arg0);


  // int GetInterpolationTypeMinValue ();
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the instance variable interpolators (i.e., position, focal point, clipping range, orientation, etc.) interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  int GetInterpolationTypeMinValue();


  // int GetInterpolationTypeMaxValue ();
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the instance variable interpolators (i.e., position, focal point, clipping range, orientation, etc.) interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  int GetInterpolationTypeMaxValue();


  // int GetInterpolationType ();
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the instance variable interpolators (i.e., position, focal point, clipping range, orientation, etc.) interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  int GetInterpolationType();


  // void SetInterpolationTypeToLinear ();this SetInterpolationType INTERPOLATION_TYPE_LINEAR 
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the instance variable interpolators (i.e., position, focal point, clipping range, orientation, etc.) interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  void SetInterpolationTypeToLinear();


  // void SetInterpolationTypeToSpline ();this SetInterpolationType INTERPOLATION_TYPE_SPLINE 
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the instance variable interpolators (i.e., position, focal point, clipping range, orientation, etc.) interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  void SetInterpolationTypeToSpline();


  // void SetInterpolationTypeToManual ();this SetInterpolationType INTERPOLATION_TYPE_MANUAL 
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the position portion of the camera. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances directly.</para>
/// </summary>
  void SetInterpolationTypeToManual();


  // virtual void SetPositionInterpolator (vtkTupleInterpolator *);
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the position portion of the camera. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances directly.</para>
/// </summary>
  void SetPositionInterpolator(vtkTupleInterpolator^ arg0);


  // vtkTupleInterpolator *GetPositionInterpolator ();
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the position portion of the camera. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances directly.</para>
/// </summary>
  vtkTupleInterpolator^ GetPositionInterpolator();


  // virtual void SetFocalPointInterpolator (vtkTupleInterpolator *);
/// <summary>
/// </summary>
  void SetFocalPointInterpolator(vtkTupleInterpolator^ arg0);


  // vtkTupleInterpolator *GetFocalPointInterpolator ();
/// <summary>
/// </summary>
  vtkTupleInterpolator^ GetFocalPointInterpolator();


  // virtual void SetViewUpInterpolator (vtkTupleInterpolator *);
/// <summary>
/// </summary>
  void SetViewUpInterpolator(vtkTupleInterpolator^ arg0);


  // vtkTupleInterpolator *GetViewUpInterpolator ();
/// <summary>
/// </summary>
  vtkTupleInterpolator^ GetViewUpInterpolator();


  // virtual void SetViewAngleInterpolator (vtkTupleInterpolator *);
/// <summary>
/// </summary>
  void SetViewAngleInterpolator(vtkTupleInterpolator^ arg0);


  // vtkTupleInterpolator *GetViewAngleInterpolator ();
/// <summary>
/// </summary>
  vtkTupleInterpolator^ GetViewAngleInterpolator();


  // virtual void SetParallelScaleInterpolator (vtkTupleInterpolator *);
/// <summary>
/// </summary>
  void SetParallelScaleInterpolator(vtkTupleInterpolator^ arg0);


  // vtkTupleInterpolator *GetParallelScaleInterpolator ();
/// <summary>
/// </summary>
  vtkTupleInterpolator^ GetParallelScaleInterpolator();


  // virtual void SetClippingRangeInterpolator (vtkTupleInterpolator *);
/// <summary>
/// </summary>
  void SetClippingRangeInterpolator(vtkTupleInterpolator^ arg0);


  // vtkTupleInterpolator *GetClippingRangeInterpolator ();
/// <summary>
/// </summary>
  vtkTupleInterpolator^ GetClippingRangeInterpolator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override GetMTime() because we depend on the interpolators which may be modified outside of this class.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkCameraInterpolator ();


// Did not wrap:  virtual ~vtkCameraInterpolator ();


// Did not wrap:  void InitializeInterpolation ();


// Did not wrap:  vtkCameraInterpolator (const vtkCameraInterpolator &);


// Did not wrap:  void vtkCameraInterpolator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCameraInterpolator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCameraInterpolator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCameraInterpolator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCameraInterpolator();


};

} // end vtkRendering
