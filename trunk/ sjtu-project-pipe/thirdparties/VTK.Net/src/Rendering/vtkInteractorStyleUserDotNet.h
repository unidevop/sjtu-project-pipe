#pragma once

// managed includes
#include "vtkInteractorStyleDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleUser : public vtkInteractorStyle
{

public:
// Did not wrap:  static vtkInteractorStyleUser *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleUser *NewInstance ();
  vtkInteractorStyleUser^ NewInstance();


  // vtkInteractorStyleUser *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleUser^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int  *GetLastPos ();
/// <summary>
/// <para>Get the most recent mouse position during mouse motion.   In your user interaction method, you must use this to track the mouse movement.  Do not use GetEventPosition(), which records the last position where a mouse button was pressed.</para>
/// </summary>
  array<int>^ GetLastPos();


  // int  *GetOldPos ();
/// <summary>
/// <para>Get the previous mouse position during mouse motion, or after a key press.  This can be used to calculate the relative  displacement of the mouse.</para>
/// </summary>
  array<int>^ GetOldPos();


  // int GetShiftKey ();
/// <summary>
/// <para>Test whether modifiers were held down when mouse button or key was pressed</para>
/// </summary>
  int GetShiftKey();


  // int GetCtrlKey ();
/// <summary>
/// <para>Test whether modifiers were held down when mouse button or key was pressed</para>
/// </summary>
  int GetCtrlKey();


  // int GetChar ();
/// <summary>
/// <para>Get the character for a Char event.</para>
/// </summary>
  int GetChar();


  // char *GetKeySym ();
/// <summary>
/// <para>Get the KeySym (in the same format as Tk KeySyms) for a  KeyPress or KeyRelease method.</para>
/// </summary>
  System::String^ GetKeySym();


  // int GetButton ();
/// <summary>
/// <para>Get the mouse button that was last pressed inside the window (returns zero when the button is released).</para>
/// </summary>
  int GetButton();


  // virtual void OnMouseMove ();
/// <summary>
/// <para>Generic event bindings</para>
/// </summary>
  void OnMouseMove();


  // virtual void OnLeftButtonDown ();
/// <summary>
/// <para>Generic event bindings</para>
/// </summary>
  void OnLeftButtonDown();


  // virtual void OnLeftButtonUp ();
/// <summary>
/// <para>Generic event bindings</para>
/// </summary>
  void OnLeftButtonUp();


  // virtual void OnMiddleButtonDown ();
/// <summary>
/// <para>Generic event bindings</para>
/// </summary>
  void OnMiddleButtonDown();


  // virtual void OnMiddleButtonUp ();
/// <summary>
/// <para>Generic event bindings</para>
/// </summary>
  void OnMiddleButtonUp();


  // virtual void OnRightButtonDown ();
/// <summary>
/// <para>Generic event bindings</para>
/// </summary>
  void OnRightButtonDown();


  // virtual void OnRightButtonUp ();
/// <summary>
/// <para>Generic event bindings</para>
/// </summary>
  void OnRightButtonUp();


  // virtual void OnChar ();
/// <summary>
/// <para>Keyboard functions</para>
/// </summary>
  void OnChar();


  // virtual void OnKeyPress ();
/// <summary>
/// <para>Keyboard functions</para>
/// </summary>
  void OnKeyPress();


  // virtual void OnKeyRelease ();
/// <summary>
/// <para>Keyboard functions</para>
/// </summary>
  void OnKeyRelease();


  // virtual void OnExpose ();
/// <summary>
/// <para>These are more esoteric events, but are useful in some cases.</para>
/// </summary>
  void OnExpose();


  // virtual void OnConfigure ();
/// <summary>
/// <para>These are more esoteric events, but are useful in some cases.</para>
/// </summary>
  void OnConfigure();


  // virtual void OnEnter ();
/// <summary>
/// <para>These are more esoteric events, but are useful in some cases.</para>
/// </summary>
  void OnEnter();


  // virtual void OnLeave ();
/// <summary>
/// <para>These are more esoteric events, but are useful in some cases.</para>
/// </summary>
  void OnLeave();


  // virtual void OnTimer ();
  void OnTimer();


// Did not wrap:  vtkInteractorStyleUser ();


// Did not wrap:  ~vtkInteractorStyleUser ();


// Did not wrap:  vtkInteractorStyleUser (const vtkInteractorStyleUser &);


// Did not wrap:  void vtkInteractorStyleUser 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleUser(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleUser(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleUser();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleUser();


};

} // end vtkRendering
