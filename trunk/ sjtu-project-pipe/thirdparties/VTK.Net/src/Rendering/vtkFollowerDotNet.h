#pragma once

// managed includes
#include "vtkActorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCamera;
ref class vtkRenderer;

public ref class vtkFollower : public vtkActor
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFollower *NewInstance ();
  vtkFollower^ NewInstance();


  // vtkFollower *SafeDownCast (vtkObject* o);
  static vtkFollower^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkFollower *New ();


  // virtual void SetCamera (vtkCamera *);
/// <summary>
/// <para>Set/Get the camera to follow. If this is not set, then the follower won't know who to follow.</para>
/// </summary>
  void SetCamera(vtkCamera^ arg0);


  // vtkCamera *GetCamera ();
/// <summary>
/// <para>Set/Get the camera to follow. If this is not set, then the follower won't know who to follow.</para>
/// </summary>
  vtkCamera^ GetCamera();


  // virtual int RenderOpaqueGeometry (vtkViewport *viewport);
/// <summary>
/// <para>This causes the actor to be rendered. It in turn will render the actor's property, texture map and then mapper. If a property hasn't been assigned, then the actor will create one automatically. </para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ viewport);


  // virtual int RenderTranslucentGeometry (vtkViewport *viewport);
/// <summary>
/// <para>This causes the actor to be rendered. It in turn will render the actor's property, texture map and then mapper. If a property hasn't been assigned, then the actor will create one automatically. </para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ viewport);


  // virtual void Render (vtkRenderer *ren);
/// <summary>
/// <para>This causes the actor to be rendered. It in turn will render the actor's property, texture map and then mapper. If a property hasn't been assigned, then the actor will create one automatically. </para>
/// </summary>
  void Render(vtkRenderer^ ren);


  // virtual void GetMatrix (vtkMatrix4x4 *m);
/// <summary>
/// <para>Copy the follower's composite 4x4 matrix into the matrix provided.</para>
/// </summary>
  void GetMatrix(vtkMatrix4x4^ m);


  // virtual void GetMatrix (double m[16]);
/// <summary>
/// <para>Copy the follower's composite 4x4 matrix into the matrix provided.</para>
/// </summary>
  void GetMatrix(array<double>^ m);


  // virtual vtkMatrix4x4 *GetMatrix ();return this vtkActor GetMatrix 
/// <summary>
/// <para>Shallow copy of a follower. Overloads the virtual vtkProp method.</para>
/// </summary>
  vtkMatrix4x4^ GetMatrix();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of a follower. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkFollower ();


// Did not wrap:  ~vtkFollower ();


// Did not wrap:  virtual void Render (vtkRenderer *, vtkMapper *);


// Did not wrap:  vtkFollower (const vtkFollower &);


// Did not wrap:  void vtkFollower 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFollower(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFollower(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFollower();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFollower();


};

} // end vtkRendering
