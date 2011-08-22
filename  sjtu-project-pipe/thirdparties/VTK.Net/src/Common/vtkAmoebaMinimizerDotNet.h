#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkAmoebaMinimizer : public vtkObject
{

public:
// Did not wrap:  static vtkAmoebaMinimizer *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAmoebaMinimizer *NewInstance ();
  vtkAmoebaMinimizer^ NewInstance();


  // vtkAmoebaMinimizer *SafeDownCast (vtkObject* o);
  static vtkAmoebaMinimizer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  void SetFunction (void (*func)(void *) , void *arg);


// Did not wrap:  void SetFunctionArgDelete (void (*func)(void *) );


  // void SetParameterValue (const char *name, double value);
/// <summary>
/// <para>Set the initial value for the specified parameter.  Calling this function for any parameter will reset the Iterations and the FunctionEvaluations counts to zero.  You must also use SetParameterScale() to specify the step size by which the parameter will be modified during the minimization.  It is preferable to specify parameters by name, rather than by number.</para>
/// </summary>
  void SetParameterValue(System::String^ name, double value);


  // void SetParameterValue (int i, double value);
/// <summary>
/// <para>Set the initial value for the specified parameter.  Calling this function for any parameter will reset the Iterations and the FunctionEvaluations counts to zero.  You must also use SetParameterScale() to specify the step size by which the parameter will be modified during the minimization.  It is preferable to specify parameters by name, rather than by number.</para>
/// </summary>
  void SetParameterValue(int i, double value);


  // void SetParameterScale (const char *name, double scale);
/// <summary>
/// <para>Set the scale to use when modifying a parameter, i.e. the initial amount by which the parameter will be modified during the search for the minimum.  It is preferable to identify scalars by name rather than by number.</para>
/// </summary>
  void SetParameterScale(System::String^ name, double scale);


  // double GetParameterScale (const char *name);
/// <summary>
/// <para>Set the scale to use when modifying a parameter, i.e. the initial amount by which the parameter will be modified during the search for the minimum.  It is preferable to identify scalars by name rather than by number.</para>
/// </summary>
  double GetParameterScale(System::String^ name);


  // void SetParameterScale (int i, double scale);
/// <summary>
/// <para>Set the scale to use when modifying a parameter, i.e. the initial amount by which the parameter will be modified during the search for the minimum.  It is preferable to identify scalars by name rather than by number.</para>
/// </summary>
  void SetParameterScale(int i, double scale);


  // double GetParameterScale (int i);return this ParameterScales i 
/// <summary>
/// <para>Set the scale to use when modifying a parameter, i.e. the initial amount by which the parameter will be modified during the search for the minimum.  It is preferable to identify scalars by name rather than by number.</para>
/// </summary>
  double GetParameterScale(int i);


  // double GetParameterValue (const char *name);
/// <summary>
/// <para>Get the value of a parameter at the current stage of the minimization. Call this method within the function that you are minimizing in order to get the current parameter values.  It is preferable to specify parameters by name rather than by index. </para>
/// </summary>
  double GetParameterValue(System::String^ name);


  // double GetParameterValue (int i);return this ParameterValues i 
/// <summary>
/// <para>Get the value of a parameter at the current stage of the minimization. Call this method within the function that you are minimizing in order to get the current parameter values.  It is preferable to specify parameters by name rather than by index. </para>
/// </summary>
  double GetParameterValue(int i);


  // const char *GetParameterName (int i);return this ParameterNames i 
/// <summary>
/// <para>For completeness, an unchecked method to get the name for particular parameter (the result will be NULL if no name was set).  </para>
/// </summary>
  System::String^ GetParameterName(int i);


  // int GetNumberOfParameters ();return this NumberOfParameters 
/// <summary>
/// <para>Get the number of parameters that have been set.</para>
/// </summary>
  int GetNumberOfParameters();


  // void Initialize ();
/// <summary>
/// <para>Initialize the minimizer.  This will reset the number of parameters to zero so that the minimizer can be reused.</para>
/// </summary>
  void Initialize();


  // virtual void Minimize ();
/// <summary>
/// <para>Iterate until the minimum is found to within the specified tolerance, or until the MaxIterations has been reached. </para>
/// </summary>
  void Minimize();


  // virtual int Iterate ();
/// <summary>
/// <para>Perform one iteration of minimization.  Returns zero if the tolerance stopping criterion has been met.  </para>
/// </summary>
  int Iterate();


  // void SetFunctionValue (double );
/// <summary>
/// <para>Get the function value resulting from the minimization.</para>
/// </summary>
  void SetFunctionValue(double arg0);


  // double GetFunctionValue ();return this FunctionValue 
/// <summary>
/// <para>Get the function value resulting from the minimization.</para>
/// </summary>
  double GetFunctionValue();


  // void SetTolerance (double );
/// <summary>
/// <para>Specify the fractional tolerance to aim for during the minimization.</para>
/// </summary>
  void SetTolerance(double arg0);


  // double GetTolerance ();
/// <summary>
/// <para>Specify the fractional tolerance to aim for during the minimization.</para>
/// </summary>
  double GetTolerance();


  // void SetMaxIterations (int );
/// <summary>
/// <para>Specify the maximum number of iterations to try before giving up.</para>
/// </summary>
  void SetMaxIterations(int arg0);


  // int GetMaxIterations ();
/// <summary>
/// <para>Specify the maximum number of iterations to try before giving up.</para>
/// </summary>
  int GetMaxIterations();


  // int GetIterations ();
/// <summary>
/// <para>Return the number of interations that have been performed.  This is not necessarily the same as the number of function evaluations.</para>
/// </summary>
  int GetIterations();


  // int GetFunctionEvaluations ();
/// <summary>
/// <para>Return the number of times that the function has been evaluated.</para>
/// </summary>
  int GetFunctionEvaluations();


  // void EvaluateFunction ();
/// <summary>
/// <para>Evaluate the function.  This is usually called internally by the minimization code, but it is provided here as a public method.</para>
/// </summary>
  void EvaluateFunction();


// Did not wrap:  vtkAmoebaMinimizer ();


// Did not wrap:  ~vtkAmoebaMinimizer ();


// Did not wrap:  vtkAmoebaMinimizer (const vtkAmoebaMinimizer &);


// Did not wrap:  void vtkAmoebaMinimizer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAmoebaMinimizer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAmoebaMinimizer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAmoebaMinimizer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAmoebaMinimizer();


};

} // end vtkCommon
