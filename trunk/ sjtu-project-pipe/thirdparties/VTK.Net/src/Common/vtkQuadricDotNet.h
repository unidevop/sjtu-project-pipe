#pragma once

// managed includes
#include "vtkImplicitFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkQuadric : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkQuadric *NewInstance ();
  vtkQuadric^ NewInstance();


  // vtkQuadric *SafeDownCast (vtkObject* o);
  static vtkQuadric^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkQuadric *New ();


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double g[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ g);


  // void SetCoefficients (double a[10]);
  void SetCoefficients(array<double>^ a);


  // void SetCoefficients (double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9);
  void SetCoefficients(double a0, double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9);


  // double  *GetCoefficients ();
  array<double>^ GetCoefficients();


// Did not wrap:  vtkQuadric ();


// Did not wrap:  ~vtkQuadric ();


// Did not wrap:  vtkQuadric (const vtkQuadric &);


// Did not wrap:  void vtkQuadric 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkQuadric(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkQuadric(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkQuadric();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkQuadric();


};

} // end vtkCommon
