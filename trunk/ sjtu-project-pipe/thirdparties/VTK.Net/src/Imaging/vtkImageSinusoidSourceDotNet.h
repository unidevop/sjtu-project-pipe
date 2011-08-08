#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageSinusoidSource : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageSinusoidSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageSinusoidSource *NewInstance ();
  vtkImageSinusoidSource^ NewInstance();


  // vtkImageSinusoidSource *SafeDownCast (vtkObject* o);
  static vtkImageSinusoidSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetWholeExtent (int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax);
/// <summary>
/// <para>Set/Get the extent of the whole output image.</para>
/// </summary>
  void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax, int zMin, int zMax);


  // void SetDirection (double , double , double );
/// <summary>
/// <para>Set/Get the direction vector which determines the sinusoidal orientation. The magnitude is ignored.</para>
/// </summary>
  void SetDirection(double arg0, double arg1, double arg2);


  // void SetDirection (double dir[3]);
/// <summary>
/// <para>Set/Get the direction vector which determines the sinusoidal orientation. The magnitude is ignored.</para>
/// </summary>
  void SetDirection(array<double>^ dir);


  // double  *GetDirection ();
/// <summary>
/// <para>Set/Get the direction vector which determines the sinusoidal orientation. The magnitude is ignored.</para>
/// </summary>
  array<double>^ GetDirection();


  // void SetPeriod (double );
/// <summary>
/// <para>Set/Get the period of the sinusoid in pixels.</para>
/// </summary>
  void SetPeriod(double arg0);


  // double GetPeriod ();
/// <summary>
/// <para>Set/Get the period of the sinusoid in pixels.</para>
/// </summary>
  double GetPeriod();


  // void SetPhase (double );
/// <summary>
/// <para>Set/Get the phase: 0-&gt;2Pi.  0 =&gt; Cosine, pi/2 =&gt; Sine.</para>
/// </summary>
  void SetPhase(double arg0);


  // double GetPhase ();
/// <summary>
/// <para>Set/Get the phase: 0-&gt;2Pi.  0 =&gt; Cosine, pi/2 =&gt; Sine.</para>
/// </summary>
  double GetPhase();


  // void SetAmplitude (double );
/// <summary>
/// <para>Set/Get the magnitude of the sinusoid.</para>
/// </summary>
  void SetAmplitude(double arg0);


  // double GetAmplitude ();
/// <summary>
/// <para>Set/Get the magnitude of the sinusoid.</para>
/// </summary>
  double GetAmplitude();


// Did not wrap:  vtkImageSinusoidSource ();


// Did not wrap:  ~vtkImageSinusoidSource ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ExecuteData (vtkDataObject *data);


// Did not wrap:  vtkImageSinusoidSource (const vtkImageSinusoidSource &);


// Did not wrap:  void vtkImageSinusoidSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageSinusoidSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageSinusoidSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageSinusoidSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageSinusoidSource();


};

} // end vtkImaging
