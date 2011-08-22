#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCursor3D : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCursor3D *NewInstance ();
  vtkCursor3D^ NewInstance();


  // vtkCursor3D *SafeDownCast (vtkObject* o);
  static vtkCursor3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCursor3D *New ();


  // void SetModelBounds (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
/// <summary>
/// <para>Set / get the boundary of the 3D cursor.</para>
/// </summary>
  void SetModelBounds(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetModelBounds (double bounds[6]);
/// <summary>
/// <para>Set / get the boundary of the 3D cursor.</para>
/// </summary>
  void SetModelBounds(array<double>^ bounds);


  // double  *GetModelBounds ();
/// <summary>
/// <para>Set / get the boundary of the 3D cursor.</para>
/// </summary>
  array<double>^ GetModelBounds();


  // void SetFocalPoint (double x[3]);
/// <summary>
/// <para>Set/Get the position of cursor focus. If translation mode is on, then the entire cursor (including bounding box, cursor, and shadows) is translated. Otherwise, the focal point will either be clamped to the bounding box, or wrapped, if Wrap is on. (Note: this behavior requires that the bounding box is set prior to the focal point.)</para>
/// </summary>
  void SetFocalPoint(array<double>^ x);


  // void SetFocalPoint (double x, double y, double z);double xyz xyz x xyz y xyz z this SetFocalPoint xyz 
/// <summary>
/// <para>Set/Get the position of cursor focus. If translation mode is on, then the entire cursor (including bounding box, cursor, and shadows) is translated. Otherwise, the focal point will either be clamped to the bounding box, or wrapped, if Wrap is on. (Note: this behavior requires that the bounding box is set prior to the focal point.)</para>
/// </summary>
  void SetFocalPoint(double x, double y, double z);


  // double  *GetFocalPoint ();
/// <summary>
/// <para>Set/Get the position of cursor focus. If translation mode is on, then the entire cursor (including bounding box, cursor, and shadows) is translated. Otherwise, the focal point will either be clamped to the bounding box, or wrapped, if Wrap is on. (Note: this behavior requires that the bounding box is set prior to the focal point.)</para>
/// </summary>
  array<double>^ GetFocalPoint();


  // void SetOutline (int );
/// <summary>
/// <para>Turn on/off the wireframe bounding box.</para>
/// </summary>
  void SetOutline(int arg0);


  // int GetOutline ();
/// <summary>
/// <para>Turn on/off the wireframe bounding box.</para>
/// </summary>
  int GetOutline();


  // void OutlineOn ();
/// <summary>
/// <para>Turn on/off the wireframe bounding box.</para>
/// </summary>
  void OutlineOn();


  // void OutlineOff ();
/// <summary>
/// <para>Turn on/off the wireframe bounding box.</para>
/// </summary>
  void OutlineOff();


  // void SetAxes (int );
/// <summary>
/// <para>Turn on/off the wireframe axes.</para>
/// </summary>
  void SetAxes(int arg0);


  // int GetAxes ();
/// <summary>
/// <para>Turn on/off the wireframe axes.</para>
/// </summary>
  int GetAxes();


  // void AxesOn ();
/// <summary>
/// <para>Turn on/off the wireframe axes.</para>
/// </summary>
  void AxesOn();


  // void AxesOff ();
/// <summary>
/// <para>Turn on/off the wireframe axes.</para>
/// </summary>
  void AxesOff();


  // void SetXShadows (int );
/// <summary>
/// <para>Turn on/off the wireframe x-shadows.</para>
/// </summary>
  void SetXShadows(int arg0);


  // int GetXShadows ();
/// <summary>
/// <para>Turn on/off the wireframe x-shadows.</para>
/// </summary>
  int GetXShadows();


  // void XShadowsOn ();
/// <summary>
/// <para>Turn on/off the wireframe x-shadows.</para>
/// </summary>
  void XShadowsOn();


  // void XShadowsOff ();
/// <summary>
/// <para>Turn on/off the wireframe x-shadows.</para>
/// </summary>
  void XShadowsOff();


  // void SetYShadows (int );
/// <summary>
/// <para>Turn on/off the wireframe y-shadows.</para>
/// </summary>
  void SetYShadows(int arg0);


  // int GetYShadows ();
/// <summary>
/// <para>Turn on/off the wireframe y-shadows.</para>
/// </summary>
  int GetYShadows();


  // void YShadowsOn ();
/// <summary>
/// <para>Turn on/off the wireframe y-shadows.</para>
/// </summary>
  void YShadowsOn();


  // void YShadowsOff ();
/// <summary>
/// <para>Turn on/off the wireframe y-shadows.</para>
/// </summary>
  void YShadowsOff();


  // void SetZShadows (int );
/// <summary>
/// <para>Turn on/off the wireframe z-shadows.</para>
/// </summary>
  void SetZShadows(int arg0);


  // int GetZShadows ();
/// <summary>
/// <para>Turn on/off the wireframe z-shadows.</para>
/// </summary>
  int GetZShadows();


  // void ZShadowsOn ();
/// <summary>
/// <para>Turn on/off the wireframe z-shadows.</para>
/// </summary>
  void ZShadowsOn();


  // void ZShadowsOff ();
/// <summary>
/// <para>Turn on/off the wireframe z-shadows.</para>
/// </summary>
  void ZShadowsOff();


  // void SetTranslationMode (int );
/// <summary>
/// <para>Enable/disable the translation mode. If on, changes in cursor position cause the entire widget to translate along with the cursor. By default, translation mode is off.</para>
/// </summary>
  void SetTranslationMode(int arg0);


  // int GetTranslationMode ();
/// <summary>
/// <para>Enable/disable the translation mode. If on, changes in cursor position cause the entire widget to translate along with the cursor. By default, translation mode is off.</para>
/// </summary>
  int GetTranslationMode();


  // void TranslationModeOn ();
/// <summary>
/// <para>Enable/disable the translation mode. If on, changes in cursor position cause the entire widget to translate along with the cursor. By default, translation mode is off.</para>
/// </summary>
  void TranslationModeOn();


  // void TranslationModeOff ();
/// <summary>
/// <para>Enable/disable the translation mode. If on, changes in cursor position cause the entire widget to translate along with the cursor. By default, translation mode is off.</para>
/// </summary>
  void TranslationModeOff();


  // void SetWrap (int );
/// <summary>
/// <para>Turn on/off cursor wrapping. If the cursor focus moves outside the specified bounds, the cursor will either be restrained against the nearest &quot;wall&quot; (Wrap=off), or it will wrap around (Wrap=on).</para>
/// </summary>
  void SetWrap(int arg0);


  // int GetWrap ();
/// <summary>
/// <para>Turn on/off cursor wrapping. If the cursor focus moves outside the specified bounds, the cursor will either be restrained against the nearest &quot;wall&quot; (Wrap=off), or it will wrap around (Wrap=on).</para>
/// </summary>
  int GetWrap();


  // void WrapOn ();
/// <summary>
/// <para>Turn on/off cursor wrapping. If the cursor focus moves outside the specified bounds, the cursor will either be restrained against the nearest &quot;wall&quot; (Wrap=off), or it will wrap around (Wrap=on).</para>
/// </summary>
  void WrapOn();


  // void WrapOff ();
/// <summary>
/// <para>Turn on/off cursor wrapping. If the cursor focus moves outside the specified bounds, the cursor will either be restrained against the nearest &quot;wall&quot; (Wrap=off), or it will wrap around (Wrap=on).</para>
/// </summary>
  void WrapOff();


  // vtkPolyData *GetFocus ();return vtkPolyData this Focus 
/// <summary>
/// <para>Get the focus for this filter.</para>
/// </summary>
  vtkPolyData^ GetFocus();


  // void AllOn ();
/// <summary>
/// <para>Turn every part of the 3D cursor on or off.</para>
/// </summary>
  void AllOn();


  // void AllOff ();
/// <summary>
/// <para>Turn every part of the 3D cursor on or off.</para>
/// </summary>
  void AllOff();


// Did not wrap:  vtkCursor3D ();


// Did not wrap:  ~vtkCursor3D ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkCursor3D (const vtkCursor3D &);


// Did not wrap:  void vtkCursor3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCursor3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCursor3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCursor3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCursor3D();


};

} // end vtkGraphics
