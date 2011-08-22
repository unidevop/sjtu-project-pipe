#pragma once

// managed includes
#include "vtkInitialValueProblemSolverDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkRungeKutta4 : public vtkInitialValueProblemSolver
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRungeKutta4 *NewInstance ();
  vtkRungeKutta4^ NewInstance();


  // vtkRungeKutta4 *SafeDownCast (vtkObject* o);
  static vtkRungeKutta4^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRungeKutta4 *New ();


  // virtual int ComputeNextStep (double *xprev, double *xnext, double t, double &delT, double maxError, double &error);double minStep delT double maxStep delT double delTActual return this ComputeNextStep xprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delT (xnext). delTActual is always equal to delT. Since this class can not provide an estimate for the error error is set to 0.   maxStep, minStep and maxError are unused. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *dxprev, double *xnext, double t, double &delT, double maxError, double &error);double minStep delT double maxStep delT double delTActual return this ComputeNextStep xprev dxprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delT (xnext). delTActual is always equal to delT. Since this class can not provide an estimate for the error error is set to 0.   maxStep, minStep and maxError are unused. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *xnext, double t, double &delT, double &delTActual, double minStep, double maxStep, double maxError, double &error);return this ComputeNextStep xprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delT (xnext). delTActual is always equal to delT. Since this class can not provide an estimate for the error error is set to 0.   maxStep, minStep and maxError are unused. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *dxprev, double *xnext, double t, double &delT, double &delTActual, double minStep, double maxStep, double maxError, double &error);
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delT (xnext). delTActual is always equal to delT. Since this class can not provide an estimate for the error error is set to 0.   maxStep, minStep and maxError are unused. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error);


// Did not wrap:  vtkRungeKutta4 ();


// Did not wrap:  ~vtkRungeKutta4 ();


// Did not wrap:  virtual void Initialize ();


// Did not wrap:  vtkRungeKutta4 (const vtkRungeKutta4 &);


// Did not wrap:  void vtkRungeKutta4 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRungeKutta4(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRungeKutta4(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRungeKutta4();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRungeKutta4();


};

} // end vtkCommon
