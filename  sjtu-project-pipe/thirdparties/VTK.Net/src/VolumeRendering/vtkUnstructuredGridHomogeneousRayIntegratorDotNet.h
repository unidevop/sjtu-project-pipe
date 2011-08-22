#pragma once

// managed includes
#include "vtkUnstructuredGridVolumeRayIntegratorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridHomogeneousRayIntegrator : public vtkUnstructuredGridVolumeRayIntegrator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridHomogeneousRayIntegrator *NewInstance ();
  vtkUnstructuredGridHomogeneousRayIntegrator^ NewInstance();


  // vtkUnstructuredGridHomogeneousRayIntegrator *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGridHomogeneousRayIntegrator^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkUnstructuredGridHomogeneousRayIntegrator *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize (vtkVolume *volume, vtkDataArray *scalars);
  void Initialize(vtkVolume^ volume, vtkDataArray^ scalars);


  // virtual void Integrate (vtkDoubleArray *intersectionLengths, vtkDataArray *nearIntersections, vtkDataArray *farIntersections, float color[4]);
  void Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color);


  // void SetTransferFunctionTableSize (int );
/// <summary>
/// <para>For quick lookup, the transfer function is sampled into a table. This parameter sets how big of a table to use.  By default, 1024 entries are used.</para>
/// </summary>
  void SetTransferFunctionTableSize(int arg0);


  // int GetTransferFunctionTableSize ();
/// <summary>
/// <para>For quick lookup, the transfer function is sampled into a table. This parameter sets how big of a table to use.  By default, 1024 entries are used.</para>
/// </summary>
  int GetTransferFunctionTableSize();


// Did not wrap:  vtkUnstructuredGridHomogeneousRayIntegrator ();


// Did not wrap:  ~vtkUnstructuredGridHomogeneousRayIntegrator ();


// Did not wrap:  virtual void GetTransferFunctionTables (vtkDataArray *scalars);


// Did not wrap:  vtkUnstructuredGridHomogeneousRayIntegrator (const vtkUnstructuredGridHomogeneousRayIntegrator &);


// Did not wrap:  void vtkUnstructuredGridHomogeneousRayIntegrator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridHomogeneousRayIntegrator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridHomogeneousRayIntegrator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridHomogeneousRayIntegrator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridHomogeneousRayIntegrator();


};

} // end vtkVolumeRendering
