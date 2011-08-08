#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkParametricFunction : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParametricFunction *NewInstance ();
  vtkParametricFunction^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int GetDimension () = 0;
  int GetDimension();


  // virtual void Evaluate (double uvw[3], double Pt[3], double Duvw[9]) = 0;
/// <summary>
/// <para>Performs the mapping \$f(uvw)-&gt;(Pt,Duvw)\$f. This is a pure virtual function that must be instantiated in  a derived class. </para>
/// <para>uvw are the parameters, with u corresponding to uvw[0], v to uvw[1] and w to uvw[2] respectively. Pt is the returned Cartesian point,  Duvw are the derivatives of this point with respect to u, v and w.   Note that the first three values in Duvw are Du, the next three are Dv,  and the final three are Dw. Du Dv Dw are the partial derivatives of the  function at the point Pt with respect to u, v and w respectively.</para>
/// </summary>
  void Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw);


  // virtual double EvaluateScalar (double uvw[3], double Pt[3], double Duvw[9]) = 0;
/// <summary>
/// <para>Calculate a user defined scalar using one or all of uvw, Pt, Duvw. This is a pure virtual function that must be instantiated in  a derived class. </para>
/// <para>uvw are the parameters with Pt being the the cartesian point,  Duvw are the derivatives of this point with respect to u, v, and w. Pt, Duvw are obtained from Evaluate().</para>
/// </summary>
  double EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw);


  // void SetMinimumU (double );
/// <summary>
/// <para>Set/Get the minimum u-value.</para>
/// </summary>
  void SetMinimumU(double arg0);


  // double GetMinimumU ();
/// <summary>
/// <para>Set/Get the minimum u-value.</para>
/// </summary>
  double GetMinimumU();


  // void SetMaximumU (double );
/// <summary>
/// <para>Set/Get the maximum u-value.</para>
/// </summary>
  void SetMaximumU(double arg0);


  // double GetMaximumU ();
/// <summary>
/// <para>Set/Get the maximum u-value.</para>
/// </summary>
  double GetMaximumU();


  // void SetMinimumV (double );
/// <summary>
/// <para>Set/Get the minimum v-value.</para>
/// </summary>
  void SetMinimumV(double arg0);


  // double GetMinimumV ();
/// <summary>
/// <para>Set/Get the minimum v-value.</para>
/// </summary>
  double GetMinimumV();


  // void SetMaximumV (double );
/// <summary>
/// <para>Set/Get the maximum v-value.</para>
/// </summary>
  void SetMaximumV(double arg0);


  // double GetMaximumV ();
/// <summary>
/// <para>Set/Get the maximum v-value.</para>
/// </summary>
  double GetMaximumV();


  // void SetMinimumW (double );
/// <summary>
/// <para>Set/Get the minimum w-value.</para>
/// </summary>
  void SetMinimumW(double arg0);


  // double GetMinimumW ();
/// <summary>
/// <para>Set/Get the minimum w-value.</para>
/// </summary>
  double GetMinimumW();


  // void SetMaximumW (double );
/// <summary>
/// <para>Set/Get the maximum w-value.</para>
/// </summary>
  void SetMaximumW(double arg0);


  // double GetMaximumW ();
/// <summary>
/// <para>Set/Get the maximum w-value.</para>
/// </summary>
  double GetMaximumW();


  // void SetJoinU (int );
/// <summary>
/// <para>Set/Get the flag which joins the first triangle strip to the last one.</para>
/// </summary>
  void SetJoinU(int arg0);


  // int GetJoinU ();
/// <summary>
/// <para>Set/Get the flag which joins the first triangle strip to the last one.</para>
/// </summary>
  int GetJoinU();


  // void JoinUOn ();
/// <summary>
/// <para>Set/Get the flag which joins the first triangle strip to the last one.</para>
/// </summary>
  void JoinUOn();


  // void JoinUOff ();
/// <summary>
/// <para>Set/Get the flag which joins the first triangle strip to the last one.</para>
/// </summary>
  void JoinUOff();


  // void SetJoinV (int );
/// <summary>
/// <para>Set/Get the flag which joins the the ends of the triangle strips.</para>
/// </summary>
  void SetJoinV(int arg0);


  // int GetJoinV ();
/// <summary>
/// <para>Set/Get the flag which joins the the ends of the triangle strips.</para>
/// </summary>
  int GetJoinV();


  // void JoinVOn ();
/// <summary>
/// <para>Set/Get the flag which joins the the ends of the triangle strips.</para>
/// </summary>
  void JoinVOn();


  // void JoinVOff ();
/// <summary>
/// <para>Set/Get the flag which joins the the ends of the triangle strips.</para>
/// </summary>
  void JoinVOff();


  // void SetTwistU (int );
/// <summary>
/// <para>Set/Get the flag which joins the first triangle strip to  the last one with a twist. JoinU must also be set if this is set. Used when building some non-orientable surfaces.</para>
/// </summary>
  void SetTwistU(int arg0);


  // int GetTwistU ();
/// <summary>
/// <para>Set/Get the flag which joins the first triangle strip to  the last one with a twist. JoinU must also be set if this is set. Used when building some non-orientable surfaces.</para>
/// </summary>
  int GetTwistU();


  // void TwistUOn ();
/// <summary>
/// <para>Set/Get the flag which joins the first triangle strip to  the last one with a twist. JoinU must also be set if this is set. Used when building some non-orientable surfaces.</para>
/// </summary>
  void TwistUOn();


  // void TwistUOff ();
/// <summary>
/// <para>Set/Get the flag which joins the first triangle strip to  the last one with a twist. JoinU must also be set if this is set. Used when building some non-orientable surfaces.</para>
/// </summary>
  void TwistUOff();


  // void SetTwistV (int );
/// <summary>
/// <para>Set/Get the flag which joins the ends of the  triangle strips with a twist. JoinV must also be set if this is set. Used when building some non-orientable surfaces.</para>
/// </summary>
  void SetTwistV(int arg0);


  // int GetTwistV ();
/// <summary>
/// <para>Set/Get the flag which joins the ends of the  triangle strips with a twist. JoinV must also be set if this is set. Used when building some non-orientable surfaces.</para>
/// </summary>
  int GetTwistV();


  // void TwistVOn ();
/// <summary>
/// <para>Set/Get the flag which joins the ends of the  triangle strips with a twist. JoinV must also be set if this is set. Used when building some non-orientable surfaces.</para>
/// </summary>
  void TwistVOn();


  // void TwistVOff ();
/// <summary>
/// <para>Set/Get the flag which joins the ends of the  triangle strips with a twist. JoinV must also be set if this is set. Used when building some non-orientable surfaces.</para>
/// </summary>
  void TwistVOff();


  // void SetClockwiseOrdering (int );
/// <summary>
/// <para>Set/Get the flag which determines the ordering of the the  vertices forming the triangle strips. The ordering of the  points being inserted into the triangle strip is important  because it determines the direction of the normals for the  lighting. If set, the ordering is clockwise, otherwise the ordering is anti-clockwise. Default is true (i.e. clockwise ordering).</para>
/// </summary>
  void SetClockwiseOrdering(int arg0);


  // int GetClockwiseOrdering ();
/// <summary>
/// <para>Set/Get the flag which determines the ordering of the the  vertices forming the triangle strips. The ordering of the  points being inserted into the triangle strip is important  because it determines the direction of the normals for the  lighting. If set, the ordering is clockwise, otherwise the ordering is anti-clockwise. Default is true (i.e. clockwise ordering).</para>
/// </summary>
  int GetClockwiseOrdering();


  // void ClockwiseOrderingOn ();
/// <summary>
/// <para>Set/Get the flag which determines the ordering of the the  vertices forming the triangle strips. The ordering of the  points being inserted into the triangle strip is important  because it determines the direction of the normals for the  lighting. If set, the ordering is clockwise, otherwise the ordering is anti-clockwise. Default is true (i.e. clockwise ordering).</para>
/// </summary>
  void ClockwiseOrderingOn();


  // void ClockwiseOrderingOff ();
/// <summary>
/// <para>Set/Get the flag which determines the ordering of the the  vertices forming the triangle strips. The ordering of the  points being inserted into the triangle strip is important  because it determines the direction of the normals for the  lighting. If set, the ordering is clockwise, otherwise the ordering is anti-clockwise. Default is true (i.e. clockwise ordering).</para>
/// </summary>
  void ClockwiseOrderingOff();


  // void SetDerivativesAvailable (int );
/// <summary>
/// <para>Set/Get the flag which determines whether derivatives are available  from the parametric function (i.e., whether the Evaluate() method  returns valid derivatives).</para>
/// </summary>
  void SetDerivativesAvailable(int arg0);


  // int GetDerivativesAvailable ();
/// <summary>
/// <para>Set/Get the flag which determines whether derivatives are available  from the parametric function (i.e., whether the Evaluate() method  returns valid derivatives).</para>
/// </summary>
  int GetDerivativesAvailable();


  // void DerivativesAvailableOn ();
/// <summary>
/// <para>Set/Get the flag which determines whether derivatives are available  from the parametric function (i.e., whether the Evaluate() method  returns valid derivatives).</para>
/// </summary>
  void DerivativesAvailableOn();


  // void DerivativesAvailableOff ();
/// <summary>
/// <para>Set/Get the flag which determines whether derivatives are available  from the parametric function (i.e., whether the Evaluate() method  returns valid derivatives).</para>
/// </summary>
  void DerivativesAvailableOff();


// Did not wrap:  vtkParametricFunction ();


// Did not wrap:  virtual ~vtkParametricFunction ();


// Did not wrap:  vtkParametricFunction (const vtkParametricFunction &);


// Did not wrap:  void vtkParametricFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParametricFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParametricFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParametricFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParametricFunction();


};

} // end vtkCommon
