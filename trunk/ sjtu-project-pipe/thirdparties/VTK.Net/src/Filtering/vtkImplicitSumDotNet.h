#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImplicitSum : public vtkImplicitFunction
{

public:
// Did not wrap:  static vtkImplicitSum *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitSum *NewInstance ();
  vtkImplicitSum^ NewInstance();


  // vtkImplicitSum *SafeDownCast (vtkObject* o);
  static vtkImplicitSum^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double EvaluateFunction (double x[3]);
/// <summary>
/// <para>Evaluate implicit function using current functions and weights.</para>
/// </summary>
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
/// <summary>
/// <para>Evaluate implicit function using current functions and weights.</para>
/// </summary>
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double g[3]);
/// <summary>
/// <para>Evaluate gradient of the weighted sum of functions.  Input functions should be linear.</para>
/// </summary>
  void EvaluateGradient(array<double>^ x, array<double>^ g);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override modified time retrieval because of object dependencies.</para>
/// </summary>
  unsigned long GetMTime();


  // void AddFunction (vtkImplicitFunction *in, double weight);
/// <summary>
/// <para>Add another implicit function to the list of functions, along with a  weighting factor.</para>
/// </summary>
  void AddFunction(vtkImplicitFunction^ in, double weight);


  // void AddFunction (vtkImplicitFunction *in);this AddFunction in 
/// <summary>
/// <para>Remove all functions from the list.</para>
/// </summary>
  void AddFunction(vtkImplicitFunction^ in);


  // void RemoveAllFunctions ();
/// <summary>
/// <para>Remove all functions from the list.</para>
/// </summary>
  void RemoveAllFunctions();


  // void SetFunctionWeight (vtkImplicitFunction *f, double weight);
/// <summary>
/// <para>Set the weight (coefficient) of the given function to be weight.</para>
/// </summary>
  void SetFunctionWeight(vtkImplicitFunction^ f, double weight);


  // void SetNormalizeByWeight (int );
/// <summary>
/// <para>When calculating the function and gradient values of the composite function, setting NormalizeByWeight on will divide the final result by the total weight of the component functions. This process does not otherwise normalize the gradient vector. By default, NormalizeByWeight is off.</para>
/// </summary>
  void SetNormalizeByWeight(int arg0);


  // int GetNormalizeByWeight ();
/// <summary>
/// <para>When calculating the function and gradient values of the composite function, setting NormalizeByWeight on will divide the final result by the total weight of the component functions. This process does not otherwise normalize the gradient vector. By default, NormalizeByWeight is off.</para>
/// </summary>
  int GetNormalizeByWeight();


  // void NormalizeByWeightOn ();
/// <summary>
/// <para>When calculating the function and gradient values of the composite function, setting NormalizeByWeight on will divide the final result by the total weight of the component functions. This process does not otherwise normalize the gradient vector. By default, NormalizeByWeight is off.</para>
/// </summary>
  void NormalizeByWeightOn();


  // void NormalizeByWeightOff ();
/// <summary>
/// <para>When calculating the function and gradient values of the composite function, setting NormalizeByWeight on will divide the final result by the total weight of the component functions. This process does not otherwise normalize the gradient vector. By default, NormalizeByWeight is off.</para>
/// </summary>
  void NormalizeByWeightOff();


// Did not wrap:  vtkImplicitSum ();


// Did not wrap:  ~vtkImplicitSum ();


// Did not wrap:  void CalculateTotalWeight (void );


// Did not wrap:  vtkImplicitSum (const vtkImplicitSum &);


// Did not wrap:  void vtkImplicitSum 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitSum(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitSum(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitSum();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitSum();


};

} // end vtkFiltering
