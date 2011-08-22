#pragma once

// managed includes
#include "vtkInteractorStyleDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleFlight : public vtkInteractorStyle
{

public:
// Did not wrap:  static vtkInteractorStyleFlight *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleFlight *NewInstance ();
  vtkInteractorStyleFlight^ NewInstance();


  // vtkInteractorStyleFlight *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleFlight^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void JumpTo (double campos[3], double focpos[3]);
/// <summary>
/// <para>Move the Eye/Camera to a specific location (no intermediate steps are taken</para>
/// </summary>
  void JumpTo(array<double>^ campos, array<double>^ focpos);


  // void SetMotionStepSize (double );
/// <summary>
/// <para>Set the basic unit step size : by default 1/250 of bounding diagonal</para>
/// </summary>
  void SetMotionStepSize(double arg0);


  // double GetMotionStepSize ();
/// <summary>
/// <para>Set the basic unit step size : by default 1/250 of bounding diagonal</para>
/// </summary>
  double GetMotionStepSize();


  // void SetMotionAccelerationFactor (double );
/// <summary>
/// <para>Set acceleration factor when shift key is applied : default 10</para>
/// </summary>
  void SetMotionAccelerationFactor(double arg0);


  // double GetMotionAccelerationFactor ();
/// <summary>
/// <para>Set acceleration factor when shift key is applied : default 10</para>
/// </summary>
  double GetMotionAccelerationFactor();


  // void SetAngleStepSize (double );
/// <summary>
/// <para>Set the basic angular unit for turning : default 1 degree</para>
/// </summary>
  void SetAngleStepSize(double arg0);


  // double GetAngleStepSize ();
/// <summary>
/// <para>Set the basic angular unit for turning : default 1 degree</para>
/// </summary>
  double GetAngleStepSize();


  // void SetAngleAccelerationFactor (double );
/// <summary>
/// <para>Set angular acceleration when shift key is applied : default 5</para>
/// </summary>
  void SetAngleAccelerationFactor(double arg0);


  // double GetAngleAccelerationFactor ();
/// <summary>
/// <para>Set angular acceleration when shift key is applied : default 5</para>
/// </summary>
  double GetAngleAccelerationFactor();


  // void SetDisableMotion (int );
/// <summary>
/// <para>Disable motion (temporarily - for viewing etc)</para>
/// </summary>
  void SetDisableMotion(int arg0);


  // int GetDisableMotion ();
/// <summary>
/// <para>Disable motion (temporarily - for viewing etc)</para>
/// </summary>
  int GetDisableMotion();


  // void DisableMotionOn ();
/// <summary>
/// <para>Disable motion (temporarily - for viewing etc)</para>
/// </summary>
  void DisableMotionOn();


  // void DisableMotionOff ();
/// <summary>
/// <para>Disable motion (temporarily - for viewing etc)</para>
/// </summary>
  void DisableMotionOff();


  // void SetRestoreUpVector (int );
/// <summary>
/// <para>When flying, apply a restorative force to the &quot;Up&quot; vector. This is activated when the current 'up' is close to the actual 'up' (as defined in DefaultUpVector). This prevents excessive twisting forces when viewing from arbitrary angles, but keep the horizon level when the user is flying over terrain.</para>
/// </summary>
  void SetRestoreUpVector(int arg0);


  // int GetRestoreUpVector ();
/// <summary>
/// <para>When flying, apply a restorative force to the &quot;Up&quot; vector. This is activated when the current 'up' is close to the actual 'up' (as defined in DefaultUpVector). This prevents excessive twisting forces when viewing from arbitrary angles, but keep the horizon level when the user is flying over terrain.</para>
/// </summary>
  int GetRestoreUpVector();


  // void RestoreUpVectorOn ();
/// <summary>
/// <para>When flying, apply a restorative force to the &quot;Up&quot; vector. This is activated when the current 'up' is close to the actual 'up' (as defined in DefaultUpVector). This prevents excessive twisting forces when viewing from arbitrary angles, but keep the horizon level when the user is flying over terrain.</para>
/// </summary>
  void RestoreUpVectorOn();


  // void RestoreUpVectorOff ();
/// <summary>
/// <para>When flying, apply a restorative force to the &quot;Up&quot; vector. This is activated when the current 'up' is close to the actual 'up' (as defined in DefaultUpVector). This prevents excessive twisting forces when viewing from arbitrary angles, but keep the horizon level when the user is flying over terrain.</para>
/// </summary>
  void RestoreUpVectorOff();


  // double  *GetDefaultUpVector ();
  array<double>^ GetDefaultUpVector();


  // void SetDefaultUpVector (double  [3]);
  void SetDefaultUpVector(array<double>^ arg0);


  // virtual void OnMouseMove ();
/// <summary>
/// <para>Concrete implementation of Mouse event bindings for flight</para>
/// </summary>
  void OnMouseMove();


  // virtual void OnLeftButtonDown ();
/// <summary>
/// <para>Concrete implementation of Mouse event bindings for flight</para>
/// </summary>
  void OnLeftButtonDown();


  // virtual void OnLeftButtonUp ();
/// <summary>
/// <para>Concrete implementation of Mouse event bindings for flight</para>
/// </summary>
  void OnLeftButtonUp();


  // virtual void OnMiddleButtonDown ();
/// <summary>
/// <para>Concrete implementation of Mouse event bindings for flight</para>
/// </summary>
  void OnMiddleButtonDown();


  // virtual void OnMiddleButtonUp ();
/// <summary>
/// <para>Concrete implementation of Mouse event bindings for flight</para>
/// </summary>
  void OnMiddleButtonUp();


  // virtual void OnRightButtonDown ();
/// <summary>
/// <para>Concrete implementation of Mouse event bindings for flight</para>
/// </summary>
  void OnRightButtonDown();


  // virtual void OnRightButtonUp ();
/// <summary>
/// <para>Concrete implementation of Mouse event bindings for flight</para>
/// </summary>
  void OnRightButtonUp();


  // virtual void OnChar ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void OnChar();


  // virtual void OnKeyDown ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void OnKeyDown();


  // virtual void OnKeyUp ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void OnKeyUp();


  // virtual void OnTimer ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void OnTimer();


  // virtual void ForwardFly ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void ForwardFly();


  // virtual void ReverseFly ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void ReverseFly();


  // virtual void StartForwardFly ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void StartForwardFly();


  // virtual void EndForwardFly ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void EndForwardFly();


  // virtual void StartReverseFly ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void StartReverseFly();


  // virtual void EndReverseFly ();
/// <summary>
/// <para>Concrete implementation of Keyboard event bindings for flight</para>
/// </summary>
  void EndReverseFly();


// Did not wrap:  vtkInteractorStyleFlight ();


// Did not wrap:  ~vtkInteractorStyleFlight ();


// Did not wrap:  void UpdateSteering (vtkCamera *cam);


// Did not wrap:  void UpdateMouseSteering (vtkCamera *cam);


// Did not wrap:  void FlyByMouse (vtkCamera *cam);


// Did not wrap:  void FlyByKey (vtkCamera *cam);


// Did not wrap:  void GetLRVector (double vector[3], vtkCamera *cam);


// Did not wrap:  void MotionAlongVector (double vector[3], double amount, vtkCamera *cam);


// Did not wrap:  void SetupMotionVars (vtkCamera *cam);


// Did not wrap:  void FinishCamera (vtkCamera *cam);


// Did not wrap:  vtkInteractorStyleFlight (const vtkInteractorStyleFlight &);


// Did not wrap:  void vtkInteractorStyleFlight 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleFlight(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleFlight(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleFlight();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleFlight();


};

} // end vtkRendering
