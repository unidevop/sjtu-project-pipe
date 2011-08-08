#pragma once

// managed includes
#include "vtkActorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkMapper;
ref class vtkRenderer;

public ref class vtkOpenGLActor : public vtkActor
{

public:
// Did not wrap:  static vtkOpenGLActor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLActor *NewInstance ();
  vtkOpenGLActor^ NewInstance();


  // vtkOpenGLActor *SafeDownCast (vtkObject* o);
  static vtkOpenGLActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Render (vtkRenderer *ren, vtkMapper *mapper);
/// <summary>
/// <para>Actual actor render method.</para>
/// </summary>
  void Render(vtkRenderer^ ren, vtkMapper^ mapper);


// Did not wrap:  vtkOpenGLActor ();


// Did not wrap:  ~vtkOpenGLActor ();


// Did not wrap:  vtkOpenGLActor (const vtkOpenGLActor &);


// Did not wrap:  void vtkOpenGLActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLActor();


};

} // end vtkRendering
