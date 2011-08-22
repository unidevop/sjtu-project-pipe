#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkProp3D;
ref class vtkQuaternionInterpolator;
ref class vtkTupleInterpolator;

public ref class vtkTransformInterpolator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTransformInterpolator *NewInstance ();
  vtkTransformInterpolator^ NewInstance();


  // vtkTransformInterpolator *SafeDownCast (vtkObject* o);
  static vtkTransformInterpolator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTransformInterpolator *New ();


  // int GetNumberOfTransforms ();
/// <summary>
/// <para>Return the number of transforms in the list of transforms.</para>
/// </summary>
  int GetNumberOfTransforms();


  // double GetMinimumT ();
/// <summary>
/// <para>Obtain some information about the interpolation range. The numbers returned (corresponding to parameter t, usually thought of as time) are undefined if the list of transforms is empty.</para>
/// </summary>
  double GetMinimumT();


  // double GetMaximumT ();
/// <summary>
/// <para>Obtain some information about the interpolation range. The numbers returned (corresponding to parameter t, usually thought of as time) are undefined if the list of transforms is empty.</para>
/// </summary>
  double GetMaximumT();


  // void Initialize ();
/// <summary>
/// <para>Clear the list of transforms.</para>
/// </summary>
  void Initialize();


  // void AddTransform (double t, vtkTransform *xform);
/// <summary>
/// <para>Add another transform to the list of transformations defining the transform function. Note that using the same time t value more than once replaces the previous transform value at t. At least two transforms must be added to define a function. There are variants to this method depending on whether you are adding a vtkTransform, vtkMaxtirx4x4, and/or vtkProp3D.</para>
/// </summary>
  void AddTransform(double t, vtkTransform^ xform);


  // void AddTransform (double t, vtkMatrix4x4 *matrix);
/// <summary>
/// <para>Add another transform to the list of transformations defining the transform function. Note that using the same time t value more than once replaces the previous transform value at t. At least two transforms must be added to define a function. There are variants to this method depending on whether you are adding a vtkTransform, vtkMaxtirx4x4, and/or vtkProp3D.</para>
/// </summary>
  void AddTransform(double t, vtkMatrix4x4^ matrix);


  // void AddTransform (double t, vtkProp3D *prop3D);
/// <summary>
/// <para>Add another transform to the list of transformations defining the transform function. Note that using the same time t value more than once replaces the previous transform value at t. At least two transforms must be added to define a function. There are variants to this method depending on whether you are adding a vtkTransform, vtkMaxtirx4x4, and/or vtkProp3D.</para>
/// </summary>
  void AddTransform(double t, vtkProp3D^ prop3D);


  // void RemoveTransform (double t);
/// <summary>
/// <para>Delete the transform at a particular parameter t. If there is no transform defined at location t, then the method does nothing.</para>
/// </summary>
  void RemoveTransform(double t);


  // void InterpolateTransform (double t, vtkTransform *xform);
/// <summary>
/// <para>Interpolate the list of transforms and determine a new transform (i.e., fill in the transformation provided). If t is outside the range of (min,max) values, then t is clamped.</para>
/// </summary>
  void InterpolateTransform(double t, vtkTransform^ xform);


  // void SetInterpolationType (int );
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the position, scale and orientation interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  void SetInterpolationType(int arg0);


  // int GetInterpolationTypeMinValue ();
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the position, scale and orientation interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  int GetInterpolationTypeMinValue();


  // int GetInterpolationTypeMaxValue ();
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the position, scale and orientation interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  int GetInterpolationTypeMaxValue();


  // int GetInterpolationType ();
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the position, scale and orientation interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  int GetInterpolationType();


  // void SetInterpolationTypeToLinear ();this SetInterpolationType INTERPOLATION_TYPE_LINEAR 
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the position, scale and orientation interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  void SetInterpolationTypeToLinear();


  // void SetInterpolationTypeToSpline ();this SetInterpolationType INTERPOLATION_TYPE_SPLINE 
/// <summary>
/// <para>These are convenience methods to switch between linear and spline interpolation. The methods simply forward the request for linear or spline interpolation to the position, scale and orientation interpolators. Note that if the InterpolationType is set to &quot;Manual&quot;, then the interpolators are expected to be directly manipulated and this class does not forward the request for interpolation type to its interpolators.</para>
/// </summary>
  void SetInterpolationTypeToSpline();


  // void SetInterpolationTypeToManual ();this SetInterpolationType INTERPOLATION_TYPE_MANUAL 
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the position portion of the transformation matrix. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances.</para>
/// </summary>
  void SetInterpolationTypeToManual();


  // virtual void SetPositionInterpolator (vtkTupleInterpolator *);
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the position portion of the transformation matrix. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances.</para>
/// </summary>
  void SetPositionInterpolator(vtkTupleInterpolator^ arg0);


  // vtkTupleInterpolator *GetPositionInterpolator ();
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the position portion of the transformation matrix. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances.</para>
/// </summary>
  vtkTupleInterpolator^ GetPositionInterpolator();


  // virtual void SetScaleInterpolator (vtkTupleInterpolator *);
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the scale portion of the transformation matrix. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances.</para>
/// </summary>
  void SetScaleInterpolator(vtkTupleInterpolator^ arg0);


  // vtkTupleInterpolator *GetScaleInterpolator ();
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the scale portion of the transformation matrix. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances.</para>
/// </summary>
  vtkTupleInterpolator^ GetScaleInterpolator();


  // virtual void SetRotationInterpolator (vtkQuaternionInterpolator *);
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the orientation portion of the transformation matrix. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances.</para>
/// </summary>
  void SetRotationInterpolator(vtkQuaternionInterpolator^ arg0);


  // vtkQuaternionInterpolator *GetRotationInterpolator ();
/// <summary>
/// <para>Set/Get the tuple interpolator used to interpolate the orientation portion of the transformation matrix. Note that you can modify the behavior of the interpolator (linear vs spline interpolation; change spline basis) by manipulating the interpolator instances.</para>
/// </summary>
  vtkQuaternionInterpolator^ GetRotationInterpolator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override GetMTime() because we depend on the interpolators which may be modified outside of this class.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkTransformInterpolator ();


// Did not wrap:  virtual ~vtkTransformInterpolator ();


// Did not wrap:  void InitializeInterpolation ();


// Did not wrap:  vtkTransformInterpolator (const vtkTransformInterpolator &);


// Did not wrap:  void vtkTransformInterpolator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTransformInterpolator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTransformInterpolator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTransformInterpolator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTransformInterpolator();


};

} // end vtkRendering
