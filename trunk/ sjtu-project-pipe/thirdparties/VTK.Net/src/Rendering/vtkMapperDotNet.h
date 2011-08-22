#pragma once

// managed includes
#include "vtkAbstractMapper3DDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkActor;
ref class vtkRenderer;

public ref class vtkMapper : public vtkAbstractMapper3D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMapper *NewInstance ();
  vtkMapper^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ShallowCopy (vtkAbstractMapper *m);
/// <summary>
/// <para>Make a shallow copy of this mapper.</para>
/// </summary>
  void ShallowCopy(vtkAbstractMapper^ m);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Overload standard modified time function. If lookup table is modified, then this object is modified as well.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void Render (vtkRenderer *ren, vtkActor *a) = 0;
/// <summary>
/// <para>Method initiates the mapping process. Generally sent by the actor  as each frame is rendered.</para>
/// </summary>
  void Render(vtkRenderer^ ren, vtkActor^ a);


  // virtual void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this mapper. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // void SetLookupTable (vtkScalarsToColors *lut);
/// <summary>
/// <para>Specify a lookup table for the mapper to use.</para>
/// </summary>
  void SetLookupTable(vtkScalarsToColors^ lut);


  // vtkScalarsToColors *GetLookupTable ();
/// <summary>
/// <para>Specify a lookup table for the mapper to use.</para>
/// </summary>
  vtkScalarsToColors^ GetLookupTable();


  // virtual void CreateDefaultLookupTable ();
/// <summary>
/// <para>Create default lookup table. Generally used to create one when none is available with the scalar data.</para>
/// </summary>
  void CreateDefaultLookupTable();


  // void SetScalarVisibility (int );
/// <summary>
/// <para>Turn on/off flag to control whether scalar data is used to color objects.</para>
/// </summary>
  void SetScalarVisibility(int arg0);


  // int GetScalarVisibility ();
/// <summary>
/// <para>Turn on/off flag to control whether scalar data is used to color objects.</para>
/// </summary>
  int GetScalarVisibility();


  // void ScalarVisibilityOn ();
/// <summary>
/// <para>Turn on/off flag to control whether scalar data is used to color objects.</para>
/// </summary>
  void ScalarVisibilityOn();


  // void ScalarVisibilityOff ();
/// <summary>
/// <para>Turn on/off flag to control whether scalar data is used to color objects.</para>
/// </summary>
  void ScalarVisibilityOff();


  // void SetStatic (int );
/// <summary>
/// <para>Turn on/off flag to control whether the mapper's data is static. Static data means that the mapper does not propagate updates down the pipeline, greatly decreasing the time it takes to update many mappers. This should only be used if the data never changes.</para>
/// </summary>
  void SetStatic(int arg0);


  // int GetStatic ();
/// <summary>
/// <para>Turn on/off flag to control whether the mapper's data is static. Static data means that the mapper does not propagate updates down the pipeline, greatly decreasing the time it takes to update many mappers. This should only be used if the data never changes.</para>
/// </summary>
  int GetStatic();


  // void StaticOn ();
/// <summary>
/// <para>Turn on/off flag to control whether the mapper's data is static. Static data means that the mapper does not propagate updates down the pipeline, greatly decreasing the time it takes to update many mappers. This should only be used if the data never changes.</para>
/// </summary>
  void StaticOn();


  // void StaticOff ();
/// <summary>
/// <para>Turn on/off flag to control whether the mapper's data is static. Static data means that the mapper does not propagate updates down the pipeline, greatly decreasing the time it takes to update many mappers. This should only be used if the data never changes.</para>
/// </summary>
  void StaticOff();


  // void SetColorMode (int );
/// <summary>
/// <para>Control how the scalar data is mapped to colors.  By default (ColorModeToDefault), unsigned char scalars are treated as colors, and NOT mapped through the lookup table, while everything else is. Setting ColorModeToMapScalars means that all scalar data will be mapped through the lookup table.  (Note that for multi-component scalars, the particular component to use for mapping can be specified using the SelectColorArray() method.)</para>
/// </summary>
  void SetColorMode(int arg0);


  // int GetColorMode ();
/// <summary>
/// <para>Control how the scalar data is mapped to colors.  By default (ColorModeToDefault), unsigned char scalars are treated as colors, and NOT mapped through the lookup table, while everything else is. Setting ColorModeToMapScalars means that all scalar data will be mapped through the lookup table.  (Note that for multi-component scalars, the particular component to use for mapping can be specified using the SelectColorArray() method.)</para>
/// </summary>
  int GetColorMode();


  // void SetColorModeToDefault ();this SetColorMode VTK_COLOR_MODE_DEFAULT 
/// <summary>
/// <para>Control how the scalar data is mapped to colors.  By default (ColorModeToDefault), unsigned char scalars are treated as colors, and NOT mapped through the lookup table, while everything else is. Setting ColorModeToMapScalars means that all scalar data will be mapped through the lookup table.  (Note that for multi-component scalars, the particular component to use for mapping can be specified using the SelectColorArray() method.)</para>
/// </summary>
  void SetColorModeToDefault();


  // void SetColorModeToMapScalars ();this SetColorMode VTK_COLOR_MODE_MAP_SCALARS 
/// <summary>
/// <para>Control how the scalar data is mapped to colors.  By default (ColorModeToDefault), unsigned char scalars are treated as colors, and NOT mapped through the lookup table, while everything else is. Setting ColorModeToMapScalars means that all scalar data will be mapped through the lookup table.  (Note that for multi-component scalars, the particular component to use for mapping can be specified using the SelectColorArray() method.)</para>
/// </summary>
  void SetColorModeToMapScalars();


  // const char *GetColorModeAsString ();
/// <summary>
/// <para>Return the method of coloring scalar data.</para>
/// </summary>
  System::String^ GetColorModeAsString();


  // void SetInterpolateScalarsBeforeMapping (int );
/// <summary>
/// <para>By default, vertex color is used to map colors to a surface. Colors are interpolated after being mapped. This option avoids color interpolation by using a one dimensional texture map for the colors.</para>
/// </summary>
  void SetInterpolateScalarsBeforeMapping(int arg0);


  // int GetInterpolateScalarsBeforeMapping ();
/// <summary>
/// <para>By default, vertex color is used to map colors to a surface. Colors are interpolated after being mapped. This option avoids color interpolation by using a one dimensional texture map for the colors.</para>
/// </summary>
  int GetInterpolateScalarsBeforeMapping();


  // void InterpolateScalarsBeforeMappingOn ();
/// <summary>
/// <para>By default, vertex color is used to map colors to a surface. Colors are interpolated after being mapped. This option avoids color interpolation by using a one dimensional texture map for the colors.</para>
/// </summary>
  void InterpolateScalarsBeforeMappingOn();


  // void InterpolateScalarsBeforeMappingOff ();
/// <summary>
/// <para>By default, vertex color is used to map colors to a surface. Colors are interpolated after being mapped. This option avoids color interpolation by using a one dimensional texture map for the colors.</para>
/// </summary>
  void InterpolateScalarsBeforeMappingOff();


  // void SetUseLookupTableScalarRange (int );
/// <summary>
/// <para>Control whether the mapper sets the lookuptable range based on its own ScalarRange, or whether it will use the LookupTable ScalarRange regardless of it's own setting. By default the Mapper is allowed to set the LookupTable range, but users who are sharing LookupTables between mappers/actors will probably wish to force the mapper to use the LookupTable unchanged.</para>
/// </summary>
  void SetUseLookupTableScalarRange(int arg0);


  // int GetUseLookupTableScalarRange ();
/// <summary>
/// <para>Control whether the mapper sets the lookuptable range based on its own ScalarRange, or whether it will use the LookupTable ScalarRange regardless of it's own setting. By default the Mapper is allowed to set the LookupTable range, but users who are sharing LookupTables between mappers/actors will probably wish to force the mapper to use the LookupTable unchanged.</para>
/// </summary>
  int GetUseLookupTableScalarRange();


  // void UseLookupTableScalarRangeOn ();
/// <summary>
/// <para>Control whether the mapper sets the lookuptable range based on its own ScalarRange, or whether it will use the LookupTable ScalarRange regardless of it's own setting. By default the Mapper is allowed to set the LookupTable range, but users who are sharing LookupTables between mappers/actors will probably wish to force the mapper to use the LookupTable unchanged.</para>
/// </summary>
  void UseLookupTableScalarRangeOn();


  // void UseLookupTableScalarRangeOff ();
/// <summary>
/// <para>Control whether the mapper sets the lookuptable range based on its own ScalarRange, or whether it will use the LookupTable ScalarRange regardless of it's own setting. By default the Mapper is allowed to set the LookupTable range, but users who are sharing LookupTables between mappers/actors will probably wish to force the mapper to use the LookupTable unchanged.</para>
/// </summary>
  void UseLookupTableScalarRangeOff();


  // void SetScalarRange (double , double );
/// <summary>
/// <para>Specify range in terms of scalar minimum and maximum (smin,smax). These values are used to map scalars into lookup table. Has no effect when UseLookupTableScalarRange is true.</para>
/// </summary>
  void SetScalarRange(double arg0, double arg1);


  // void SetScalarRange (double  a[2]);
/// <summary>
/// <para>Specify range in terms of scalar minimum and maximum (smin,smax). These values are used to map scalars into lookup table. Has no effect when UseLookupTableScalarRange is true.</para>
/// </summary>
  void SetScalarRange(array<double>^ a);


  // double  *GetScalarRange ();
/// <summary>
/// <para>Specify range in terms of scalar minimum and maximum (smin,smax). These values are used to map scalars into lookup table. Has no effect when UseLookupTableScalarRange is true.</para>
/// </summary>
  array<double>^ GetScalarRange();


  // void SetImmediateModeRendering (int );
/// <summary>
/// <para>Turn on/off flag to control whether data is rendered using immediate mode or note. Immediate mode rendering tends to be slower but it can handle larger datasets. The default value is immediate mode off. If you are having problems rendering a large dataset you might want to consider using immediate more rendering.</para>
/// </summary>
  void SetImmediateModeRendering(int arg0);


  // int GetImmediateModeRendering ();
/// <summary>
/// <para>Turn on/off flag to control whether data is rendered using immediate mode or note. Immediate mode rendering tends to be slower but it can handle larger datasets. The default value is immediate mode off. If you are having problems rendering a large dataset you might want to consider using immediate more rendering.</para>
/// </summary>
  int GetImmediateModeRendering();


  // void ImmediateModeRenderingOn ();
/// <summary>
/// <para>Turn on/off flag to control whether data is rendered using immediate mode or note. Immediate mode rendering tends to be slower but it can handle larger datasets. The default value is immediate mode off. If you are having problems rendering a large dataset you might want to consider using immediate more rendering.</para>
/// </summary>
  void ImmediateModeRenderingOn();


  // void ImmediateModeRenderingOff ();
/// <summary>
/// <para>Turn on/off flag to control whether data is rendered using immediate mode or note. Immediate mode rendering tends to be slower but it can handle larger datasets. The default value is immediate mode off. If you are having problems rendering a large dataset you might want to consider using immediate more rendering.</para>
/// </summary>
  void ImmediateModeRenderingOff();


  // static void SetGlobalImmediateModeRendering (int val);
/// <summary>
/// <para>Turn on/off flag to control whether data is rendered using immediate mode or note. Immediate mode rendering tends to be slower but it can handle larger datasets. The default value is immediate mode off. If you are  having problems rendering a large dataset you might want to consider using immediate more rendering.</para>
/// </summary>
  static void SetGlobalImmediateModeRendering(int val);


  // static void GlobalImmediateModeRenderingOn ();vtkMapper SetGlobalImmediateModeRendering 
/// <summary>
/// <para>Turn on/off flag to control whether data is rendered using immediate mode or note. Immediate mode rendering tends to be slower but it can handle larger datasets. The default value is immediate mode off. If you are  having problems rendering a large dataset you might want to consider using immediate more rendering.</para>
/// </summary>
  static void GlobalImmediateModeRenderingOn();


  // static void GlobalImmediateModeRenderingOff ();vtkMapper SetGlobalImmediateModeRendering 
/// <summary>
/// <para>Turn on/off flag to control whether data is rendered using immediate mode or note. Immediate mode rendering tends to be slower but it can handle larger datasets. The default value is immediate mode off. If you are  having problems rendering a large dataset you might want to consider using immediate more rendering.</para>
/// </summary>
  static void GlobalImmediateModeRenderingOff();


  // static int GetGlobalImmediateModeRendering ();
/// <summary>
/// <para>Turn on/off flag to control whether data is rendered using immediate mode or note. Immediate mode rendering tends to be slower but it can handle larger datasets. The default value is immediate mode off. If you are  having problems rendering a large dataset you might want to consider using immediate more rendering.</para>
/// </summary>
  static int GetGlobalImmediateModeRendering();


  // void SetScalarMode (int );
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors. When ScalarMode is set to use Field Data (ScalarModeToFieldData), you  must call SelectColorArray to choose the field data array to be used to color cells. In this mode, if the poly data has triangle strips,  the field data is treated as the celldata for each mini-cell formed by a triangle in the strip rather than the entire strip.</para>
/// </summary>
  void SetScalarMode(int arg0);


  // int GetScalarMode ();
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors. When ScalarMode is set to use Field Data (ScalarModeToFieldData), you  must call SelectColorArray to choose the field data array to be used to color cells. In this mode, if the poly data has triangle strips,  the field data is treated as the celldata for each mini-cell formed by a triangle in the strip rather than the entire strip.</para>
/// </summary>
  int GetScalarMode();


  // void SetScalarModeToDefault ();this SetScalarMode VTK_SCALAR_MODE_DEFAULT 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors. When ScalarMode is set to use Field Data (ScalarModeToFieldData), you  must call SelectColorArray to choose the field data array to be used to color cells. In this mode, if the poly data has triangle strips,  the field data is treated as the celldata for each mini-cell formed by a triangle in the strip rather than the entire strip.</para>
/// </summary>
  void SetScalarModeToDefault();


  // void SetScalarModeToUsePointData ();this SetScalarMode VTK_SCALAR_MODE_USE_POINT_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors. When ScalarMode is set to use Field Data (ScalarModeToFieldData), you  must call SelectColorArray to choose the field data array to be used to color cells. In this mode, if the poly data has triangle strips,  the field data is treated as the celldata for each mini-cell formed by a triangle in the strip rather than the entire strip.</para>
/// </summary>
  void SetScalarModeToUsePointData();


  // void SetScalarModeToUseCellData ();this SetScalarMode VTK_SCALAR_MODE_USE_CELL_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors. When ScalarMode is set to use Field Data (ScalarModeToFieldData), you  must call SelectColorArray to choose the field data array to be used to color cells. In this mode, if the poly data has triangle strips,  the field data is treated as the celldata for each mini-cell formed by a triangle in the strip rather than the entire strip.</para>
/// </summary>
  void SetScalarModeToUseCellData();


  // void SetScalarModeToUsePointFieldData ();this SetScalarMode VTK_SCALAR_MODE_USE_POINT_FIELD_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors. When ScalarMode is set to use Field Data (ScalarModeToFieldData), you  must call SelectColorArray to choose the field data array to be used to color cells. In this mode, if the poly data has triangle strips,  the field data is treated as the celldata for each mini-cell formed by a triangle in the strip rather than the entire strip.</para>
/// </summary>
  void SetScalarModeToUsePointFieldData();


  // void SetScalarModeToUseCellFieldData ();this SetScalarMode VTK_SCALAR_MODE_USE_CELL_FIELD_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call SelectColorArray before you call GetColors. When ScalarMode is set to use Field Data (ScalarModeToFieldData), you  must call SelectColorArray to choose the field data array to be used to color cells. In this mode, if the poly data has triangle strips,  the field data is treated as the celldata for each mini-cell formed by a triangle in the strip rather than the entire strip.</para>
/// </summary>
  void SetScalarModeToUseCellFieldData();


  // void SetScalarModeToUseFieldData ();this SetScalarMode VTK_SCALAR_MODE_USE_FIELD_DATA 
/// <summary>
/// <para>When ScalarMode is set to UsePointFileData or UseCellFieldData, you can specify which array to use for coloring using these methods. The lookup table will decide how to convert vectors to colors.</para>
/// </summary>
  void SetScalarModeToUseFieldData();


  // void SelectColorArray (int arrayNum);
/// <summary>
/// <para>When ScalarMode is set to UsePointFileData or UseCellFieldData, you can specify which array to use for coloring using these methods. The lookup table will decide how to convert vectors to colors.</para>
/// </summary>
  void SelectColorArray(int arrayNum);


  // void SelectColorArray (const char *arrayName);
/// <summary>
/// <para>When ScalarMode is set to UsePointFileData or UseCellFieldData, you can specify which array to use for coloring using these methods. The lookup table will decide how to convert vectors to colors.</para>
/// </summary>
  void SelectColorArray(System::String^ arrayName);


  // void ColorByArrayComponent (int arrayNum, int component);
/// <summary>
/// <para>Legacy: These methods used to be used to specify the array component. It is better to do this in the lookup table.</para>
/// </summary>
  void ColorByArrayComponent(int arrayNum, int component);


  // void ColorByArrayComponent (const char *arrayName, int component);
/// <summary>
/// <para>Legacy: These methods used to be used to specify the array component. It is better to do this in the lookup table.</para>
/// </summary>
  void ColorByArrayComponent(System::String^ arrayName, int component);


  // char *GetArrayName ();return this ArrayName 
/// <summary>
/// <para>Get the array name or number and component to color by.</para>
/// </summary>
  System::String^ GetArrayName();


  // int GetArrayId ();return this ArrayId 
/// <summary>
/// <para>Get the array name or number and component to color by.</para>
/// </summary>
  int GetArrayId();


  // int GetArrayAccessMode ();return this ArrayAccessMode 
/// <summary>
/// <para>Get the array name or number and component to color by.</para>
/// </summary>
  int GetArrayAccessMode();


  // int GetArrayComponent ();return this ArrayComponent 
/// <summary>
/// <para>Return the method for obtaining scalar data.</para>
/// </summary>
  int GetArrayComponent();


  // const char *GetScalarModeAsString ();
/// <summary>
/// <para>Return the method for obtaining scalar data.</para>
/// </summary>
  System::String^ GetScalarModeAsString();


  // static void SetResolveCoincidentTopology (int val);
/// <summary>
/// <para>Set/Get a global flag that controls whether coincident topology (e.g., a line on top of a polygon) is shifted to avoid z-buffer resolution (and hence rendering problems). If not off, there are two methods to choose from. PolygonOffset uses graphics systems calls to shift polygons, but does not distinguish vertices and lines from one another. ShiftZBuffer remaps the z-buffer to distinguish vertices, lines, and polygons, but does not always produce acceptable results. If you use the ShiftZBuffer approach, you may also want to set the ResolveCoincidentTopologyZShift value. (Note: not all mappers/graphics systems implement this  functionality.)</para>
/// </summary>
  static void SetResolveCoincidentTopology(int val);


  // static int GetResolveCoincidentTopology ();
/// <summary>
/// <para>Set/Get a global flag that controls whether coincident topology (e.g., a line on top of a polygon) is shifted to avoid z-buffer resolution (and hence rendering problems). If not off, there are two methods to choose from. PolygonOffset uses graphics systems calls to shift polygons, but does not distinguish vertices and lines from one another. ShiftZBuffer remaps the z-buffer to distinguish vertices, lines, and polygons, but does not always produce acceptable results. If you use the ShiftZBuffer approach, you may also want to set the ResolveCoincidentTopologyZShift value. (Note: not all mappers/graphics systems implement this  functionality.)</para>
/// </summary>
  static int GetResolveCoincidentTopology();


  // static void SetResolveCoincidentTopologyToDefault ();
/// <summary>
/// <para>Set/Get a global flag that controls whether coincident topology (e.g., a line on top of a polygon) is shifted to avoid z-buffer resolution (and hence rendering problems). If not off, there are two methods to choose from. PolygonOffset uses graphics systems calls to shift polygons, but does not distinguish vertices and lines from one another. ShiftZBuffer remaps the z-buffer to distinguish vertices, lines, and polygons, but does not always produce acceptable results. If you use the ShiftZBuffer approach, you may also want to set the ResolveCoincidentTopologyZShift value. (Note: not all mappers/graphics systems implement this  functionality.)</para>
/// </summary>
  static void SetResolveCoincidentTopologyToDefault();


  // static void SetResolveCoincidentTopologyToOff ();SetResolveCoincidentTopology VTK_RESOLVE_OFF 
/// <summary>
/// <para>Set/Get a global flag that controls whether coincident topology (e.g., a line on top of a polygon) is shifted to avoid z-buffer resolution (and hence rendering problems). If not off, there are two methods to choose from. PolygonOffset uses graphics systems calls to shift polygons, but does not distinguish vertices and lines from one another. ShiftZBuffer remaps the z-buffer to distinguish vertices, lines, and polygons, but does not always produce acceptable results. If you use the ShiftZBuffer approach, you may also want to set the ResolveCoincidentTopologyZShift value. (Note: not all mappers/graphics systems implement this  functionality.)</para>
/// </summary>
  static void SetResolveCoincidentTopologyToOff();


  // static void SetResolveCoincidentTopologyToPolygonOffset ();SetResolveCoincidentTopology VTK_RESOLVE_POLYGON_OFFSET 
/// <summary>
/// <para>Set/Get a global flag that controls whether coincident topology (e.g., a line on top of a polygon) is shifted to avoid z-buffer resolution (and hence rendering problems). If not off, there are two methods to choose from. PolygonOffset uses graphics systems calls to shift polygons, but does not distinguish vertices and lines from one another. ShiftZBuffer remaps the z-buffer to distinguish vertices, lines, and polygons, but does not always produce acceptable results. If you use the ShiftZBuffer approach, you may also want to set the ResolveCoincidentTopologyZShift value. (Note: not all mappers/graphics systems implement this  functionality.)</para>
/// </summary>
  static void SetResolveCoincidentTopologyToPolygonOffset();


  // static void SetResolveCoincidentTopologyToShiftZBuffer ();SetResolveCoincidentTopology VTK_RESOLVE_SHIFT_ZBUFFER 
/// <summary>
/// <para>Used to set the polygon offset scale factor and units. Used when ResolveCoincidentTopology is set to PolygonOffset.  These are global variables.</para>
/// </summary>
  static void SetResolveCoincidentTopologyToShiftZBuffer();


  // static void SetResolveCoincidentTopologyPolygonOffsetParameters (double factor, double units);
/// <summary>
/// <para>Used to set the polygon offset scale factor and units. Used when ResolveCoincidentTopology is set to PolygonOffset.  These are global variables.</para>
/// </summary>
  static void SetResolveCoincidentTopologyPolygonOffsetParameters(double factor, double units);


  // static void GetResolveCoincidentTopologyPolygonOffsetParameters (double &factor, double &units);
/// <summary>
/// <para>Used to set the polygon offset scale factor and units. Used when ResolveCoincidentTopology is set to PolygonOffset.  These are global variables.</para>
/// </summary>
  static void GetResolveCoincidentTopologyPolygonOffsetParameters(double% factor, double% units);


  // static void SetResolveCoincidentTopologyZShift (double val);
/// <summary>
/// <para>Used to set the z-shift if ResolveCoincidentTopology is set to ShiftZBuffer. This is a global variable.</para>
/// </summary>
  static void SetResolveCoincidentTopologyZShift(double val);


  // static double GetResolveCoincidentTopologyZShift ();
/// <summary>
/// <para>Used to set the z-shift if ResolveCoincidentTopology is set to ShiftZBuffer. This is a global variable.</para>
/// </summary>
  static double GetResolveCoincidentTopologyZShift();


  // virtual double *GetBounds ();
/// <summary>
/// <para>Return bounding box (array of six doubles) of data expressed as (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  array<double>^ GetBounds();


  // virtual void GetBounds (double bounds[6]);this vtkAbstractMapper3D GetBounds bounds 
/// <summary>
/// <para>Return bounding box (array of six doubles) of data expressed as (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // void SetRenderTime (double time);this RenderTime time 
/// <summary>
/// <para>This instance variable is used by vtkLODActor to determine which mapper to use.  It is an estimate of the time necessary to render. Setting the render time does not modify the mapper.</para>
/// </summary>
  void SetRenderTime(double time);


  // double GetRenderTime ();
/// <summary>
/// <para>This instance variable is used by vtkLODActor to determine which mapper to use.  It is an estimate of the time necessary to render. Setting the render time does not modify the mapper.</para>
/// </summary>
  double GetRenderTime();


  // vtkDataSet *GetInputAsDataSet ();return this GetInput 
/// <summary>
/// <para>Map the scalars (if there are any scalars and ScalarVisibility is on) through the lookup table, returning an unsigned char RGBA array. This is typically done as part of the rendering process. The alpha parameter  allows the blending of the scalars with an additional alpha (typically which comes from a vtkActor, etc.)</para>
/// </summary>
  vtkDataSet^ GetInputAsDataSet();


  // vtkUnsignedCharArray *MapScalars (double alpha);
/// <summary>
/// <para>Map the scalars (if there are any scalars and ScalarVisibility is on) through the lookup table, returning an unsigned char RGBA array. This is typically done as part of the rendering process. The alpha parameter  allows the blending of the scalars with an additional alpha (typically which comes from a vtkActor, etc.)</para>
/// </summary>
  vtkUnsignedCharArray^ MapScalars(double alpha);


  // void SetScalarMaterialMode (int );
/// <summary>
/// <para>Set/Get the light-model color mode. </para>
/// </summary>
  void SetScalarMaterialMode(int arg0);


  // int GetScalarMaterialMode ();
/// <summary>
/// <para>Set/Get the light-model color mode. </para>
/// </summary>
  int GetScalarMaterialMode();


  // void SetScalarMaterialModeToDefault ();this SetScalarMaterialMode VTK_MATERIALMODE_DEFAULT 
/// <summary>
/// <para>Set/Get the light-model color mode. </para>
/// </summary>
  void SetScalarMaterialModeToDefault();


  // void SetScalarMaterialModeToAmbient ();this SetScalarMaterialMode VTK_MATERIALMODE_AMBIENT 
/// <summary>
/// <para>Set/Get the light-model color mode. </para>
/// </summary>
  void SetScalarMaterialModeToAmbient();


  // void SetScalarMaterialModeToDiffuse ();this SetScalarMaterialMode VTK_MATERIALMODE_DIFFUSE 
/// <summary>
/// <para>Set/Get the light-model color mode. </para>
/// </summary>
  void SetScalarMaterialModeToDiffuse();


  // void SetScalarMaterialModeToAmbientAndDiffuse ();this SetScalarMaterialMode VTK_MATERIALMODE_AMBIENT_AND_DIFFUSE 
/// <summary>
/// <para>Set/Get the light-model color mode. </para>
/// </summary>
  void SetScalarMaterialModeToAmbientAndDiffuse();


  // const char *GetScalarMaterialModeAsString ();
/// <summary>
/// <para>Return the light-model color mode.</para>
/// </summary>
  System::String^ GetScalarMaterialModeAsString();


// Did not wrap:  vtkMapper ();


// Did not wrap:  ~vtkMapper ();


// Did not wrap:  void MapScalarsToTexture (vtkDataArray *scalars, double alpha);


// Did not wrap:  vtkMapper (const vtkMapper &);


// Did not wrap:  void vtkMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMapper();


};

} // end vtkRendering
