#pragma once

// managed includes
#include "vtkInitialValueProblemSolverDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkRungeKutta45 : public vtkInitialValueProblemSolver
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRungeKutta45 *NewInstance ();
  vtkRungeKutta45^ NewInstance();


  // vtkRungeKutta45 *SafeDownCast (vtkObject* o);
  static vtkRungeKutta45^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRungeKutta45 *New ();


  // virtual int ComputeNextStep (double *xprev, double *xnext, double t, double &delT, double maxError, double &error);double minStep delT double maxStep delT double delTActual return this ComputeNextStep xprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delTActual (xnext). Possibly delTActual != delT. This may occur because this solver supports adaptive stepsize control. It tries  to change to stepsize such that the (estimated) error of the integration is less than maxError. The solver will not set the stepsize smaller than minStep or larger than maxStep (note that maxStep and minStep should both be positive, whereas delT can be negative). Also note that delT is an in/out argument. vtkRungeKutta45 will modify delT to reflect the best (estimated) size for the next integration step. An estimated value for the error is returned (by reference) in error. This is the norm of the error vector if there are more than one function to be integrated. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *dxprev, double *xnext, double t, double &delT, double maxError, double &error);double minStep delT double maxStep delT double delTActual return this ComputeNextStep xprev dxprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delTActual (xnext). Possibly delTActual != delT. This may occur because this solver supports adaptive stepsize control. It tries  to change to stepsize such that the (estimated) error of the integration is less than maxError. The solver will not set the stepsize smaller than minStep or larger than maxStep (note that maxStep and minStep should both be positive, whereas delT can be negative). Also note that delT is an in/out argument. vtkRungeKutta45 will modify delT to reflect the best (estimated) size for the next integration step. An estimated value for the error is returned (by reference) in error. This is the norm of the error vector if there are more than one function to be integrated. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *xnext, double t, double &delT, double &delTActual, double minStep, double maxStep, double maxError, double &error);return this ComputeNextStep xprev xnext t delT delTActual minStep maxStep maxError error 
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delTActual (xnext). Possibly delTActual != delT. This may occur because this solver supports adaptive stepsize control. It tries  to change to stepsize such that the (estimated) error of the integration is less than maxError. The solver will not set the stepsize smaller than minStep or larger than maxStep (note that maxStep and minStep should both be positive, whereas delT can be negative). Also note that delT is an in/out argument. vtkRungeKutta45 will modify delT to reflect the best (estimated) size for the next integration step. An estimated value for the error is returned (by reference) in error. This is the norm of the error vector if there are more than one function to be integrated. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error);


  // virtual int ComputeNextStep (double *xprev, double *dxprev, double *xnext, double t, double &delT, double &delTActual, double minStep, double maxStep, double maxError, double &error);
/// <summary>
/// <para>Given initial values, xprev , initial time, t and a requested time  interval, delT calculate values of x at t+delTActual (xnext). Possibly delTActual != delT. This may occur because this solver supports adaptive stepsize control. It tries  to change to stepsize such that the (estimated) error of the integration is less than maxError. The solver will not set the stepsize smaller than minStep or larger than maxStep (note that maxStep and minStep should both be positive, whereas delT can be negative). Also note that delT is an in/out argument. vtkRungeKutta45 will modify delT to reflect the best (estimated) size for the next integration step. An estimated value for the error is returned (by reference) in error. This is the norm of the error vector if there are more than one function to be integrated. This method returns an error code representing the nature of the failure: OutOfDomain = 1, NotInitialized = 2, UnexpectedValue = 3</para>
/// </summary>
  int ComputeNextStep(array<double>^ xprev, array<double>^ dxprev, array<double>^ xnext, double t, double% delT, double% delTActual, double minStep, double maxStep, double maxError, double% error);


// Did not wrap:  vtkRungeKutta45 ();


// Did not wrap:  ~vtkRungeKutta45 ();


// Did not wrap:  virtual void Initialize ();


// Did not wrap:  int ComputeAStep (double *xprev, double *dxprev, double *xnext, double t, double &delT, double &error);


// Did not wrap:  vtkRungeKutta45 (const vtkRungeKutta45 &);


// Did not wrap:  void vtkRungeKutta45 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRungeKutta45(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRungeKutta45(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRungeKutta45();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRungeKutta45();


};

} // end vtkCommon
