#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkFunctionSet;

public ref class vtkInitialValueProblemSolver : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInitialValueProblemSolver *NewInstance ();
  vtkInitialValueProblemSolver^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int ComputeNextStep (double *xprev, double *xnext, double t, double &delT, double maxError, double &error);double minStep delT double maxStep delT double delTActual return this ComputeNextStep xprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delTActual (xnext). For certain concrete sub-classes delTActual != delT. This occurs when the solver supports adaptive stepsize control. If this is the case, the solver tries to change to stepsize such that the (estimated) error of the integration is less than maxError. The solver will not set the stepsize smaller than minStep or larger than maxStep. Also note that delT is an in/out argument. Adaptive solvers will modify delT to reflect the best (estimated) size for the next integration step. An estimated value for the error is returned (by reference) in error. Note that only some concrete sub-classes support this. Otherwise, the error is set to 0. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *dxprev, double *xnext, double t, double &delT, double maxError, double &error);double minStep delT double maxStep delT double delTActual return this ComputeNextStep xprev dxprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delTActual (xnext). For certain concrete sub-classes delTActual != delT. This occurs when the solver supports adaptive stepsize control. If this is the case, the solver tries to change to stepsize such that the (estimated) error of the integration is less than maxError. The solver will not set the stepsize smaller than minStep or larger than maxStep. Also note that delT is an in/out argument. Adaptive solvers will modify delT to reflect the best (estimated) size for the next integration step. An estimated value for the error is returned (by reference) in error. Note that only some concrete sub-classes support this. Otherwise, the error is set to 0. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *xnext, double t, double &delT, double &delTActual, double minStep, double maxStep, double maxError, double &error);return this ComputeNextStep xprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delTActual (xnext). For certain concrete sub-classes delTActual != delT. This occurs when the solver supports adaptive stepsize control. If this is the case, the solver tries to change to stepsize such that the (estimated) error of the integration is less than maxError. The solver will not set the stepsize smaller than minStep or larger than maxStep. Also note that delT is an in/out argument. Adaptive solvers will modify delT to reflect the best (estimated) size for the next integration step. An estimated value for the error is returned (by reference) in error. Note that only some concrete sub-classes support this. Otherwise, the error is set to 0. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *dxprev, double *xnext, double t, double &delT, double &delTActual, double minStep, double maxStep, double maxError, double &error) = 0;
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delTActual (xnext). For certain concrete sub-classes delTActual != delT. This occurs when the solver supports adaptive stepsize control. If this is the case, the solver tries to change to stepsize such that the (estimated) error of the integration is less than maxError. The solver will not set the stepsize smaller than minStep or larger than maxStep. Also note that delT is an in/out argument. Adaptive solvers will modify delT to reflect the best (estimated) size for the next integration step. An estimated value for the error is returned (by reference) in error. Note that only some concrete sub-classes support this. Otherwise, the error is set to 0. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error);


  // virtual void SetFunctionSet (vtkFunctionSet *functionset);
/// <summary>
/// <para>Set / get the dataset used for the implicit function evaluation.</para>
/// </summary>
  void SetFunctionSet(vtkFunctionSet^ functionset);


  // vtkFunctionSet *GetFunctionSet ();
/// <summary>
/// <para>Set / get the dataset used for the implicit function evaluation.</para>
/// </summary>
  vtkFunctionSet^ GetFunctionSet();


  // virtual int IsAdaptive ();return this Adaptive 
  int IsAdaptive();


// Did not wrap:  vtkInitialValueProblemSolver ();


// Did not wrap:  ~vtkInitialValueProblemSolver ();


// Did not wrap:  virtual void Initialize ();


// Did not wrap:  vtkInitialValueProblemSolver (const vtkInitialValueProblemSolver &);


// Did not wrap:  void vtkInitialValueProblemSolver 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInitialValueProblemSolver(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInitialValueProblemSolver(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInitialValueProblemSolver();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInitialValueProblemSolver();


};

} // end vtkCommon
