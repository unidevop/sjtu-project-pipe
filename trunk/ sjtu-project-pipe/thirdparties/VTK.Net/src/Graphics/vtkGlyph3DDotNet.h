#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGlyph3D : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGlyph3D *NewInstance ();
  vtkGlyph3D^ NewInstance();


  // vtkGlyph3D *SafeDownCast (vtkObject* o);
  static vtkGlyph3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGlyph3D *New ();


  // void SetSource (vtkPolyData *pd);this SetSource pd 
/// <summary>
/// <para>Set the source to use for he glyph. Old style. See SetSourceConnection.</para>
/// </summary>
  void SetSource(vtkPolyData^ pd);


  // void SetSource (int id, vtkPolyData *pd);
/// <summary>
/// <para>Specify a source object at a specified table location. Old style. See SetSourceConnection.</para>
/// </summary>
  void SetSource(int id, vtkPolyData^ pd);


  // void SetSourceConnection (int id, vtkAlgorithmOutput *algOutput);
/// <summary>
/// <para>Specify a source object at a specified table location. New style. Source connection is stored in port 1. This method is equivalent to SetInputConnection(1, id, outputPort).</para>
/// </summary>
  void SetSourceConnection(int id, vtkAlgorithmOutput^ algOutput);


  // void SetSourceConnection (vtkAlgorithmOutput *algOutput);this SetSourceConnection algOutput 
/// <summary>
/// <para>Get a pointer to a source object at a specified table location.</para>
/// </summary>
  void SetSourceConnection(vtkAlgorithmOutput^ algOutput);


  // vtkPolyData *GetSource (int id);
/// <summary>
/// <para>Get a pointer to a source object at a specified table location.</para>
/// </summary>
  vtkPolyData^ GetSource(int id);


  // void SetScaling (int );
/// <summary>
/// <para>Turn on/off scaling of source geometry.</para>
/// </summary>
  void SetScaling(int arg0);


  // void ScalingOn ();
/// <summary>
/// <para>Turn on/off scaling of source geometry.</para>
/// </summary>
  void ScalingOn();


  // void ScalingOff ();
/// <summary>
/// <para>Turn on/off scaling of source geometry.</para>
/// </summary>
  void ScalingOff();


  // int GetScaling ();
/// <summary>
/// <para>Turn on/off scaling of source geometry.</para>
/// </summary>
  int GetScaling();


  // void SetScaleMode (int );
/// <summary>
/// <para>Either scale by scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetScaleMode(int arg0);


  // int GetScaleMode ();
/// <summary>
/// <para>Either scale by scalar or by vector/normal magnitude.</para>
/// </summary>
  int GetScaleMode();


  // void SetScaleModeToScaleByScalar ();this SetScaleMode VTK_SCALE_BY_SCALAR 
/// <summary>
/// <para>Either scale by scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetScaleModeToScaleByScalar();


  // void SetScaleModeToScaleByVector ();this SetScaleMode VTK_SCALE_BY_VECTOR 
/// <summary>
/// <para>Either scale by scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetScaleModeToScaleByVector();


  // void SetScaleModeToScaleByVectorComponents ();this SetScaleMode VTK_SCALE_BY_VECTORCOMPONENTS 
/// <summary>
/// <para>Either scale by scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetScaleModeToScaleByVectorComponents();


  // void SetScaleModeToDataScalingOff ();this SetScaleMode VTK_DATA_SCALING_OFF 
/// <summary>
/// <para>Either scale by scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetScaleModeToDataScalingOff();


  // const char *GetScaleModeAsString ();
/// <summary>
/// <para>Either scale by scalar or by vector/normal magnitude.</para>
/// </summary>
  System::String^ GetScaleModeAsString();


  // void SetColorMode (int );
/// <summary>
/// <para>Either color by scale, scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetColorMode(int arg0);


  // int GetColorMode ();
/// <summary>
/// <para>Either color by scale, scalar or by vector/normal magnitude.</para>
/// </summary>
  int GetColorMode();


  // void SetColorModeToColorByScale ();this SetColorMode VTK_COLOR_BY_SCALE 
/// <summary>
/// <para>Either color by scale, scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetColorModeToColorByScale();


  // void SetColorModeToColorByScalar ();this SetColorMode VTK_COLOR_BY_SCALAR 
/// <summary>
/// <para>Either color by scale, scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetColorModeToColorByScalar();


  // void SetColorModeToColorByVector ();this SetColorMode VTK_COLOR_BY_VECTOR 
/// <summary>
/// <para>Either color by scale, scalar or by vector/normal magnitude.</para>
/// </summary>
  void SetColorModeToColorByVector();


  // const char *GetColorModeAsString ();
/// <summary>
/// <para>Either color by scale, scalar or by vector/normal magnitude.</para>
/// </summary>
  System::String^ GetColorModeAsString();


  // void SetScaleFactor (double );
/// <summary>
/// <para>Specify scale factor to scale object by.</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Specify scale factor to scale object by.</para>
/// </summary>
  double GetScaleFactor();


  // void SetRange (double , double );
/// <summary>
/// <para>Specify range to map scalar values into.</para>
/// </summary>
  void SetRange(double arg0, double arg1);


  // void SetRange (double  a[2]);
/// <summary>
/// <para>Specify range to map scalar values into.</para>
/// </summary>
  void SetRange(array<double>^ a);


  // double  *GetRange ();
/// <summary>
/// <para>Specify range to map scalar values into.</para>
/// </summary>
  array<double>^ GetRange();


  // void SetOrient (int );
/// <summary>
/// <para>Turn on/off orienting of input geometry along vector/normal.</para>
/// </summary>
  void SetOrient(int arg0);


  // void OrientOn ();
/// <summary>
/// <para>Turn on/off orienting of input geometry along vector/normal.</para>
/// </summary>
  void OrientOn();


  // void OrientOff ();
/// <summary>
/// <para>Turn on/off orienting of input geometry along vector/normal.</para>
/// </summary>
  void OrientOff();


  // int GetOrient ();
/// <summary>
/// <para>Turn on/off orienting of input geometry along vector/normal.</para>
/// </summary>
  int GetOrient();


  // void SetClamping (int );
/// <summary>
/// <para>Turn on/off clamping of &quot;scalar&quot; values to range. (Scalar value may be  vector magnitude if ScaleByVector() is enabled.)</para>
/// </summary>
  void SetClamping(int arg0);


  // void ClampingOn ();
/// <summary>
/// <para>Turn on/off clamping of &quot;scalar&quot; values to range. (Scalar value may be  vector magnitude if ScaleByVector() is enabled.)</para>
/// </summary>
  void ClampingOn();


  // void ClampingOff ();
/// <summary>
/// <para>Turn on/off clamping of &quot;scalar&quot; values to range. (Scalar value may be  vector magnitude if ScaleByVector() is enabled.)</para>
/// </summary>
  void ClampingOff();


  // int GetClamping ();
/// <summary>
/// <para>Turn on/off clamping of &quot;scalar&quot; values to range. (Scalar value may be  vector magnitude if ScaleByVector() is enabled.)</para>
/// </summary>
  int GetClamping();


  // void SetVectorMode (int );
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  void SetVectorMode(int arg0);


  // int GetVectorMode ();
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  int GetVectorMode();


  // void SetVectorModeToUseVector ();this SetVectorMode VTK_USE_VECTOR 
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  void SetVectorModeToUseVector();


  // void SetVectorModeToUseNormal ();this SetVectorMode VTK_USE_NORMAL 
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  void SetVectorModeToUseNormal();


  // void SetVectorModeToVectorRotationOff ();this SetVectorMode VTK_VECTOR_ROTATION_OFF 
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  void SetVectorModeToVectorRotationOff();


  // const char *GetVectorModeAsString ();
/// <summary>
/// <para>Specify whether to use vector or normal to perform vector operations.</para>
/// </summary>
  System::String^ GetVectorModeAsString();


  // void SetIndexMode (int );
/// <summary>
/// <para>Index into table of sources by scalar, by vector/normal magnitude, or no indexing. If indexing is turned off, then the first source glyph in the table of glyphs is used. Note that indexing mode will only use the InputScalarsSelection array and not the InputColorScalarsSelection as the scalar source if an array is specified.</para>
/// </summary>
  void SetIndexMode(int arg0);


  // int GetIndexMode ();
/// <summary>
/// <para>Index into table of sources by scalar, by vector/normal magnitude, or no indexing. If indexing is turned off, then the first source glyph in the table of glyphs is used. Note that indexing mode will only use the InputScalarsSelection array and not the InputColorScalarsSelection as the scalar source if an array is specified.</para>
/// </summary>
  int GetIndexMode();


  // void SetIndexModeToScalar ();this SetIndexMode VTK_INDEXING_BY_SCALAR 
/// <summary>
/// <para>Index into table of sources by scalar, by vector/normal magnitude, or no indexing. If indexing is turned off, then the first source glyph in the table of glyphs is used. Note that indexing mode will only use the InputScalarsSelection array and not the InputColorScalarsSelection as the scalar source if an array is specified.</para>
/// </summary>
  void SetIndexModeToScalar();


  // void SetIndexModeToVector ();this SetIndexMode VTK_INDEXING_BY_VECTOR 
/// <summary>
/// <para>Index into table of sources by scalar, by vector/normal magnitude, or no indexing. If indexing is turned off, then the first source glyph in the table of glyphs is used. Note that indexing mode will only use the InputScalarsSelection array and not the InputColorScalarsSelection as the scalar source if an array is specified.</para>
/// </summary>
  void SetIndexModeToVector();


  // void SetIndexModeToOff ();this SetIndexMode VTK_INDEXING_OFF 
/// <summary>
/// <para>Index into table of sources by scalar, by vector/normal magnitude, or no indexing. If indexing is turned off, then the first source glyph in the table of glyphs is used. Note that indexing mode will only use the InputScalarsSelection array and not the InputColorScalarsSelection as the scalar source if an array is specified.</para>
/// </summary>
  void SetIndexModeToOff();


  // const char *GetIndexModeAsString ();
/// <summary>
/// <para>Index into table of sources by scalar, by vector/normal magnitude, or no indexing. If indexing is turned off, then the first source glyph in the table of glyphs is used. Note that indexing mode will only use the InputScalarsSelection array and not the InputColorScalarsSelection as the scalar source if an array is specified.</para>
/// </summary>
  System::String^ GetIndexModeAsString();


  // void SetGeneratePointIds (int );
/// <summary>
/// <para>Enable/disable the generation of point ids as part of the output. The point ids are the id of the input generating point. The point ids are stored in the output point field data and named &quot;InputPointIds&quot;. Point generation is useful for debugging and pick operations.</para>
/// </summary>
  void SetGeneratePointIds(int arg0);


  // int GetGeneratePointIds ();
/// <summary>
/// <para>Enable/disable the generation of point ids as part of the output. The point ids are the id of the input generating point. The point ids are stored in the output point field data and named &quot;InputPointIds&quot;. Point generation is useful for debugging and pick operations.</para>
/// </summary>
  int GetGeneratePointIds();


  // void GeneratePointIdsOn ();
/// <summary>
/// <para>Enable/disable the generation of point ids as part of the output. The point ids are the id of the input generating point. The point ids are stored in the output point field data and named &quot;InputPointIds&quot;. Point generation is useful for debugging and pick operations.</para>
/// </summary>
  void GeneratePointIdsOn();


  // void GeneratePointIdsOff ();
/// <summary>
/// <para>Enable/disable the generation of point ids as part of the output. The point ids are the id of the input generating point. The point ids are stored in the output point field data and named &quot;InputPointIds&quot;. Point generation is useful for debugging and pick operations.</para>
/// </summary>
  void GeneratePointIdsOff();


  // void SetPointIdsName (char *);
/// <summary>
/// <para>Set/Get the name of the PointIds array if generated. By default the Ids are named &quot;InputPointIds&quot;, but this can be changed with this function.</para>
/// </summary>
  void SetPointIdsName(System::String^ arg0);


  // char *GetPointIdsName ();
/// <summary>
/// <para>Set/Get the name of the PointIds array if generated. By default the Ids are named &quot;InputPointIds&quot;, but this can be changed with this function.</para>
/// </summary>
  System::String^ GetPointIdsName();


  // virtual int IsPointVisible (vtkDataSet *, vtkIdType );return 
/// <summary>
/// <para>This can be overwritten by subclass to return 0 when a point is blanked. Default implementation is to always return 1;</para>
/// </summary>
  int IsPointVisible(vtkDataSet^ arg0, int arg1);


// Did not wrap:  vtkGlyph3D ();


// Did not wrap:  ~vtkGlyph3D ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkPolyData *GetSource (int idx, vtkInformationVector *sourceInfo);


// Did not wrap:  vtkGlyph3D (const vtkGlyph3D &);


// Did not wrap:  void vtkGlyph3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGlyph3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGlyph3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGlyph3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGlyph3D();


};

} // end vtkGraphics
