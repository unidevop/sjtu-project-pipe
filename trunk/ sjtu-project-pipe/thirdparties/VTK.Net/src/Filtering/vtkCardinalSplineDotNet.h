#pragma once

// managed includes
#include "vtkSplineDotNet.h"
#include "vtkSplineDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkCardinalSpline : public vtkSpline
{

public:
// Did not wrap:  static vtkCardinalSpline *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCardinalSpline *NewInstance ();
  vtkCardinalSpline^ NewInstance();


  // vtkCardinalSpline *SafeDownCast (vtkObject* o);
  static vtkCardinalSpline^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Compute ();
  void Compute();


  // virtual double Evaluate (double t);
/// <summary>
/// <para>Evaluate a 1D cardinal spline.</para>
/// </summary>
  double Evaluate(double t);


  // virtual void DeepCopy (vtkSpline *s);
/// <summary>
/// <para>Deep copy of cardinal spline data.</para>
/// </summary>
  void DeepCopy(vtkSpline^ s);


// Did not wrap:  vtkCardinalSpline ();


// Did not wrap:  ~vtkCardinalSpline ();


// Did not wrap:  void Fit1D (int n, double *x, double *y, double *w, double coefficients[4][], int leftConstraint, double leftValue, int rightConstraint, double rightValue);


// Did not wrap:  void FitClosed1D (int n, double *x, double *y, double *w, double coefficients[4][]);


// Did not wrap:  vtkCardinalSpline (const vtkCardinalSpline &);


// Did not wrap:  void vtkCardinalSpline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCardinalSpline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCardinalSpline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCardinalSpline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCardinalSpline();


};

} // end vtkFiltering
