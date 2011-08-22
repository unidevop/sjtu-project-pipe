#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCylinder : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCylinder *NewInstance ();
  vtkCylinder^ NewInstance();


  // vtkCylinder *SafeDownCast (vtkObject* o);
  static vtkCylinder^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCylinder *New ();


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double g[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ g);


  // void SetRadius (double );
/// <summary>
/// <para>Set/Get cylinder radius.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadius ();
/// <summary>
/// <para>Set/Get cylinder radius.</para>
/// </summary>
  double GetRadius();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set/Get cylinder center</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set/Get cylinder center</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set/Get cylinder center</para>
/// </summary>
  array<double>^ GetCenter();


// Did not wrap:  vtkCylinder ();


// Did not wrap:  ~vtkCylinder ();


// Did not wrap:  vtkCylinder (const vtkCylinder &);


// Did not wrap:  void vtkCylinder 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCylinder(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCylinder(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCylinder();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCylinder();


};

} // end vtkFiltering
