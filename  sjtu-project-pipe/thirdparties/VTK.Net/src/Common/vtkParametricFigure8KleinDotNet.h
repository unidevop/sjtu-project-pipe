#pragma once

// managed includes
#include "vtkParametricFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkParametricFigure8Klein : public vtkParametricFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParametricFigure8Klein *NewInstance ();
  vtkParametricFigure8Klein^ NewInstance();


  // vtkParametricFigure8Klein *SafeDownCast (vtkObject* o);
  static vtkParametricFigure8Klein^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkParametricFigure8Klein *New ();


  // void SetRadius (double );
/// <summary>
/// <para>Set/Get the radius of the bottle.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadius ();
/// <summary>
/// <para>Set/Get the radius of the bottle.</para>
/// </summary>
  double GetRadius();


  // virtual int GetDimension ();return 
/// <summary>
/// <para>A Figure-8 Klein bottle.  </para>
/// <para>This function performs the mapping \f$f(u,v) \rightarrow (x,y,x)\f$, returning it as Pt. It also returns the partial derivatives Du and Dv. \f$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv, dy/dv, dz/dv)\f$ . Then the normal is \f$N = Du X Dv\f$ .</para>
/// </summary>
  int GetDimension();


  // virtual void Evaluate (double uvw[3], double Pt[3], double Duvw[9]);
/// <summary>
/// <para>A Figure-8 Klein bottle.  </para>
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


// Did not wrap:  vtkParametricFigure8Klein ();


// Did not wrap:  ~vtkParametricFigure8Klein ();


// Did not wrap:  vtkParametricFigure8Klein (const vtkParametricFigure8Klein &);


// Did not wrap:  void vtkParametricFigure8Klein 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParametricFigure8Klein(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParametricFigure8Klein(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParametricFigure8Klein();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParametricFigure8Klein();


};

} // end vtkCommon
