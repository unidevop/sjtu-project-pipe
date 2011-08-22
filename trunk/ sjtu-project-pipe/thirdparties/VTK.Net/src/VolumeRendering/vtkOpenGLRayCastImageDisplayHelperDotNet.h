#pragma once

// managed includes
#include "vtkRayCastImageDisplayHelperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointRayCastImage;

public ref class vtkOpenGLRayCastImageDisplayHelper : public vtkRayCastImageDisplayHelper
{

public:
// Did not wrap:  static vtkOpenGLRayCastImageDisplayHelper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLRayCastImageDisplayHelper *NewInstance ();
  vtkOpenGLRayCastImageDisplayHelper^ NewInstance();


  // vtkOpenGLRayCastImageDisplayHelper *SafeDownCast (vtkObject* o);
  static vtkOpenGLRayCastImageDisplayHelper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void RenderTexture (vtkVolume *vol, vtkRenderer *ren, int imageMemorySize[2], int imageViewportSize[2], int imageInUseSize[2], int imageOrigin[2], float requestedDepth, unsigned char *image);
  void RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, array<int>^ imageMemorySize, array<int>^ imageViewportSize, array<int>^ imageInUseSize, array<int>^ imageOrigin, float requestedDepth, array<unsigned char>^ image);


  // void RenderTexture (vtkVolume *vol, vtkRenderer *ren, int imageMemorySize[2], int imageViewportSize[2], int imageInUseSize[2], int imageOrigin[2], float requestedDepth, unsigned short *image);
  void RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, array<int>^ imageMemorySize, array<int>^ imageViewportSize, array<int>^ imageInUseSize, array<int>^ imageOrigin, float requestedDepth, array<unsigned short>^ image);


  // void RenderTexture (vtkVolume *vol, vtkRenderer *ren, vtkFixedPointRayCastImage *image, float requestedDepth);
  void RenderTexture(vtkVolume^ vol, vtkRenderer^ ren, vtkFixedPointRayCastImage^ image, float requestedDepth);


// Did not wrap:  vtkOpenGLRayCastImageDisplayHelper ();


// Did not wrap:  ~vtkOpenGLRayCastImageDisplayHelper ();


// Did not wrap:  void RenderTextureInternal (vtkVolume *vol, vtkRenderer *ren, int imageMemorySize[2], int imageViewportSize[2], int imageInUseSize[2], int imageOrigin[2], float requestedDepth, int imageScalarType, void *image);


// Did not wrap:  vtkOpenGLRayCastImageDisplayHelper (const vtkOpenGLRayCastImageDisplayHelper &);


// Did not wrap:  void vtkOpenGLRayCastImageDisplayHelper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLRayCastImageDisplayHelper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLRayCastImageDisplayHelper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLRayCastImageDisplayHelper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLRayCastImageDisplayHelper();


};

} // end vtkVolumeRendering
