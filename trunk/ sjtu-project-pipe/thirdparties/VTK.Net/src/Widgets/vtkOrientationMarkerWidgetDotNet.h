#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkOrientationMarkerWidget : public vtkInteractorObserver
{

public:
// Did not wrap:  static vtkOrientationMarkerWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOrientationMarkerWidget *NewInstance ();
  vtkOrientationMarkerWidget^ NewInstance();


  // vtkOrientationMarkerWidget *SafeDownCast (vtkObject* o);
  static vtkOrientationMarkerWidget^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetOrientationMarker (vtkProp *prop);
/// <summary>
/// <para>Set/get the orientation marker to be displayed in this widget.</para>
/// </summary>
  void SetOrientationMarker(vtkProp^ prop);


  // vtkProp *GetOrientationMarker ();
/// <summary>
/// <para>Set/get the orientation marker to be displayed in this widget.</para>
/// </summary>
  vtkProp^ GetOrientationMarker();


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Enable/disable the widget.</para>
/// </summary>
  void SetEnabled(int arg0);


  // void ExecuteCameraUpdateEvent (vtkObject *o, unsigned long event, void *calldata);
/// <summary>
/// <para>Callback to keep the camera for the orientation marker up to date with the camera in the parent renderer.</para>
/// </summary>
  void ExecuteCameraUpdateEvent(vtkObject^ o, unsigned long event, System::IntPtr calldata);


  // void SetInteractive (int state);
/// <summary>
/// <para>Set/get whether to allow this widget to be interactively moved/scaled.</para>
/// </summary>
  void SetInteractive(int state);


  // int GetInteractive ();
/// <summary>
/// <para>Set/get whether to allow this widget to be interactively moved/scaled.</para>
/// </summary>
  int GetInteractive();


  // void InteractiveOn ();
/// <summary>
/// <para>Set/get whether to allow this widget to be interactively moved/scaled.</para>
/// </summary>
  void InteractiveOn();


  // void InteractiveOff ();
/// <summary>
/// <para>Set/get whether to allow this widget to be interactively moved/scaled.</para>
/// </summary>
  void InteractiveOff();


  // void SetOutlineColor (double r, double g, double b);
/// <summary>
/// <para>Set/get the color of the outline of this widget.  The outline is visible when (in interactive mode) the cursor is over this widget.</para>
/// </summary>
  void SetOutlineColor(double r, double g, double b);


// Did not wrap:  double *GetOutlineColor ();


  // void SetViewport (double minX, double minY, double maxX, double maxY);
/// <summary>
/// <para>Set/get the viewport to position/size this widget.</para>
/// </summary>
  void SetViewport(double minX, double minY, double maxX, double maxY);


// Did not wrap:  double *GetViewport ();


// Did not wrap:  vtkOrientationMarkerWidget ();


// Did not wrap:  ~vtkOrientationMarkerWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnMouseMove ();


// Did not wrap:  int ComputeStateBasedOnPosition (int X, int Y, int *pos1, int *pos2);


// Did not wrap:  void SetCursor (int state);


// Did not wrap:  void MoveWidget (int X, int Y);


// Did not wrap:  void ResizeTopLeft (int X, int Y);


// Did not wrap:  void ResizeTopRight (int X, int Y);


// Did not wrap:  void ResizeBottomLeft (int X, int Y);


// Did not wrap:  void ResizeBottomRight (int X, int Y);


// Did not wrap:  void SquareRenderer ();


// Did not wrap:  void UpdateOutline ();


// Did not wrap:  vtkOrientationMarkerWidget (const vtkOrientationMarkerWidget &);


// Did not wrap:  void vtkOrientationMarkerWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOrientationMarkerWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOrientationMarkerWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOrientationMarkerWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOrientationMarkerWidget();


};

} // end vtkWidgets
