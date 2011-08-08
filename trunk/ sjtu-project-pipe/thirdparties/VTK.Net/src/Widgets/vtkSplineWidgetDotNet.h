#pragma once

// managed includes
#include "vtk3DWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSplineWidget : public vtk3DWidget
{

public:
// Did not wrap:  static vtkSplineWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSplineWidget *NewInstance ();
  vtkSplineWidget^ NewInstance();


  // vtkSplineWidget *SafeDownCast (vtkObject* o);
  static vtkSplineWidget^ SafeDownCast(vtkObject^ o);


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
/// <para>Force the spline widget to be projected onto one of the orthogonal planes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the spline to the plane if it is orginally not aligned.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and 3 for arbitrary oblique planes when the widget is tied to a vtkPlaneSource.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetProjectToPlane (int );
/// <summary>
/// <para>Force the spline widget to be projected onto one of the orthogonal planes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the spline to the plane if it is orginally not aligned.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and 3 for arbitrary oblique planes when the widget is tied to a vtkPlaneSource.</para>
/// </summary>
  void SetProjectToPlane(int arg0);


  // int GetProjectToPlane ();
/// <summary>
/// <para>Force the spline widget to be projected onto one of the orthogonal planes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the spline to the plane if it is orginally not aligned.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and 3 for arbitrary oblique planes when the widget is tied to a vtkPlaneSource.</para>
/// </summary>
  int GetProjectToPlane();


  // void ProjectToPlaneOn ();
/// <summary>
/// <para>Force the spline widget to be projected onto one of the orthogonal planes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the spline to the plane if it is orginally not aligned.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and 3 for arbitrary oblique planes when the widget is tied to a vtkPlaneSource.</para>
/// </summary>
  void ProjectToPlaneOn();


  // void ProjectToPlaneOff ();
/// <summary>
/// <para>Force the spline widget to be projected onto one of the orthogonal planes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the spline to the plane if it is orginally not aligned.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively and 3 for arbitrary oblique planes when the widget is tied to a vtkPlaneSource.</para>
/// </summary>
  void ProjectToPlaneOff();


  // void SetPlaneSource (vtkPlaneSource *plane);
/// <summary>
/// <para>Set up a reference to a vtkPlaneSource that could be from another widget object, e.g. a vtkPolyDataSourceWidget.</para>
/// </summary>
  void SetPlaneSource(vtkPlaneSource^ plane);


  // void SetProjectionNormal (int );
  void SetProjectionNormal(int arg0);


  // int GetProjectionNormalMinValue ();
  int GetProjectionNormalMinValue();


  // int GetProjectionNormalMaxValue ();
  int GetProjectionNormalMaxValue();


  // int GetProjectionNormal ();
  int GetProjectionNormal();


  // void SetProjectionNormalToXAxes ();this SetProjectionNormal 
  void SetProjectionNormalToXAxes();


  // void SetProjectionNormalToYAxes ();this SetProjectionNormal 
  void SetProjectionNormalToYAxes();


  // void SetProjectionNormalToZAxes ();this SetProjectionNormal 
  void SetProjectionNormalToZAxes();


  // void SetProjectionNormalToOblique ();this SetProjectionNormal 
/// <summary>
/// <para>Set the position of spline handles and points in terms of a plane's position. i.e., if ProjectionNormal is 0, all of the x-coordinate values of the points are set to position. Any value can be passed (and is ignored) to update the spline points when Projection normal is set to 3 for arbritrary plane orientations.</para>
/// </summary>
  void SetProjectionNormalToOblique();


  // void SetProjectionPosition (double position);
/// <summary>
/// <para>Set the position of spline handles and points in terms of a plane's position. i.e., if ProjectionNormal is 0, all of the x-coordinate values of the points are set to position. Any value can be passed (and is ignored) to update the spline points when Projection normal is set to 3 for arbritrary plane orientations.</para>
/// </summary>
  void SetProjectionPosition(double position);


  // double GetProjectionPosition ();
/// <summary>
/// <para>Set the position of spline handles and points in terms of a plane's position. i.e., if ProjectionNormal is 0, all of the x-coordinate values of the points are set to position. Any value can be passed (and is ignored) to update the spline points when Projection normal is set to 3 for arbritrary plane orientations.</para>
/// </summary>
  double GetProjectionPosition();


  // void GetPolyData (vtkPolyData *pd);
/// <summary>
/// <para>Grab the polydata (including points) that defines the spline.  The polydata consists of points and line segments numbering Resolution + 1 and Resoltuion, respectively. Points are guaranteed to be up-to-date when either the InteractionEvent or  EndInteraction events are invoked. The user provides the vtkPolyData and the points and polyline are added to it.</para>
/// </summary>
  void GetPolyData(vtkPolyData^ pd);


  // virtual void SetHandleProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the handle properties (the spheres are the handles). The properties of the handles when selected and unselected can be manipulated.</para>
/// </summary>
  void SetHandleProperty(vtkProperty^ arg0);


  // vtkProperty *GetHandleProperty ();
/// <summary>
/// <para>Set/Get the handle properties (the spheres are the handles). The properties of the handles when selected and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetHandleProperty();


  // virtual void SetSelectedHandleProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the handle properties (the spheres are the handles). The properties of the handles when selected and unselected can be manipulated.</para>
/// </summary>
  void SetSelectedHandleProperty(vtkProperty^ arg0);


  // vtkProperty *GetSelectedHandleProperty ();
/// <summary>
/// <para>Set/Get the handle properties (the spheres are the handles). The properties of the handles when selected and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedHandleProperty();


  // virtual void SetLineProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the line properties. The properties of the line when selected and unselected can be manipulated.</para>
/// </summary>
  void SetLineProperty(vtkProperty^ arg0);


  // vtkProperty *GetLineProperty ();
/// <summary>
/// <para>Set/Get the line properties. The properties of the line when selected and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetLineProperty();


  // virtual void SetSelectedLineProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the line properties. The properties of the line when selected and unselected can be manipulated.</para>
/// </summary>
  void SetSelectedLineProperty(vtkProperty^ arg0);


  // vtkProperty *GetSelectedLineProperty ();
/// <summary>
/// <para>Set/Get the line properties. The properties of the line when selected and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedLineProperty();


  // virtual void SetNumberOfHandles (int npts);
/// <summary>
/// <para>Set/Get the number of handles for this widget.</para>
/// </summary>
  void SetNumberOfHandles(int npts);


  // int GetNumberOfHandles ();
/// <summary>
/// <para>Set/Get the number of handles for this widget.</para>
/// </summary>
  int GetNumberOfHandles();


  // void SetResolution (int resolution);
/// <summary>
/// <para>Set/Get the number of line segments representing the spline for this widget.</para>
/// </summary>
  void SetResolution(int resolution);


  // int GetResolution ();
/// <summary>
/// <para>Set/Get the number of line segments representing the spline for this widget.</para>
/// </summary>
  int GetResolution();


  // virtual void SetParametricSpline (vtkParametricSpline *);
/// <summary>
/// <para>Set the parametric spline object. Through vtkParametricSpline's API, the user can supply and configure one of currently two types of spline: vtkCardinalSpline, vtkKochanekSpline. The widget controls the open or closed configuration of the spline. WARNING: The widget does not enforce internal consistency so that all three are of the same type.</para>
/// </summary>
  void SetParametricSpline(vtkParametricSpline^ arg0);


  // vtkParametricSpline *GetParametricSpline ();
/// <summary>
/// <para>Set the parametric spline object. Through vtkParametricSpline's API, the user can supply and configure one of currently two types of spline: vtkCardinalSpline, vtkKochanekSpline. The widget controls the open or closed configuration of the spline. WARNING: The widget does not enforce internal consistency so that all three are of the same type.</para>
/// </summary>
  vtkParametricSpline^ GetParametricSpline();


  // void SetHandlePosition (int handle, double x, double y, double z);
/// <summary>
/// <para>Set/Get the position of the spline handles. Call GetNumberOfHandles to determine the valid range of handle indices.</para>
/// </summary>
  void SetHandlePosition(int handle, double x, double y, double z);


  // void SetHandlePosition (int handle, double xyz[3]);
/// <summary>
/// <para>Set/Get the position of the spline handles. Call GetNumberOfHandles to determine the valid range of handle indices.</para>
/// </summary>
  void SetHandlePosition(int handle, array<double>^ xyz);


  // void GetHandlePosition (int handle, double xyz[3]);
/// <summary>
/// <para>Set/Get the position of the spline handles. Call GetNumberOfHandles to determine the valid range of handle indices.</para>
/// </summary>
  void GetHandlePosition(int handle, array<double>^ xyz);


  // double *GetHandlePosition (int handle);
/// <summary>
/// <para>Set/Get the position of the spline handles. Call GetNumberOfHandles to determine the valid range of handle indices.</para>
/// </summary>
  array<double>^ GetHandlePosition(int handle);


  // void SetClosed (int closed);
/// <summary>
/// <para>Control whether the spline is open or closed. A closed spline forms a continuous loop: the first and last points are the same, and derivatives are continuous.  A minimum of 3 handles are required to form a closed loop.  This method enforces consistency with user supplied subclasses of vtkSpline.</para>
/// </summary>
  void SetClosed(int closed);


  // int GetClosed ();
/// <summary>
/// <para>Control whether the spline is open or closed. A closed spline forms a continuous loop: the first and last points are the same, and derivatives are continuous.  A minimum of 3 handles are required to form a closed loop.  This method enforces consistency with user supplied subclasses of vtkSpline.</para>
/// </summary>
  int GetClosed();


  // void ClosedOn ();
/// <summary>
/// <para>Control whether the spline is open or closed. A closed spline forms a continuous loop: the first and last points are the same, and derivatives are continuous.  A minimum of 3 handles are required to form a closed loop.  This method enforces consistency with user supplied subclasses of vtkSpline.</para>
/// </summary>
  void ClosedOn();


  // void ClosedOff ();
/// <summary>
/// <para>Control whether the spline is open or closed. A closed spline forms a continuous loop: the first and last points are the same, and derivatives are continuous.  A minimum of 3 handles are required to form a closed loop.  This method enforces consistency with user supplied subclasses of vtkSpline.</para>
/// </summary>
  void ClosedOff();


  // int IsClosed ();
/// <summary>
/// <para>Convenience method to determine whether the spline is closed in a geometric sense.  The widget may be set &quot;closed&quot; but still be geometrically open (e.g., a straight line).</para>
/// </summary>
  int IsClosed();


  // double GetSummedLength ();
/// <summary>
/// <para>Get the approximate vs. the true arc length of the spline. Calculated as the summed lengths of the individual straight line segments. Use SetResolution to control the accuracy.</para>
/// </summary>
  double GetSummedLength();


  // void InitializeHandles (vtkPoints *points);
/// <summary>
/// <para>Convenience method to allocate and set the handles from a vtkPoints instance.  If the first and last points are the same, the spline sets Closed to the on state and disregards the last point, otherwise Closed remains unchanged.</para>
/// </summary>
  void InitializeHandles(vtkPoints^ points);


// Did not wrap:  vtkSplineWidget ();


// Did not wrap:  ~vtkSplineWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnMiddleButtonDown ();


// Did not wrap:  void OnMiddleButtonUp ();


// Did not wrap:  void OnRightButtonDown ();


// Did not wrap:  void OnRightButtonUp ();


// Did not wrap:  void OnMouseMove ();


// Did not wrap:  void ProjectPointsToPlane ();


// Did not wrap:  void ProjectPointsToOrthoPlane ();


// Did not wrap:  void ProjectPointsToObliquePlane ();


// Did not wrap:  void BuildRepresentation ();


// Did not wrap:  void HighlightLine (int highlight);


// Did not wrap:  void Initialize ();


// Did not wrap:  int HighlightHandle (vtkProp *prop);


// Did not wrap:  virtual void SizeHandles ();


// Did not wrap:  void InsertHandleOnLine (double *pos);


// Did not wrap:  void EraseHandle (const int &);


// Did not wrap:  void MovePoint (double *p1, double *p2);


// Did not wrap:  void Scale (double *p1, double *p2, int X, int Y);


// Did not wrap:  void Translate (double *p1, double *p2);


// Did not wrap:  void Spin (double *p1, double *p2, double *vpn);


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  void CalculateCentroid ();


// Did not wrap:  vtkSplineWidget (const vtkSplineWidget &);


// Did not wrap:  void vtkSplineWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSplineWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSplineWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSplineWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSplineWidget();


};

} // end vtkWidgets
