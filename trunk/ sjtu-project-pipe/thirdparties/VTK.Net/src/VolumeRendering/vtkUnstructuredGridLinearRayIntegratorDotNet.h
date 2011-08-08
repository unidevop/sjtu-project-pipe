#pragma once

// managed includes
#include "vtkUnstructuredGridVolumeRayIntegratorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridLinearRayIntegrator : public vtkUnstructuredGridVolumeRayIntegrator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridLinearRayIntegrator *NewInstance ();
  vtkUnstructuredGridLinearRayIntegrator^ NewInstance();


  // vtkUnstructuredGridLinearRayIntegrator *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGridLinearRayIntegrator^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkUnstructuredGridLinearRayIntegrator *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize (vtkVolume *volume, vtkDataArray *scalars);
  void Initialize(vtkVolume^ volume, vtkDataArray^ scalars);


  // virtual void Integrate (vtkDoubleArray *intersectionLengths, vtkDataArray *nearIntersections, vtkDataArray *farIntersections, float color[4]);
  void Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color);


  // static void IntegrateRay (double length, double intensity_front, double attenuation_front, double intensity_back, double attenuation_back, float color[4]);
/// <summary>
/// <para>Integrates a single ray segment.  \c color is blended with the result (with \c color in front).  The result is written back into \c color.</para>
/// </summary>
  static void IntegrateRay(double length, double intensity_front, double attenuation_front, double intensity_back, double attenuation_back, array<float>^ color);


  // static void IntegrateRay (double length, const double color_front[3], double attenuation_front, const double color_back[3], double attenuation_back, float color[4]);
/// <summary>
/// <para>Integrates a single ray segment.  \c color is blended with the result (with \c color in front).  The result is written back into \c color.</para>
/// </summary>
  static void IntegrateRay(double length, array<double>^ color_front, double attenuation_front, array<double>^ color_back, double attenuation_back, array<float>^ color);


  // static float Psi (float length, float attenuation_front, float attenuation_back);
/// <summary>
/// <para>Computes Psi (as defined by Moreland and Angel, &quot;A Fast High Accuracy Volume Renderer for Unstructured Data&quot;).</para>
/// </summary>
  static float Psi(float length, float attenuation_front, float attenuation_back);


// Did not wrap:  vtkUnstructuredGridLinearRayIntegrator ();


// Did not wrap:  ~vtkUnstructuredGridLinearRayIntegrator ();


// Did not wrap:  vtkUnstructuredGridLinearRayIntegrator (const vtkUnstructuredGridLinearRayIntegrator &);


// Did not wrap:  void vtkUnstructuredGridLinearRayIntegrator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridLinearRayIntegrator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridLinearRayIntegrator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridLinearRayIntegrator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridLinearRayIntegrator();


};

} // end vtkVolumeRendering
