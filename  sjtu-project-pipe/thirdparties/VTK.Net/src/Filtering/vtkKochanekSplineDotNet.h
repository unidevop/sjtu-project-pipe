#pragma once

// managed includes
#include "vtkSplineDotNet.h"
#include "vtkSplineDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkKochanekSpline : public vtkSpline
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkKochanekSpline *NewInstance ();
  vtkKochanekSpline^ NewInstance();


  // vtkKochanekSpline *SafeDownCast (vtkObject* o);
  static vtkKochanekSpline^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkKochanekSpline *New ();


  // void Compute ();
/// <summary>
/// <para>Compute Kochanek Spline coefficients.</para>
/// </summary>
  void Compute();


  // double Evaluate (double t);
/// <summary>
/// <para>Evaluate a 1D Kochanek spline.</para>
/// </summary>
  double Evaluate(double t);


  // void SetDefaultBias (double );
/// <summary>
/// <para>Set the bias for all points. Default is 0.</para>
/// </summary>
  void SetDefaultBias(double arg0);


  // double GetDefaultBias ();
/// <summary>
/// <para>Set the bias for all points. Default is 0.</para>
/// </summary>
  double GetDefaultBias();


  // void SetDefaultTension (double );
/// <summary>
/// <para>Set the tension for all points. Default is 0.</para>
/// </summary>
  void SetDefaultTension(double arg0);


  // double GetDefaultTension ();
/// <summary>
/// <para>Set the tension for all points. Default is 0.</para>
/// </summary>
  double GetDefaultTension();


  // void SetDefaultContinuity (double );
/// <summary>
/// <para>Set the continuity for all points. Default is 0.</para>
/// </summary>
  void SetDefaultContinuity(double arg0);


  // double GetDefaultContinuity ();
/// <summary>
/// <para>Set the continuity for all points. Default is 0.</para>
/// </summary>
  double GetDefaultContinuity();


  // virtual void DeepCopy (vtkSpline *s);
/// <summary>
/// <para>Deep copy of cardinal spline data.</para>
/// </summary>
  void DeepCopy(vtkSpline^ s);


// Did not wrap:  vtkKochanekSpline ();


// Did not wrap:  ~vtkKochanekSpline ();


// Did not wrap:  void Fit1D (int n, double *x, double *y, double tension, double bias, double continuity, double coefficients[4][], int leftConstraint, double leftValue, int rightConstraint, double rightValue);


// Did not wrap:  vtkKochanekSpline (const vtkKochanekSpline &);


// Did not wrap:  void vtkKochanekSpline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkKochanekSpline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkKochanekSpline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkKochanekSpline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkKochanekSpline();


};

} // end vtkFiltering
