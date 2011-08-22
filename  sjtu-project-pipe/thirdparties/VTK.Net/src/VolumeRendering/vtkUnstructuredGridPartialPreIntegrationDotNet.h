#pragma once

// managed includes
#include "vtkUnstructuredGridVolumeRayIntegratorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridPartialPreIntegration : public vtkUnstructuredGridVolumeRayIntegrator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridPartialPreIntegration *NewInstance ();
  vtkUnstructuredGridPartialPreIntegration^ NewInstance();


  // vtkUnstructuredGridPartialPreIntegration *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGridPartialPreIntegration^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkUnstructuredGridPartialPreIntegration *New ();


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


  // static float Psi (float taufD, float taubD);
/// <summary>
/// <para>Looks up Psi (as defined by Moreland and Angel, &quot;A Fast High Accuracy Volume Renderer for Unstructured Data&quot;) in a table.  The table must be created first, which happens on the first instantiation of this class or when BuildPsiTable is first called.</para>
/// </summary>
  static float Psi(float taufD, float taubD);


  // static void BuildPsiTable ();
  static void BuildPsiTable();


// Did not wrap:  vtkUnstructuredGridPartialPreIntegration ();


// Did not wrap:  ~vtkUnstructuredGridPartialPreIntegration ();


// Did not wrap:  vtkUnstructuredGridPartialPreIntegration (const vtkUnstructuredGridPartialPreIntegration &);


// Did not wrap:  void vtkUnstructuredGridPartialPreIntegration 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridPartialPreIntegration(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridPartialPreIntegration(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridPartialPreIntegration();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridPartialPreIntegration();


};

} // end vtkVolumeRendering
