#pragma once

// managed includes
#include "vtkImageMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOpenGLImageMapper : public vtkImageMapper
{

public:
// Did not wrap:  static vtkOpenGLImageMapper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLImageMapper *NewInstance ();
  vtkOpenGLImageMapper^ NewInstance();


  // vtkOpenGLImageMapper *SafeDownCast (vtkObject* o);
  static vtkOpenGLImageMapper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void RenderOverlay (vtkViewport *viewport, vtkActor2D *actor);this RenderStart viewport actor 
/// <summary>
/// <para>Called by the Render function in vtkImageMapper.  Actually draws the image to the screen.</para>
/// </summary>
  void RenderOverlay(vtkViewport^ viewport, vtkActor2D^ actor);


  // void RenderData (vtkViewport *viewport, vtkImageData *data, vtkActor2D *actor);
/// <summary>
/// <para>Called by the Render function in vtkImageMapper.  Actually draws the image to the screen.</para>
/// </summary>
  void RenderData(vtkViewport^ viewport, vtkImageData^ data, vtkActor2D^ actor);


// Did not wrap:  vtkOpenGLImageMapper ();


// Did not wrap:  ~vtkOpenGLImageMapper ();


// Did not wrap:  vtkOpenGLImageMapper (const vtkOpenGLImageMapper &);


// Did not wrap:  void vtkOpenGLImageMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLImageMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLImageMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLImageMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLImageMapper();


};

} // end vtkRendering
