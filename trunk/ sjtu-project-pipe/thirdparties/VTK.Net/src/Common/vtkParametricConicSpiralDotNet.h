#pragma once

// managed includes
#include "vtkParametricFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkParametricConicSpiral : public vtkParametricFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParametricConicSpiral *NewInstance ();
  vtkParametricConicSpiral^ NewInstance();


  // vtkParametricConicSpiral *SafeDownCast (vtkObject* o);
  static vtkParametricConicSpiral^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkParametricConicSpiral *New ();


  // virtual int GetDimension ();return 
/// <summary>
/// <para>Set/Get the scale factor.  Default = 0.2</para>
/// </summary>
  int GetDimension();


  // void SetA (double );
/// <summary>
/// <para>Set/Get the scale factor.  Default = 0.2</para>
/// </summary>
  void SetA(double arg0);


  // double GetA ();
/// <summary>
/// <para>Set/Get the scale factor.  Default = 0.2</para>
/// </summary>
  double GetA();


  // void SetB (double );
/// <summary>
/// <para>Set/Get the A function coefficient (see equation below).  Default = 1.</para>
/// </summary>
  void SetB(double arg0);


  // double GetB ();
/// <summary>
/// <para>Set/Get the A function coefficient (see equation below).  Default = 1.</para>
/// </summary>
  double GetB();


  // void SetC (double );
/// <summary>
/// <para>Set/Get the B function coefficient (see equation below).  Default = 0.1.</para>
/// </summary>
  void SetC(double arg0);


  // double GetC ();
/// <summary>
/// <para>Set/Get the B function coefficient (see equation below).  Default = 0.1.</para>
/// </summary>
  double GetC();


  // void SetN (double );
/// <summary>
/// <para>Set/Get the C function coefficient (see equation below).  Default = 2.</para>
/// </summary>
  void SetN(double arg0);


  // double GetN ();
/// <summary>
/// <para>Set/Get the C function coefficient (see equation below).  Default = 2.</para>
/// </summary>
  double GetN();


  // virtual void Evaluate (double uvw[3], double Pt[3], double Duvw[9]);
/// <summary>
/// <para>A conic spiral surface.</para>
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


// Did not wrap:  vtkParametricConicSpiral ();


// Did not wrap:  ~vtkParametricConicSpiral ();


// Did not wrap:  vtkParametricConicSpiral (const vtkParametricConicSpiral &);


// Did not wrap:  void vtkParametricConicSpiral 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParametricConicSpiral(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParametricConicSpiral(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParametricConicSpiral();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParametricConicSpiral();


};

} // end vtkCommon
