#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPerlinNoise : public vtkImplicitFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPerlinNoise *NewInstance ();
  vtkPerlinNoise^ NewInstance();


  // vtkPerlinNoise *SafeDownCast (vtkObject* o);
  static vtkPerlinNoise^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPerlinNoise *New ();


  // double EvaluateFunction (double x[3]);
/// <summary>
/// <para>Evaluate PerlinNoise function.</para>
/// </summary>
  double EvaluateFunction(array<double>^ x);


  // double EvaluateFunction (double x, double y, double z);return this vtkImplicitFunction EvaluateFunction x y z 
/// <summary>
/// <para>Evaluate PerlinNoise function.</para>
/// </summary>
  double EvaluateFunction(double x, double y, double z);


  // void EvaluateGradient (double x[3], double n[3]);
/// <summary>
/// <para>Evaluate PerlinNoise gradient.  Currently, the method returns a 0  gradient.</para>
/// </summary>
  void EvaluateGradient(array<double>^ x, array<double>^ n);


  // void SetFrequency (double , double , double );
/// <summary>
/// <para>Set/get the frequency, or physical scale,  of the noise function  (higher is finer scale).  The frequency can be adjusted per axis, or the same for all axes.</para>
/// </summary>
  void SetFrequency(double arg0, double arg1, double arg2);


  // void SetFrequency (double  a[3]);
/// <summary>
/// <para>Set/get the frequency, or physical scale,  of the noise function  (higher is finer scale).  The frequency can be adjusted per axis, or the same for all axes.</para>
/// </summary>
  void SetFrequency(array<double>^ a);


  // double  *GetFrequency ();
/// <summary>
/// <para>Set/get the frequency, or physical scale,  of the noise function  (higher is finer scale).  The frequency can be adjusted per axis, or the same for all axes.</para>
/// </summary>
  array<double>^ GetFrequency();


  // void SetPhase (double , double , double );
/// <summary>
/// <para>Set/get the phase of the noise function.  This parameter can be used to shift the noise function within space (perhaps to avoid a beat with a noise pattern at another scale).  Phase tends to repeat about every unit, so a phase of 0.5 is a half-cycle shift.</para>
/// </summary>
  void SetPhase(double arg0, double arg1, double arg2);


  // void SetPhase (double  a[3]);
/// <summary>
/// <para>Set/get the phase of the noise function.  This parameter can be used to shift the noise function within space (perhaps to avoid a beat with a noise pattern at another scale).  Phase tends to repeat about every unit, so a phase of 0.5 is a half-cycle shift.</para>
/// </summary>
  void SetPhase(array<double>^ a);


  // double  *GetPhase ();
/// <summary>
/// <para>Set/get the phase of the noise function.  This parameter can be used to shift the noise function within space (perhaps to avoid a beat with a noise pattern at another scale).  Phase tends to repeat about every unit, so a phase of 0.5 is a half-cycle shift.</para>
/// </summary>
  array<double>^ GetPhase();


  // void SetAmplitude (double );
/// <summary>
/// <para>Set/get the amplitude of the noise function.  By default, the amplitude is 1.</para>
/// </summary>
  void SetAmplitude(double arg0);


  // double GetAmplitude ();
/// <summary>
/// <para>Set/get the amplitude of the noise function.  By default, the amplitude is 1.</para>
/// </summary>
  double GetAmplitude();


// Did not wrap:  vtkPerlinNoise ();


// Did not wrap:  ~vtkPerlinNoise ();


// Did not wrap:  vtkPerlinNoise (const vtkPerlinNoise &);


// Did not wrap:  void vtkPerlinNoise 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPerlinNoise(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPerlinNoise(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPerlinNoise();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPerlinNoise();


};

} // end vtkFiltering
