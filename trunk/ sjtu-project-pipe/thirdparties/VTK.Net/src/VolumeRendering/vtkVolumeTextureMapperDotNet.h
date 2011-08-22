#pragma once

// managed includes
#include "vtkVolumeMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkEncodedGradientEstimator;
ref class vtkEncodedGradientShader;

public ref class vtkVolumeTextureMapper : public vtkVolumeMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeTextureMapper *NewInstance ();
  vtkVolumeTextureMapper^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Update ();
/// <summary>
/// <para>Update the volume rendering pipeline by updating the scalar input</para>
/// </summary>
  void Update();


  // virtual void SetGradientEstimator (vtkEncodedGradientEstimator *gradest);
/// <summary>
/// <para>Set / Get the gradient estimator used to estimate normals</para>
/// </summary>
  void SetGradientEstimator(vtkEncodedGradientEstimator^ gradest);


  // vtkEncodedGradientEstimator *GetGradientEstimator ();
/// <summary>
/// <para>Set / Get the gradient estimator used to estimate normals</para>
/// </summary>
  vtkEncodedGradientEstimator^ GetGradientEstimator();


  // vtkEncodedGradientShader *GetGradientShader ();
/// <summary>
/// <para>Get the gradient shader.</para>
/// </summary>
  vtkEncodedGradientShader^ GetGradientShader();


// Did not wrap:  vtkVolumeTextureMapper ();


// Did not wrap:  ~vtkVolumeTextureMapper ();


// Did not wrap:  void InitializeRender (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkVolumeTextureMapper (const vtkVolumeTextureMapper &);


// Did not wrap:  void vtkVolumeTextureMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeTextureMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeTextureMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeTextureMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeTextureMapper();


};

} // end vtkVolumeRendering
