#pragma once

// managed includes
#include "vtkUnstructuredGridVolumeMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkUnstructuredGridVolumeRayCastFunction;
ref class vtkUnstructuredGridVolumeRayIntegrator;

public ref class vtkUnstructuredGridVolumeRayCastMapper : public vtkUnstructuredGridVolumeMapper
{

public:
// Did not wrap:  static vtkUnstructuredGridVolumeRayCastMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridVolumeRayCastMapper *NewInstance ();
  vtkUnstructuredGridVolumeRayCastMapper^ NewInstance();


  // vtkUnstructuredGridVolumeRayCastMapper *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGridVolumeRayCastMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetScalarMode (int );
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors.</para>
/// </summary>
  void SetScalarMode(int arg0);


  // int GetScalarMode ();
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors.</para>
/// </summary>
  int GetScalarMode();


  // void SetScalarModeToDefault ();this SetScalarMode VTK_SCALAR_MODE_DEFAULT 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors.</para>
/// </summary>
  void SetScalarModeToDefault();


  // void SetScalarModeToUsePointData ();this SetScalarMode VTK_SCALAR_MODE_USE_POINT_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors.</para>
/// </summary>
  void SetScalarModeToUsePointData();


  // void SetScalarModeToUseCellData ();this SetScalarMode VTK_SCALAR_MODE_USE_CELL_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors.</para>
/// </summary>
  void SetScalarModeToUseCellData();


  // void SetScalarModeToUsePointFieldData ();this SetScalarMode VTK_SCALAR_MODE_USE_POINT_FIELD_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors.</para>
/// </summary>
  void SetScalarModeToUsePointFieldData();


  // void SetScalarModeToUseCellFieldData ();this SetScalarMode VTK_SCALAR_MODE_USE_CELL_FIELD_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors.</para>
/// </summary>
  void SetScalarModeToUseCellFieldData();


  // virtual void SelectScalarArray (int arrayNum);
/// <summary>
/// <para>When ScalarMode is set to UsePointFileData or UseCellFieldData, you can specify which array to use for coloring using these methods. The transfer function in the vtkVolumeProperty (attached to the calling vtkVolume) will decide how to convert vectors to colors.</para>
/// </summary>
  void SelectScalarArray(int arrayNum);


  // virtual void SelectScalarArray (const char *arrayName);
/// <summary>
/// <para>When ScalarMode is set to UsePointFileData or UseCellFieldData, you can specify which array to use for coloring using these methods. The transfer function in the vtkVolumeProperty (attached to the calling vtkVolume) will decide how to convert vectors to colors.</para>
/// </summary>
  void SelectScalarArray(System::String^ arrayName);


  // virtual char *GetArrayName ();return this ArrayName 
/// <summary>
/// <para>Get the array name or number and component to color by.</para>
/// </summary>
  System::String^ GetArrayName();


  // virtual int GetArrayId ();return this ArrayId 
/// <summary>
/// <para>Get the array name or number and component to color by.</para>
/// </summary>
  int GetArrayId();


  // virtual int GetArrayAccessMode ();return this ArrayAccessMode 
/// <summary>
/// <para>Return the method for obtaining scalar data.</para>
/// </summary>
  int GetArrayAccessMode();


  // const char *GetScalarModeAsString ();
/// <summary>
/// <para>Return the method for obtaining scalar data.</para>
/// </summary>
  System::String^ GetScalarModeAsString();


  // void SetImageSampleDistance (float );
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels.</para>
/// </summary>
  void SetImageSampleDistance(float arg0);


  // float GetImageSampleDistanceMinValue ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels.</para>
/// </summary>
  float GetImageSampleDistanceMinValue();


  // float GetImageSampleDistanceMaxValue ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels.</para>
/// </summary>
  float GetImageSampleDistanceMaxValue();


  // float GetImageSampleDistance ();
/// <summary>
/// <para>Sampling distance in the XY image dimensions. Default value of 1 meaning 1 ray cast per pixel. If set to 0.5, 4 rays will be cast per pixel. If set to 2.0, 1 ray will be cast for every 4 (2 by 2) pixels.</para>
/// </summary>
  float GetImageSampleDistance();


  // void SetMinimumImageSampleDistance (float );
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  void SetMinimumImageSampleDistance(float arg0);


  // float GetMinimumImageSampleDistanceMinValue ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  float GetMinimumImageSampleDistanceMinValue();


  // float GetMinimumImageSampleDistanceMaxValue ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  float GetMinimumImageSampleDistanceMaxValue();


  // float GetMinimumImageSampleDistance ();
/// <summary>
/// <para>This is the minimum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  float GetMinimumImageSampleDistance();


  // void SetMaximumImageSampleDistance (float );
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  void SetMaximumImageSampleDistance(float arg0);


  // float GetMaximumImageSampleDistanceMinValue ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  float GetMaximumImageSampleDistanceMinValue();


  // float GetMaximumImageSampleDistanceMaxValue ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  float GetMaximumImageSampleDistanceMaxValue();


  // float GetMaximumImageSampleDistance ();
/// <summary>
/// <para>This is the maximum image sample distance allow when the image sample distance is being automatically adjusted</para>
/// </summary>
  float GetMaximumImageSampleDistance();


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


  // void SetNumberOfThreads (int );
/// <summary>
/// <para>Set/Get the number of threads to use. This by default is equal to the number of available processors detected.</para>
/// </summary>
  void SetNumberOfThreads(int arg0);


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


  // virtual void SetRayCastFunction (vtkUnstructuredGridVolumeRayCastFunction *f);
/// <summary>
/// <para>Set/Get the helper class for casting rays.</para>
/// </summary>
  void SetRayCastFunction(vtkUnstructuredGridVolumeRayCastFunction^ f);


  // vtkUnstructuredGridVolumeRayCastFunction *GetRayCastFunction ();
/// <summary>
/// <para>Set/Get the helper class for casting rays.</para>
/// </summary>
  vtkUnstructuredGridVolumeRayCastFunction^ GetRayCastFunction();


  // virtual void SetRayIntegrator (vtkUnstructuredGridVolumeRayIntegrator *ri);
/// <summary>
/// <para>Set/Get the helper class for integrating rays.  If set to NULL, a default integrator will be assigned.</para>
/// </summary>
  void SetRayIntegrator(vtkUnstructuredGridVolumeRayIntegrator^ ri);


  // vtkUnstructuredGridVolumeRayIntegrator *GetRayIntegrator ();
/// <summary>
/// <para>Set/Get the helper class for integrating rays.  If set to NULL, a default integrator will be assigned.</para>
/// </summary>
  vtkUnstructuredGridVolumeRayIntegrator^ GetRayIntegrator();


  // void CastRays (int threadID, int threadCount);
  void CastRays(int threadID, int threadCount);


// Did not wrap:  vtkUnstructuredGridVolumeRayCastMapper ();


// Did not wrap:  ~vtkUnstructuredGridVolumeRayCastMapper ();


// Did not wrap:  void StoreRenderTime (vtkRenderer *ren, vtkVolume *vol, float t);


// Did not wrap:  float RetrieveRenderTime (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  double GetZBufferValue (int x, int y);


// Did not wrap:  double GetMinimumBoundsDepth (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  vtkUnstructuredGridVolumeRayCastMapper (const vtkUnstructuredGridVolumeRayCastMapper &);


// Did not wrap:  void vtkUnstructuredGridVolumeRayCastMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridVolumeRayCastMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridVolumeRayCastMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridVolumeRayCastMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridVolumeRayCastMapper();


};

} // end vtkVolumeRendering
