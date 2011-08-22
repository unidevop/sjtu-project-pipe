#pragma once

// managed includes
#include "vtkInitialValueProblemSolverDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkRungeKutta2 : public vtkInitialValueProblemSolver
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRungeKutta2 *NewInstance ();
  vtkRungeKutta2^ NewInstance();


  // vtkRungeKutta2 *SafeDownCast (vtkObject* o);
  static vtkRungeKutta2^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkRungeKutta2 *New ();


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


// Did not wrap:  vtkRungeKutta2 ();


// Did not wrap:  ~vtkRungeKutta2 ();


// Did not wrap:  vtkRungeKutta2 (const vtkRungeKutta2 &);


// Did not wrap:  void vtkRungeKutta2 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRungeKutta2(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRungeKutta2(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRungeKutta2();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRungeKutta2();


};

} // end vtkCommon
