#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImplicitSelectionLoop : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitSelectionLoop *NewInstance ();
  vtkImplicitSelectionLoop^ NewInstance();


  // vtkImplicitSelectionLoop *SafeDownCast (vtkObject* o);
  static vtkImplicitSelectionLoop^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImplicitSelectionLoop *New ();


  // double EvaluateFunction (double x[3]);
/// <summary>
/// <para>Evaluate selection loop returning a signed distance.</para>
/// </summary>
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
/// <summary>
/// <para>Evaluate selection loop returning a signed distance.</para>
/// </summary>
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double n[3]);
/// <summary>
/// <para>Evaluate selection loop returning the gradient.</para>
/// </summary>
  void EvaluateGradient(array<double>^ x, array<double>^ n);


  // virtual void SetLoop (vtkPoints *);
/// <summary>
/// <para>Set/Get the array of point coordinates defining the loop. There must be at least three points used to define a loop.</para>
/// </summary>
  void SetLoop(vtkPoints^ arg0);


  // vtkPoints *GetLoop ();
/// <summary>
/// <para>Set/Get the array of point coordinates defining the loop. There must be at least three points used to define a loop.</para>
/// </summary>
  vtkPoints^ GetLoop();


  // void SetAutomaticNormalGeneration (int );
/// <summary>
/// <para>Turn on/off automatic normal generation. By default, the normal is computed from the accumulated cross product of the edges. You can also specify the normal to use.</para>
/// </summary>
  void SetAutomaticNormalGeneration(int arg0);


  // int GetAutomaticNormalGeneration ();
/// <summary>
/// <para>Turn on/off automatic normal generation. By default, the normal is computed from the accumulated cross product of the edges. You can also specify the normal to use.</para>
/// </summary>
  int GetAutomaticNormalGeneration();


  // void AutomaticNormalGenerationOn ();
/// <summary>
/// <para>Turn on/off automatic normal generation. By default, the normal is computed from the accumulated cross product of the edges. You can also specify the normal to use.</para>
/// </summary>
  void AutomaticNormalGenerationOn();


  // void AutomaticNormalGenerationOff ();
/// <summary>
/// <para>Turn on/off automatic normal generation. By default, the normal is computed from the accumulated cross product of the edges. You can also specify the normal to use.</para>
/// </summary>
  void AutomaticNormalGenerationOff();


  // void SetNormal (double , double , double );
/// <summary>
/// <para>Set / get the normal used to determine what is inside and what is outside.</para>
/// </summary>
  void SetNormal(double arg0, double arg1, double arg2);


  // void SetNormal (double  a[3]);
/// <summary>
/// <para>Set / get the normal used to determine what is inside and what is outside.</para>
/// </summary>
  void SetNormal(array<double>^ a);


  // double  *GetNormal ();
/// <summary>
/// <para>Set / get the normal used to determine what is inside and what is outside.</para>
/// </summary>
  array<double>^ GetNormal();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Overload GetMTime() because we depend on the Loop</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkImplicitSelectionLoop ();


// Did not wrap:  ~vtkImplicitSelectionLoop ();


// Did not wrap:  void Initialize ();


// Did not wrap:  vtkImplicitSelectionLoop (const vtkImplicitSelectionLoop &);


// Did not wrap:  void vtkImplicitSelectionLoop 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitSelectionLoop(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitSelectionLoop(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitSelectionLoop();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitSelectionLoop();


};

} // end vtkFiltering
