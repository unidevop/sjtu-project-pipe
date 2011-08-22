#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTupleInterpolator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTupleInterpolator *NewInstance ();
  vtkTupleInterpolator^ NewInstance();


  // vtkTupleInterpolator *SafeDownCast (vtkObject* o);
  static vtkTupleInterpolator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTupleInterpolator *New ();


  // void SetNumberOfComponents (int numComp);
/// <summary>
/// <para>Specify the number of tuple components to interpolate. Note that setting this value discards any previously inserted data.</para>
/// </summary>
  void SetNumberOfComponents(int numComp);


  // int GetNumberOfComponents ();
/// <summary>
/// <para>Specify the number of tuple components to interpolate. Note that setting this value discards any previously inserted data.</para>
/// </summary>
  int GetNumberOfComponents();


  // int GetNumberOfTuples ();
/// <summary>
/// <para>Return the number of tuples in the list of tuples to be interpolated.</para>
/// </summary>
  int GetNumberOfTuples();


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
/// <para>Reset the class so that it contains no (t,tuple) information.</para>
/// </summary>
  void Initialize();


  // void AddTuple (double t, double tuple[]);
/// <summary>
/// <para>Add another tuple to the list of tuples to be interpolated.  Note that using the same time t value more than once replaces the previous tuple value at t.  At least two tuples must be added to define an interpolation function.</para>
/// </summary>
  void AddTuple(double t, array<double>^ tuple);


  // void RemoveTuple (double t);
/// <summary>
/// <para>Delete the tuple at a particular parameter t. If there is no tuple defined at t, then the method does nothing.</para>
/// </summary>
  void RemoveTuple(double t);


  // void InterpolateTuple (double t, double tuple[]);
/// <summary>
/// <para>Interpolate the list of tuples and determine a new tuple (i.e., fill in the tuple provided). If t is outside the range of (min,max) values, then t is clamped. Note that each component of tuple[] is interpolated independently.</para>
/// </summary>
  void InterpolateTuple(double t, array<double>^ tuple);


  // void SetInterpolationType (int type);
/// <summary>
/// <para>Specify which type of function to use for interpolation. By default spline interpolation (SetInterpolationFunctionToSpline()) is used (i.e., a Kochanek spline) and the InterpolatingSpline instance variable is used to birth the actual interpolation splines via a combination of NewInstance() and DeepCopy(). You may also choose to use linear interpolation by invoking SetInterpolationFunctionToLinear(). Note that changing the type of interpolation causes previously inserted data to be discarded.</para>
/// </summary>
  void SetInterpolationType(int type);


  // int GetInterpolationType ();
/// <summary>
/// <para>Specify which type of function to use for interpolation. By default spline interpolation (SetInterpolationFunctionToSpline()) is used (i.e., a Kochanek spline) and the InterpolatingSpline instance variable is used to birth the actual interpolation splines via a combination of NewInstance() and DeepCopy(). You may also choose to use linear interpolation by invoking SetInterpolationFunctionToLinear(). Note that changing the type of interpolation causes previously inserted data to be discarded.</para>
/// </summary>
  int GetInterpolationType();


  // void SetInterpolationTypeToLinear ();this SetInterpolationType INTERPOLATION_TYPE_LINEAR 
/// <summary>
/// <para>Specify which type of function to use for interpolation. By default spline interpolation (SetInterpolationFunctionToSpline()) is used (i.e., a Kochanek spline) and the InterpolatingSpline instance variable is used to birth the actual interpolation splines via a combination of NewInstance() and DeepCopy(). You may also choose to use linear interpolation by invoking SetInterpolationFunctionToLinear(). Note that changing the type of interpolation causes previously inserted data to be discarded.</para>
/// </summary>
  void SetInterpolationTypeToLinear();


  // void SetInterpolationTypeToSpline ();this SetInterpolationType INTERPOLATION_TYPE_SPLINE 
/// <summary>
/// <para>If the InterpolationType is set to spline, then this method applies. By default Kochanek interpolation is used, but you can specify any instance of vtkSpline to use. Note that the actual interpolating splines are created by invoking NewInstance() followed by DeepCopy() on the interpolating spline specified here, for each tuple component to interpolate.</para>
/// </summary>
  void SetInterpolationTypeToSpline();


  // void SetInterpolatingSpline (vtkSpline *);
/// <summary>
/// <para>If the InterpolationType is set to spline, then this method applies. By default Kochanek interpolation is used, but you can specify any instance of vtkSpline to use. Note that the actual interpolating splines are created by invoking NewInstance() followed by DeepCopy() on the interpolating spline specified here, for each tuple component to interpolate.</para>
/// </summary>
  void SetInterpolatingSpline(vtkSpline^ arg0);


  // vtkSpline *GetInterpolatingSpline ();
/// <summary>
/// <para>If the InterpolationType is set to spline, then this method applies. By default Kochanek interpolation is used, but you can specify any instance of vtkSpline to use. Note that the actual interpolating splines are created by invoking NewInstance() followed by DeepCopy() on the interpolating spline specified here, for each tuple component to interpolate.</para>
/// </summary>
  vtkSpline^ GetInterpolatingSpline();


// Did not wrap:  vtkTupleInterpolator ();


// Did not wrap:  virtual ~vtkTupleInterpolator ();


// Did not wrap:  void InitializeInterpolation ();


// Did not wrap:  vtkTupleInterpolator (const vtkTupleInterpolator &);


// Did not wrap:  void vtkTupleInterpolator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTupleInterpolator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTupleInterpolator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTupleInterpolator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTupleInterpolator();


};

} // end vtkRendering
