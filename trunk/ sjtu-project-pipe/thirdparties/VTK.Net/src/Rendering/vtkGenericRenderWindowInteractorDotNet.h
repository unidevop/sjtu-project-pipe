#pragma once

// managed includes
#include "vtkRenderWindowInteractorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericRenderWindowInteractor : public vtkRenderWindowInteractor
{

public:
// Did not wrap:  static vtkGenericRenderWindowInteractor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericRenderWindowInteractor *NewInstance ();
  vtkGenericRenderWindowInteractor^ NewInstance();


  // vtkGenericRenderWindowInteractor *SafeDownCast (vtkObject* o);
  static vtkGenericRenderWindowInteractor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void MouseMoveEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void MouseMoveEvent();


  // virtual void RightButtonPressEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void RightButtonPressEvent();


  // virtual void RightButtonReleaseEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void RightButtonReleaseEvent();


  // virtual void LeftButtonPressEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void LeftButtonPressEvent();


  // virtual void LeftButtonReleaseEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void LeftButtonReleaseEvent();


  // virtual void MiddleButtonPressEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void MiddleButtonPressEvent();


  // virtual void MiddleButtonReleaseEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void MiddleButtonReleaseEvent();


  // virtual void MouseWheelForwardEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void MouseWheelForwardEvent();


  // virtual void MouseWheelBackwardEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void MouseWheelBackwardEvent();


  // virtual void ExposeEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void ExposeEvent();


  // virtual void ConfigureEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void ConfigureEvent();


  // virtual void EnterEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void EnterEvent();


  // virtual void LeaveEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void LeaveEvent();


  // virtual void TimerEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void TimerEvent();


  // virtual void KeyPressEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void KeyPressEvent();


  // virtual void KeyReleaseEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void KeyReleaseEvent();


  // virtual void CharEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void CharEvent();


  // virtual void ExitEvent ();
/// <summary>
/// <para>Fire various events, SetEventInformation should be called just prior to calling any of these methods.  This methods will Invoke the  corresponding vtk event.</para>
/// </summary>
  void ExitEvent();


  // virtual int CreateTimer (int );
/// <summary>
/// <para>Allow users of the class to add callbacks to handle the creation and  destruction of timers.   CreateTimer should create a timer event of 10 milliseconds, and at the end of that time, it should call TimerEvent on this class.</para>
/// </summary>
  int CreateTimer(int arg0);


  // virtual int DestroyTimer ();
/// <summary>
/// <para>Allow users of the class to add callbacks to handle the creation and  destruction of timers.   CreateTimer should create a timer event of 10 milliseconds, and at the end of that time, it should call TimerEvent on this class.</para>
/// </summary>
  int DestroyTimer();


// Did not wrap:  vtkGenericRenderWindowInteractor ();


// Did not wrap:  ~vtkGenericRenderWindowInteractor ();


// Did not wrap:  vtkGenericRenderWindowInteractor (const vtkGenericRenderWindowInteractor &);


// Did not wrap:  void vtkGenericRenderWindowInteractor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericRenderWindowInteractor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericRenderWindowInteractor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericRenderWindowInteractor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericRenderWindowInteractor();


};

} // end vtkRendering
