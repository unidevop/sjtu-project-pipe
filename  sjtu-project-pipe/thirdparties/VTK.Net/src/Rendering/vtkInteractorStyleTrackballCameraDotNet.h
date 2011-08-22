#pragma once

// managed includes
#include "vtkInteractorStyleDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleTrackballCamera : public vtkInteractorStyle
{

public:
// Did not wrap:  static vtkInteractorStyleTrackballCamera *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleTrackballCamera *NewInstance ();
  vtkInteractorStyleTrackballCamera^ NewInstance();


  // vtkInteractorStyleTrackballCamera *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleTrackballCamera^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void OnMouseMove ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnMouseMove();


  // virtual void OnLeftButtonDown ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnLeftButtonDown();


  // virtual void OnLeftButtonUp ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnLeftButtonUp();


  // virtual void OnMiddleButtonDown ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnMiddleButtonDown();


  // virtual void OnMiddleButtonUp ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnMiddleButtonUp();


  // virtual void OnRightButtonDown ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnRightButtonDown();


  // virtual void OnRightButtonUp ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnRightButtonUp();


  // virtual void OnMouseWheelForward ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnMouseWheelForward();


  // virtual void OnMouseWheelBackward ();
/// <summary>
/// <para>Event bindings controlling the effects of pressing mouse buttons or moving the mouse.</para>
/// </summary>
  void OnMouseWheelBackward();


  // virtual void Rotate ();
  void Rotate();


  // virtual void Spin ();
  void Spin();


  // virtual void Pan ();
  void Pan();


  // virtual void Dolly ();
  void Dolly();


// Did not wrap:  vtkInteractorStyleTrackballCamera ();


// Did not wrap:  ~vtkInteractorStyleTrackballCamera ();


// Did not wrap:  virtual void Dolly (double factor);


// Did not wrap:  vtkInteractorStyleTrackballCamera (const vtkInteractorStyleTrackballCamera &);


// Did not wrap:  void vtkInteractorStyleTrackballCamera 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleTrackballCamera(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleTrackballCamera(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleTrackballCamera();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleTrackballCamera();


};

} // end vtkRendering
