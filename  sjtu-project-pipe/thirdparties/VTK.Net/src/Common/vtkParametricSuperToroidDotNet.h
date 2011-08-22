#pragma once

// managed includes
#include "vtkParametricFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkParametricSuperToroid : public vtkParametricFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParametricSuperToroid *NewInstance ();
  vtkParametricSuperToroid^ NewInstance();


  // vtkParametricSuperToroid *SafeDownCast (vtkObject* o);
  static vtkParametricSuperToroid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkParametricSuperToroid *New ();


  // virtual int GetDimension ();return 
/// <summary>
/// <para>Set/Get the radius from the center to the middle of the ring of the supertoroid.  Default = 1.</para>
/// </summary>
  int GetDimension();


  // void SetRingRadius (double );
/// <summary>
/// <para>Set/Get the radius from the center to the middle of the ring of the supertoroid.  Default = 1.</para>
/// </summary>
  void SetRingRadius(double arg0);


  // double GetRingRadius ();
/// <summary>
/// <para>Set/Get the radius from the center to the middle of the ring of the supertoroid.  Default = 1.</para>
/// </summary>
  double GetRingRadius();


  // void SetCrossSectionRadius (double );
/// <summary>
/// <para>Set/Get the radius of the cross section of ring of the supertoroid. Default = 0.5.</para>
/// </summary>
  void SetCrossSectionRadius(double arg0);


  // double GetCrossSectionRadius ();
/// <summary>
/// <para>Set/Get the radius of the cross section of ring of the supertoroid. Default = 0.5.</para>
/// </summary>
  double GetCrossSectionRadius();


  // void SetXRadius (double );
/// <summary>
/// <para>Set/Get the scaling factor for the x-axis. Default = 1.</para>
/// </summary>
  void SetXRadius(double arg0);


  // double GetXRadius ();
/// <summary>
/// <para>Set/Get the scaling factor for the x-axis. Default = 1.</para>
/// </summary>
  double GetXRadius();


  // void SetYRadius (double );
/// <summary>
/// <para>Set/Get the scaling factor for the y-axis. Default = 1.</para>
/// </summary>
  void SetYRadius(double arg0);


  // double GetYRadius ();
/// <summary>
/// <para>Set/Get the scaling factor for the y-axis. Default = 1.</para>
/// </summary>
  double GetYRadius();


  // void SetZRadius (double );
/// <summary>
/// <para>Set/Get the scaling factor for the z-axis. Default = 1.</para>
/// </summary>
  void SetZRadius(double arg0);


  // double GetZRadius ();
/// <summary>
/// <para>Set/Get the scaling factor for the z-axis. Default = 1.</para>
/// </summary>
  double GetZRadius();


  // void SetN1 (double );
/// <summary>
/// <para>Set/Get the shape of the torus ring.  Default = 1.</para>
/// </summary>
  void SetN1(double arg0);


  // double GetN1 ();
/// <summary>
/// <para>Set/Get the shape of the torus ring.  Default = 1.</para>
/// </summary>
  double GetN1();


  // void SetN2 (double );
/// <summary>
/// <para>Set/Get the shape of the cross section of the ring. Default = 1.</para>
/// </summary>
  void SetN2(double arg0);


  // double GetN2 ();
/// <summary>
/// <para>Set/Get the shape of the cross section of the ring. Default = 1.</para>
/// </summary>
  double GetN2();


  // virtual void Evaluate (double uvw[3], double Pt[3], double Duvw[9]);
/// <summary>
/// <para>A supertoroid.</para>
/// <para>This function performs the mapping \f$f(u,v) \rightarrow (x,y,x)\f$, returning it as Pt. It also returns the partial derivatives Du and Dv. \f$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv, dy/dv, dz/dv)\f$ . Then the normal is \f$N = Du X Dv\f$ .</para>
/// </summary>
  void Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw);


  // virtual double EvaluateScalar (double uvw[3], double Pt[3], double Duvw[9]);
/// <summary>
/// <para>Calculate a user defined scalar using one or all of uvw, Pt, Duvw.</para>
/// <para>uvw are the parameters with Pt being the the cartesian point,  Duvw are the derivatives of this point with respect to u, v and w. Pt, Duvw are obtained from Evaluate().</para>
/// <para>This function is only called if the ScalarMode has the value vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED</para>
/// <para>If the user does not need to calculate a scalar, then the  instantiated function should return zero. </para>
/// </summary>
  double EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw);


// Did not wrap:  vtkParametricSuperToroid ();


// Did not wrap:  ~vtkParametricSuperToroid ();


// Did not wrap:  vtkParametricSuperToroid (const vtkParametricSuperToroid &);


// Did not wrap:  void vtkParametricSuperToroid 


// Did not wrap:  double Power (double x, double n);


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParametricSuperToroid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParametricSuperToroid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParametricSuperToroid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParametricSuperToroid();


};

} // end vtkCommon
