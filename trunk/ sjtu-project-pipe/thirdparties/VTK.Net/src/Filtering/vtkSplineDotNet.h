#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSpline : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSpline *NewInstance ();
  vtkSpline^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetParametricRange (double tMin, double tMax);
/// <summary>
/// <para>Set/Get the parametric range. If not set, the range is determined implicitly by keeping track of the (min,max) parameter values for t. If set, the AddPoint() method will clamp the t value to lie within the specified range.</para>
/// </summary>
  void SetParametricRange(double tMin, double tMax);


  // void SetParametricRange (double tRange[2]);this SetParametricRange tRange tRange 
/// <summary>
/// <para>Set/Get the parametric range. If not set, the range is determined implicitly by keeping track of the (min,max) parameter values for t. If set, the AddPoint() method will clamp the t value to lie within the specified range.</para>
/// </summary>
  void SetParametricRange(array<double>^ tRange);


  // void GetParametricRange (double tRange[2]) const;
/// <summary>
/// <para>Set/Get the parametric range. If not set, the range is determined implicitly by keeping track of the (min,max) parameter values for t. If set, the AddPoint() method will clamp the t value to lie within the specified range.</para>
/// </summary>
  void GetParametricRange(array<double>^ tRange);


  // void SetClampValue (int );
/// <summary>
/// <para>Set/Get ClampValue. If On, results of the interpolation will be clamped to the min/max of the input data.</para>
/// </summary>
  void SetClampValue(int arg0);


  // int GetClampValue ();
/// <summary>
/// <para>Set/Get ClampValue. If On, results of the interpolation will be clamped to the min/max of the input data.</para>
/// </summary>
  int GetClampValue();


  // void ClampValueOn ();
/// <summary>
/// <para>Set/Get ClampValue. If On, results of the interpolation will be clamped to the min/max of the input data.</para>
/// </summary>
  void ClampValueOn();


  // void ClampValueOff ();
/// <summary>
/// <para>Set/Get ClampValue. If On, results of the interpolation will be clamped to the min/max of the input data.</para>
/// </summary>
  void ClampValueOff();


  // virtual void Compute () = 0;
/// <summary>
/// <para>Compute the coefficients for the spline.</para>
/// </summary>
  void Compute();


  // virtual double Evaluate (double t) = 0;
/// <summary>
/// <para>Interpolate the value of the spline at parametric location of t.</para>
/// </summary>
  double Evaluate(double t);


  // int GetNumberOfPoints ();
/// <summary>
/// <para>Return the number of points inserted thus far.</para>
/// </summary>
  int GetNumberOfPoints();


  // void AddPoint (double t, double x);
/// <summary>
/// <para>Add a pair of points to be fit with the spline.</para>
/// </summary>
  void AddPoint(double t, double x);


  // void RemovePoint (double t);
/// <summary>
/// <para>Remove a point from the data to be fit with the spline.</para>
/// </summary>
  void RemovePoint(double t);


  // void RemoveAllPoints ();
/// <summary>
/// <para>Remove all points from the data.</para>
/// </summary>
  void RemoveAllPoints();


  // void SetClosed (int );
/// <summary>
/// <para>Control whether the spline is open or closed. A closed spline forms a continuous loop: the first and last points are the same, and derivatives are continuous.</para>
/// </summary>
  void SetClosed(int arg0);


  // int GetClosed ();
/// <summary>
/// <para>Control whether the spline is open or closed. A closed spline forms a continuous loop: the first and last points are the same, and derivatives are continuous.</para>
/// </summary>
  int GetClosed();


  // void ClosedOn ();
/// <summary>
/// <para>Control whether the spline is open or closed. A closed spline forms a continuous loop: the first and last points are the same, and derivatives are continuous.</para>
/// </summary>
  void ClosedOn();


  // void ClosedOff ();
/// <summary>
/// <para>Control whether the spline is open or closed. A closed spline forms a continuous loop: the first and last points are the same, and derivatives are continuous.</para>
/// </summary>
  void ClosedOff();


  // void SetLeftConstraint (int );
/// <summary>
/// <para>Set the type of constraint of the left(right) end points. Four constraints are available:</para>
/// <para>0: the first derivative at left(right) most point is determined from the line defined from the first(last) two points.</para>
/// <para>1: the first derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>2: the second derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>3: the second derivative at left(right)most points is Left(Right)Value times second derivative at first interior point.</para>
/// </summary>
  void SetLeftConstraint(int arg0);


  // int GetLeftConstraintMinValue ();
/// <summary>
/// <para>Set the type of constraint of the left(right) end points. Four constraints are available:</para>
/// <para>0: the first derivative at left(right) most point is determined from the line defined from the first(last) two points.</para>
/// <para>1: the first derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>2: the second derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>3: the second derivative at left(right)most points is Left(Right)Value times second derivative at first interior point.</para>
/// </summary>
  int GetLeftConstraintMinValue();


  // int GetLeftConstraintMaxValue ();
/// <summary>
/// <para>Set the type of constraint of the left(right) end points. Four constraints are available:</para>
/// <para>0: the first derivative at left(right) most point is determined from the line defined from the first(last) two points.</para>
/// <para>1: the first derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>2: the second derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>3: the second derivative at left(right)most points is Left(Right)Value times second derivative at first interior point.</para>
/// </summary>
  int GetLeftConstraintMaxValue();


  // int GetLeftConstraint ();
/// <summary>
/// <para>Set the type of constraint of the left(right) end points. Four constraints are available:</para>
/// <para>0: the first derivative at left(right) most point is determined from the line defined from the first(last) two points.</para>
/// <para>1: the first derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>2: the second derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>3: the second derivative at left(right)most points is Left(Right)Value times second derivative at first interior point.</para>
/// </summary>
  int GetLeftConstraint();


  // void SetRightConstraint (int );
/// <summary>
/// <para>Set the type of constraint of the left(right) end points. Four constraints are available:</para>
/// <para>0: the first derivative at left(right) most point is determined from the line defined from the first(last) two points.</para>
/// <para>1: the first derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>2: the second derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>3: the second derivative at left(right)most points is Left(Right)Value times second derivative at first interior point.</para>
/// </summary>
  void SetRightConstraint(int arg0);


  // int GetRightConstraintMinValue ();
/// <summary>
/// <para>Set the type of constraint of the left(right) end points. Four constraints are available:</para>
/// <para>0: the first derivative at left(right) most point is determined from the line defined from the first(last) two points.</para>
/// <para>1: the first derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>2: the second derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>3: the second derivative at left(right)most points is Left(Right)Value times second derivative at first interior point.</para>
/// </summary>
  int GetRightConstraintMinValue();


  // int GetRightConstraintMaxValue ();
/// <summary>
/// <para>Set the type of constraint of the left(right) end points. Four constraints are available:</para>
/// <para>0: the first derivative at left(right) most point is determined from the line defined from the first(last) two points.</para>
/// <para>1: the first derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>2: the second derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>3: the second derivative at left(right)most points is Left(Right)Value times second derivative at first interior point.</para>
/// </summary>
  int GetRightConstraintMaxValue();


  // int GetRightConstraint ();
/// <summary>
/// <para>Set the type of constraint of the left(right) end points. Four constraints are available:</para>
/// <para>0: the first derivative at left(right) most point is determined from the line defined from the first(last) two points.</para>
/// <para>1: the first derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>2: the second derivative at left(right) most point is set to Left(Right)Value.</para>
/// <para>3: the second derivative at left(right)most points is Left(Right)Value times second derivative at first interior point.</para>
/// </summary>
  int GetRightConstraint();


  // void SetLeftValue (double );
/// <summary>
/// <para>The values of the derivative on the left and right sides. The value is used only if the left(right) constraint is type 1-3.</para>
/// </summary>
  void SetLeftValue(double arg0);


  // double GetLeftValue ();
/// <summary>
/// <para>The values of the derivative on the left and right sides. The value is used only if the left(right) constraint is type 1-3.</para>
/// </summary>
  double GetLeftValue();


  // void SetRightValue (double );
/// <summary>
/// <para>The values of the derivative on the left and right sides. The value is used only if the left(right) constraint is type 1-3.</para>
/// </summary>
  void SetRightValue(double arg0);


  // double GetRightValue ();
/// <summary>
/// <para>The values of the derivative on the left and right sides. The value is used only if the left(right) constraint is type 1-3.</para>
/// </summary>
  double GetRightValue();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the Piecewise function.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void DeepCopy (vtkSpline *s);
/// <summary>
/// <para>Deep copy of spline data.</para>
/// </summary>
  void DeepCopy(vtkSpline^ s);


// Did not wrap:  vtkSpline ();


// Did not wrap:  ~vtkSpline ();


// Did not wrap:  double ComputeLeftDerivative ();


// Did not wrap:  double ComputeRightDerivative ();


// Did not wrap:  int FindIndex (int size, double t);


// Did not wrap:  vtkSpline (const vtkSpline &);


// Did not wrap:  void vtkSpline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSpline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSpline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSpline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSpline();


};

} // end vtkFiltering
