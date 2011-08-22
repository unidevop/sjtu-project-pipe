#pragma once

// managed includes
#include "vtkInteractorObserverDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkProp3D;
ref class vtkRenderWindowInteractor;

public ref class vtkInteractorStyle : public vtkInteractorObserver
{

public:
// Did not wrap:  static vtkInteractorStyle *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyle *NewInstance ();
  vtkInteractorStyle^ NewInstance();


  // vtkInteractorStyle *SafeDownCast (vtkObject* o);
  static vtkInteractorStyle^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInteractor (vtkRenderWindowInteractor *interactor);
/// <summary>
/// <para>Set/Get the Interactor wrapper being controlled by this object. (Satisfy superclass API.)</para>
/// </summary>
  void SetInteractor(vtkRenderWindowInteractor^ interactor);


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Turn on/off this interactor. Interactor styles operate a little bit differently than other types of interactor observers. When the SetInteractor() method is invoked, the automatically enable themselves. This is a legacy requirement, and convenient for the user.</para>
/// </summary>
  void SetEnabled(int arg0);


  // void SetAutoAdjustCameraClippingRange (int );
/// <summary>
/// <para>If AutoAdjustCameraClippingRange is on, then before each render the camera clipping range will be adjusted to &quot;fit&quot; the whole scene. Clipping will still occur if objects in the scene are behind the camera or come very close. If AutoAdjustCameraClippingRange is off, no adjustment will be made per render, but the camera clipping range will still be reset when the camera is reset.</para>
/// </summary>
  void SetAutoAdjustCameraClippingRange(int arg0);


  // int GetAutoAdjustCameraClippingRangeMinValue ();
/// <summary>
/// <para>If AutoAdjustCameraClippingRange is on, then before each render the camera clipping range will be adjusted to &quot;fit&quot; the whole scene. Clipping will still occur if objects in the scene are behind the camera or come very close. If AutoAdjustCameraClippingRange is off, no adjustment will be made per render, but the camera clipping range will still be reset when the camera is reset.</para>
/// </summary>
  int GetAutoAdjustCameraClippingRangeMinValue();


  // int GetAutoAdjustCameraClippingRangeMaxValue ();
/// <summary>
/// <para>If AutoAdjustCameraClippingRange is on, then before each render the camera clipping range will be adjusted to &quot;fit&quot; the whole scene. Clipping will still occur if objects in the scene are behind the camera or come very close. If AutoAdjustCameraClippingRange is off, no adjustment will be made per render, but the camera clipping range will still be reset when the camera is reset.</para>
/// </summary>
  int GetAutoAdjustCameraClippingRangeMaxValue();


  // int GetAutoAdjustCameraClippingRange ();
/// <summary>
/// <para>If AutoAdjustCameraClippingRange is on, then before each render the camera clipping range will be adjusted to &quot;fit&quot; the whole scene. Clipping will still occur if objects in the scene are behind the camera or come very close. If AutoAdjustCameraClippingRange is off, no adjustment will be made per render, but the camera clipping range will still be reset when the camera is reset.</para>
/// </summary>
  int GetAutoAdjustCameraClippingRange();


  // void AutoAdjustCameraClippingRangeOn ();
/// <summary>
/// <para>If AutoAdjustCameraClippingRange is on, then before each render the camera clipping range will be adjusted to &quot;fit&quot; the whole scene. Clipping will still occur if objects in the scene are behind the camera or come very close. If AutoAdjustCameraClippingRange is off, no adjustment will be made per render, but the camera clipping range will still be reset when the camera is reset.</para>
/// </summary>
  void AutoAdjustCameraClippingRangeOn();


  // void AutoAdjustCameraClippingRangeOff ();
/// <summary>
/// <para>If AutoAdjustCameraClippingRange is on, then before each render the camera clipping range will be adjusted to &quot;fit&quot; the whole scene. Clipping will still occur if objects in the scene are behind the camera or come very close. If AutoAdjustCameraClippingRange is off, no adjustment will be made per render, but the camera clipping range will still be reset when the camera is reset.</para>
/// </summary>
  void AutoAdjustCameraClippingRangeOff();


  // void FindPokedRenderer (int , int );
/// <summary>
/// <para>When an event occurs, we must determine which Renderer the event occurred within, since one RenderWindow may contain multiple renderers. </para>
/// </summary>
  void FindPokedRenderer(int arg0, int arg1);


  // int GetState ();
/// <summary>
/// <para>Some useful information for interaction</para>
/// </summary>
  int GetState();


  // int GetUseTimers ();
/// <summary>
/// <para>Set/Get timer hint</para>
/// </summary>
  int GetUseTimers();


  // void SetUseTimers (int );
/// <summary>
/// <para>Set/Get timer hint</para>
/// </summary>
  void SetUseTimers(int arg0);


  // void UseTimersOn ();
/// <summary>
/// <para>Set/Get timer hint</para>
/// </summary>
  void UseTimersOn();


  // void UseTimersOff ();
/// <summary>
/// <para>Set/Get timer hint</para>
/// </summary>
  void UseTimersOff();


  // void SetHandleObservers (int );
/// <summary>
/// <para>Does ProcessEvents handle observers on this class or not</para>
/// </summary>
  void SetHandleObservers(int arg0);


  // int GetHandleObservers ();
/// <summary>
/// <para>Does ProcessEvents handle observers on this class or not</para>
/// </summary>
  int GetHandleObservers();


  // void HandleObserversOn ();
/// <summary>
/// <para>Does ProcessEvents handle observers on this class or not</para>
/// </summary>
  void HandleObserversOn();


  // void HandleObserversOff ();
/// <summary>
/// <para>Does ProcessEvents handle observers on this class or not</para>
/// </summary>
  void HandleObserversOff();


  // virtual void OnMouseMove ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnMouseMove();


  // virtual void OnLeftButtonDown ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnLeftButtonDown();


  // virtual void OnLeftButtonUp ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnLeftButtonUp();


  // virtual void OnMiddleButtonDown ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnMiddleButtonDown();


  // virtual void OnMiddleButtonUp ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnMiddleButtonUp();


  // virtual void OnRightButtonDown ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnRightButtonDown();


  // virtual void OnRightButtonUp ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnRightButtonUp();


  // virtual void OnMouseWheelForward ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnMouseWheelForward();


  // virtual void OnMouseWheelBackward ();
/// <summary>
/// <para>Generic event bindings must be overridden in subclasses</para>
/// </summary>
  void OnMouseWheelBackward();


  // virtual void OnChar ();
/// <summary>
/// <para>OnChar implements keyboard functions, but subclasses can override this  behavior</para>
/// </summary>
  void OnChar();


  // virtual void OnKeyDown ();
/// <summary>
/// <para>OnChar implements keyboard functions, but subclasses can override this  behavior</para>
/// </summary>
  void OnKeyDown();


  // virtual void OnKeyUp ();
/// <summary>
/// <para>OnChar implements keyboard functions, but subclasses can override this  behavior</para>
/// </summary>
  void OnKeyUp();


  // virtual void OnKeyPress ();
/// <summary>
/// <para>OnChar implements keyboard functions, but subclasses can override this  behavior</para>
/// </summary>
  void OnKeyPress();


  // virtual void OnKeyRelease ();
/// <summary>
/// <para>OnChar implements keyboard functions, but subclasses can override this  behavior</para>
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
/// <summary>
/// <para>OnTimer calls Rotate, Rotate etc which should be overridden by style subclasses.</para>
/// </summary>
  void OnTimer();


  // virtual void Rotate ();
/// <summary>
/// <para>These methods for the different interactions in different modes are overridden in subclasses to perform the correct motion. Since they might be called from OnTimer, they do not have mouse coord parameters (use interactor's GetEventPosition and GetLastEventPosition)</para>
/// </summary>
  void Rotate();


  // virtual void Spin ();
/// <summary>
/// <para>These methods for the different interactions in different modes are overridden in subclasses to perform the correct motion. Since they might be called from OnTimer, they do not have mouse coord parameters (use interactor's GetEventPosition and GetLastEventPosition)</para>
/// </summary>
  void Spin();


  // virtual void Pan ();
/// <summary>
/// <para>These methods for the different interactions in different modes are overridden in subclasses to perform the correct motion. Since they might be called from OnTimer, they do not have mouse coord parameters (use interactor's GetEventPosition and GetLastEventPosition)</para>
/// </summary>
  void Pan();


  // virtual void Dolly ();
/// <summary>
/// <para>These methods for the different interactions in different modes are overridden in subclasses to perform the correct motion. Since they might be called from OnTimer, they do not have mouse coord parameters (use interactor's GetEventPosition and GetLastEventPosition)</para>
/// </summary>
  void Dolly();


  // virtual void Zoom ();
/// <summary>
/// <para>These methods for the different interactions in different modes are overridden in subclasses to perform the correct motion. Since they might be called from OnTimer, they do not have mouse coord parameters (use interactor's GetEventPosition and GetLastEventPosition)</para>
/// </summary>
  void Zoom();


  // virtual void UniformScale ();
/// <summary>
/// <para>These methods for the different interactions in different modes are overridden in subclasses to perform the correct motion. Since they might be called from OnTimer, they do not have mouse coord parameters (use interactor's GetEventPosition and GetLastEventPosition)</para>
/// </summary>
  void UniformScale();


  // virtual void StartState (int newstate);
/// <summary>
/// <para>utility routines used by state changes</para>
/// </summary>
  void StartState(int newstate);


  // virtual void StopState ();
/// <summary>
/// <para>utility routines used by state changes</para>
/// </summary>
  void StopState();


  // virtual void StartAnimate ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StartAnimate();


  // virtual void StopAnimate ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StopAnimate();


  // virtual void StartRotate ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StartRotate();


  // virtual void EndRotate ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void EndRotate();


  // virtual void StartZoom ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StartZoom();


  // virtual void EndZoom ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void EndZoom();


  // virtual void StartPan ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StartPan();


  // virtual void EndPan ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void EndPan();


  // virtual void StartSpin ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StartSpin();


  // virtual void EndSpin ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void EndSpin();


  // virtual void StartDolly ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StartDolly();


  // virtual void EndDolly ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void EndDolly();


  // virtual void StartUniformScale ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StartUniformScale();


  // virtual void EndUniformScale ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void EndUniformScale();


  // virtual void StartTimer ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void StartTimer();


  // virtual void EndTimer ();
/// <summary>
/// <para>Interaction mode entry points used internally.  </para>
/// </summary>
  void EndTimer();


  // virtual void HighlightProp (vtkProp *prop);
/// <summary>
/// <para>When picking successfully selects an actor, this method highlights the picked prop appropriately. Currently this is done by placing a bounding  box around a picked vtkProp3D, and using the PickColor to highlight a vtkProp2D. </para>
/// </summary>
  void HighlightProp(vtkProp^ prop);


  // virtual void HighlightActor2D (vtkActor2D *actor2D);
/// <summary>
/// <para>When picking successfully selects an actor, this method highlights the picked prop appropriately. Currently this is done by placing a bounding  box around a picked vtkProp3D, and using the PickColor to highlight a vtkProp2D. </para>
/// </summary>
  void HighlightActor2D(vtkActor2D^ actor2D);


  // virtual void HighlightProp3D (vtkProp3D *prop3D);
/// <summary>
/// <para>When picking successfully selects an actor, this method highlights the picked prop appropriately. Currently this is done by placing a bounding  box around a picked vtkProp3D, and using the PickColor to highlight a vtkProp2D. </para>
/// </summary>
  void HighlightProp3D(vtkProp3D^ prop3D);


  // void SetPickColor (double , double , double );
/// <summary>
/// <para>Set/Get the pick color (used by default to color vtkActor2D's). The color is expressed as red/green/blue values between (0.0,1.0).</para>
/// </summary>
  void SetPickColor(double arg0, double arg1, double arg2);


  // void SetPickColor (double  a[3]);
/// <summary>
/// <para>Set/Get the pick color (used by default to color vtkActor2D's). The color is expressed as red/green/blue values between (0.0,1.0).</para>
/// </summary>
  void SetPickColor(array<double>^ a);


  // double  *GetPickColor ();
/// <summary>
/// <para>Set/Get the pick color (used by default to color vtkActor2D's). The color is expressed as red/green/blue values between (0.0,1.0).</para>
/// </summary>
  array<double>^ GetPickColor();


  // void SetMouseWheelMotionFactor (double );
/// <summary>
/// <para>Set/Get the mouse wheel motion factor. Default to 1.0. Set it to a  different value to emphasize or de-emphasize the action triggered by mouse wheel motion.</para>
/// </summary>
  void SetMouseWheelMotionFactor(double arg0);


  // double GetMouseWheelMotionFactor ();
/// <summary>
/// <para>Set/Get the mouse wheel motion factor. Default to 1.0. Set it to a  different value to emphasize or de-emphasize the action triggered by mouse wheel motion.</para>
/// </summary>
  double GetMouseWheelMotionFactor();


// Did not wrap:  vtkInteractorStyle ();


// Did not wrap:  ~vtkInteractorStyle ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  vtkInteractorStyle (const vtkInteractorStyle &);


// Did not wrap:  void vtkInteractorStyle 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyle(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyle(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyle();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyle();


};

} // end vtkRendering
