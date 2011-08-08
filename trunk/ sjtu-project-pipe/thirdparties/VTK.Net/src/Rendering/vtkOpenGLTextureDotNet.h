#pragma once

// managed includes
#include "vtkTextureDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderer;

public ref class vtkOpenGLTexture : public vtkTexture
{

public:
// Did not wrap:  static vtkOpenGLTexture *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLTexture *NewInstance ();
  vtkOpenGLTexture^ NewInstance();


  // vtkOpenGLTexture *SafeDownCast (vtkObject* o);
  static vtkOpenGLTexture^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Load (vtkRenderer *ren);
/// <summary>
/// <para>Implement base class method.</para>
/// </summary>
  void Load(vtkRenderer^ ren);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this texture. The parameter window could be used to determine which graphic resources to release. Using the same texture object in multiple render windows is NOT currently supported. </para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


// Did not wrap:  vtkOpenGLTexture ();


// Did not wrap:  ~vtkOpenGLTexture ();


// Did not wrap:  unsigned char *ResampleToPowerOfTwo (int &xsize, int &ysize, unsigned char *dptr, int bpp);


// Did not wrap:  vtkOpenGLTexture (const vtkOpenGLTexture &);


// Did not wrap:  void vtkOpenGLTexture 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLTexture(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLTexture(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLTexture();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLTexture();


};

} // end vtkRendering
