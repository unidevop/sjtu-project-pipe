#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTubeFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTubeFilter *NewInstance ();
  vtkTubeFilter^ NewInstance();


  // vtkTubeFilter *SafeDownCast (vtkObject* o);
  static vtkTubeFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTubeFilter *New ();


  // void SetRadius (double );
/// <summary>
/// <para>Set the minimum tube radius (minimum because the tube radius may vary).</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set the minimum tube radius (minimum because the tube radius may vary).</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set the minimum tube radius (minimum because the tube radius may vary).</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set the minimum tube radius (minimum because the tube radius may vary).</para>
/// </summary>
  double GetRadius();


  // void SetVaryRadius (int );
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  void SetVaryRadius(int arg0);


  // int GetVaryRadiusMinValue ();
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  int GetVaryRadiusMinValue();


  // int GetVaryRadiusMaxValue ();
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  int GetVaryRadiusMaxValue();


  // int GetVaryRadius ();
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  int GetVaryRadius();


  // void SetVaryRadiusToVaryRadiusOff ();this SetVaryRadius VTK_VARY_RADIUS_OFF 
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  void SetVaryRadiusToVaryRadiusOff();


  // void SetVaryRadiusToVaryRadiusByScalar ();this SetVaryRadius VTK_VARY_RADIUS_BY_SCALAR 
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  void SetVaryRadiusToVaryRadiusByScalar();


  // void SetVaryRadiusToVaryRadiusByVector ();this SetVaryRadius VTK_VARY_RADIUS_BY_VECTOR 
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  void SetVaryRadiusToVaryRadiusByVector();


  // void SetVaryRadiusToVaryRadiusByAbsoluteScalar ();this SetVaryRadius VTK_VARY_RADIUS_BY_ABSOLUTE_SCALAR 
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  void SetVaryRadiusToVaryRadiusByAbsoluteScalar();


  // const char *GetVaryRadiusAsString ();
/// <summary>
/// <para>Turn on/off the variation of tube radius with scalar value.</para>
/// </summary>
  System::String^ GetVaryRadiusAsString();


  // void SetNumberOfSides (int );
/// <summary>
/// <para>Set the number of sides for the tube. At a minimum, number of sides is 3.</para>
/// </summary>
  void SetNumberOfSides(int arg0);


  // int GetNumberOfSidesMinValue ();
/// <summary>
/// <para>Set the number of sides for the tube. At a minimum, number of sides is 3.</para>
/// </summary>
  int GetNumberOfSidesMinValue();


  // int GetNumberOfSidesMaxValue ();
/// <summary>
/// <para>Set the number of sides for the tube. At a minimum, number of sides is 3.</para>
/// </summary>
  int GetNumberOfSidesMaxValue();


  // int GetNumberOfSides ();
/// <summary>
/// <para>Set the number of sides for the tube. At a minimum, number of sides is 3.</para>
/// </summary>
  int GetNumberOfSides();


  // void SetRadiusFactor (double );
/// <summary>
/// <para>Set the maximum tube radius in terms of a multiple of the minimum radius.</para>
/// </summary>
  void SetRadiusFactor(double arg0);


  // double GetRadiusFactor ();
/// <summary>
/// <para>Set the maximum tube radius in terms of a multiple of the minimum radius.</para>
/// </summary>
  double GetRadiusFactor();


  // void SetDefaultNormal (double , double , double );
/// <summary>
/// <para>Set the default normal to use if no normals are supplied, and the DefaultNormalOn is set.</para>
/// </summary>
  void SetDefaultNormal(double arg0, double arg1, double arg2);


  // void SetDefaultNormal (double  a[3]);
/// <summary>
/// <para>Set the default normal to use if no normals are supplied, and the DefaultNormalOn is set.</para>
/// </summary>
  void SetDefaultNormal(array<double>^ a);


  // double  *GetDefaultNormal ();
/// <summary>
/// <para>Set the default normal to use if no normals are supplied, and the DefaultNormalOn is set.</para>
/// </summary>
  array<double>^ GetDefaultNormal();


  // void SetUseDefaultNormal (int );
/// <summary>
/// <para>Set a boolean to control whether to use default normals. DefaultNormalOn is set.</para>
/// </summary>
  void SetUseDefaultNormal(int arg0);


  // int GetUseDefaultNormal ();
/// <summary>
/// <para>Set a boolean to control whether to use default normals. DefaultNormalOn is set.</para>
/// </summary>
  int GetUseDefaultNormal();


  // void UseDefaultNormalOn ();
/// <summary>
/// <para>Set a boolean to control whether to use default normals. DefaultNormalOn is set.</para>
/// </summary>
  void UseDefaultNormalOn();


  // void UseDefaultNormalOff ();
/// <summary>
/// <para>Set a boolean to control whether to use default normals. DefaultNormalOn is set.</para>
/// </summary>
  void UseDefaultNormalOff();


  // void SetSidesShareVertices (int );
/// <summary>
/// <para>Set a boolean to control whether tube sides should share vertices. This creates independent strips, with constant normals so the tube is always faceted in appearance.</para>
/// </summary>
  void SetSidesShareVertices(int arg0);


  // int GetSidesShareVertices ();
/// <summary>
/// <para>Set a boolean to control whether tube sides should share vertices. This creates independent strips, with constant normals so the tube is always faceted in appearance.</para>
/// </summary>
  int GetSidesShareVertices();


  // void SidesShareVerticesOn ();
/// <summary>
/// <para>Set a boolean to control whether tube sides should share vertices. This creates independent strips, with constant normals so the tube is always faceted in appearance.</para>
/// </summary>
  void SidesShareVerticesOn();


  // void SidesShareVerticesOff ();
/// <summary>
/// <para>Set a boolean to control whether tube sides should share vertices. This creates independent strips, with constant normals so the tube is always faceted in appearance.</para>
/// </summary>
  void SidesShareVerticesOff();


  // void SetCapping (int );
/// <summary>
/// <para>Turn on/off whether to cap the ends with polygons.</para>
/// </summary>
  void SetCapping(int arg0);


  // int GetCapping ();
/// <summary>
/// <para>Turn on/off whether to cap the ends with polygons.</para>
/// </summary>
  int GetCapping();


  // void CappingOn ();
/// <summary>
/// <para>Turn on/off whether to cap the ends with polygons.</para>
/// </summary>
  void CappingOn();


  // void CappingOff ();
/// <summary>
/// <para>Turn on/off whether to cap the ends with polygons.</para>
/// </summary>
  void CappingOff();


  // void SetOnRatio (int );
/// <summary>
/// <para>Control the striping of the tubes. If OnRatio is greater than 1, then every nth tube side is turned on, beginning with the Offset side.</para>
/// </summary>
  void SetOnRatio(int arg0);


  // int GetOnRatioMinValue ();
/// <summary>
/// <para>Control the striping of the tubes. If OnRatio is greater than 1, then every nth tube side is turned on, beginning with the Offset side.</para>
/// </summary>
  int GetOnRatioMinValue();


  // int GetOnRatioMaxValue ();
/// <summary>
/// <para>Control the striping of the tubes. If OnRatio is greater than 1, then every nth tube side is turned on, beginning with the Offset side.</para>
/// </summary>
  int GetOnRatioMaxValue();


  // int GetOnRatio ();
/// <summary>
/// <para>Control the striping of the tubes. If OnRatio is greater than 1, then every nth tube side is turned on, beginning with the Offset side.</para>
/// </summary>
  int GetOnRatio();


  // void SetOffset (int );
/// <summary>
/// <para>Control the striping of the tubes. The offset sets the first tube side that is visible. Offset is generally used with OnRatio to create nifty striping effects.</para>
/// </summary>
  void SetOffset(int arg0);


  // int GetOffsetMinValue ();
/// <summary>
/// <para>Control the striping of the tubes. The offset sets the first tube side that is visible. Offset is generally used with OnRatio to create nifty striping effects.</para>
/// </summary>
  int GetOffsetMinValue();


  // int GetOffsetMaxValue ();
/// <summary>
/// <para>Control the striping of the tubes. The offset sets the first tube side that is visible. Offset is generally used with OnRatio to create nifty striping effects.</para>
/// </summary>
  int GetOffsetMaxValue();


  // int GetOffset ();
/// <summary>
/// <para>Control the striping of the tubes. The offset sets the first tube side that is visible. Offset is generally used with OnRatio to create nifty striping effects.</para>
/// </summary>
  int GetOffset();


  // void SetGenerateTCoords (int );
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  void SetGenerateTCoords(int arg0);


  // int GetGenerateTCoordsMinValue ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  int GetGenerateTCoordsMinValue();


  // int GetGenerateTCoordsMaxValue ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  int GetGenerateTCoordsMaxValue();


  // int GetGenerateTCoords ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  int GetGenerateTCoords();


  // void SetGenerateTCoordsToOff ();this SetGenerateTCoords VTK_TCOORDS_OFF 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  void SetGenerateTCoordsToOff();


  // void SetGenerateTCoordsToNormalizedLength ();this SetGenerateTCoords VTK_TCOORDS_FROM_NORMALIZED_LENGTH 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  void SetGenerateTCoordsToNormalizedLength();


  // void SetGenerateTCoordsToUseLength ();this SetGenerateTCoords VTK_TCOORDS_FROM_LENGTH 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  void SetGenerateTCoordsToUseLength();


  // void SetGenerateTCoordsToUseScalars ();this SetGenerateTCoords VTK_TCOORDS_FROM_SCALARS 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  void SetGenerateTCoordsToUseScalars();


  // const char *GetGenerateTCoordsAsString ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the tube with length textures, etc. If you use scalars to create the texture, the scalars are assumed to be monotonically increasing (or decreasing).</para>
/// </summary>
  System::String^ GetGenerateTCoordsAsString();


  // void SetTextureLength (double );
/// <summary>
/// <para>Control the conversion of units during the texture coordinates calculation. The TextureLength indicates what length (whether  calculated from scalars or length) is mapped to the [0,1) texture space.</para>
/// </summary>
  void SetTextureLength(double arg0);


  // double GetTextureLengthMinValue ();
/// <summary>
/// <para>Control the conversion of units during the texture coordinates calculation. The TextureLength indicates what length (whether  calculated from scalars or length) is mapped to the [0,1) texture space.</para>
/// </summary>
  double GetTextureLengthMinValue();


  // double GetTextureLengthMaxValue ();
/// <summary>
/// <para>Control the conversion of units during the texture coordinates calculation. The TextureLength indicates what length (whether  calculated from scalars or length) is mapped to the [0,1) texture space.</para>
/// </summary>
  double GetTextureLengthMaxValue();


  // double GetTextureLength ();
/// <summary>
/// <para>Control the conversion of units during the texture coordinates calculation. The TextureLength indicates what length (whether  calculated from scalars or length) is mapped to the [0,1) texture space.</para>
/// </summary>
  double GetTextureLength();


// Did not wrap:  vtkTubeFilter ();


// Did not wrap:  ~vtkTubeFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int GeneratePoints (vtkIdType offset, vtkIdType npts, vtkIdType *pts, vtkPoints *inPts, vtkPoints *newPts, vtkPointData *pd, vtkPointData *outPD, vtkFloatArray *newNormals, vtkDataArray *inScalars, double range[2], vtkDataArray *inVectors, double maxNorm, vtkDataArray *inNormals);


// Did not wrap:  void GenerateStrips (vtkIdType offset, vtkIdType npts, vtkIdType *pts, vtkIdType inCellId, vtkCellData *cd, vtkCellData *outCD, vtkCellArray *newStrips);


// Did not wrap:  void GenerateTextureCoords (vtkIdType offset, vtkIdType npts, vtkIdType *pts, vtkPoints *inPts, vtkDataArray *inScalars, vtkFloatArray *newTCoords);


// Did not wrap:  vtkIdType ComputeOffset (vtkIdType offset, vtkIdType npts);


// Did not wrap:  vtkTubeFilter (const vtkTubeFilter &);


// Did not wrap:  void vtkTubeFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTubeFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTubeFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTubeFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTubeFilter();


};

} // end vtkGraphics
