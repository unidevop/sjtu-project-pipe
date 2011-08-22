#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractTransform;

public ref class vtkImplicitFunction : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitFunction *NewInstance ();
  vtkImplicitFunction^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Overload standard modified time function. If Transform is modified, then this object is modified as well.</para>
/// </summary>
  unsigned long GetMTime();


  // double FunctionValue (const double x[3]);
/// <summary>
/// <para>Evaluate function at position x-y-z and return value. Point x[3] is transformed through transform (if provided).</para>
/// </summary>
  double FunctionValue(array<double>^ x);


  // double FunctionValue (double x, double y, double z);double xyz x y z return this FunctionValue xyz 
/// <summary>
/// <para>Evaluate function at position x-y-z and return value. Point x[3] is transformed through transform (if provided).</para>
/// </summary>
  double FunctionValue(double x, double y, double z);


  // void FunctionGradient (const double x[3], double g[3]);
/// <summary>
/// <para>Evaluate function gradient at position x-y-z and pass back vector. Point x[3] is transformed through transform (if provided).</para>
/// </summary>
  void FunctionGradient(array<double>^ x, array<double>^ g);


  // double *FunctionGradient (const double x[3]);this FunctionGradient x this ReturnValue return this ReturnValue 
/// <summary>
/// <para>Evaluate function gradient at position x-y-z and pass back vector. Point x[3] is transformed through transform (if provided).</para>
/// </summary>
  array<double>^ FunctionGradient(array<double>^ x);


  // double *FunctionGradient (double x, double y, double z);double xyz x y z return this FunctionGradient xyz 
/// <summary>
/// <para>Evaluate function gradient at position x-y-z and pass back vector. Point x[3] is transformed through transform (if provided).</para>
/// </summary>
  array<double>^ FunctionGradient(double x, double y, double z);


  // virtual void SetTransform (vtkAbstractTransform *);
/// <summary>
/// <para>Set/Get a transformation to apply to input points before executing the implicit function.</para>
/// </summary>
  void SetTransform(vtkAbstractTransform^ arg0);


  // virtual void SetTransform (double elements[16]);
/// <summary>
/// <para>Set/Get a transformation to apply to input points before executing the implicit function.</para>
/// </summary>
  void SetTransform(array<double>^ elements);


  // vtkAbstractTransform *GetTransform ();
/// <summary>
/// <para>Set/Get a transformation to apply to input points before executing the implicit function.</para>
/// </summary>
  vtkAbstractTransform^ GetTransform();


  // virtual double EvaluateFunction (double x[3]) = 0;
/// <summary>
/// <para>Evaluate function at position x-y-z and return value.  You should generally not call this method directly, you should use  FunctionValue() instead.  This method must be implemented by  any derived class. </para>
/// </summary>
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);double xyz x y z return this EvaluateFunction xyz 
/// <summary>
/// <para>Evaluate function at position x-y-z and return value.  You should generally not call this method directly, you should use  FunctionValue() instead.  This method must be implemented by  any derived class. </para>
/// </summary>
  double EvaluateFunction(double x, double y, double z);


  // virtual void EvaluateGradient (double x[3], double g[3]) = 0;
/// <summary>
/// <para>Evaluate function gradient at position x-y-z and pass back vector.  You should generally not call this method directly, you should use  FunctionGradient() instead.  This method must be implemented by  any derived class. </para>
/// </summary>
  void EvaluateGradient(array<double>^ x, array<double>^ g);


// Did not wrap:  vtkImplicitFunction ();


// Did not wrap:  ~vtkImplicitFunction ();


// Did not wrap:  vtkImplicitFunction (const vtkImplicitFunction &);


// Did not wrap:  void vtkImplicitFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitFunction();


};

} // end vtkCommon
