#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRibbonFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRibbonFilter *NewInstance ();
  vtkRibbonFilter^ NewInstance();


  // vtkRibbonFilter *SafeDownCast (vtkObject* o);
  static vtkRibbonFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRibbonFilter *New ();


  // void SetWidth (double );
/// <summary>
/// <para>Set the &quot;half&quot; width of the ribbon. If the width is allowed to vary,  this is the minimum width.</para>
/// </summary>
  void SetWidth(double arg0);


  // double GetWidthMinValue ();
/// <summary>
/// <para>Set the &quot;half&quot; width of the ribbon. If the width is allowed to vary,  this is the minimum width.</para>
/// </summary>
  double GetWidthMinValue();


  // double GetWidthMaxValue ();
/// <summary>
/// <para>Set the &quot;half&quot; width of the ribbon. If the width is allowed to vary,  this is the minimum width.</para>
/// </summary>
  double GetWidthMaxValue();


  // double GetWidth ();
/// <summary>
/// <para>Set the &quot;half&quot; width of the ribbon. If the width is allowed to vary,  this is the minimum width.</para>
/// </summary>
  double GetWidth();


  // void SetAngle (double );
/// <summary>
/// <para>Set the offset angle of the ribbon from the line normal. (The angle is expressed in degrees.)</para>
/// </summary>
  void SetAngle(double arg0);


  // double GetAngleMinValue ();
/// <summary>
/// <para>Set the offset angle of the ribbon from the line normal. (The angle is expressed in degrees.)</para>
/// </summary>
  double GetAngleMinValue();


  // double GetAngleMaxValue ();
/// <summary>
/// <para>Set the offset angle of the ribbon from the line normal. (The angle is expressed in degrees.)</para>
/// </summary>
  double GetAngleMaxValue();


  // double GetAngle ();
/// <summary>
/// <para>Set the offset angle of the ribbon from the line normal. (The angle is expressed in degrees.)</para>
/// </summary>
  double GetAngle();


  // void SetVaryWidth (int );
/// <summary>
/// <para>Turn on/off the variation of ribbon width with scalar value.</para>
/// </summary>
  void SetVaryWidth(int arg0);


  // int GetVaryWidth ();
/// <summary>
/// <para>Turn on/off the variation of ribbon width with scalar value.</para>
/// </summary>
  int GetVaryWidth();


  // void VaryWidthOn ();
/// <summary>
/// <para>Turn on/off the variation of ribbon width with scalar value.</para>
/// </summary>
  void VaryWidthOn();


  // void VaryWidthOff ();
/// <summary>
/// <para>Turn on/off the variation of ribbon width with scalar value.</para>
/// </summary>
  void VaryWidthOff();


  // void SetWidthFactor (double );
/// <summary>
/// <para>Set the maximum ribbon width in terms of a multiple of the minimum width.</para>
/// </summary>
  void SetWidthFactor(double arg0);


  // double GetWidthFactor ();
/// <summary>
/// <para>Set the maximum ribbon width in terms of a multiple of the minimum width.</para>
/// </summary>
  double GetWidthFactor();


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


  // void SetGenerateTCoords (int );
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
/// </summary>
  void SetGenerateTCoords(int arg0);


  // int GetGenerateTCoordsMinValue ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
/// </summary>
  int GetGenerateTCoordsMinValue();


  // int GetGenerateTCoordsMaxValue ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
/// </summary>
  int GetGenerateTCoordsMaxValue();


  // int GetGenerateTCoords ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
/// </summary>
  int GetGenerateTCoords();


  // void SetGenerateTCoordsToOff ();this SetGenerateTCoords VTK_TCOORDS_OFF 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
/// </summary>
  void SetGenerateTCoordsToOff();


  // void SetGenerateTCoordsToNormalizedLength ();this SetGenerateTCoords VTK_TCOORDS_FROM_NORMALIZED_LENGTH 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
/// </summary>
  void SetGenerateTCoordsToNormalizedLength();


  // void SetGenerateTCoordsToUseLength ();this SetGenerateTCoords VTK_TCOORDS_FROM_LENGTH 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
/// </summary>
  void SetGenerateTCoordsToUseLength();


  // void SetGenerateTCoordsToUseScalars ();this SetGenerateTCoords VTK_TCOORDS_FROM_SCALARS 
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
/// </summary>
  void SetGenerateTCoordsToUseScalars();


  // const char *GetGenerateTCoordsAsString ();
/// <summary>
/// <para>Control whether and how texture coordinates are produced. This is useful for striping the ribbon with time textures, etc.</para>
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


// Did not wrap:  vtkRibbonFilter ();


// Did not wrap:  ~vtkRibbonFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int GeneratePoints (vtkIdType offset, vtkIdType npts, vtkIdType *pts, vtkPoints *inPts, vtkPoints *newPts, vtkPointData *pd, vtkPointData *outPD, vtkFloatArray *newNormals, vtkDataArray *inScalars, double range[2], vtkDataArray *inNormals);


// Did not wrap:  void GenerateStrip (vtkIdType offset, vtkIdType npts, vtkIdType *pts, vtkIdType inCellId, vtkCellData *cd, vtkCellData *outCD, vtkCellArray *newStrips);


// Did not wrap:  void GenerateTextureCoords (vtkIdType offset, vtkIdType npts, vtkIdType *pts, vtkPoints *inPts, vtkDataArray *inScalars, vtkFloatArray *newTCoords);


// Did not wrap:  vtkIdType ComputeOffset (vtkIdType offset, vtkIdType npts);


// Did not wrap:  vtkRibbonFilter (const vtkRibbonFilter &);


// Did not wrap:  void vtkRibbonFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRibbonFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRibbonFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRibbonFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRibbonFilter();


};

} // end vtkGraphics
