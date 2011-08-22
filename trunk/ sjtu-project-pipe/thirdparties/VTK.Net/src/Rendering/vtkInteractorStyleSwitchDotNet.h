#pragma once

// managed includes
#include "vtkInteractorStyleDotNet.h"
#include "vtkInteractorStyleDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindowInteractor;
ref class vtkRenderer;

public ref class vtkInteractorStyleSwitch : public vtkInteractorStyle
{

public:
// Did not wrap:  static vtkInteractorStyleSwitch *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleSwitch *NewInstance ();
  vtkInteractorStyleSwitch^ NewInstance();


  // vtkInteractorStyleSwitch *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleSwitch^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInteractor (vtkRenderWindowInteractor *iren);
/// <summary>
/// <para>The sub styles need the interactor too.</para>
/// </summary>
  void SetInteractor(vtkRenderWindowInteractor^ iren);


  // void SetAutoAdjustCameraClippingRange (int value);
/// <summary>
/// <para>We must override this method in order to pass the setting down to the underlying styles</para>
/// </summary>
  void SetAutoAdjustCameraClippingRange(int value);


  // vtkInteractorStyle *GetCurrentStyle ();
/// <summary>
/// <para>Set/Get current style</para>
/// </summary>
  vtkInteractorStyle^ GetCurrentStyle();


  // void SetCurrentStyleToJoystickActor ();
/// <summary>
/// <para>Set/Get current style</para>
/// </summary>
  void SetCurrentStyleToJoystickActor();


  // void SetCurrentStyleToJoystickCamera ();
/// <summary>
/// <para>Set/Get current style</para>
/// </summary>
  void SetCurrentStyleToJoystickCamera();


  // void SetCurrentStyleToTrackballActor ();
/// <summary>
/// <para>Set/Get current style</para>
/// </summary>
  void SetCurrentStyleToTrackballActor();


  // void SetCurrentStyleToTrackballCamera ();
/// <summary>
/// <para>Set/Get current style</para>
/// </summary>
  void SetCurrentStyleToTrackballCamera();


  // virtual void OnChar ();
/// <summary>
/// <para>Only care about the char event, which is used to switch between different styles.</para>
/// </summary>
  void OnChar();


  // virtual void SetDefaultRenderer (vtkRenderer *);
/// <summary>
/// <para>Overridden from vtkInteractorObserver because the interactor styles used by this class must also be updated.</para>
/// </summary>
  void SetDefaultRenderer(vtkRenderer^ arg0);


  // virtual void SetCurrentRenderer (vtkRenderer *);
/// <summary>
/// <para>Overridden from vtkInteractorObserver because the interactor styles used by this class must also be updated.</para>
/// </summary>
  void SetCurrentRenderer(vtkRenderer^ arg0);


// Did not wrap:  vtkInteractorStyleSwitch ();


// Did not wrap:  ~vtkInteractorStyleSwitch ();


// Did not wrap:  void SetCurrentStyle ();


// Did not wrap:  vtkInteractorStyleSwitch (const vtkInteractorStyleSwitch &);


// Did not wrap:  void vtkInteractorStyleSwitch 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleSwitch(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleSwitch(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleSwitch();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleSwitch();


};

} // end vtkRendering
