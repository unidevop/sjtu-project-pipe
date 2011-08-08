#pragma once

// managed includes
#include "vtkUnstructuredGridVolumeRayIntegratorDotNet.h"
#include "vtkUnstructuredGridVolumeRayIntegratorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridPreIntegration : public vtkUnstructuredGridVolumeRayIntegrator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridPreIntegration *NewInstance ();
  vtkUnstructuredGridPreIntegration^ NewInstance();


  // vtkUnstructuredGridPreIntegration *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGridPreIntegration^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkUnstructuredGridPreIntegration *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize (vtkVolume *volume, vtkDataArray *scalars);
  void Initialize(vtkVolume^ volume, vtkDataArray^ scalars);


  // virtual void Integrate (vtkDoubleArray *intersectionLengths, vtkDataArray *nearIntersections, vtkDataArray *farIntersections, float color[4]);
  void Integrate(vtkDoubleArray^ intersectionLengths, vtkDataArray^ nearIntersections, vtkDataArray^ farIntersections, array<float>^ color);


  // vtkUnstructuredGridVolumeRayIntegrator *GetIntegrator ();
/// <summary>
/// <para>The class used to fill the pre integration table.  By default, a vtkUnstructuredGridPartialPreIntegration is built.</para>
/// </summary>
  vtkUnstructuredGridVolumeRayIntegrator^ GetIntegrator();


  // virtual void SetIntegrator (vtkUnstructuredGridVolumeRayIntegrator *);
/// <summary>
/// <para>The class used to fill the pre integration table.  By default, a vtkUnstructuredGridPartialPreIntegration is built.</para>
/// </summary>
  void SetIntegrator(vtkUnstructuredGridVolumeRayIntegrator^ arg0);


  // void SetIntegrationTableScalarResolution (int );
/// <summary>
/// <para>Set/Get the size of the integration table built.</para>
/// </summary>
  void SetIntegrationTableScalarResolution(int arg0);


  // int GetIntegrationTableScalarResolution ();
/// <summary>
/// <para>Set/Get the size of the integration table built.</para>
/// </summary>
  int GetIntegrationTableScalarResolution();


  // void SetIntegrationTableLengthResolution (int );
/// <summary>
/// <para>Set/Get the size of the integration table built.</para>
/// </summary>
  void SetIntegrationTableLengthResolution(int arg0);


  // int GetIntegrationTableLengthResolution ();
/// <summary>
/// <para>Set/Get the size of the integration table built.</para>
/// </summary>
  int GetIntegrationTableLengthResolution();


  // virtual double GetIntegrationTableScalarShift (int component);
/// <summary>
/// <para>Get how an integration table is indexed.</para>
/// </summary>
  double GetIntegrationTableScalarShift(int component);


  // virtual double GetIntegrationTableScalarScale (int component);
/// <summary>
/// <para>Get how an integration table is indexed.</para>
/// </summary>
  double GetIntegrationTableScalarScale(int component);


  // virtual double GetIntegrationTableLengthScale ();
/// <summary>
/// <para>Get how an integration table is indexed.</para>
/// </summary>
  double GetIntegrationTableLengthScale();


  // int GetIncrementalPreIntegration ();
/// <summary>
/// <para>Get/set whether to use incremental pre-integration (by default it's on).  Incremental pre-integration is much faster but can introduce error due to numerical imprecision.  Under most circumstances, the error is not noticable.</para>
/// </summary>
  int GetIncrementalPreIntegration();


  // void SetIncrementalPreIntegration (int );
/// <summary>
/// <para>Get/set whether to use incremental pre-integration (by default it's on).  Incremental pre-integration is much faster but can introduce error due to numerical imprecision.  Under most circumstances, the error is not noticable.</para>
/// </summary>
  void SetIncrementalPreIntegration(int arg0);


  // void IncrementalPreIntegrationOn ();
/// <summary>
/// <para>Get/set whether to use incremental pre-integration (by default it's on).  Incremental pre-integration is much faster but can introduce error due to numerical imprecision.  Under most circumstances, the error is not noticable.</para>
/// </summary>
  void IncrementalPreIntegrationOn();


  // void IncrementalPreIntegrationOff ();
/// <summary>
/// <para>Get/set whether to use incremental pre-integration (by default it's on).  Incremental pre-integration is much faster but can introduce error due to numerical imprecision.  Under most circumstances, the error is not noticable.</para>
/// </summary>
  void IncrementalPreIntegrationOff();


// Did not wrap:  virtual float *GetPreIntegrationTable (int component);


// Did not wrap:  float *GetTableEntry (double scalar_front, double scalar_back, double lenth, int component);


// Did not wrap:  float *GetIndexedTableEntry (int scalar_front_index, int scalar_back_index, int length_index, int component);


// Did not wrap:  vtkUnstructuredGridPreIntegration ();


// Did not wrap:  ~vtkUnstructuredGridPreIntegration ();


// Did not wrap:  virtual void BuildPreIntegrationTables (vtkDataArray *scalars);


// Did not wrap:  vtkUnstructuredGridPreIntegration (const vtkUnstructuredGridPreIntegration &);


// Did not wrap:  void vtkUnstructuredGridPreIntegration 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridPreIntegration(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridPreIntegration(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridPreIntegration();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridPreIntegration();


};

} // end vtkVolumeRendering
