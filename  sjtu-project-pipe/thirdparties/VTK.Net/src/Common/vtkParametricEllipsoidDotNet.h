#pragma once

// managed includes
#include "vtkParametricFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkParametricEllipsoid : public vtkParametricFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParametricEllipsoid *NewInstance ();
  vtkParametricEllipsoid^ NewInstance();


  // vtkParametricEllipsoid *SafeDownCast (vtkObject* o);
  static vtkParametricEllipsoid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkParametricEllipsoid *New ();


  // virtual int GetDimension ();return 
/// <summary>
/// <para>Set/Get the scaling factor for the x-axis. Default = 1.</para>
/// </summary>
  int GetDimension();


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


  // virtual void Evaluate (double uvw[3], double Pt[3], double Duvw[9]);
/// <summary>
/// <para>An ellipsoid.</para>
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


// Did not wrap:  vtkParametricEllipsoid ();


// Did not wrap:  ~vtkParametricEllipsoid ();


// Did not wrap:  vtkParametricEllipsoid (const vtkParametricEllipsoid &);


// Did not wrap:  void vtkParametricEllipsoid 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParametricEllipsoid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParametricEllipsoid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParametricEllipsoid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParametricEllipsoid();


};

} // end vtkCommon
