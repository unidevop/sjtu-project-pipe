#pragma once

// managed includes
#include "vtk3DWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPointWidget : public vtk3DWidget
{

public:
// Did not wrap:  static vtkPointWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointWidget *NewInstance ();
  vtkPointWidget^ NewInstance();


  // vtkPointWidget *SafeDownCast (vtkObject* o);
  static vtkPointWidget^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void SetEnabled(int arg0);


  // virtual void PlaceWidget (double bounds[6]);
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void PlaceWidget(array<double>^ bounds);


  // void PlaceWidget ();this Superclass PlaceWidget 
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void PlaceWidget();


  // void PlaceWidget (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);this Superclass PlaceWidget xmin xmax ymin ymax zmin zmax 
/// <summary>
/// <para>Grab the polydata (including points) that defines the point. A single point and a vertex compose the vtkPolyData.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void GetPolyData (vtkPolyData *pd);
/// <summary>
/// <para>Grab the polydata (including points) that defines the point. A single point and a vertex compose the vtkPolyData.</para>
/// </summary>
  void GetPolyData(vtkPolyData^ pd);


  // void SetPosition (double x, double y, double z);this Cursor3D SetFocalPoint x y z 
/// <summary>
/// <para>Set/Get the position of the point. Note that if the position is set outside of the bounding box, it will be clamped to the boundary of the bounding box.</para>
/// </summary>
  void SetPosition(double x, double y, double z);


  // void SetPosition (double x[3]);this SetPosition x x x 
/// <summary>
/// <para>Set/Get the position of the point. Note that if the position is set outside of the bounding box, it will be clamped to the boundary of the bounding box.</para>
/// </summary>
  void SetPosition(array<double>^ x);


  // double *GetPosition ();return this Cursor3D GetFocalPoint 
/// <summary>
/// <para>Set/Get the position of the point. Note that if the position is set outside of the bounding box, it will be clamped to the boundary of the bounding box.</para>
/// </summary>
  array<double>^ GetPosition();


  // void GetPosition (double xyz[3]);this Cursor3D GetFocalPoint xyz 
/// <summary>
/// <para>Turn on/off the wireframe bounding box.</para>
/// </summary>
  void GetPosition(array<double>^ xyz);


  // void SetOutline (int o);this Cursor3D SetOutline o 
/// <summary>
/// <para>Turn on/off the wireframe bounding box.</para>
/// </summary>
  void SetOutline(int o);


  // int GetOutline ();return this Cursor3D GetOutline 
/// <summary>
/// <para>Turn on/off the wireframe bounding box.</para>
/// </summary>
  int GetOutline();


  // void OutlineOn ();this Cursor3D OutlineOn 
/// <summary>
/// <para>Turn on/off the wireframe bounding box.</para>
/// </summary>
  void OutlineOn();


  // void OutlineOff ();this Cursor3D OutlineOff 
/// <summary>
/// <para>Turn on/off the wireframe x-shadows.</para>
/// </summary>
  void OutlineOff();


  // void SetXShadows (int o);this Cursor3D SetXShadows o 
/// <summary>
/// <para>Turn on/off the wireframe x-shadows.</para>
/// </summary>
  void SetXShadows(int o);


  // int GetXShadows ();return this Cursor3D GetXShadows 
/// <summary>
/// <para>Turn on/off the wireframe x-shadows.</para>
/// </summary>
  int GetXShadows();


  // void XShadowsOn ();this Cursor3D XShadowsOn 
/// <summary>
/// <para>Turn on/off the wireframe x-shadows.</para>
/// </summary>
  void XShadowsOn();


  // void XShadowsOff ();this Cursor3D XShadowsOff 
/// <summary>
/// <para>Turn on/off the wireframe y-shadows.</para>
/// </summary>
  void XShadowsOff();


  // void SetYShadows (int o);this Cursor3D SetYShadows o 
/// <summary>
/// <para>Turn on/off the wireframe y-shadows.</para>
/// </summary>
  void SetYShadows(int o);


  // int GetYShadows ();return this Cursor3D GetYShadows 
/// <summary>
/// <para>Turn on/off the wireframe y-shadows.</para>
/// </summary>
  int GetYShadows();


  // void YShadowsOn ();this Cursor3D YShadowsOn 
/// <summary>
/// <para>Turn on/off the wireframe y-shadows.</para>
/// </summary>
  void YShadowsOn();


  // void YShadowsOff ();this Cursor3D YShadowsOff 
/// <summary>
/// <para>Turn on/off the wireframe z-shadows.</para>
/// </summary>
  void YShadowsOff();


  // void SetZShadows (int o);this Cursor3D SetZShadows o 
/// <summary>
/// <para>Turn on/off the wireframe z-shadows.</para>
/// </summary>
  void SetZShadows(int o);


  // int GetZShadows ();return this Cursor3D GetZShadows 
/// <summary>
/// <para>Turn on/off the wireframe z-shadows.</para>
/// </summary>
  int GetZShadows();


  // void ZShadowsOn ();this Cursor3D ZShadowsOn 
/// <summary>
/// <para>Turn on/off the wireframe z-shadows.</para>
/// </summary>
  void ZShadowsOn();


  // void ZShadowsOff ();this Cursor3D ZShadowsOff 
/// <summary>
/// <para>If translation mode is on, as the widget is moved the bounding box, shadows, and cursor are all translated simultaneously as the point moves.</para>
/// </summary>
  void ZShadowsOff();


  // void SetTranslationMode (int mode);this Cursor3D SetTranslationMode mode this Cursor3D Update 
/// <summary>
/// <para>If translation mode is on, as the widget is moved the bounding box, shadows, and cursor are all translated simultaneously as the point moves.</para>
/// </summary>
  void SetTranslationMode(int mode);


  // int GetTranslationMode ();return this Cursor3D GetTranslationMode 
/// <summary>
/// <para>If translation mode is on, as the widget is moved the bounding box, shadows, and cursor are all translated simultaneously as the point moves.</para>
/// </summary>
  int GetTranslationMode();


  // void TranslationModeOn ();this SetTranslationMode 
/// <summary>
/// <para>If translation mode is on, as the widget is moved the bounding box, shadows, and cursor are all translated simultaneously as the point moves.</para>
/// </summary>
  void TranslationModeOn();


  // void TranslationModeOff ();this SetTranslationMode 
/// <summary>
/// <para>Convenience methods to turn outline and shadows on and off.</para>
/// </summary>
  void TranslationModeOff();


  // void AllOn ();this OutlineOn this XShadowsOn this YShadowsOn this ZShadowsOn 
/// <summary>
/// <para>Convenience methods to turn outline and shadows on and off.</para>
/// </summary>
  void AllOn();


  // void AllOff ();this OutlineOff this XShadowsOff this YShadowsOff this ZShadowsOff 
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  set.</para>
/// </summary>
  void AllOff();


  // vtkProperty *GetProperty ();
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  set.</para>
/// </summary>
  vtkProperty^ GetProperty();


  // vtkProperty *GetSelectedProperty ();
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  set.</para>
/// </summary>
  vtkProperty^ GetSelectedProperty();


  // void SetHotSpotSize (double );
/// <summary>
/// <para>Set the &quot;hot spot&quot; size; i.e., the region around the focus, in which the motion vector is used to control the constrained sliding action. Note the size is specified as a fraction of the length of the diagonal of the  point widget's bounding box.</para>
/// </summary>
  void SetHotSpotSize(double arg0);


  // double GetHotSpotSizeMinValue ();
/// <summary>
/// <para>Set the &quot;hot spot&quot; size; i.e., the region around the focus, in which the motion vector is used to control the constrained sliding action. Note the size is specified as a fraction of the length of the diagonal of the  point widget's bounding box.</para>
/// </summary>
  double GetHotSpotSizeMinValue();


  // double GetHotSpotSizeMaxValue ();
/// <summary>
/// <para>Set the &quot;hot spot&quot; size; i.e., the region around the focus, in which the motion vector is used to control the constrained sliding action. Note the size is specified as a fraction of the length of the diagonal of the  point widget's bounding box.</para>
/// </summary>
  double GetHotSpotSizeMaxValue();


  // double GetHotSpotSize ();
/// <summary>
/// <para>Set the &quot;hot spot&quot; size; i.e., the region around the focus, in which the motion vector is used to control the constrained sliding action. Note the size is specified as a fraction of the length of the diagonal of the  point widget's bounding box.</para>
/// </summary>
  double GetHotSpotSize();


// Did not wrap:  vtkPointWidget ();


// Did not wrap:  ~vtkPointWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  virtual void OnMouseMove ();


// Did not wrap:  virtual void OnLeftButtonDown ();


// Did not wrap:  virtual void OnLeftButtonUp ();


// Did not wrap:  virtual void OnMiddleButtonDown ();


// Did not wrap:  virtual void OnMiddleButtonUp ();


// Did not wrap:  virtual void OnRightButtonDown ();


// Did not wrap:  virtual void OnRightButtonUp ();


// Did not wrap:  void Highlight (int highlight);


// Did not wrap:  void Translate (double *p1, double *p2);


// Did not wrap:  void Scale (double *p1, double *p2, int X, int Y);


// Did not wrap:  void MoveFocus (double *p1, double *p2);


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  int DetermineConstraintAxis (int constraint, double *x);


// Did not wrap:  vtkPointWidget (const vtkPointWidget &);


// Did not wrap:  void vtkPointWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointWidget();


};

} // end vtkWidgets
