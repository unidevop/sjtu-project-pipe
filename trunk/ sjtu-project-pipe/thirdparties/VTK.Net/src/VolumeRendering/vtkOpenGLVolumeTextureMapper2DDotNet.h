#pragma once

// managed includes
#include "vtkVolumeTextureMapper2DDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOpenGLVolumeTextureMapper2D : public vtkVolumeTextureMapper2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLVolumeTextureMapper2D *NewInstance ();
  vtkOpenGLVolumeTextureMapper2D^ NewInstance();


  // vtkOpenGLVolumeTextureMapper2D *SafeDownCast (vtkObject* o);
  static vtkOpenGLVolumeTextureMapper2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkOpenGLVolumeTextureMapper2D *New ();


// Did not wrap:  vtkOpenGLVolumeTextureMapper2D ();


// Did not wrap:  ~vtkOpenGLVolumeTextureMapper2D ();


// Did not wrap:  vtkOpenGLVolumeTextureMapper2D (const vtkOpenGLVolumeTextureMapper2D &);


// Did not wrap:  void vtkOpenGLVolumeTextureMapper2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLVolumeTextureMapper2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLVolumeTextureMapper2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLVolumeTextureMapper2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLVolumeTextureMapper2D();


};

} // end vtkVolumeRendering
