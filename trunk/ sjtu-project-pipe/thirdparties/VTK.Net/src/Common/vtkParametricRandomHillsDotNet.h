#pragma once

// managed includes
#include "vtkParametricFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkParametricRandomHills : public vtkParametricFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkParametricRandomHills *NewInstance ();
  vtkParametricRandomHills^ NewInstance();


  // vtkParametricRandomHills *SafeDownCast (vtkObject* o);
  static vtkParametricRandomHills^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int GetDimension ();return 
/// <summary>
/// <para>Construct a surface of random hills with the following parameters: MinimumU = -10, MaximumU = 10, MinimumV = -10, MaximumV = 10,  JoinU = 0, JoinV = 0, TwistU = 0, TwistV = 0; ClockwiseOrdering = 1,  DerivativesAvailable = 0, Number of hills = 30,  Variance of the hills 2.5 in both x- and y- directions,  Scaling factor for the variances 1/3 in both x- and y- directions,  Amplitude of each hill = 1,  Scaling factor for the amplitude = 1/3,  RandomSeed = 1, AllowRandomGeneration = 1.</para>
/// </summary>
  int GetDimension();


// Did not wrap:  static vtkParametricRandomHills *New ();


  // void SetNumberOfHills (int );
/// <summary>
/// <para>Set/Get the number of hills. Default is 30.</para>
/// </summary>
  void SetNumberOfHills(int arg0);


  // int GetNumberOfHills ();
/// <summary>
/// <para>Set/Get the number of hills. Default is 30.</para>
/// </summary>
  int GetNumberOfHills();


  // void SetHillXVariance (double );
/// <summary>
/// <para>Set/Get the hill variance in the x-direction. Default is 2.5.</para>
/// </summary>
  void SetHillXVariance(double arg0);


  // double GetHillXVariance ();
/// <summary>
/// <para>Set/Get the hill variance in the x-direction. Default is 2.5.</para>
/// </summary>
  double GetHillXVariance();


  // void SetHillYVariance (double );
/// <summary>
/// <para>Set/Get the hill variance in the y-direction. Default is 2.5.</para>
/// </summary>
  void SetHillYVariance(double arg0);


  // double GetHillYVariance ();
/// <summary>
/// <para>Set/Get the hill variance in the y-direction. Default is 2.5.</para>
/// </summary>
  double GetHillYVariance();


  // void SetHillAmplitude (double );
/// <summary>
/// <para>Set/Get the hill amplitude (height). Default is 2.</para>
/// </summary>
  void SetHillAmplitude(double arg0);


  // double GetHillAmplitude ();
/// <summary>
/// <para>Set/Get the hill amplitude (height). Default is 2.</para>
/// </summary>
  double GetHillAmplitude();


  // void SetRandomSeed (int );
/// <summary>
/// <para>Set/Get the Seed for the random number generator,  a value of 1 will initialize the random number generator,  a negative value will initialize it with the system time. Default is 1.</para>
/// </summary>
  void SetRandomSeed(int arg0);


  // int GetRandomSeed ();
/// <summary>
/// <para>Set/Get the Seed for the random number generator,  a value of 1 will initialize the random number generator,  a negative value will initialize it with the system time. Default is 1.</para>
/// </summary>
  int GetRandomSeed();


  // void SetAllowRandomGeneration (int );
/// <summary>
/// <para>Set/Get the random generation flag.  A value of 0 will disable the generation of random hills on the surface.  This allows a reproducible shape to be generated. Any other value means that the generation of the hills will be done randomly. Default is 1.</para>
/// </summary>
  void SetAllowRandomGeneration(int arg0);


  // int GetAllowRandomGeneration ();
/// <summary>
/// <para>Set/Get the random generation flag.  A value of 0 will disable the generation of random hills on the surface.  This allows a reproducible shape to be generated. Any other value means that the generation of the hills will be done randomly. Default is 1.</para>
/// </summary>
  int GetAllowRandomGeneration();


  // void AllowRandomGenerationOn ();
/// <summary>
/// <para>Set/Get the random generation flag.  A value of 0 will disable the generation of random hills on the surface.  This allows a reproducible shape to be generated. Any other value means that the generation of the hills will be done randomly. Default is 1.</para>
/// </summary>
  void AllowRandomGenerationOn();


  // void AllowRandomGenerationOff ();
/// <summary>
/// <para>Set/Get the random generation flag.  A value of 0 will disable the generation of random hills on the surface.  This allows a reproducible shape to be generated. Any other value means that the generation of the hills will be done randomly. Default is 1.</para>
/// </summary>
  void AllowRandomGenerationOff();


  // void SetXVarianceScaleFactor (double );
/// <summary>
/// <para>Set/Get the scaling factor for the variance in the x-direction.  Default is 1/3.</para>
/// </summary>
  void SetXVarianceScaleFactor(double arg0);


  // double GetXVarianceScaleFactor ();
/// <summary>
/// <para>Set/Get the scaling factor for the variance in the x-direction.  Default is 1/3.</para>
/// </summary>
  double GetXVarianceScaleFactor();


  // void SetYVarianceScaleFactor (double );
/// <summary>
/// <para>Set/Get the scaling factor for the variance in the y-direction.  Default is 1/3.</para>
/// </summary>
  void SetYVarianceScaleFactor(double arg0);


  // double GetYVarianceScaleFactor ();
/// <summary>
/// <para>Set/Get the scaling factor for the variance in the y-direction.  Default is 1/3.</para>
/// </summary>
  double GetYVarianceScaleFactor();


  // void SetAmplitudeScaleFactor (double );
/// <summary>
/// <para>Set/Get the scaling factor for the amplitude.  Default is 1/3.</para>
/// </summary>
  void SetAmplitudeScaleFactor(double arg0);


  // double GetAmplitudeScaleFactor ();
/// <summary>
/// <para>Set/Get the scaling factor for the amplitude.  Default is 1/3.</para>
/// </summary>
  double GetAmplitudeScaleFactor();


  // void GenerateTheHills (void );
/// <summary>
/// <para>Generate the centers of the hills, their standard deviations and  their amplitudes. This function creates a series of vectors representing the u, v coordinates of each hill, its variance in the u, v directions and the amplitude.</para>
/// <para>NOTE: This function must be called whenever any of the parameters are changed.</para>
/// </summary>
  void GenerateTheHills();


  // virtual void Evaluate (double uvw[3], double Pt[3], double Duvw[9]);
/// <summary>
/// <para>Construct a terrain consisting of randomly placed hills on a surface. </para>
/// <para>It is assumed that the function GenerateTheHills() has been executed to build the vectors of coordinates required to generate the point Pt. Pt represents the sum of all the amplitudes over the space.</para>
/// <para>This function performs the mapping \f$f(u,v) \rightarrow (x,y,x)\f$, returning it as Pt. It also returns the partial derivatives Du and Dv. \f$Pt = (x, y, z), Du = (dx/du, dy/du, dz/du), Dv = (dx/dv, dy/dv, dz/dv)\f$ . Then the normal is \f$N = Du X Dv\f$ .</para>
/// </summary>
  void Evaluate(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw);


  // virtual double EvaluateScalar (double uvw[3], double Pt[3], double Duvw[9]);
/// <summary>
/// <para>Calculate a user defined scalar using one or all of uvw, Pt, Duvw.</para>
/// <para>uvw are the parameters with Pt being the the Cartesian point,  Duvw are the derivatives of this point with respect to u, v and w. Pt, Duvw are obtained from Evaluate().</para>
/// <para>This function is only called if the ScalarMode has the value vtkParametricFunctionSource::SCALAR_FUNCTION_DEFINED</para>
/// <para>If the user does not need to calculate a scalar, then the  instantiated function should return zero. </para>
/// </summary>
  double EvaluateScalar(array<double>^ uvw, array<double>^ Pt, array<double>^ Duvw);


// Did not wrap:  vtkParametricRandomHills ();


// Did not wrap:  ~vtkParametricRandomHills ();


// Did not wrap:  vtkParametricRandomHills (const vtkParametricRandomHills &);


// Did not wrap:  void vtkParametricRandomHills 


// Did not wrap:  void InitSeed (int RandomSeed);


// Did not wrap:  double Rand (void );


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkParametricRandomHills(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkParametricRandomHills(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkParametricRandomHills();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkParametricRandomHills();


};

} // end vtkCommon
