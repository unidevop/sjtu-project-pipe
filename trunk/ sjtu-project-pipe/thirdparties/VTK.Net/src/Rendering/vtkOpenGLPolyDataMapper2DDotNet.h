#pragma once

// managed includes
#include "vtkPolyDataMapper2DDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOpenGLPolyDataMapper2D : public vtkPolyDataMapper2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLPolyDataMapper2D *NewInstance ();
  vtkOpenGLPolyDataMapper2D^ NewInstance();


  // vtkOpenGLPolyDataMapper2D *SafeDownCast (vtkObject* o);
  static vtkOpenGLPolyDataMapper2D^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkOpenGLPolyDataMapper2D *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void RenderOverlay (vtkViewport *viewport, vtkActor2D *actor);
/// <summary>
/// <para>Actually draw the poly data.</para>
/// </summary>
  void RenderOverlay(vtkViewport^ viewport, vtkActor2D^ actor);


// Did not wrap:  vtkOpenGLPolyDataMapper2D ();


// Did not wrap:  ~vtkOpenGLPolyDataMapper2D ();


// Did not wrap:  vtkOpenGLPolyDataMapper2D (const vtkOpenGLPolyDataMapper2D &);


// Did not wrap:  void vtkOpenGLPolyDataMapper2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLPolyDataMapper2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLPolyDataMapper2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLPolyDataMapper2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLPolyDataMapper2D();


};

} // end vtkRendering
