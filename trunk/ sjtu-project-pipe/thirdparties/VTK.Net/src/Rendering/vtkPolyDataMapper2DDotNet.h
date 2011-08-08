#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPolyDataMapper2D : public vtkMapper2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataMapper2D *NewInstance ();
  vtkPolyDataMapper2D^ NewInstance();


  // vtkPolyDataMapper2D *SafeDownCast (vtkObject* o);
  static vtkPolyDataMapper2D^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkPolyDataMapper2D *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkPolyData *in);
/// <summary>
/// <para>Set the input to the mapper.  </para>
/// </summary>
  void SetInput(vtkPolyData^ in);


  // vtkPolyData *GetInput ();
/// <summary>
/// <para>Set the input to the mapper.  </para>
/// </summary>
  vtkPolyData^ GetInput();


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


  // void SetColorMode (int );
/// <summary>
/// <para>Control how the scalar data is mapped to colors.  By default (ColorModeToDefault), unsigned char scalars are treated as colors, and NOT mapped through the lookup table, while everything else is. Setting ColorModeToMapScalars means that all scalar data will be mapped through the lookup table.  (Note that for multi-component scalars, the particular component to use for mapping can be specified using the ColorByArrayComponent() method.)</para>
/// </summary>
  void SetColorMode(int arg0);


  // int GetColorMode ();
/// <summary>
/// <para>Control how the scalar data is mapped to colors.  By default (ColorModeToDefault), unsigned char scalars are treated as colors, and NOT mapped through the lookup table, while everything else is. Setting ColorModeToMapScalars means that all scalar data will be mapped through the lookup table.  (Note that for multi-component scalars, the particular component to use for mapping can be specified using the ColorByArrayComponent() method.)</para>
/// </summary>
  int GetColorMode();


  // void SetColorModeToDefault ();
/// <summary>
/// <para>Control how the scalar data is mapped to colors.  By default (ColorModeToDefault), unsigned char scalars are treated as colors, and NOT mapped through the lookup table, while everything else is. Setting ColorModeToMapScalars means that all scalar data will be mapped through the lookup table.  (Note that for multi-component scalars, the particular component to use for mapping can be specified using the ColorByArrayComponent() method.)</para>
/// </summary>
  void SetColorModeToDefault();


  // void SetColorModeToMapScalars ();
/// <summary>
/// <para>Control how the scalar data is mapped to colors.  By default (ColorModeToDefault), unsigned char scalars are treated as colors, and NOT mapped through the lookup table, while everything else is. Setting ColorModeToMapScalars means that all scalar data will be mapped through the lookup table.  (Note that for multi-component scalars, the particular component to use for mapping can be specified using the ColorByArrayComponent() method.)</para>
/// </summary>
  void SetColorModeToMapScalars();


  // const char *GetColorModeAsString ();
/// <summary>
/// <para>Return the method of coloring scalar data.</para>
/// </summary>
  System::String^ GetColorModeAsString();


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


  // void SetScalarMode (int );
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call ColorByArrayComponent before you call GetColors.</para>
/// </summary>
  void SetScalarMode(int arg0);


  // int GetScalarMode ();
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call ColorByArrayComponent before you call GetColors.</para>
/// </summary>
  int GetScalarMode();


  // void SetScalarModeToDefault ();this SetScalarMode VTK_SCALAR_MODE_DEFAULT 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call ColorByArrayComponent before you call GetColors.</para>
/// </summary>
  void SetScalarModeToDefault();


  // void SetScalarModeToUsePointData ();this SetScalarMode VTK_SCALAR_MODE_USE_POINT_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call ColorByArrayComponent before you call GetColors.</para>
/// </summary>
  void SetScalarModeToUsePointData();


  // void SetScalarModeToUseCellData ();this SetScalarMode VTK_SCALAR_MODE_USE_CELL_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call ColorByArrayComponent before you call GetColors.</para>
/// </summary>
  void SetScalarModeToUseCellData();


  // void SetScalarModeToUsePointFieldData ();this SetScalarMode VTK_SCALAR_MODE_USE_POINT_FIELD_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call ColorByArrayComponent before you call GetColors.</para>
/// </summary>
  void SetScalarModeToUsePointFieldData();


  // void SetScalarModeToUseCellFieldData ();this SetScalarMode VTK_SCALAR_MODE_USE_CELL_FIELD_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (ScalarModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (ScalarModeToUsePointData) or cell data (ScalarModeToUseCellData). You can also choose to get the scalars from an array in point field data (ScalarModeToUsePointFieldData) or cell field data (ScalarModeToUseCellFieldData).  If scalars are coming from a field data array, you must call ColorByArrayComponent before you call GetColors.</para>
/// </summary>
  void SetScalarModeToUseCellFieldData();


  // void ColorByArrayComponent (int arrayNum, int component);
/// <summary>
/// <para>Choose which component of which field data array to color by.</para>
/// </summary>
  void ColorByArrayComponent(int arrayNum, int component);


  // void ColorByArrayComponent (char *arrayName, int component);
/// <summary>
/// <para>Choose which component of which field data array to color by.</para>
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
/// <para>Overload standard modified time function. If lookup table is modified, then this object is modified as well.</para>
/// </summary>
  int GetArrayComponent();


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>Overload standard modified time function. If lookup table is modified, then this object is modified as well.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void SetTransformCoordinate (vtkCoordinate *);
/// <summary>
/// <para>Specify a vtkCoordinate object to be used to transform the vtkPolyData point coordinates. By default (no vtkCoordinate specified), the point  coordinates are taken as local display coordinates.</para>
/// </summary>
  void SetTransformCoordinate(vtkCoordinate^ arg0);


  // vtkCoordinate *GetTransformCoordinate ();
/// <summary>
/// <para>Specify a vtkCoordinate object to be used to transform the vtkPolyData point coordinates. By default (no vtkCoordinate specified), the point  coordinates are taken as local display coordinates.</para>
/// </summary>
  vtkCoordinate^ GetTransformCoordinate();


  // vtkUnsignedCharArray *MapScalars (double alpha);
/// <summary>
/// <para>Map the scalars (if there are any scalars and ScalarVisibility is on) through the lookup table, returning an unsigned char RGBA array. This is typically done as part of the rendering process. The alpha parameter  allows the blending of the scalars with an additional alpha (typically which comes from a vtkActor, etc.)</para>
/// </summary>
  vtkUnsignedCharArray^ MapScalars(double alpha);


  // void ShallowCopy (vtkAbstractMapper *m);
/// <summary>
/// <para>Make a shallow copy of this mapper.</para>
/// </summary>
  void ShallowCopy(vtkAbstractMapper^ m);


// Did not wrap:  vtkPolyDataMapper2D ();


// Did not wrap:  ~vtkPolyDataMapper2D ();


// Did not wrap:  vtkPolyDataMapper2D (const vtkPolyDataMapper2D &);


// Did not wrap:  void vtkPolyDataMapper2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataMapper2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataMapper2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataMapper2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataMapper2D();


};

} // end vtkRendering
