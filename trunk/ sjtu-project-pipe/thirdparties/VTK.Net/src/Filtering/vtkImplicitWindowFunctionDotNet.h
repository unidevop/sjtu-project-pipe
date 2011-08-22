#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImplicitWindowFunction : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitWindowFunction *NewInstance ();
  vtkImplicitWindowFunction^ NewInstance();


  // vtkImplicitWindowFunction *SafeDownCast (vtkObject* o);
  static vtkImplicitWindowFunction^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImplicitWindowFunction *New ();


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double n[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ n);


  // virtual void SetImplicitFunction (vtkImplicitFunction *);
/// <summary>
/// <para>Specify an implicit function to operate on.</para>
/// </summary>
  void SetImplicitFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetImplicitFunction ();
/// <summary>
/// <para>Specify an implicit function to operate on.</para>
/// </summary>
  vtkImplicitFunction^ GetImplicitFunction();


  // void SetWindowRange (double , double );
/// <summary>
/// <para>Specify the range of function values which are considered to lie within the window. WindowRange[0] is assumed to be less than WindowRange[1].</para>
/// </summary>
  void SetWindowRange(double arg0, double arg1);


  // void SetWindowRange (double  a[2]);
/// <summary>
/// <para>Specify the range of function values which are considered to lie within the window. WindowRange[0] is assumed to be less than WindowRange[1].</para>
/// </summary>
  void SetWindowRange(array<double>^ a);


  // double  *GetWindowRange ();
/// <summary>
/// <para>Specify the range of function values which are considered to lie within the window. WindowRange[0] is assumed to be less than WindowRange[1].</para>
/// </summary>
  array<double>^ GetWindowRange();


  // void SetWindowValues (double , double );
/// <summary>
/// <para>Specify the range of output values that the window range is mapped into. This is effectively a scaling and shifting of the original function values.</para>
/// </summary>
  void SetWindowValues(double arg0, double arg1);


  // void SetWindowValues (double  a[2]);
/// <summary>
/// <para>Specify the range of output values that the window range is mapped into. This is effectively a scaling and shifting of the original function values.</para>
/// </summary>
  void SetWindowValues(array<double>^ a);


  // double  *GetWindowValues ();
/// <summary>
/// <para>Specify the range of output values that the window range is mapped into. This is effectively a scaling and shifting of the original function values.</para>
/// </summary>
  array<double>^ GetWindowValues();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override modified time retrieval because of object dependencies.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void Register (vtkObjectBase *o);
/// <summary>
/// <para>Participate in garbage collection.</para>
/// </summary>
  void Register(vtkObjectBase^ o);


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>Participate in garbage collection.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


// Did not wrap:  vtkImplicitWindowFunction ();


// Did not wrap:  ~vtkImplicitWindowFunction ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkImplicitWindowFunction (const vtkImplicitWindowFunction &);


// Did not wrap:  void vtkImplicitWindowFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitWindowFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitWindowFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitWindowFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitWindowFunction();


};

} // end vtkFiltering
