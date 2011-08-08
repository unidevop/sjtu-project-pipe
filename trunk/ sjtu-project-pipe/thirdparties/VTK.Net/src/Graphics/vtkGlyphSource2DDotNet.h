#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGlyphSource2D : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGlyphSource2D *NewInstance ();
  vtkGlyphSource2D^ NewInstance();


  // vtkGlyphSource2D *SafeDownCast (vtkObject* o);
  static vtkGlyphSource2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGlyphSource2D *New ();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Set the center of the glyph. By default the center is (0,0,0).</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Set the center of the glyph. By default the center is (0,0,0).</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Set the center of the glyph. By default the center is (0,0,0).</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetScale (double );
/// <summary>
/// <para>Set the scale of the glyph. Note that the glyphs are designed to fit in the (1,1) rectangle.</para>
/// </summary>
  void SetScale(double arg0);


  // double GetScaleMinValue ();
/// <summary>
/// <para>Set the scale of the glyph. Note that the glyphs are designed to fit in the (1,1) rectangle.</para>
/// </summary>
  double GetScaleMinValue();


  // double GetScaleMaxValue ();
/// <summary>
/// <para>Set the scale of the glyph. Note that the glyphs are designed to fit in the (1,1) rectangle.</para>
/// </summary>
  double GetScaleMaxValue();


  // double GetScale ();
/// <summary>
/// <para>Set the scale of the glyph. Note that the glyphs are designed to fit in the (1,1) rectangle.</para>
/// </summary>
  double GetScale();


  // void SetScale2 (double );
/// <summary>
/// <para>Set the scale of optional portions of the glyph (e.g., the dash and cross is DashOn() and CrossOn()).</para>
/// </summary>
  void SetScale2(double arg0);


  // double GetScale2MinValue ();
/// <summary>
/// <para>Set the scale of optional portions of the glyph (e.g., the dash and cross is DashOn() and CrossOn()).</para>
/// </summary>
  double GetScale2MinValue();


  // double GetScale2MaxValue ();
/// <summary>
/// <para>Set the scale of optional portions of the glyph (e.g., the dash and cross is DashOn() and CrossOn()).</para>
/// </summary>
  double GetScale2MaxValue();


  // double GetScale2 ();
/// <summary>
/// <para>Set the scale of optional portions of the glyph (e.g., the dash and cross is DashOn() and CrossOn()).</para>
/// </summary>
  double GetScale2();


  // void SetColor (double , double , double );
/// <summary>
/// <para>Set the color of the glyph. The default color is white.</para>
/// </summary>
  void SetColor(double arg0, double arg1, double arg2);


  // void SetColor (double  a[3]);
/// <summary>
/// <para>Set the color of the glyph. The default color is white.</para>
/// </summary>
  void SetColor(array<double>^ a);


  // double  *GetColor ();
/// <summary>
/// <para>Set the color of the glyph. The default color is white.</para>
/// </summary>
  array<double>^ GetColor();


  // void SetFilled (int );
/// <summary>
/// <para>Specify whether the glyph is filled (a polygon) or not (a closed polygon defined by line segments). This only applies to 2D closed glyphs.</para>
/// </summary>
  void SetFilled(int arg0);


  // int GetFilled ();
/// <summary>
/// <para>Specify whether the glyph is filled (a polygon) or not (a closed polygon defined by line segments). This only applies to 2D closed glyphs.</para>
/// </summary>
  int GetFilled();


  // void FilledOn ();
/// <summary>
/// <para>Specify whether the glyph is filled (a polygon) or not (a closed polygon defined by line segments). This only applies to 2D closed glyphs.</para>
/// </summary>
  void FilledOn();


  // void FilledOff ();
/// <summary>
/// <para>Specify whether the glyph is filled (a polygon) or not (a closed polygon defined by line segments). This only applies to 2D closed glyphs.</para>
/// </summary>
  void FilledOff();


  // void SetDash (int );
/// <summary>
/// <para>Specify whether a short line segment is drawn through the glyph. (This is in addition to the glyph. If the glyph type is set to &quot;Dash&quot; there is no need to enable this flag.)</para>
/// </summary>
  void SetDash(int arg0);


  // int GetDash ();
/// <summary>
/// <para>Specify whether a short line segment is drawn through the glyph. (This is in addition to the glyph. If the glyph type is set to &quot;Dash&quot; there is no need to enable this flag.)</para>
/// </summary>
  int GetDash();


  // void DashOn ();
/// <summary>
/// <para>Specify whether a short line segment is drawn through the glyph. (This is in addition to the glyph. If the glyph type is set to &quot;Dash&quot; there is no need to enable this flag.)</para>
/// </summary>
  void DashOn();


  // void DashOff ();
/// <summary>
/// <para>Specify whether a short line segment is drawn through the glyph. (This is in addition to the glyph. If the glyph type is set to &quot;Dash&quot; there is no need to enable this flag.)</para>
/// </summary>
  void DashOff();


  // void SetCross (int );
/// <summary>
/// <para>Specify whether a cross is drawn as part of the glyph. (This  is in addition to the glyph. If the glyph type is set to  &quot;Cross&quot; there is no need to enable this flag.)</para>
/// </summary>
  void SetCross(int arg0);


  // int GetCross ();
/// <summary>
/// <para>Specify whether a cross is drawn as part of the glyph. (This  is in addition to the glyph. If the glyph type is set to  &quot;Cross&quot; there is no need to enable this flag.)</para>
/// </summary>
  int GetCross();


  // void CrossOn ();
/// <summary>
/// <para>Specify whether a cross is drawn as part of the glyph. (This  is in addition to the glyph. If the glyph type is set to  &quot;Cross&quot; there is no need to enable this flag.)</para>
/// </summary>
  void CrossOn();


  // void CrossOff ();
/// <summary>
/// <para>Specify whether a cross is drawn as part of the glyph. (This  is in addition to the glyph. If the glyph type is set to  &quot;Cross&quot; there is no need to enable this flag.)</para>
/// </summary>
  void CrossOff();


  // void SetRotationAngle (double );
/// <summary>
/// <para>Specify an angle (in degrees) to rotate the glyph around the z-axis. Using this ivar, it is possible to generate rotated glyphs (e.g., crosses, arrows, etc.)</para>
/// </summary>
  void SetRotationAngle(double arg0);


  // double GetRotationAngle ();
/// <summary>
/// <para>Specify an angle (in degrees) to rotate the glyph around the z-axis. Using this ivar, it is possible to generate rotated glyphs (e.g., crosses, arrows, etc.)</para>
/// </summary>
  double GetRotationAngle();


  // void SetGlyphType (int );
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphType(int arg0);


  // int GetGlyphTypeMinValue ();
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  int GetGlyphTypeMinValue();


  // int GetGlyphTypeMaxValue ();
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  int GetGlyphTypeMaxValue();


  // int GetGlyphType ();
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  int GetGlyphType();


  // void SetGlyphTypeToNone ();this SetGlyphType VTK_NO_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToNone();


  // void SetGlyphTypeToVertex ();this SetGlyphType VTK_VERTEX_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToVertex();


  // void SetGlyphTypeToDash ();this SetGlyphType VTK_DASH_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToDash();


  // void SetGlyphTypeToCross ();this SetGlyphType VTK_CROSS_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToCross();


  // void SetGlyphTypeToThickCross ();this SetGlyphType VTK_THICKCROSS_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToThickCross();


  // void SetGlyphTypeToTriangle ();this SetGlyphType VTK_TRIANGLE_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToTriangle();


  // void SetGlyphTypeToSquare ();this SetGlyphType VTK_SQUARE_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToSquare();


  // void SetGlyphTypeToCircle ();this SetGlyphType VTK_CIRCLE_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToCircle();


  // void SetGlyphTypeToDiamond ();this SetGlyphType VTK_DIAMOND_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToDiamond();


  // void SetGlyphTypeToArrow ();this SetGlyphType VTK_ARROW_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToArrow();


  // void SetGlyphTypeToThickArrow ();this SetGlyphType VTK_THICKARROW_GLYPH 
/// <summary>
/// <para>Specify the type of glyph to generate.</para>
/// </summary>
  void SetGlyphTypeToThickArrow();


  // void SetGlyphTypeToHookedArrow ();this SetGlyphType VTK_HOOKEDARROW_GLYPH 
  void SetGlyphTypeToHookedArrow();


// Did not wrap:  vtkGlyphSource2D ();


// Did not wrap:  ~vtkGlyphSource2D ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void TransformGlyph (vtkPoints *pts);


// Did not wrap:  void ConvertColor ();


// Did not wrap:  void CreateVertex (vtkPoints *pts, vtkCellArray *verts, vtkUnsignedCharArray *colors);


// Did not wrap:  void CreateDash (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors, double scale);


// Did not wrap:  void CreateCross (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors, double scale);


// Did not wrap:  void CreateThickCross (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors);


// Did not wrap:  void CreateTriangle (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors);


// Did not wrap:  void CreateSquare (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors);


// Did not wrap:  void CreateCircle (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors);


// Did not wrap:  void CreateDiamond (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors);


// Did not wrap:  void CreateArrow (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors);


// Did not wrap:  void CreateThickArrow (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors);


// Did not wrap:  void CreateHookedArrow (vtkPoints *pts, vtkCellArray *lines, vtkCellArray *polys, vtkUnsignedCharArray *colors);


// Did not wrap:  vtkGlyphSource2D (const vtkGlyphSource2D &);


// Did not wrap:  void vtkGlyphSource2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGlyphSource2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGlyphSource2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGlyphSource2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGlyphSource2D();


};

} // end vtkGraphics
