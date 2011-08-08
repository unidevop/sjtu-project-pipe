#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSuperquadric : public vtkImplicitFunction
{

public:
// Did not wrap:  static vtkSuperquadric *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSuperquadric *NewInstance ();
  vtkSuperquadric^ NewInstance();


  // vtkSuperquadric *SafeDownCast (vtkObject* o);
  static vtkSuperquadric^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double g[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ g);


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set the center of the superquadric. Default is 0,0,0.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set the center of the superquadric. Default is 0,0,0.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set the center of the superquadric. Default is 0,0,0.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetScale (double , double , double );
/// <summary>
/// <para>Set the scale factors of the superquadric. Default is 1,1,1.</para>
/// </summary>
  void SetScale(double arg0, double arg1, double arg2);


  // void SetScale (double  a[3]);
/// <summary>
/// <para>Set the scale factors of the superquadric. Default is 1,1,1.</para>
/// </summary>
  void SetScale(array<double>^ a);


  // double  *GetScale ();
/// <summary>
/// <para>Set the scale factors of the superquadric. Default is 1,1,1.</para>
/// </summary>
  array<double>^ GetScale();


  // double GetThickness ();
/// <summary>
/// <para>Set/Get Superquadric ring thickness (toroids only). Changing thickness maintains the outside diameter of the toroid.</para>
/// </summary>
  double GetThickness();


  // void SetThickness (double );
/// <summary>
/// <para>Set/Get Superquadric ring thickness (toroids only). Changing thickness maintains the outside diameter of the toroid.</para>
/// </summary>
  void SetThickness(double arg0);


  // double GetThicknessMinValue ();
/// <summary>
/// <para>Set/Get Superquadric ring thickness (toroids only). Changing thickness maintains the outside diameter of the toroid.</para>
/// </summary>
  double GetThicknessMinValue();


  // double GetThicknessMaxValue ();
/// <summary>
/// <para>Set/Get Superquadric ring thickness (toroids only). Changing thickness maintains the outside diameter of the toroid.</para>
/// </summary>
  double GetThicknessMaxValue();


  // double GetPhiRoundness ();
/// <summary>
/// <para>Set/Get Superquadric north/south roundness.  Values range from 0 (rectangular) to 1 (circular) to higher orders.</para>
/// </summary>
  double GetPhiRoundness();


  // void SetPhiRoundness (double e);
/// <summary>
/// <para>Set/Get Superquadric north/south roundness.  Values range from 0 (rectangular) to 1 (circular) to higher orders.</para>
/// </summary>
  void SetPhiRoundness(double e);


  // double GetThetaRoundness ();
/// <summary>
/// <para>Set/Get Superquadric east/west roundness. Values range from 0 (rectangular) to 1 (circular) to higher orders.</para>
/// </summary>
  double GetThetaRoundness();


  // void SetThetaRoundness (double e);
/// <summary>
/// <para>Set/Get Superquadric east/west roundness. Values range from 0 (rectangular) to 1 (circular) to higher orders.</para>
/// </summary>
  void SetThetaRoundness(double e);


  // void SetSize (double );
/// <summary>
/// <para>Set/Get Superquadric isotropic size.</para>
/// </summary>
  void SetSize(double arg0);


  // double GetSize ();
/// <summary>
/// <para>Set/Get Superquadric isotropic size.</para>
/// </summary>
  double GetSize();


  // void ToroidalOn ();
/// <summary>
/// <para>Set/Get whether or not the superquadric is toroidal (1) or ellipsoidal (0).</para>
/// </summary>
  void ToroidalOn();


  // void ToroidalOff ();
/// <summary>
/// <para>Set/Get whether or not the superquadric is toroidal (1) or ellipsoidal (0).</para>
/// </summary>
  void ToroidalOff();


  // int GetToroidal ();
/// <summary>
/// <para>Set/Get whether or not the superquadric is toroidal (1) or ellipsoidal (0).</para>
/// </summary>
  int GetToroidal();


  // void SetToroidal (int );
/// <summary>
/// <para>Set/Get whether or not the superquadric is toroidal (1) or ellipsoidal (0).</para>
/// </summary>
  void SetToroidal(int arg0);


// Did not wrap:  vtkSuperquadric ();


// Did not wrap:  ~vtkSuperquadric ();


// Did not wrap:  vtkSuperquadric (const vtkSuperquadric &);


// Did not wrap:  void vtkSuperquadric 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSuperquadric(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSuperquadric(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSuperquadric();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSuperquadric();


};

} // end vtkFiltering
