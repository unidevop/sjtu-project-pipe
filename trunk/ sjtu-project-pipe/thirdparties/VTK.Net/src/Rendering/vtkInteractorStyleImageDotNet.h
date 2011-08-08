#pragma once

// managed includes
#include "vtkInteractorStyleTrackballCameraDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleImage : public vtkInteractorStyleTrackballCamera
{

public:
// Did not wrap:  static vtkInteractorStyleImage *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleImage *NewInstance ();
  vtkInteractorStyleImage^ NewInstance();


  // vtkInteractorStyleImage *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleImage^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int  *GetWindowLevelStartPosition ();
/// <summary>
/// <para>Some useful information for handling window level</para>
/// </summary>
  array<int>^ GetWindowLevelStartPosition();


  // int  *GetWindowLevelCurrentPosition ();
/// <summary>
/// <para>Some useful information for handling window level</para>
/// </summary>
  array<int>^ GetWindowLevelCurrentPosition();


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


  // virtual void OnChar ();
/// <summary>
/// <para>Override the &quot;fly-to&quot; (f keypress) for images.</para>
/// </summary>
  void OnChar();


  // virtual void WindowLevel ();
  void WindowLevel();


  // virtual void Pick ();
  void Pick();


  // virtual void StartWindowLevel ();
  void StartWindowLevel();


  // virtual void EndWindowLevel ();
  void EndWindowLevel();


  // virtual void StartPick ();
  void StartPick();


  // virtual void EndPick ();
  void EndPick();


// Did not wrap:  vtkInteractorStyleImage ();


// Did not wrap:  ~vtkInteractorStyleImage ();


// Did not wrap:  vtkInteractorStyleImage (const vtkInteractorStyleImage &);


// Did not wrap:  void vtkInteractorStyleImage 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleImage(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleImage(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleImage();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleImage();


};

} // end vtkRendering
