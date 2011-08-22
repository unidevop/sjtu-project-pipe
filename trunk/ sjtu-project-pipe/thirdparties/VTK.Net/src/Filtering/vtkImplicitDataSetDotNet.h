#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;

public ref class vtkImplicitDataSet : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitDataSet *NewInstance ();
  vtkImplicitDataSet^ NewInstance();


  // vtkImplicitDataSet *SafeDownCast (vtkObject* o);
  static vtkImplicitDataSet^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImplicitDataSet *New ();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the DataSet dependency.</para>
/// </summary>
  unsigned long GetMTime();


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double n[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ n);


  // virtual void SetDataSet (vtkDataSet *);
/// <summary>
/// <para>Set / get the dataset used for the implicit function evaluation.</para>
/// </summary>
  void SetDataSet(vtkDataSet^ arg0);


  // vtkDataSet *GetDataSet ();
/// <summary>
/// <para>Set / get the dataset used for the implicit function evaluation.</para>
/// </summary>
  vtkDataSet^ GetDataSet();


  // void SetOutValue (double );
/// <summary>
/// <para>Set / get the function value to use for points outside of the dataset.</para>
/// </summary>
  void SetOutValue(double arg0);


  // double GetOutValue ();
/// <summary>
/// <para>Set / get the function value to use for points outside of the dataset.</para>
/// </summary>
  double GetOutValue();


  // void SetOutGradient (double , double , double );
/// <summary>
/// <para>Set / get the function gradient to use for points outside of the dataset.</para>
/// </summary>
  void SetOutGradient(double arg0, double arg1, double arg2);


  // void SetOutGradient (double  a[3]);
/// <summary>
/// <para>Set / get the function gradient to use for points outside of the dataset.</para>
/// </summary>
  void SetOutGradient(array<double>^ a);


  // double  *GetOutGradient ();
/// <summary>
/// <para>Set / get the function gradient to use for points outside of the dataset.</para>
/// </summary>
  array<double>^ GetOutGradient();


// Did not wrap:  vtkImplicitDataSet ();


// Did not wrap:  ~vtkImplicitDataSet ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkImplicitDataSet (const vtkImplicitDataSet &);


// Did not wrap:  void vtkImplicitDataSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitDataSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitDataSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitDataSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitDataSet();


};

} // end vtkFiltering
