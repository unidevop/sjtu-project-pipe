#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTensorGlyph : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTensorGlyph *NewInstance ();
  vtkTensorGlyph^ NewInstance();


  // vtkTensorGlyph *SafeDownCast (vtkObject* o);
  static vtkTensorGlyph^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTensorGlyph *New ();


  // void SetSource (vtkPolyData *source);
/// <summary>
/// <para>Specify the geometry to copy to each point.</para>
/// </summary>
  void SetSource(vtkPolyData^ source);


  // vtkPolyData *GetSource ();
/// <summary>
/// <para>Specify the geometry to copy to each point.</para>
/// </summary>
  vtkPolyData^ GetSource();


  // void SetScaling (int );
/// <summary>
/// <para>Turn on/off scaling of glyph with eigenvalues.</para>
/// </summary>
  void SetScaling(int arg0);


  // int GetScaling ();
/// <summary>
/// <para>Turn on/off scaling of glyph with eigenvalues.</para>
/// </summary>
  int GetScaling();


  // void ScalingOn ();
/// <summary>
/// <para>Turn on/off scaling of glyph with eigenvalues.</para>
/// </summary>
  void ScalingOn();


  // void ScalingOff ();
/// <summary>
/// <para>Turn on/off scaling of glyph with eigenvalues.</para>
/// </summary>
  void ScalingOff();


  // void SetScaleFactor (double );
/// <summary>
/// <para>Specify scale factor to scale object by. (Scale factor always affects output even if scaling is off.)</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactor ();
/// <summary>
/// <para>Specify scale factor to scale object by. (Scale factor always affects output even if scaling is off.)</para>
/// </summary>
  double GetScaleFactor();


  // void SetThreeGlyphs (int );
/// <summary>
/// <para>Turn on/off drawing three glyphs</para>
/// </summary>
  void SetThreeGlyphs(int arg0);


  // int GetThreeGlyphs ();
/// <summary>
/// <para>Turn on/off drawing three glyphs</para>
/// </summary>
  int GetThreeGlyphs();


  // void ThreeGlyphsOn ();
/// <summary>
/// <para>Turn on/off drawing three glyphs</para>
/// </summary>
  void ThreeGlyphsOn();


  // void ThreeGlyphsOff ();
/// <summary>
/// <para>Turn on/off drawing three glyphs</para>
/// </summary>
  void ThreeGlyphsOff();


  // void SetSymmetric (int );
/// <summary>
/// <para>Turn on/off drawing a mirror of each glyph</para>
/// </summary>
  void SetSymmetric(int arg0);


  // int GetSymmetric ();
/// <summary>
/// <para>Turn on/off drawing a mirror of each glyph</para>
/// </summary>
  int GetSymmetric();


  // void SymmetricOn ();
/// <summary>
/// <para>Turn on/off drawing a mirror of each glyph</para>
/// </summary>
  void SymmetricOn();


  // void SymmetricOff ();
/// <summary>
/// <para>Turn on/off drawing a mirror of each glyph</para>
/// </summary>
  void SymmetricOff();


  // void SetLength (double );
/// <summary>
/// <para>Set/Get the distance, along x, from the origin to the end of the  source glyph. It is used to draw the symmetric glyphs.</para>
/// </summary>
  void SetLength(double arg0);


  // double GetLength ();
/// <summary>
/// <para>Set/Get the distance, along x, from the origin to the end of the  source glyph. It is used to draw the symmetric glyphs.</para>
/// </summary>
  double GetLength();


  // void SetExtractEigenvalues (int );
/// <summary>
/// <para>Turn on/off extraction of eigenvalues from tensor.</para>
/// </summary>
  void SetExtractEigenvalues(int arg0);


  // void ExtractEigenvaluesOn ();
/// <summary>
/// <para>Turn on/off extraction of eigenvalues from tensor.</para>
/// </summary>
  void ExtractEigenvaluesOn();


  // void ExtractEigenvaluesOff ();
/// <summary>
/// <para>Turn on/off extraction of eigenvalues from tensor.</para>
/// </summary>
  void ExtractEigenvaluesOff();


  // int GetExtractEigenvalues ();
/// <summary>
/// <para>Turn on/off extraction of eigenvalues from tensor.</para>
/// </summary>
  int GetExtractEigenvalues();


  // void SetColorGlyphs (int );
/// <summary>
/// <para>Turn on/off coloring of glyph with input scalar data or eigenvalues. If false, or input scalar data not present, then the scalars from the source object are passed through the filter.</para>
/// </summary>
  void SetColorGlyphs(int arg0);


  // int GetColorGlyphs ();
/// <summary>
/// <para>Turn on/off coloring of glyph with input scalar data or eigenvalues. If false, or input scalar data not present, then the scalars from the source object are passed through the filter.</para>
/// </summary>
  int GetColorGlyphs();


  // void ColorGlyphsOn ();
/// <summary>
/// <para>Turn on/off coloring of glyph with input scalar data or eigenvalues. If false, or input scalar data not present, then the scalars from the source object are passed through the filter.</para>
/// </summary>
  void ColorGlyphsOn();


  // void ColorGlyphsOff ();
/// <summary>
/// <para>Turn on/off coloring of glyph with input scalar data or eigenvalues. If false, or input scalar data not present, then the scalars from the source object are passed through the filter.</para>
/// </summary>
  void ColorGlyphsOff();


  // void SetColorMode (int );
/// <summary>
/// <para>Set the color mode to be used for the glyphs.  This can be set to use the input scalars (default) or to use the eigenvalues at the point.  If ThreeGlyphs is set and the eigenvalues are chosen for coloring then each glyph is colored by the corresponding eigenvalue and if not set the color corresponding to the largest eigenvalue is chosen.  The recognized values are: COLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1</para>
/// </summary>
  void SetColorMode(int arg0);


  // int GetColorModeMinValue ();
/// <summary>
/// <para>Set the color mode to be used for the glyphs.  This can be set to use the input scalars (default) or to use the eigenvalues at the point.  If ThreeGlyphs is set and the eigenvalues are chosen for coloring then each glyph is colored by the corresponding eigenvalue and if not set the color corresponding to the largest eigenvalue is chosen.  The recognized values are: COLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1</para>
/// </summary>
  int GetColorModeMinValue();


  // int GetColorModeMaxValue ();
/// <summary>
/// <para>Set the color mode to be used for the glyphs.  This can be set to use the input scalars (default) or to use the eigenvalues at the point.  If ThreeGlyphs is set and the eigenvalues are chosen for coloring then each glyph is colored by the corresponding eigenvalue and if not set the color corresponding to the largest eigenvalue is chosen.  The recognized values are: COLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1</para>
/// </summary>
  int GetColorModeMaxValue();


  // int GetColorMode ();
/// <summary>
/// <para>Set the color mode to be used for the glyphs.  This can be set to use the input scalars (default) or to use the eigenvalues at the point.  If ThreeGlyphs is set and the eigenvalues are chosen for coloring then each glyph is colored by the corresponding eigenvalue and if not set the color corresponding to the largest eigenvalue is chosen.  The recognized values are: COLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1</para>
/// </summary>
  int GetColorMode();


  // void SetColorModeToScalars ();this SetColorMode COLOR_BY_SCALARS 
/// <summary>
/// <para>Set the color mode to be used for the glyphs.  This can be set to use the input scalars (default) or to use the eigenvalues at the point.  If ThreeGlyphs is set and the eigenvalues are chosen for coloring then each glyph is colored by the corresponding eigenvalue and if not set the color corresponding to the largest eigenvalue is chosen.  The recognized values are: COLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1</para>
/// </summary>
  void SetColorModeToScalars();


  // void SetColorModeToEigenvalues ();this SetColorMode COLOR_BY_EIGENVALUES 
/// <summary>
/// <para>Set the color mode to be used for the glyphs.  This can be set to use the input scalars (default) or to use the eigenvalues at the point.  If ThreeGlyphs is set and the eigenvalues are chosen for coloring then each glyph is colored by the corresponding eigenvalue and if not set the color corresponding to the largest eigenvalue is chosen.  The recognized values are: COLOR_BY_SCALARS = 0 (default) COLOR_BY_EIGENVALUES = 1</para>
/// </summary>
  void SetColorModeToEigenvalues();


  // void SetClampScaling (int );
/// <summary>
/// <para>Turn on/off scalar clamping. If scalar clamping is on, the ivar MaxScaleFactor is used to control the maximum scale factor. (This is useful to prevent uncontrolled scaling near singularities.)</para>
/// </summary>
  void SetClampScaling(int arg0);


  // int GetClampScaling ();
/// <summary>
/// <para>Turn on/off scalar clamping. If scalar clamping is on, the ivar MaxScaleFactor is used to control the maximum scale factor. (This is useful to prevent uncontrolled scaling near singularities.)</para>
/// </summary>
  int GetClampScaling();


  // void ClampScalingOn ();
/// <summary>
/// <para>Turn on/off scalar clamping. If scalar clamping is on, the ivar MaxScaleFactor is used to control the maximum scale factor. (This is useful to prevent uncontrolled scaling near singularities.)</para>
/// </summary>
  void ClampScalingOn();


  // void ClampScalingOff ();
/// <summary>
/// <para>Turn on/off scalar clamping. If scalar clamping is on, the ivar MaxScaleFactor is used to control the maximum scale factor. (This is useful to prevent uncontrolled scaling near singularities.)</para>
/// </summary>
  void ClampScalingOff();


  // void SetMaxScaleFactor (double );
/// <summary>
/// <para>Set/Get the maximum allowable scale factor. This value is compared to the combination of the scale factor times the eigenvalue. If less, the scale factor is reset to the MaxScaleFactor. The boolean ClampScaling has to  be &quot;on&quot; for this to work.</para>
/// </summary>
  void SetMaxScaleFactor(double arg0);


  // double GetMaxScaleFactor ();
/// <summary>
/// <para>Set/Get the maximum allowable scale factor. This value is compared to the combination of the scale factor times the eigenvalue. If less, the scale factor is reset to the MaxScaleFactor. The boolean ClampScaling has to  be &quot;on&quot; for this to work.</para>
/// </summary>
  double GetMaxScaleFactor();


// Did not wrap:  vtkTensorGlyph ();


// Did not wrap:  ~vtkTensorGlyph ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkTensorGlyph (const vtkTensorGlyph &);


// Did not wrap:  void vtkTensorGlyph 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTensorGlyph(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTensorGlyph(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTensorGlyph();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTensorGlyph();


};

} // end vtkGraphics
