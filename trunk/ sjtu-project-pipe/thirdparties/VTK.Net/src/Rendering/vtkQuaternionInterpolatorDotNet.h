#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkQuaternionInterpolator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkQuaternionInterpolator *NewInstance ();
  vtkQuaternionInterpolator^ NewInstance();


  // vtkQuaternionInterpolator *SafeDownCast (vtkObject* o);
  static vtkQuaternionInterpolator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkQuaternionInterpolator *New ();


  // int GetNumberOfQuaternions ();
/// <summary>
/// <para>Return the number of quaternions in the list of quaternions to be interpolated.</para>
/// </summary>
  int GetNumberOfQuaternions();


  // double GetMinimumT ();
/// <summary>
/// <para>Obtain some information about the interpolation range. The numbers returned (corresponding to parameter t, usually thought of as time) are undefined if the list of transforms is empty. This is a convenience method for interpolation.</para>
/// </summary>
  double GetMinimumT();


  // double GetMaximumT ();
/// <summary>
/// <para>Obtain some information about the interpolation range. The numbers returned (corresponding to parameter t, usually thought of as time) are undefined if the list of transforms is empty. This is a convenience method for interpolation.</para>
/// </summary>
  double GetMaximumT();


  // void Initialize ();
/// <summary>
/// <para>Reset the class so that it contains no data; i.e., the array of (t,q[4]) information is discarded.</para>
/// </summary>
  void Initialize();


  // void AddQuaternion (double t, double q[4]);
/// <summary>
/// <para>Add another quaternion to the list of quaternions to be interpolated. Note that using the same time t value more than once replaces the previous quaternion at t.  At least one quaternions must be added to define an interpolation functios.</para>
/// </summary>
  void AddQuaternion(double t, array<double>^ q);


  // void RemoveQuaternion (double t);
/// <summary>
/// <para>Delete the quaternion at a particular parameter t. If there is no quaternion tuple defined at t, then the method does nothing.</para>
/// </summary>
  void RemoveQuaternion(double t);


  // void InterpolateQuaternion (double t, double q[4]);
/// <summary>
/// <para>Interpolate the list of quaternions and determine a new quaternion (i.e., fill in the quaternion provided). If t is outside the range of (min,max) values, then t is clamped to lie within the range. </para>
/// </summary>
  void InterpolateQuaternion(double t, array<double>^ q);


  // void SetInterpolationType (int );
/// <summary>
/// <para>Specify which type of function to use for interpolation. By default (SetInterpolationFunctionToSpline()), cubic spline interpolation using a modifed Kochanek basis is employed. Otherwise, if SetInterpolationFunctionToLinear() is invoked, linear spherical interpolation is used between each pair of quaternions.</para>
/// </summary>
  void SetInterpolationType(int arg0);


  // int GetInterpolationTypeMinValue ();
/// <summary>
/// <para>Specify which type of function to use for interpolation. By default (SetInterpolationFunctionToSpline()), cubic spline interpolation using a modifed Kochanek basis is employed. Otherwise, if SetInterpolationFunctionToLinear() is invoked, linear spherical interpolation is used between each pair of quaternions.</para>
/// </summary>
  int GetInterpolationTypeMinValue();


  // int GetInterpolationTypeMaxValue ();
/// <summary>
/// <para>Specify which type of function to use for interpolation. By default (SetInterpolationFunctionToSpline()), cubic spline interpolation using a modifed Kochanek basis is employed. Otherwise, if SetInterpolationFunctionToLinear() is invoked, linear spherical interpolation is used between each pair of quaternions.</para>
/// </summary>
  int GetInterpolationTypeMaxValue();


  // int GetInterpolationType ();
/// <summary>
/// <para>Specify which type of function to use for interpolation. By default (SetInterpolationFunctionToSpline()), cubic spline interpolation using a modifed Kochanek basis is employed. Otherwise, if SetInterpolationFunctionToLinear() is invoked, linear spherical interpolation is used between each pair of quaternions.</para>
/// </summary>
  int GetInterpolationType();


  // void SetInterpolationTypeToLinear ();this SetInterpolationType INTERPOLATION_TYPE_LINEAR 
/// <summary>
/// <para>Specify which type of function to use for interpolation. By default (SetInterpolationFunctionToSpline()), cubic spline interpolation using a modifed Kochanek basis is employed. Otherwise, if SetInterpolationFunctionToLinear() is invoked, linear spherical interpolation is used between each pair of quaternions.</para>
/// </summary>
  void SetInterpolationTypeToLinear();


  // void SetInterpolationTypeToSpline ();this SetInterpolationType INTERPOLATION_TYPE_SPLINE 
  void SetInterpolationTypeToSpline();


// Did not wrap:  vtkQuaternionInterpolator ();


// Did not wrap:  virtual ~vtkQuaternionInterpolator ();


// Did not wrap:  void Slerp (double t, double q0[4], double q1[4], double q[4]);


// Did not wrap:  static void InnerPoint (double q0[4], double q1[4], double q2[4], double q[4]);


// Did not wrap:  vtkQuaternionInterpolator (const vtkQuaternionInterpolator &);


// Did not wrap:  void vtkQuaternionInterpolator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkQuaternionInterpolator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkQuaternionInterpolator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkQuaternionInterpolator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkQuaternionInterpolator();


};

} // end vtkRendering
