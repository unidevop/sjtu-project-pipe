#pragma once

// managed includes
#include "vtkImageActorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkOpenGLImageActor : public vtkImageActor
{

public:
// Did not wrap:  static vtkOpenGLImageActor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLImageActor *NewInstance ();
  vtkOpenGLImageActor^ NewInstance();


  // vtkOpenGLImageActor *SafeDownCast (vtkObject* o);
  static vtkOpenGLImageActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Load (vtkRenderer *ren);
/// <summary>
/// <para>Implement base class method.</para>
/// </summary>
  void Load(vtkRenderer^ ren);


  // void Render (vtkRenderer *ren);
/// <summary>
/// <para>Implement base class method.</para>
/// </summary>
  void Render(vtkRenderer^ ren);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this texture. The parameter window could be used to determine which graphic resources to release. Using the same texture object in multiple render windows is NOT currently supported. </para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


// Did not wrap:  vtkOpenGLImageActor ();


// Did not wrap:  ~vtkOpenGLImageActor ();


// Did not wrap:  unsigned char *MakeDataSuitable (int &xsize, int &ysize, int &release, int &reuseTexture);


// Did not wrap:  void InternalRender (vtkRenderer *ren);


// Did not wrap:  int TextureSizeOK (int size[2]);


// Did not wrap:  vtkOpenGLImageActor (const vtkOpenGLImageActor &);


// Did not wrap:  void vtkOpenGLImageActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLImageActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLImageActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLImageActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLImageActor();


};

} // end vtkRendering
