#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkSpline;

public ref class vtkParametricSpline : public vtkParametricFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParametricSpline *NewInstance ();
  vtkParametricSpline^ NewInstance();


  // vtkParametricSpline *SafeDownCast (vtkObject* o);
  static vtkParametricSpline^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkParametricSpline *New ();


  // virtual int GetDimension ();return 
/// <summary>
/// <para>Evaluate the spline at parametric coordinate u[0] returning the point coordinate Pt[3].</para>
/// </summary>
  int GetDimension();


  // virtual void Evaluate (double u[3], double Pt[3], double Du[9]);
/// <summary>
/// <para>Evaluate the spline at parametric coordinate u[0] returning the point coordinate Pt[3].</para>
/// </summary>
  void Evaluate(array<double>^ u, array<double>^ Pt, array<double>^ Du);


  // virtual double EvaluateScalar (double u[3], double Pt[3], double Du[9]);
/// <summary>
/// <para>Evaluate a scalar value at parametric coordinate u[0] and Pt[3]. The scalar value is just the parameter u[0].</para>
/// </summary>
  double EvaluateScalar(array<double>^ u, array<double>^ Pt, array<double>^ Du);


  // void SetXSpline (vtkSpline *);
/// <summary>
/// <para>By default, this class is constructed with three instances of vtkCardinalSpline (for each of the x-y-z coordinate axes). The user may choose to create and assign their own instances of vtkSpline.</para>
/// </summary>
  void SetXSpline(vtkSpline^ arg0);


  // void SetYSpline (vtkSpline *);
/// <summary>
/// <para>By default, this class is constructed with three instances of vtkCardinalSpline (for each of the x-y-z coordinate axes). The user may choose to create and assign their own instances of vtkSpline.</para>
/// </summary>
  void SetYSpline(vtkSpline^ arg0);


  // void SetZSpline (vtkSpline *);
/// <summary>
/// <para>By default, this class is constructed with three instances of vtkCardinalSpline (for each of the x-y-z coordinate axes). The user may choose to create and assign their own instances of vtkSpline.</para>
/// </summary>
  void SetZSpline(vtkSpline^ arg0);


  // vtkSpline *GetXSpline ();
/// <summary>
/// <para>By default, this class is constructed with three instances of vtkCardinalSpline (for each of the x-y-z coordinate axes). The user may choose to create and assign their own instances of vtkSpline.</para>
/// </summary>
  vtkSpline^ GetXSpline();


  // vtkSpline *GetYSpline ();
/// <summary>
/// <para>By default, this class is constructed with three instances of vtkCardinalSpline (for each of the x-y-z coordinate axes). The user may choose to create and assign their own instances of vtkSpline.</para>
/// </summary>
  vtkSpline^ GetYSpline();


  // vtkSpline *GetZSpline ();
/// <summary>
/// <para>By default, this class is constructed with three instances of vtkCardinalSpline (for each of the x-y-z coordinate axes). The user may choose to create and assign their own instances of vtkSpline.</para>
/// </summary>
  vtkSpline^ GetZSpline();


  // void SetPoints (vtkPoints *);
/// <summary>
/// <para>Specify the list of points defining the spline. Do this by  specifying a vtkPoints array containing the points. Note that the order of the points in vtkPoints is the order that the splines will be fit.</para>
/// </summary>
  void SetPoints(vtkPoints^ arg0);


  // vtkPoints *GetPoints ();
/// <summary>
/// <para>Specify the list of points defining the spline. Do this by  specifying a vtkPoints array containing the points. Note that the order of the points in vtkPoints is the order that the splines will be fit.</para>
/// </summary>
  vtkPoints^ GetPoints();


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


  // void SetParameterizeByLength (int );
/// <summary>
/// <para>Control whether the spline is parameterized by length or by point index. Default is by length.</para>
/// </summary>
  void SetParameterizeByLength(int arg0);


  // int GetParameterizeByLength ();
/// <summary>
/// <para>Control whether the spline is parameterized by length or by point index. Default is by length.</para>
/// </summary>
  int GetParameterizeByLength();


  // void ParameterizeByLengthOn ();
/// <summary>
/// <para>Control whether the spline is parameterized by length or by point index. Default is by length.</para>
/// </summary>
  void ParameterizeByLengthOn();


  // void ParameterizeByLengthOff ();
/// <summary>
/// <para>Control whether the spline is parameterized by length or by point index. Default is by length.</para>
/// </summary>
  void ParameterizeByLengthOff();


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


// Did not wrap:  vtkParametricSpline ();


// Did not wrap:  ~vtkParametricSpline ();


// Did not wrap:  int Initialize ();


// Did not wrap:  vtkParametricSpline (const vtkParametricSpline &);


// Did not wrap:  void vtkParametricSpline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParametricSpline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParametricSpline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParametricSpline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParametricSpline();


};

} // end vtkFiltering
