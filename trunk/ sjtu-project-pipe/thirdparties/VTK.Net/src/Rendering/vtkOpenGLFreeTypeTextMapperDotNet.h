#pragma once

// managed includes
#include "vtkTextMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOpenGLFreeTypeTextMapper : public vtkTextMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLFreeTypeTextMapper *NewInstance ();
  vtkOpenGLFreeTypeTextMapper^ NewInstance();


  // vtkOpenGLFreeTypeTextMapper *SafeDownCast (vtkObject* o);
  static vtkOpenGLFreeTypeTextMapper^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkOpenGLFreeTypeTextMapper *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void RenderOverlay (vtkViewport *viewport, vtkActor2D *actor);
/// <summary>
/// <para>Actally draw the text.</para>
/// </summary>
  void RenderOverlay(vtkViewport^ viewport, vtkActor2D^ actor);


  // virtual void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // virtual void GetSize (vtkViewport *viewport, int size[2]);
/// <summary>
/// <para>What is the size of the rectangle required to draw this mapper ?</para>
/// </summary>
  void GetSize(vtkViewport^ viewport, array<int>^ size);


// Did not wrap:  vtkOpenGLFreeTypeTextMapper ();


// Did not wrap:  ~vtkOpenGLFreeTypeTextMapper ();


// Did not wrap:  vtkOpenGLFreeTypeTextMapper (const vtkOpenGLFreeTypeTextMapper &);


// Did not wrap:  void vtkOpenGLFreeTypeTextMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLFreeTypeTextMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLFreeTypeTextMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLFreeTypeTextMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLFreeTypeTextMapper();


};

} // end vtkRendering
