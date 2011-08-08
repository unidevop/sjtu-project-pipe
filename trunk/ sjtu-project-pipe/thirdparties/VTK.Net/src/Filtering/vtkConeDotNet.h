#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCone : public vtkImplicitFunction
{

public:
// Did not wrap:  static vtkCone *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCone *NewInstance ();
  vtkCone^ NewInstance();


  // vtkCone *SafeDownCast (vtkObject* o);
  static vtkCone^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double g[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ g);


  // void SetAngle (double );
/// <summary>
/// <para>Set/Get the cone angle (expressed in degrees).</para>
/// </summary>
  void SetAngle(double arg0);


  // double GetAngleMinValue ();
/// <summary>
/// <para>Set/Get the cone angle (expressed in degrees).</para>
/// </summary>
  double GetAngleMinValue();


  // double GetAngleMaxValue ();
/// <summary>
/// <para>Set/Get the cone angle (expressed in degrees).</para>
/// </summary>
  double GetAngleMaxValue();


  // double GetAngle ();
/// <summary>
/// <para>Set/Get the cone angle (expressed in degrees).</para>
/// </summary>
  double GetAngle();


// Did not wrap:  vtkCone ();


// Did not wrap:  ~vtkCone ();


// Did not wrap:  vtkCone (const vtkCone &);


// Did not wrap:  void vtkCone 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCone(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCone(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCone();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCone();


};

} // end vtkFiltering
