#pragma once

// managed includes
#include "vtk3DWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageTracerWidget : public vtk3DWidget
{

public:
// Did not wrap:  static vtkImageTracerWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageTracerWidget *NewInstance ();
  vtkImageTracerWidget^ NewInstance();


  // vtkImageTracerWidget *SafeDownCast (vtkObject* o);
  static vtkImageTracerWidget^ SafeDownCast(vtkObject^ o);


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
/// <para>Set/Get the handle properties (the 2D glyphs are the handles). The properties of the handles when selected and normal can be manipulated.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // virtual void SetHandleProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the handle properties (the 2D glyphs are the handles). The properties of the handles when selected and normal can be manipulated.</para>
/// </summary>
  void SetHandleProperty(vtkProperty^ arg0);


  // vtkProperty *GetHandleProperty ();
/// <summary>
/// <para>Set/Get the handle properties (the 2D glyphs are the handles). The properties of the handles when selected and normal can be manipulated.</para>
/// </summary>
  vtkProperty^ GetHandleProperty();


  // virtual void SetSelectedHandleProperty (vtkProperty *);
/// <summary>
/// <para>Set/Get the handle properties (the 2D glyphs are the handles). The properties of the handles when selected and normal can be manipulated.</para>
/// </summary>
  void SetSelectedHandleProperty(vtkProperty^ arg0);


  // vtkProperty *GetSelectedHandleProperty ();
/// <summary>
/// <para>Set/Get the handle properties (the 2D glyphs are the handles). The properties of the handles when selected and normal can be manipulated.</para>
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


  // void SetViewProp (vtkProp *prop);
/// <summary>
/// <para>Set the prop, usually a vtkImageActor, to trace over.</para>
/// </summary>
  void SetViewProp(vtkProp^ prop);


  // void SetProjectToPlane (int );
/// <summary>
/// <para>Force handles to be on a specific ortho plane.</para>
/// </summary>
  void SetProjectToPlane(int arg0);


  // int GetProjectToPlane ();
/// <summary>
/// <para>Force handles to be on a specific ortho plane.</para>
/// </summary>
  int GetProjectToPlane();


  // void ProjectToPlaneOn ();
/// <summary>
/// <para>Force handles to be on a specific ortho plane.</para>
/// </summary>
  void ProjectToPlaneOn();


  // void ProjectToPlaneOff ();
/// <summary>
/// <para>Force handles to be on a specific ortho plane.</para>
/// </summary>
  void ProjectToPlaneOff();


  // void SetProjectionNormal (int );
/// <summary>
/// <para>Set the projection normal.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D glyphs, it is necessary to specify a plane on which to generate them, even though ProjectToPlane may be turned off.</para>
/// </summary>
  void SetProjectionNormal(int arg0);


  // int GetProjectionNormalMinValue ();
/// <summary>
/// <para>Set the projection normal.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D glyphs, it is necessary to specify a plane on which to generate them, even though ProjectToPlane may be turned off.</para>
/// </summary>
  int GetProjectionNormalMinValue();


  // int GetProjectionNormalMaxValue ();
/// <summary>
/// <para>Set the projection normal.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D glyphs, it is necessary to specify a plane on which to generate them, even though ProjectToPlane may be turned off.</para>
/// </summary>
  int GetProjectionNormalMaxValue();


  // int GetProjectionNormal ();
/// <summary>
/// <para>Set the projection normal.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D glyphs, it is necessary to specify a plane on which to generate them, even though ProjectToPlane may be turned off.</para>
/// </summary>
  int GetProjectionNormal();


  // void SetProjectionNormalToXAxes ();this SetProjectionNormal 
/// <summary>
/// <para>Set the projection normal.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D glyphs, it is necessary to specify a plane on which to generate them, even though ProjectToPlane may be turned off.</para>
/// </summary>
  void SetProjectionNormalToXAxes();


  // void SetProjectionNormalToYAxes ();this SetProjectionNormal 
/// <summary>
/// <para>Set the projection normal.  The normal in SetProjectionNormal is 0,1,2 for YZ,XZ,XY planes respectively.  Since the handles are 2D glyphs, it is necessary to specify a plane on which to generate them, even though ProjectToPlane may be turned off.</para>
/// </summary>
  void SetProjectionNormalToYAxes();


  // void SetProjectionNormalToZAxes ();this SetProjectionNormal 
/// <summary>
/// <para>Set the position of the widgets' handles in terms of a plane's position. e.g., if ProjectionNormal is 0, all of the x-coordinate values of the handles are set to ProjectionPosition.  No attempt is made to ensure that the position is within the bounds of either the underlying image data or the prop on which tracing is performed.</para>
/// </summary>
  void SetProjectionNormalToZAxes();


  // void SetProjectionPosition (double position);
/// <summary>
/// <para>Set the position of the widgets' handles in terms of a plane's position. e.g., if ProjectionNormal is 0, all of the x-coordinate values of the handles are set to ProjectionPosition.  No attempt is made to ensure that the position is within the bounds of either the underlying image data or the prop on which tracing is performed.</para>
/// </summary>
  void SetProjectionPosition(double position);


  // double GetProjectionPosition ();
/// <summary>
/// <para>Set the position of the widgets' handles in terms of a plane's position. e.g., if ProjectionNormal is 0, all of the x-coordinate values of the handles are set to ProjectionPosition.  No attempt is made to ensure that the position is within the bounds of either the underlying image data or the prop on which tracing is performed.</para>
/// </summary>
  double GetProjectionPosition();


  // void SetSnapToImage (int snap);
/// <summary>
/// <para>Force snapping to image data while tracing.</para>
/// </summary>
  void SetSnapToImage(int snap);


  // int GetSnapToImage ();
/// <summary>
/// <para>Force snapping to image data while tracing.</para>
/// </summary>
  int GetSnapToImage();


  // void SnapToImageOn ();
/// <summary>
/// <para>Force snapping to image data while tracing.</para>
/// </summary>
  void SnapToImageOn();


  // void SnapToImageOff ();
/// <summary>
/// <para>Force snapping to image data while tracing.</para>
/// </summary>
  void SnapToImageOff();


  // void SetAutoClose (int );
/// <summary>
/// <para>In concert with a CaptureRadius value, automatically form a closed path by connecting first to last path points.</para>
/// </summary>
  void SetAutoClose(int arg0);


  // int GetAutoClose ();
/// <summary>
/// <para>In concert with a CaptureRadius value, automatically form a closed path by connecting first to last path points.</para>
/// </summary>
  int GetAutoClose();


  // void AutoCloseOn ();
/// <summary>
/// <para>In concert with a CaptureRadius value, automatically form a closed path by connecting first to last path points.</para>
/// </summary>
  void AutoCloseOn();


  // void AutoCloseOff ();
/// <summary>
/// <para>In concert with a CaptureRadius value, automatically form a closed path by connecting first to last path points.</para>
/// </summary>
  void AutoCloseOff();


  // void SetCaptureRadius (double );
/// <summary>
/// <para>Set/Get the capture radius for automatic path closing.  For image data, capture radius should be half the distance between voxel/pixel centers.</para>
/// </summary>
  void SetCaptureRadius(double arg0);


  // double GetCaptureRadius ();
/// <summary>
/// <para>Set/Get the capture radius for automatic path closing.  For image data, capture radius should be half the distance between voxel/pixel centers.</para>
/// </summary>
  double GetCaptureRadius();


  // void GetPath (vtkPolyData *pd);
/// <summary>
/// <para>Grab the points and lines that define the traced path. These point values are guaranteed to be up-to-date when either the InteractionEvent or EndInteraction events are invoked. The user provides the vtkPolyData and the points and cells representing the line are added to it.</para>
/// </summary>
  void GetPath(vtkPolyData^ pd);


  // vtkGlyphSource2D *GetGlyphSource ();return this HandleGenerator 
/// <summary>
/// <para>Set/Get the type of snapping to image data: center of a pixel/voxel or nearest point defining a pixel/voxel.</para>
/// </summary>
  vtkGlyphSource2D^ GetGlyphSource();


  // void SetImageSnapType (int );
/// <summary>
/// <para>Set/Get the type of snapping to image data: center of a pixel/voxel or nearest point defining a pixel/voxel.</para>
/// </summary>
  void SetImageSnapType(int arg0);


  // int GetImageSnapTypeMinValue ();
/// <summary>
/// <para>Set/Get the type of snapping to image data: center of a pixel/voxel or nearest point defining a pixel/voxel.</para>
/// </summary>
  int GetImageSnapTypeMinValue();


  // int GetImageSnapTypeMaxValue ();
/// <summary>
/// <para>Set/Get the type of snapping to image data: center of a pixel/voxel or nearest point defining a pixel/voxel.</para>
/// </summary>
  int GetImageSnapTypeMaxValue();


  // int GetImageSnapType ();
/// <summary>
/// <para>Set/Get the type of snapping to image data: center of a pixel/voxel or nearest point defining a pixel/voxel.</para>
/// </summary>
  int GetImageSnapType();


  // void SetHandlePosition (int handle, double xyz[3]);
/// <summary>
/// <para>Set/Get the handle position in terms of a zero-based array of handles.</para>
/// </summary>
  void SetHandlePosition(int handle, array<double>^ xyz);


  // void SetHandlePosition (int handle, double x, double y, double z);
/// <summary>
/// <para>Set/Get the handle position in terms of a zero-based array of handles.</para>
/// </summary>
  void SetHandlePosition(int handle, double x, double y, double z);


  // void GetHandlePosition (int handle, double xyz[3]);
/// <summary>
/// <para>Set/Get the handle position in terms of a zero-based array of handles.</para>
/// </summary>
  void GetHandlePosition(int handle, array<double>^ xyz);


  // double *GetHandlePosition (int handle);
/// <summary>
/// <para>Set/Get the handle position in terms of a zero-based array of handles.</para>
/// </summary>
  array<double>^ GetHandlePosition(int handle);


  // int GetNumberOfHandles ();
/// <summary>
/// <para>Get the number of handles.</para>
/// </summary>
  int GetNumberOfHandles();


  // void SetInteraction (int interact);
/// <summary>
/// <para>Enable/disable mouse interaction when the widget is visible.</para>
/// </summary>
  void SetInteraction(int interact);


  // int GetInteraction ();
/// <summary>
/// <para>Enable/disable mouse interaction when the widget is visible.</para>
/// </summary>
  int GetInteraction();


  // void InteractionOn ();
/// <summary>
/// <para>Enable/disable mouse interaction when the widget is visible.</para>
/// </summary>
  void InteractionOn();


  // void InteractionOff ();
/// <summary>
/// <para>Enable/disable mouse interaction when the widget is visible.</para>
/// </summary>
  void InteractionOff();


  // void InitializeHandles (vtkPoints *);
/// <summary>
/// <para>Initialize the widget with a set of points and generate lines between them.  If AutoClose is on it will handle the case wherein the first and last points are congruent.</para>
/// </summary>
  void InitializeHandles(vtkPoints^ arg0);


  // int IsClosed ();
/// <summary>
/// <para>Is the path closed or open?</para>
/// </summary>
  int IsClosed();


  // void SetProp (vtkProp *prop);
/// <summary>
/// <para>@deprecated Replaced by vtkImageTracerWidget::SetViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetProp(vtkProp^ prop);


// Did not wrap:  vtkImageTracerWidget ();


// Did not wrap:  ~vtkImageTracerWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnMiddleButtonDown ();


// Did not wrap:  void OnMiddleButtonUp ();


// Did not wrap:  void OnRightButtonDown ();


// Did not wrap:  void OnRightButtonUp ();


// Did not wrap:  void OnMouseMove ();


// Did not wrap:  void AddObservers ();


// Did not wrap:  void Trace (int , int );


// Did not wrap:  void Snap (double *);


// Did not wrap:  void MovePoint (const double *, const double *);


// Did not wrap:  void Translate (const double *, const double *);


// Did not wrap:  void ClosePath ();


// Did not wrap:  void AppendHandles (double *);


// Did not wrap:  void ResetHandles ();


// Did not wrap:  void AllocateHandles (const int &);


// Did not wrap:  void AdjustHandlePosition (const int &, double *);


// Did not wrap:  int HighlightHandle (vtkProp *);


// Did not wrap:  void EraseHandle (const int &);


// Did not wrap:  virtual void SizeHandles ();


// Did not wrap:  void InsertHandleOnLine (double *);


// Did not wrap:  void HighlightLine (const int &);


// Did not wrap:  void BuildLinesFromHandles ();


// Did not wrap:  void ResetLine (double *);


// Did not wrap:  void AppendLine (double *);


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  vtkImageTracerWidget (const vtkImageTracerWidget &);


// Did not wrap:  void vtkImageTracerWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageTracerWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageTracerWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageTracerWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageTracerWidget();


};

} // end vtkWidgets
