#pragma once

// managed includes
#include "vtkUnstructuredGridVolumeMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkProjectedTetrahedraMapper : public vtkUnstructuredGridVolumeMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProjectedTetrahedraMapper *NewInstance ();
  vtkProjectedTetrahedraMapper^ NewInstance();


  // vtkProjectedTetrahedraMapper *SafeDownCast (vtkObject* o);
  static vtkProjectedTetrahedraMapper^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkProjectedTetrahedraMapper *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetVisibilitySort (vtkVisibilitySort *sort);
  void SetVisibilitySort(vtkVisibilitySort^ sort);


  // vtkVisibilitySort *GetVisibilitySort ();
  vtkVisibilitySort^ GetVisibilitySort();


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


  // virtual void Render (vtkRenderer *renderer, vtkVolume *volume);
  void Render(vtkRenderer^ renderer, vtkVolume^ volume);


  // virtual void ReleaseGraphicsResources (vtkWindow *window);
  void ReleaseGraphicsResources(vtkWindow^ window);


  // static void MapScalarsToColors (vtkDataArray *colors, vtkVolume *volume, vtkDataArray *scalars);
  static void MapScalarsToColors(vtkDataArray^ colors, vtkVolume^ volume, vtkDataArray^ scalars);


// Did not wrap:  vtkProjectedTetrahedraMapper ();


// Did not wrap:  ~vtkProjectedTetrahedraMapper ();


// Did not wrap:  virtual void ProjectTetrahedra (vtkRenderer *renderer, vtkVolume *volume);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *collector);


// Did not wrap:  vtkProjectedTetrahedraMapper (const vtkProjectedTetrahedraMapper &);


// Did not wrap:  void vtkProjectedTetrahedraMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProjectedTetrahedraMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProjectedTetrahedraMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProjectedTetrahedraMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProjectedTetrahedraMapper();


};

} // end vtkVolumeRendering
