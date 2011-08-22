#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSphere : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSphere *NewInstance ();
  vtkSphere^ NewInstance();


  // vtkSphere *SafeDownCast (vtkObject* o);
  static vtkSphere^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSphere *New ();


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double n[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ n);


  // void SetRadius (double );
/// <summary>
/// <para>Set / get the radius of the sphere.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadius ();
/// <summary>
/// <para>Set / get the radius of the sphere.</para>
/// </summary>
  double GetRadius();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set / get the center of the sphere.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set / get the center of the sphere.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set / get the center of the sphere.</para>
/// </summary>
  array<double>^ GetCenter();


// Did not wrap:  vtkSphere ();


// Did not wrap:  ~vtkSphere ();


// Did not wrap:  vtkSphere (const vtkSphere &);


// Did not wrap:  void vtkSphere 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSphere(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSphere(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSphere();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSphere();


};

} // end vtkFiltering
