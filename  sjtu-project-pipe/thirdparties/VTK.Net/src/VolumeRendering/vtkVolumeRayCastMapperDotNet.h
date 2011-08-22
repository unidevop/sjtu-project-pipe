#pragma once

// managed includes
#include "vtkVolumeMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkEncodedGradientEstimator;
ref class vtkEncodedGradientShader;
ref class vtkVolumeRayCastFunction;

public ref class vtkVolumeRayCastMapper : public vtkVolumeMapper
{

public:
// Did not wrap:  t00 a x b a t01 c x d c t10 e x f e t11 g x h g t0 t00 y t01 t00 t1 t10 y t11 t10 v t0 z t1 t0 VTK_THREAD_RETURN_TYPE VolumeRayCastMapper_CastRays void arg static vtkVolumeRayCastMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeRayCastMapper *NewInstance ();
  vtkVolumeRayCastMapper^ NewInstance();


  // vtkVolumeRayCastMapper *SafeDownCast (vtkObject* o);
  static vtkVolumeRayCastMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSampleDistance (double );
/// <summary>
/// <para>Set/Get the distance between samples.  This variable is only used for sampling ray casting methods.  Methods that compute a ray value by stepping cell-by-cell are not affected by this value. </para>
/// </summary>
  void SetSampleDistance(double arg0);


  // double GetSampleDistance ();
/// <summary>
/// <para>Set/Get the distance between samples.  This variable is only used for sampling ray casting methods.  Methods that compute a ray value by stepping cell-by-cell are not affected by this value. </para>
/// </summary>
  double GetSampleDistance();


  // virtual void SetVolumeRayCastFunction (vtkVolumeRayCastFunction *);
/// <summary>
/// <para>Get / Set the volume ray cast function. This is used to process values found along the ray to compute a final pixel value.</para>
/// </summary>
  void SetVolumeRayCastFunction(vtkVolumeRayCastFunction^ arg0);


  // vtkVolumeRayCastFunction *GetVolumeRayCastFunction ();
/// <summary>
/// <para>Get / Set the volume ray cast function. This is used to process values found along the ray to compute a final pixel value.</para>
/// </summary>
  vtkVolumeRayCastFunction^ GetVolumeRayCastFunction();


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


  // void SetImageSampleDistance (double );
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels.</para>
/// </summary>
  void SetImageSampleDistance(double arg0);


  // double GetImageSampleDistanceMinValue ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels.</para>
/// </summary>
  double GetImageSampleDistanceMinValue();


  // double GetImageSampleDistanceMaxValue ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels.</para>
/// </summary>
  double GetImageSampleDistanceMaxValue();


  // double GetImageSampleDistance ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels.</para>
/// </summary>
  double GetImageSampleDistance();


  // void SetMinimumImageSampleDistance (double );
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  void SetMinimumImageSampleDistance(double arg0);


  // double GetMinimumImageSampleDistanceMinValue ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  double GetMinimumImageSampleDistanceMinValue();


  // double GetMinimumImageSampleDistanceMaxValue ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  double GetMinimumImageSampleDistanceMaxValue();


  // double GetMinimumImageSampleDistance ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  double GetMinimumImageSampleDistance();


  // void SetMaximumImageSampleDistance (double );
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  void SetMaximumImageSampleDistance(double arg0);


  // double GetMaximumImageSampleDistanceMinValue ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  double GetMaximumImageSampleDistanceMinValue();


  // double GetMaximumImageSampleDistanceMaxValue ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  double GetMaximumImageSampleDistanceMaxValue();


  // double GetMaximumImageSampleDistance ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  double GetMaximumImageSampleDistance();


  // void SetAutoAdjustSampleDistances (int );
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance will be varied to achieve the allocated render time of this  prop (controlled by the desired update rate and any culling in use). </para>
/// </summary>
  void SetAutoAdjustSampleDistances(int arg0);


  // int GetAutoAdjustSampleDistancesMinValue ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance will be varied to achieve the allocated render time of this  prop (controlled by the desired update rate and any culling in use). </para>
/// </summary>
  int GetAutoAdjustSampleDistancesMinValue();


  // int GetAutoAdjustSampleDistancesMaxValue ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance will be varied to achieve the allocated render time of this  prop (controlled by the desired update rate and any culling in use). </para>
/// </summary>
  int GetAutoAdjustSampleDistancesMaxValue();


  // int GetAutoAdjustSampleDistances ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance will be varied to achieve the allocated render time of this  prop (controlled by the desired update rate and any culling in use). </para>
/// </summary>
  int GetAutoAdjustSampleDistances();


  // void AutoAdjustSampleDistancesOn ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance will be varied to achieve the allocated render time of this  prop (controlled by the desired update rate and any culling in use). </para>
/// </summary>
  void AutoAdjustSampleDistancesOn();


  // void AutoAdjustSampleDistancesOff ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance will be varied to achieve the allocated render time of this  prop (controlled by the desired update rate and any culling in use). </para>
/// </summary>
  void AutoAdjustSampleDistancesOff();


  // void SetNumberOfThreads (int num);
/// <summary>
/// <para>Set/Get the number of threads to use. This by default is equal to the number of available processors detected.</para>
/// </summary>
  void SetNumberOfThreads(int num);


  // int GetNumberOfThreads ();
/// <summary>
/// <para>Set/Get the number of threads to use. This by default is equal to the number of available processors detected.</para>
/// </summary>
  int GetNumberOfThreads();


  // void SetIntermixIntersectingGeometry (int );
/// <summary>
/// <para>If IntermixIntersectingGeometry is turned on, the zbuffer will be captured and used to limit the traversal of the rays.</para>
/// </summary>
  void SetIntermixIntersectingGeometry(int arg0);


  // int GetIntermixIntersectingGeometryMinValue ();
/// <summary>
/// <para>If IntermixIntersectingGeometry is turned on, the zbuffer will be captured and used to limit the traversal of the rays.</para>
/// </summary>
  int GetIntermixIntersectingGeometryMinValue();


  // int GetIntermixIntersectingGeometryMaxValue ();
/// <summary>
/// <para>If IntermixIntersectingGeometry is turned on, the zbuffer will be captured and used to limit the traversal of the rays.</para>
/// </summary>
  int GetIntermixIntersectingGeometryMaxValue();


  // int GetIntermixIntersectingGeometry ();
/// <summary>
/// <para>If IntermixIntersectingGeometry is turned on, the zbuffer will be captured and used to limit the traversal of the rays.</para>
/// </summary>
  int GetIntermixIntersectingGeometry();


  // void IntermixIntersectingGeometryOn ();
/// <summary>
/// <para>If IntermixIntersectingGeometry is turned on, the zbuffer will be captured and used to limit the traversal of the rays.</para>
/// </summary>
  void IntermixIntersectingGeometryOn();


  // void IntermixIntersectingGeometryOff ();
/// <summary>
/// <para>If IntermixIntersectingGeometry is turned on, the zbuffer will be captured and used to limit the traversal of the rays.</para>
/// </summary>
  void IntermixIntersectingGeometryOff();


// Did not wrap:  vtkVolumeRayCastMapper ();


// Did not wrap:  ~vtkVolumeRayCastMapper ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  void UpdateShadingTables (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void ComputeMatrices (vtkImageData *data, vtkVolume *vol);


// Did not wrap:  int ComputeRowBounds (vtkVolume *vol, vtkRenderer *ren);


// Did not wrap:  VTK_THREAD_RETURN_TYPE VolumeRayCastMapper_CastRays (void *arg);


// Did not wrap:  void StoreRenderTime (vtkRenderer *ren, vtkVolume *vol, float t);


// Did not wrap:  float RetrieveRenderTime (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  int ClipRayAgainstVolume (vtkVolumeRayCastDynamicInfo *dynamicInfo, float bounds[6]);


// Did not wrap:  void InitializeClippingPlanes (vtkVolumeRayCastStaticInfo *staticInfo, vtkPlaneCollection *planes);


// Did not wrap:  int ClipRayAgainstClippingPlanes (vtkVolumeRayCastDynamicInfo *dynamicInfo, vtkVolumeRayCastStaticInfo *staticInfo);


// Did not wrap:  double GetZBufferValue (int x, int y);


// Did not wrap:  vtkVolumeRayCastMapper (const vtkVolumeRayCastMapper &);


// Did not wrap:  void vtkVolumeRayCastMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeRayCastMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeRayCastMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeRayCastMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeRayCastMapper();


};

} // end vtkVolumeRendering
