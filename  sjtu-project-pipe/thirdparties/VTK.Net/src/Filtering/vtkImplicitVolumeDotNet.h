#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkImplicitVolume : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitVolume *NewInstance ();
  vtkImplicitVolume^ NewInstance();


  // vtkImplicitVolume *SafeDownCast (vtkObject* o);
  static vtkImplicitVolume^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImplicitVolume *New ();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Returns the mtime also considering the volume.  This also calls Update on the volume, and it therefore must be called before the function is evaluated.</para>
/// </summary>
  unsigned long GetMTime();


  // double EvaluateFunction (double x[3]);
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double n[3]);
  void EvaluateGradient(array<double>^ x, array<double>^ n);


  // virtual void SetVolume (vtkImageData *);
/// <summary>
/// <para>Specify the volume for the implicit function.</para>
/// </summary>
  void SetVolume(vtkImageData^ arg0);


  // vtkImageData *GetVolume ();
/// <summary>
/// <para>Specify the volume for the implicit function.</para>
/// </summary>
  vtkImageData^ GetVolume();


  // void SetOutValue (double );
/// <summary>
/// <para>Set the function value to use for points outside of the dataset.</para>
/// </summary>
  void SetOutValue(double arg0);


  // double GetOutValue ();
/// <summary>
/// <para>Set the function value to use for points outside of the dataset.</para>
/// </summary>
  double GetOutValue();


  // void SetOutGradient (double , double , double );
/// <summary>
/// <para>Set the function gradient to use for points outside of the dataset.</para>
/// </summary>
  void SetOutGradient(double arg0, double arg1, double arg2);


  // void SetOutGradient (double  a[3]);
/// <summary>
/// <para>Set the function gradient to use for points outside of the dataset.</para>
/// </summary>
  void SetOutGradient(array<double>^ a);


  // double  *GetOutGradient ();
/// <summary>
/// <para>Set the function gradient to use for points outside of the dataset.</para>
/// </summary>
  array<double>^ GetOutGradient();


// Did not wrap:  vtkImplicitVolume ();


// Did not wrap:  ~vtkImplicitVolume ();


// Did not wrap:  vtkImplicitVolume (const vtkImplicitVolume &);


// Did not wrap:  void vtkImplicitVolume 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitVolume(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitVolume(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitVolume();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitVolume();


};

} // end vtkFiltering
