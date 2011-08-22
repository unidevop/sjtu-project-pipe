#pragma once

// managed includes
#include "vtkPolyDataSourceWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImplicitPlaneWidget : public vtkPolyDataSourceWidget
{

public:
// Did not wrap:  static vtkImplicitPlaneWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImplicitPlaneWidget *NewInstance ();
  vtkImplicitPlaneWidget^ NewInstance();


  // vtkImplicitPlaneWidget *SafeDownCast (vtkObject* o);
  static vtkImplicitPlaneWidget^ SafeDownCast(vtkObject^ o);


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
/// <para>Get the origin of the plane.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetOrigin (double x, double y, double z);
/// <summary>
/// <para>Get the origin of the plane.</para>
/// </summary>
  void SetOrigin(double x, double y, double z);


  // void SetOrigin (double x[3]);
/// <summary>
/// <para>Get the origin of the plane.</para>
/// </summary>
  void SetOrigin(array<double>^ x);


  // double *GetOrigin ();
/// <summary>
/// <para>Get the origin of the plane.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void GetOrigin (double xyz[3]);
/// <summary>
/// <para>Get the origin of the plane.</para>
/// </summary>
  void GetOrigin(array<double>^ xyz);


  // void SetNormal (double x, double y, double z);
/// <summary>
/// <para>Get the normal to the plane.</para>
/// </summary>
  void SetNormal(double x, double y, double z);


  // void SetNormal (double x[3]);
/// <summary>
/// <para>Get the normal to the plane.</para>
/// </summary>
  void SetNormal(array<double>^ x);


  // double *GetNormal ();
/// <summary>
/// <para>Get the normal to the plane.</para>
/// </summary>
  array<double>^ GetNormal();


  // void GetNormal (double xyz[3]);
/// <summary>
/// <para>Get the normal to the plane.</para>
/// </summary>
  void GetNormal(array<double>^ xyz);


  // void SetNormalToXAxis (int );
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetNormalToXAxis(int arg0);


  // int GetNormalToXAxis ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetNormalToXAxis();


  // void NormalToXAxisOn ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToXAxisOn();


  // void NormalToXAxisOff ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToXAxisOff();


  // void SetNormalToYAxis (int );
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetNormalToYAxis(int arg0);


  // int GetNormalToYAxis ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetNormalToYAxis();


  // void NormalToYAxisOn ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToYAxisOn();


  // void NormalToYAxisOff ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToYAxisOff();


  // void SetNormalToZAxis (int );
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetNormalToZAxis(int arg0);


  // int GetNormalToZAxis ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetNormalToZAxis();


  // void NormalToZAxisOn ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToZAxisOn();


  // void NormalToZAxisOff ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. If one axis is set on, the other two will be set off. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToZAxisOff();


  // void SetTubing (int );
/// <summary>
/// <para>Turn on/off tubing of the wire outline of the plane. The tube thickens the line by wrapping with a vtkTubeFilter.</para>
/// </summary>
  void SetTubing(int arg0);


  // int GetTubing ();
/// <summary>
/// <para>Turn on/off tubing of the wire outline of the plane. The tube thickens the line by wrapping with a vtkTubeFilter.</para>
/// </summary>
  int GetTubing();


  // void TubingOn ();
/// <summary>
/// <para>Turn on/off tubing of the wire outline of the plane. The tube thickens the line by wrapping with a vtkTubeFilter.</para>
/// </summary>
  void TubingOn();


  // void TubingOff ();
/// <summary>
/// <para>Turn on/off tubing of the wire outline of the plane. The tube thickens the line by wrapping with a vtkTubeFilter.</para>
/// </summary>
  void TubingOff();


  // void SetDrawPlane (int plane);
/// <summary>
/// <para>Enable/disable the drawing of the plane. In some cases the plane interferes with the object that it is operating on (i.e., the plane interferes with the cut surface it produces producing z-buffer artifacts.)</para>
/// </summary>
  void SetDrawPlane(int plane);


  // int GetDrawPlane ();
/// <summary>
/// <para>Enable/disable the drawing of the plane. In some cases the plane interferes with the object that it is operating on (i.e., the plane interferes with the cut surface it produces producing z-buffer artifacts.)</para>
/// </summary>
  int GetDrawPlane();


  // void DrawPlaneOn ();
/// <summary>
/// <para>Enable/disable the drawing of the plane. In some cases the plane interferes with the object that it is operating on (i.e., the plane interferes with the cut surface it produces producing z-buffer artifacts.)</para>
/// </summary>
  void DrawPlaneOn();


  // void DrawPlaneOff ();
/// <summary>
/// <para>Enable/disable the drawing of the plane. In some cases the plane interferes with the object that it is operating on (i.e., the plane interferes with the cut surface it produces producing z-buffer artifacts.)</para>
/// </summary>
  void DrawPlaneOff();


  // void SetOutlineTranslation (int );
/// <summary>
/// <para>Turn on/off the ability to translate the bounding box by grabbing it with the left mouse button.</para>
/// </summary>
  void SetOutlineTranslation(int arg0);


  // int GetOutlineTranslation ();
/// <summary>
/// <para>Turn on/off the ability to translate the bounding box by grabbing it with the left mouse button.</para>
/// </summary>
  int GetOutlineTranslation();


  // void OutlineTranslationOn ();
/// <summary>
/// <para>Turn on/off the ability to translate the bounding box by grabbing it with the left mouse button.</para>
/// </summary>
  void OutlineTranslationOn();


  // void OutlineTranslationOff ();
/// <summary>
/// <para>Turn on/off the ability to translate the bounding box by grabbing it with the left mouse button.</para>
/// </summary>
  void OutlineTranslationOff();


  // void SetScaleEnabled (int );
/// <summary>
/// <para>Turn on/off the ability to scale with the mouse </para>
/// </summary>
  void SetScaleEnabled(int arg0);


  // int GetScaleEnabled ();
/// <summary>
/// <para>Turn on/off the ability to scale with the mouse </para>
/// </summary>
  int GetScaleEnabled();


  // void ScaleEnabledOn ();
/// <summary>
/// <para>Turn on/off the ability to scale with the mouse </para>
/// </summary>
  void ScaleEnabledOn();


  // void ScaleEnabledOff ();
/// <summary>
/// <para>Turn on/off the ability to scale with the mouse </para>
/// </summary>
  void ScaleEnabledOff();


  // void GetPolyData (vtkPolyData *pd);
/// <summary>
/// <para>Grab the polydata that defines the plane. The polydata contains a single polygon that is clipped by the bounding box.</para>
/// </summary>
  void GetPolyData(vtkPolyData^ pd);


  // vtkPolyDataAlgorithm *GetPolyDataAlgorithm ();
/// <summary>
/// <para>Satisfies superclass API.  This returns a pointer to the underlying PolyData (which represents the plane).</para>
/// </summary>
  vtkPolyDataAlgorithm^ GetPolyDataAlgorithm();


  // void GetPlane (vtkPlane *plane);
/// <summary>
/// <para>Get the implicit function for the plane. The user must provide the instance of the class vtkPlane. Note that vtkPlane is a subclass of vtkImplicitFunction, meaning that it can be used by a variety of filters to perform clipping, cutting, and selection of data.</para>
/// </summary>
  void GetPlane(vtkPlane^ plane);


  // void UpdatePlacement (void );
/// <summary>
/// <para>Satisfies the superclass API.  This will change the state of the widget to match changes that have been made to the underlying PolyDataSource</para>
/// </summary>
  void UpdatePlacement();


  // virtual void SizeHandles ();
/// <summary>
/// <para>Control widget appearance</para>
/// </summary>
  void SizeHandles();


  // vtkProperty *GetNormalProperty ();
/// <summary>
/// <para>Get the properties on the normal (line and cone).</para>
/// </summary>
  vtkProperty^ GetNormalProperty();


  // vtkProperty *GetSelectedNormalProperty ();
/// <summary>
/// <para>Get the properties on the normal (line and cone).</para>
/// </summary>
  vtkProperty^ GetSelectedNormalProperty();


  // vtkProperty *GetPlaneProperty ();
/// <summary>
/// <para>Get the plane properties. The properties of the plane when selected  and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetPlaneProperty();


  // vtkProperty *GetSelectedPlaneProperty ();
/// <summary>
/// <para>Get the plane properties. The properties of the plane when selected  and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedPlaneProperty();


  // vtkProperty *GetOutlineProperty ();
/// <summary>
/// <para>Get the property of the outline.</para>
/// </summary>
  vtkProperty^ GetOutlineProperty();


  // vtkProperty *GetSelectedOutlineProperty ();
/// <summary>
/// <para>Get the property of the outline.</para>
/// </summary>
  vtkProperty^ GetSelectedOutlineProperty();


  // vtkProperty *GetEdgesProperty ();
/// <summary>
/// <para>Get the property of the intersection edges. (This property also applies to the edges when tubed.)</para>
/// </summary>
  vtkProperty^ GetEdgesProperty();


// Did not wrap:  vtkImplicitPlaneWidget ();


// Did not wrap:  ~vtkImplicitPlaneWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnMiddleButtonDown ();


// Did not wrap:  void OnMiddleButtonUp ();


// Did not wrap:  void OnRightButtonDown ();


// Did not wrap:  void OnRightButtonUp ();


// Did not wrap:  void OnMouseMove ();


// Did not wrap:  void UpdateRepresentation ();


// Did not wrap:  void HighlightOutline (int highlight);


// Did not wrap:  void HighlightPlane (int highlight);


// Did not wrap:  void HighlightNormal (int highlight);


// Did not wrap:  void ConstrainOrigin (double x[3]);


// Did not wrap:  void Rotate (int X, int Y, double *p1, double *p2, double *vpn);


// Did not wrap:  void TranslatePlane (double *p1, double *p2);


// Did not wrap:  void TranslateOutline (double *p1, double *p2);


// Did not wrap:  void TranslateOrigin (double *p1, double *p2);


// Did not wrap:  void Push (double *p1, double *p2);


// Did not wrap:  void Scale (double *p1, double *p2, int X, int Y);


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  void GeneratePlane ();


// Did not wrap:  vtkImplicitPlaneWidget (const vtkImplicitPlaneWidget &);


// Did not wrap:  void vtkImplicitPlaneWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImplicitPlaneWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImplicitPlaneWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImplicitPlaneWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImplicitPlaneWidget();


};

} // end vtkWidgets
