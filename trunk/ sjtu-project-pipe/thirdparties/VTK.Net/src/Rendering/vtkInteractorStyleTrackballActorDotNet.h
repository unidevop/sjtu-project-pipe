#pragma once

// managed includes
#include "vtkInteractorStyleDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleTrackballActor : public vtkInteractorStyle
{

public:
// Did not wrap:  static vtkInteractorStyleTrackballActor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleTrackballActor *NewInstance ();
  vtkInteractorStyleTrackballActor^ NewInstance();


  // vtkInteractorStyleTrackballActor *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleTrackballActor^ SafeDownCast(vtkObject^ o);


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


  // virtual void Rotate ();
  void Rotate();


  // virtual void Spin ();
  void Spin();


  // virtual void Pan ();
  void Pan();


  // virtual void Dolly ();
  void Dolly();


  // virtual void UniformScale ();
  void UniformScale();


// Did not wrap:  vtkInteractorStyleTrackballActor ();


// Did not wrap:  ~vtkInteractorStyleTrackballActor ();


// Did not wrap:  void FindPickedActor (int x, int y);


// Did not wrap:  void Prop3DTransform (vtkProp3D *prop3D, double *boxCenter, int NumRotation, double *rotate, double *scale);


// Did not wrap:  vtkInteractorStyleTrackballActor (const vtkInteractorStyleTrackballActor &);


// Did not wrap:  void vtkInteractorStyleTrackballActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleTrackballActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleTrackballActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleTrackballActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleTrackballActor();


};

} // end vtkRendering
