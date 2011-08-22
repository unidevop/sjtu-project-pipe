#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridVolumeRayIntegrator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridVolumeRayIntegrator *NewInstance ();
  vtkUnstructuredGridVolumeRayIntegrator^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize (vtkVolume *volume, vtkDataArray *scalars) = 0;
/// <summary>
/// <para>Set up the integrator with the given properties and scalars.</para>
/// </summary>
  void Initialize(vtkVolume^ volume, vtkDataArray^ scalars);


  // virtual void Integrate (vtkDoubleArray *intersectionLengths, vtkDataArray *nearIntersections, vtkDataArray *farIntersections, float color[4]) = 0;
/// <summary>
/// <para>Given a set of intersections (defined by the three arrays), compute the peicewise integration of the array in front to back order. /c intersectionLengths holds the lengths of each peicewise segment. /c nearIntersections and /c farIntersections hold the scalar values at the front and back of each segment.  /c color should contain the RGBA value of the volume in front of the segments passed in, and the result will be placed back into /c color.</para>
/// </summary>
  void Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color);


// Did not wrap:  vtkUnstructuredGridVolumeRayIntegrator ();


// Did not wrap:  ~vtkUnstructuredGridVolumeRayIntegrator ();


// Did not wrap:  vtkUnstructuredGridVolumeRayIntegrator (const vtkUnstructuredGridVolumeRayIntegrator &);


// Did not wrap:  void vtkUnstructuredGridVolumeRayIntegrator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridVolumeRayIntegrator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridVolumeRayIntegrator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridVolumeRayIntegrator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridVolumeRayIntegrator();


};

} // end vtkVolumeRendering
