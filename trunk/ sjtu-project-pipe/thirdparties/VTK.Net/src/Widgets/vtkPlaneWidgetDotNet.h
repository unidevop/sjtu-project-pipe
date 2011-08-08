#pragma once

// managed includes
#include "vtkPolyDataSourceWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPlaneWidget : public vtkPolyDataSourceWidget
{

public:
// Did not wrap:  static vtkPlaneWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPlaneWidget *NewInstance ();
  vtkPlaneWidget^ NewInstance();


  // vtkPlaneWidget *SafeDownCast (vtkObject* o);
  static vtkPlaneWidget^ SafeDownCast(vtkObject^ o);


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
/// <para>Set/Get the resolution (number of subdivisions) of the plane.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetResolution (int r);
/// <summary>
/// <para>Set/Get the resolution (number of subdivisions) of the plane.</para>
/// </summary>
  void SetResolution(int r);


  // int GetResolution ();
/// <summary>
/// <para>Set/Get the resolution (number of subdivisions) of the plane.</para>
/// </summary>
  int GetResolution();


  // void SetOrigin (double x, double y, double z);
/// <summary>
/// <para>Set/Get the origin of the plane.</para>
/// </summary>
  void SetOrigin(double x, double y, double z);


  // void SetOrigin (double x[3]);
/// <summary>
/// <para>Set/Get the origin of the plane.</para>
/// </summary>
  void SetOrigin(array<double>^ x);


  // double *GetOrigin ();
/// <summary>
/// <para>Set/Get the origin of the plane.</para>
/// </summary>
  array<double>^ GetOrigin();


  // void GetOrigin (double xyz[3]);
/// <summary>
/// <para>Set/Get the origin of the plane.</para>
/// </summary>
  void GetOrigin(array<double>^ xyz);


  // void SetPoint1 (double x, double y, double z);
/// <summary>
/// <para>Set/Get the position of the point defining the first axis of the plane.</para>
/// </summary>
  void SetPoint1(double x, double y, double z);


  // void SetPoint1 (double x[3]);
/// <summary>
/// <para>Set/Get the position of the point defining the first axis of the plane.</para>
/// </summary>
  void SetPoint1(array<double>^ x);


  // double *GetPoint1 ();
/// <summary>
/// <para>Set/Get the position of the point defining the first axis of the plane.</para>
/// </summary>
  array<double>^ GetPoint1();


  // void GetPoint1 (double xyz[3]);
/// <summary>
/// <para>Set/Get the position of the point defining the first axis of the plane.</para>
/// </summary>
  void GetPoint1(array<double>^ xyz);


  // void SetPoint2 (double x, double y, double z);
/// <summary>
/// <para>Set/Get the position of the point defining the second axis of the plane.</para>
/// </summary>
  void SetPoint2(double x, double y, double z);


  // void SetPoint2 (double x[3]);
/// <summary>
/// <para>Set/Get the position of the point defining the second axis of the plane.</para>
/// </summary>
  void SetPoint2(array<double>^ x);


  // double *GetPoint2 ();
/// <summary>
/// <para>Set/Get the position of the point defining the second axis of the plane.</para>
/// </summary>
  array<double>^ GetPoint2();


  // void GetPoint2 (double xyz[3]);
/// <summary>
/// <para>Set/Get the position of the point defining the second axis of the plane.</para>
/// </summary>
  void GetPoint2(array<double>^ xyz);


  // void SetCenter (double x, double y, double z);
/// <summary>
/// <para>Get the center of the plane.</para>
/// </summary>
  void SetCenter(double x, double y, double z);


  // void SetCenter (double x[3]);
/// <summary>
/// <para>Get the center of the plane.</para>
/// </summary>
  void SetCenter(array<double>^ x);


  // double *GetCenter ();
/// <summary>
/// <para>Get the center of the plane.</para>
/// </summary>
  array<double>^ GetCenter();


  // void GetCenter (double xyz[3]);
/// <summary>
/// <para>Get the center of the plane.</para>
/// </summary>
  void GetCenter(array<double>^ xyz);


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


  // void SetRepresentation (int );
/// <summary>
/// <para>Control how the plane appears when GetPolyData() is invoked. If the mode is &quot;outline&quot;, then just the outline of the plane is shown. If the mode is &quot;wireframe&quot; then the plane is drawn with the outline plus the interior mesh (corresponding to the resolution specified). If the mode is &quot;surface&quot; then the plane is drawn as a surface.</para>
/// </summary>
  void SetRepresentation(int arg0);


  // int GetRepresentationMinValue ();
/// <summary>
/// <para>Control how the plane appears when GetPolyData() is invoked. If the mode is &quot;outline&quot;, then just the outline of the plane is shown. If the mode is &quot;wireframe&quot; then the plane is drawn with the outline plus the interior mesh (corresponding to the resolution specified). If the mode is &quot;surface&quot; then the plane is drawn as a surface.</para>
/// </summary>
  int GetRepresentationMinValue();


  // int GetRepresentationMaxValue ();
/// <summary>
/// <para>Control how the plane appears when GetPolyData() is invoked. If the mode is &quot;outline&quot;, then just the outline of the plane is shown. If the mode is &quot;wireframe&quot; then the plane is drawn with the outline plus the interior mesh (corresponding to the resolution specified). If the mode is &quot;surface&quot; then the plane is drawn as a surface.</para>
/// </summary>
  int GetRepresentationMaxValue();


  // int GetRepresentation ();
/// <summary>
/// <para>Control how the plane appears when GetPolyData() is invoked. If the mode is &quot;outline&quot;, then just the outline of the plane is shown. If the mode is &quot;wireframe&quot; then the plane is drawn with the outline plus the interior mesh (corresponding to the resolution specified). If the mode is &quot;surface&quot; then the plane is drawn as a surface.</para>
/// </summary>
  int GetRepresentation();


  // void SetRepresentationToOff ();this SetRepresentation VTK_PLANE_OFF 
/// <summary>
/// <para>Control how the plane appears when GetPolyData() is invoked. If the mode is &quot;outline&quot;, then just the outline of the plane is shown. If the mode is &quot;wireframe&quot; then the plane is drawn with the outline plus the interior mesh (corresponding to the resolution specified). If the mode is &quot;surface&quot; then the plane is drawn as a surface.</para>
/// </summary>
  void SetRepresentationToOff();


  // void SetRepresentationToOutline ();this SetRepresentation VTK_PLANE_OUTLINE 
/// <summary>
/// <para>Control how the plane appears when GetPolyData() is invoked. If the mode is &quot;outline&quot;, then just the outline of the plane is shown. If the mode is &quot;wireframe&quot; then the plane is drawn with the outline plus the interior mesh (corresponding to the resolution specified). If the mode is &quot;surface&quot; then the plane is drawn as a surface.</para>
/// </summary>
  void SetRepresentationToOutline();


  // void SetRepresentationToWireframe ();this SetRepresentation VTK_PLANE_WIREFRAME 
/// <summary>
/// <para>Control how the plane appears when GetPolyData() is invoked. If the mode is &quot;outline&quot;, then just the outline of the plane is shown. If the mode is &quot;wireframe&quot; then the plane is drawn with the outline plus the interior mesh (corresponding to the resolution specified). If the mode is &quot;surface&quot; then the plane is drawn as a surface.</para>
/// </summary>
  void SetRepresentationToWireframe();


  // void SetRepresentationToSurface ();this SetRepresentation VTK_PLANE_SURFACE 
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetRepresentationToSurface();


  // void SetNormalToXAxis (int );
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetNormalToXAxis(int arg0);


  // int GetNormalToXAxis ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetNormalToXAxis();


  // void NormalToXAxisOn ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToXAxisOn();


  // void NormalToXAxisOff ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToXAxisOff();


  // void SetNormalToYAxis (int );
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetNormalToYAxis(int arg0);


  // int GetNormalToYAxis ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetNormalToYAxis();


  // void NormalToYAxisOn ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToYAxisOn();


  // void NormalToYAxisOff ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToYAxisOff();


  // void SetNormalToZAxis (int );
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetNormalToZAxis(int arg0);


  // int GetNormalToZAxis ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetNormalToZAxis();


  // void NormalToZAxisOn ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToZAxisOn();


  // void NormalToZAxisOff ();
/// <summary>
/// <para>Force the plane widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the plane to the axes if it is orginally not aligned.</para>
/// </summary>
  void NormalToZAxisOff();


  // void GetPolyData (vtkPolyData *pd);
/// <summary>
/// <para>Grab the polydata (including points) that defines the plane.  The polydata consists of (res+1)*(res+1) points, and res*res quadrilateral polygons, where res is the resolution of the plane. These point values are guaranteed to be up-to-date when either the InteractionEvent or EndInteraction events are invoked. The user provides the vtkPolyData and the points and polyplane are added to it.</para>
/// </summary>
  void GetPolyData(vtkPolyData^ pd);


  // void GetPlane (vtkPlane *plane);
/// <summary>
/// <para>Get the planes describing the implicit function defined by the plane widget. The user must provide the instance of the class vtkPlane. Note that vtkPlane is a subclass of vtkImplicitFunction, meaning that it can be used by a variety of filters to perform clipping, cutting, and selection of data.</para>
/// </summary>
  void GetPlane(vtkPlane^ plane);


  // vtkPolyDataAlgorithm *GetPolyDataAlgorithm ();
/// <summary>
/// <para>Satisfies superclass API.  This returns a pointer to the underlying PolyData.  Make changes to this before calling the initial PlaceWidget() to have the initial placement follow suit.  Or, make changes after the widget has been initialised and call UpdatePlacement() to realise.</para>
/// </summary>
  vtkPolyDataAlgorithm^ GetPolyDataAlgorithm();


  // void UpdatePlacement (void );
/// <summary>
/// <para>Satisfies superclass API.  This will change the state of the widget to match changes that have been made to the underlying PolyDataSource</para>
/// </summary>
  void UpdatePlacement();


  // vtkProperty *GetHandleProperty ();
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  manipulated.</para>
/// </summary>
  vtkProperty^ GetHandleProperty();


  // vtkProperty *GetSelectedHandleProperty ();
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedHandleProperty();


  // virtual void SetPlaneProperty (vtkProperty *);
/// <summary>
/// <para>Get the plane properties. The properties of the plane when selected  and unselected can be manipulated.</para>
/// </summary>
  void SetPlaneProperty(vtkProperty^ arg0);


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


// Did not wrap:  vtkPlaneWidget ();


// Did not wrap:  ~vtkPlaneWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnMiddleButtonDown ();


// Did not wrap:  void OnMiddleButtonUp ();


// Did not wrap:  void OnRightButtonDown ();


// Did not wrap:  void OnRightButtonUp ();


// Did not wrap:  void OnMouseMove ();


// Did not wrap:  void SelectRepresentation ();


// Did not wrap:  void HighlightPlane (int highlight);


// Did not wrap:  void PositionHandles ();


// Did not wrap:  void HandlesOn (double length);


// Did not wrap:  void HandlesOff ();


// Did not wrap:  int HighlightHandle (vtkProp *prop);


// Did not wrap:  virtual void SizeHandles ();


// Did not wrap:  void HighlightNormal (int highlight);


// Did not wrap:  void MoveOrigin (double *p1, double *p2);


// Did not wrap:  void MovePoint1 (double *p1, double *p2);


// Did not wrap:  void MovePoint2 (double *p1, double *p2);


// Did not wrap:  void MovePoint3 (double *p1, double *p2);


// Did not wrap:  void Rotate (int X, int Y, double *p1, double *p2, double *vpn);


// Did not wrap:  void Spin (double *p1, double *p2);


// Did not wrap:  void Scale (double *p1, double *p2, int X, int Y);


// Did not wrap:  void Translate (double *p1, double *p2);


// Did not wrap:  void Push (double *p1, double *p2);


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  void GeneratePlane ();


// Did not wrap:  vtkPlaneWidget (const vtkPlaneWidget &);


// Did not wrap:  void vtkPlaneWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPlaneWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPlaneWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPlaneWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPlaneWidget();


};

} // end vtkWidgets
