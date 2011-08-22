#pragma once

// managed includes
#include "vtkVolumeMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointRayCastImage;
ref class vtkFixedPointVolumeRayCastCompositeGOHelper;
ref class vtkFixedPointVolumeRayCastCompositeGOShadeHelper;
ref class vtkFixedPointVolumeRayCastCompositeHelper;
ref class vtkFixedPointVolumeRayCastCompositeShadeHelper;
ref class vtkFixedPointVolumeRayCastMIPHelper;

public ref class vtkFixedPointVolumeRayCastMapper : public vtkVolumeMapper
{

public:
// Did not wrap:  VTK_THREAD_RETURN_TYPE FixedPointVolumeRayCastMapper_CastRays void arg static vtkFixedPointVolumeRayCastMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFixedPointVolumeRayCastMapper *NewInstance ();
  vtkFixedPointVolumeRayCastMapper^ NewInstance();


  // vtkFixedPointVolumeRayCastMapper *SafeDownCast (vtkObject* o);
  static vtkFixedPointVolumeRayCastMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSampleDistance (float );
/// <summary>
/// <para>Set/Get the distance between samples used for rendering  when AutoAdjustSampleDistances is off, or when this mapper has more than 1 second allocated to it for rendering.</para>
/// </summary>
  void SetSampleDistance(float arg0);


  // float GetSampleDistance ();
/// <summary>
/// <para>Set/Get the distance between samples used for rendering  when AutoAdjustSampleDistances is off, or when this mapper has more than 1 second allocated to it for rendering.</para>
/// </summary>
  float GetSampleDistance();


  // void SetInteractiveSampleDistance (float );
/// <summary>
/// <para>Set/Get the distance between samples when interactive rendering is happening. In this case, interactive is defined as this volume mapper having less than 1 second allocated for rendering. When AutoAdjustSampleDistance is On, and the allocated render time is less than 1 second, then this InteractiveSampleDistance will be used instead of the SampleDistance above.</para>
/// </summary>
  void SetInteractiveSampleDistance(float arg0);


  // float GetInteractiveSampleDistance ();
/// <summary>
/// <para>Set/Get the distance between samples when interactive rendering is happening. In this case, interactive is defined as this volume mapper having less than 1 second allocated for rendering. When AutoAdjustSampleDistance is On, and the allocated render time is less than 1 second, then this InteractiveSampleDistance will be used instead of the SampleDistance above.</para>
/// </summary>
  float GetInteractiveSampleDistance();


  // void SetImageSampleDistance (float );
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels. This value will be adjusted to meet a desired frame rate when AutoAdjustSampleDistances is on.</para>
/// </summary>
  void SetImageSampleDistance(float arg0);


  // float GetImageSampleDistanceMinValue ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels. This value will be adjusted to meet a desired frame rate when AutoAdjustSampleDistances is on.</para>
/// </summary>
  float GetImageSampleDistanceMinValue();


  // float GetImageSampleDistanceMaxValue ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels. This value will be adjusted to meet a desired frame rate when AutoAdjustSampleDistances is on.</para>
/// </summary>
  float GetImageSampleDistanceMaxValue();


  // float GetImageSampleDistance ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels. This value will be adjusted to meet a desired frame rate when AutoAdjustSampleDistances is on.</para>
/// </summary>
  float GetImageSampleDistance();


  // void SetMinimumImageSampleDistance (float );
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted.</para>
/// </summary>
  void SetMinimumImageSampleDistance(float arg0);


  // float GetMinimumImageSampleDistanceMinValue ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted.</para>
/// </summary>
  float GetMinimumImageSampleDistanceMinValue();


  // float GetMinimumImageSampleDistanceMaxValue ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted.</para>
/// </summary>
  float GetMinimumImageSampleDistanceMaxValue();


  // float GetMinimumImageSampleDistance ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted.</para>
/// </summary>
  float GetMinimumImageSampleDistance();


  // void SetMaximumImageSampleDistance (float );
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted.</para>
/// </summary>
  void SetMaximumImageSampleDistance(float arg0);


  // float GetMaximumImageSampleDistanceMinValue ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted.</para>
/// </summary>
  float GetMaximumImageSampleDistanceMinValue();


  // float GetMaximumImageSampleDistanceMaxValue ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted.</para>
/// </summary>
  float GetMaximumImageSampleDistanceMaxValue();


  // float GetMaximumImageSampleDistance ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted.</para>
/// </summary>
  float GetMaximumImageSampleDistance();


  // void SetAutoAdjustSampleDistances (int );
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance and the SampleDistance will be varied to achieve the allocated  render time of this prop (controlled by the desired update rate  and any culling in use). If this is an interactive render (more  than 1 frame per second) the SampleDistance will be increased,  otherwise it will not be altered (a binary decision, as opposed to the ImageSampleDistance which will vary continuously).</para>
/// </summary>
  void SetAutoAdjustSampleDistances(int arg0);


  // int GetAutoAdjustSampleDistancesMinValue ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance and the SampleDistance will be varied to achieve the allocated  render time of this prop (controlled by the desired update rate  and any culling in use). If this is an interactive render (more  than 1 frame per second) the SampleDistance will be increased,  otherwise it will not be altered (a binary decision, as opposed to the ImageSampleDistance which will vary continuously).</para>
/// </summary>
  int GetAutoAdjustSampleDistancesMinValue();


  // int GetAutoAdjustSampleDistancesMaxValue ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance and the SampleDistance will be varied to achieve the allocated  render time of this prop (controlled by the desired update rate  and any culling in use). If this is an interactive render (more  than 1 frame per second) the SampleDistance will be increased,  otherwise it will not be altered (a binary decision, as opposed to the ImageSampleDistance which will vary continuously).</para>
/// </summary>
  int GetAutoAdjustSampleDistancesMaxValue();


  // int GetAutoAdjustSampleDistances ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance and the SampleDistance will be varied to achieve the allocated  render time of this prop (controlled by the desired update rate  and any culling in use). If this is an interactive render (more  than 1 frame per second) the SampleDistance will be increased,  otherwise it will not be altered (a binary decision, as opposed to the ImageSampleDistance which will vary continuously).</para>
/// </summary>
  int GetAutoAdjustSampleDistances();


  // void AutoAdjustSampleDistancesOn ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance and the SampleDistance will be varied to achieve the allocated  render time of this prop (controlled by the desired update rate  and any culling in use). If this is an interactive render (more  than 1 frame per second) the SampleDistance will be increased,  otherwise it will not be altered (a binary decision, as opposed to the ImageSampleDistance which will vary continuously).</para>
/// </summary>
  void AutoAdjustSampleDistancesOn();


  // void AutoAdjustSampleDistancesOff ();
/// <summary>
/// <para>If AutoAdjustSampleDistances is on, the the ImageSampleDistance and the SampleDistance will be varied to achieve the allocated  render time of this prop (controlled by the desired update rate  and any culling in use). If this is an interactive render (more  than 1 frame per second) the SampleDistance will be increased,  otherwise it will not be altered (a binary decision, as opposed to the ImageSampleDistance which will vary continuously).</para>
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


  // float ComputeRequiredImageSampleDistance (float desiredTime, vtkRenderer *ren);
/// <summary>
/// <para>What is the image sample distance required to achieve the desired time? A version of this method is provided that does not require the volume argument since if you are using an LODProp3D you may not know this information. If you use this version you must be certain that the ray cast mapper is only used for one volume (and not shared among multiple volumes)</para>
/// </summary>
  float ComputeRequiredImageSampleDistance(float desiredTime, vtkRenderer^ ren);


  // float ComputeRequiredImageSampleDistance (float desiredTime, vtkRenderer *ren, vtkVolume *vol);
/// <summary>
/// <para>What is the image sample distance required to achieve the desired time? A version of this method is provided that does not require the volume argument since if you are using an LODProp3D you may not know this information. If you use this version you must be certain that the ray cast mapper is only used for one volume (and not shared among multiple volumes)</para>
/// </summary>
  float ComputeRequiredImageSampleDistance(float desiredTime, vtkRenderer^ ren, vtkVolume^ vol);


  // vtkRenderWindow *GetRenderWindow ();
  vtkRenderWindow^ GetRenderWindow();


  // vtkFixedPointVolumeRayCastMIPHelper *GetMIPHelper ();
  vtkFixedPointVolumeRayCastMIPHelper^ GetMIPHelper();


  // vtkFixedPointVolumeRayCastCompositeHelper *GetCompositeHelper ();
  vtkFixedPointVolumeRayCastCompositeHelper^ GetCompositeHelper();


  // vtkFixedPointVolumeRayCastCompositeGOHelper *GetCompositeGOHelper ();
  vtkFixedPointVolumeRayCastCompositeGOHelper^ GetCompositeGOHelper();


  // vtkFixedPointVolumeRayCastCompositeGOShadeHelper *GetCompositeGOShadeHelper ();
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper^ GetCompositeGOShadeHelper();


  // vtkFixedPointVolumeRayCastCompositeShadeHelper *GetCompositeShadeHelper ();
  vtkFixedPointVolumeRayCastCompositeShadeHelper^ GetCompositeShadeHelper();


  // float  *GetTableShift ();
  array<float>^ GetTableShift();


  // float  *GetTableScale ();
  array<float>^ GetTableScale();


  // int GetShadingRequired ();
  int GetShadingRequired();


  // int GetGradientOpacityRequired ();
  int GetGradientOpacityRequired();


// Did not wrap:  int *GetRowBounds ();return this RowBounds 


// Did not wrap:  unsigned short *GetColorTable (int c);return this ColorTable c 


// Did not wrap:  unsigned short *GetScalarOpacityTable (int c);return this ScalarOpacityTable c 


// Did not wrap:  unsigned short *GetGradientOpacityTable (int c);return this GradientOpacityTable c 


  // vtkVolume *GetVolume ();return this Volume 
  vtkVolume^ GetVolume();


// Did not wrap:  unsigned short *GetGradientNormal ();return this GradientNormal 


// Did not wrap:  unsigned char *GetGradientMagnitude ();return this GradientMagnitude 


// Did not wrap:  unsigned short *GetDiffuseShadingTable (int c);return this DiffuseShadingTable c 


// Did not wrap:  unsigned short *GetSpecularShadingTable (int c);return this SpecularShadingTable c 


  // void ComputeRayInfo (int x, int y, unsigned int pos[3], unsigned int dir[3], unsigned int *numSteps);
  void ComputeRayInfo(int x, int y, array<unsigned int>^ arg2, array<unsigned int>^ arg3, array<unsigned int>^ arg4);


  // void InitializeRayInfo (vtkVolume *vol);
  void InitializeRayInfo(vtkVolume^ vol);


  // int ShouldUseNearestNeighborInterpolation (vtkVolume *vol);
  int ShouldUseNearestNeighborInterpolation(vtkVolume^ vol);


  // void SetRayCastImage (vtkFixedPointRayCastImage *);
/// <summary>
/// <para>Set / Get the underlying image object. One will be automatically created - only need to set it when using from an AMR mapper which renders multiple times into the same image.</para>
/// </summary>
  void SetRayCastImage(vtkFixedPointRayCastImage^ arg0);


  // vtkFixedPointRayCastImage *GetRayCastImage ();
/// <summary>
/// <para>Set / Get the underlying image object. One will be automatically created - only need to set it when using from an AMR mapper which renders multiple times into the same image.</para>
/// </summary>
  vtkFixedPointRayCastImage^ GetRayCastImage();


  // int PerImageInitialization (vtkRenderer *, vtkVolume *, int , double *, double *, int *);
  int PerImageInitialization(vtkRenderer^ arg0, vtkVolume^ arg1, int arg2, array<double>^ arg3, array<double>^ arg4, array<int>^ arg5);


  // void PerVolumeInitialization (vtkRenderer *, vtkVolume *);
  void PerVolumeInitialization(vtkRenderer^ arg0, vtkVolume^ arg1);


  // void PerSubVolumeInitialization (vtkRenderer *, vtkVolume *, int );
  void PerSubVolumeInitialization(vtkRenderer^ arg0, vtkVolume^ arg1, int arg2);


  // void RenderSubVolume ();
  void RenderSubVolume();


  // void DisplayRenderedImage (vtkRenderer *, vtkVolume *);
  void DisplayRenderedImage(vtkRenderer^ arg0, vtkVolume^ arg1);


  // void AbortRender ();
  void AbortRender();


// Did not wrap:  vtkFixedPointVolumeRayCastMapper ();


// Did not wrap:  ~vtkFixedPointVolumeRayCastMapper ();


// Did not wrap:  void ComputeMatrices (double volumeOrigin[3], double volumeSpacing[3], int volumeExtent[6], vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  int ComputeRowBounds (vtkRenderer *ren, int imageFlag, int rowBoundsFlag, int volumeExtent[6]);


// Did not wrap:  void CaptureZBuffer (vtkRenderer *ren);


// Did not wrap:  VTK_THREAD_RETURN_TYPE FixedPointVolumeRayCastMapper_CastRays (void *arg);


// Did not wrap:  void StoreRenderTime (vtkRenderer *ren, vtkVolume *vol, float t);


// Did not wrap:  float RetrieveRenderTime (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  float RetrieveRenderTime (vtkRenderer *ren);


// Did not wrap:  int ClipRayAgainstVolume (float rayStart[3], float rayEnd[3], float rayDirection[3], double bounds[6]);


// Did not wrap:  int UpdateColorTable (vtkVolume *vol);


// Did not wrap:  int UpdateGradients (vtkVolume *vol);


// Did not wrap:  int UpdateShadingTable (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void UpdateCroppingRegions ();


// Did not wrap:  void ComputeGradients (vtkVolume *vol);


// Did not wrap:  int ClipRayAgainstClippingPlanes (float rayStart[3], float rayEnd[3], int numClippingPlanes, float *clippingPlanes);


// Did not wrap:  float GetZBufferValue (int x, int y);


// Did not wrap:  void UpdateMinMaxVolume (vtkVolume *vol);


// Did not wrap:  void FillInMaxGradientMagnitudes (int fullDim[3], int smallDim[3]);


// Did not wrap:  vtkFixedPointVolumeRayCastMapper (const vtkFixedPointVolumeRayCastMapper &);


// Did not wrap:  void vtkFixedPointVolumeRayCastMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFixedPointVolumeRayCastMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFixedPointVolumeRayCastMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFixedPointVolumeRayCastMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFixedPointVolumeRayCastMapper();


};

} // end vtkVolumeRendering
