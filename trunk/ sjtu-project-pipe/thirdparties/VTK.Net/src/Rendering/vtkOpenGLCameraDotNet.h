#pragma once

// managed includes
#include "vtkCameraDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkOpenGLCamera : public vtkCamera
{

public:
// Did not wrap:  static vtkOpenGLCamera *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLCamera *NewInstance ();
  vtkOpenGLCamera^ NewInstance();


  // vtkOpenGLCamera *SafeDownCast (vtkObject* o);
  static vtkOpenGLCamera^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Render (vtkRenderer *ren);
/// <summary>
/// <para>Implement base class method.</para>
/// </summary>
  void Render(vtkRenderer^ ren);


  // void UpdateViewport (vtkRenderer *ren);
  void UpdateViewport(vtkRenderer^ ren);


// Did not wrap:  vtkOpenGLCamera ();


// Did not wrap:  ~vtkOpenGLCamera ();


// Did not wrap:  vtkOpenGLCamera (const vtkOpenGLCamera &);


// Did not wrap:  void vtkOpenGLCamera 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLCamera(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLCamera(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLCamera();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLCamera();


};

} // end vtkRendering
