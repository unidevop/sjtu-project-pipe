#pragma once

// managed includes
#include "vtkVolumeTextureMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeTextureMapper2D : public vtkVolumeTextureMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeTextureMapper2D *NewInstance ();
  vtkVolumeTextureMapper2D^ NewInstance();


  // vtkVolumeTextureMapper2D *SafeDownCast (vtkObject* o);
  static vtkVolumeTextureMapper2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkVolumeTextureMapper2D *New ();


  // void SetTargetTextureSize (int , int );
/// <summary>
/// <para>Target size in pixels of each size of the texture for downloading. Default is 512x512 - so a 512x512 texture will be tiled with as many slices of the volume as possible, then all the quads will be rendered. This can be set to optimize for a particular architecture. This must be set with numbers that are a power of two.</para>
/// </summary>
  void SetTargetTextureSize(int arg0, int arg1);


  // void SetTargetTextureSize (int  a[2]);
/// <summary>
/// <para>Target size in pixels of each size of the texture for downloading. Default is 512x512 - so a 512x512 texture will be tiled with as many slices of the volume as possible, then all the quads will be rendered. This can be set to optimize for a particular architecture. This must be set with numbers that are a power of two.</para>
/// </summary>
  void SetTargetTextureSize(array<int>^ a);


  // int  *GetTargetTextureSize ();
/// <summary>
/// <para>Target size in pixels of each size of the texture for downloading. Default is 512x512 - so a 512x512 texture will be tiled with as many slices of the volume as possible, then all the quads will be rendered. This can be set to optimize for a particular architecture. This must be set with numbers that are a power of two.</para>
/// </summary>
  array<int>^ GetTargetTextureSize();


  // void SetMaximumNumberOfPlanes (int );
/// <summary>
/// <para>This is the maximum number of planes that will be created for texture mapping the volume. If the volume has more voxels than this along the viewing direction, then planes of the volume will be skipped to ensure that this maximum is not violated. A skip factor is used, and is incremented until the maximum condition is satisfied.</para>
/// </summary>
  void SetMaximumNumberOfPlanes(int arg0);


  // int GetMaximumNumberOfPlanes ();
/// <summary>
/// <para>This is the maximum number of planes that will be created for texture mapping the volume. If the volume has more voxels than this along the viewing direction, then planes of the volume will be skipped to ensure that this maximum is not violated. A skip factor is used, and is incremented until the maximum condition is satisfied.</para>
/// </summary>
  int GetMaximumNumberOfPlanes();


  // void SetMaximumStorageSize (int );
/// <summary>
/// <para>This is the maximum size of saved textures in bytes. If this size is large enough to hold the RGBA textures for all three directions (XxYxZx3x4 is the approximate value - it is actually a bit larger due to wasted space in the textures) then the textures will be saved.</para>
/// </summary>
  void SetMaximumStorageSize(int arg0);


  // int GetMaximumStorageSize ();
/// <summary>
/// <para>This is the maximum size of saved textures in bytes. If this size is large enough to hold the RGBA textures for all three directions (XxYxZx3x4 is the approximate value - it is actually a bit larger due to wasted space in the textures) then the textures will be saved.</para>
/// </summary>
  int GetMaximumStorageSize();


// Did not wrap:  vtkVolumeTextureMapper2D ();


// Did not wrap:  ~vtkVolumeTextureMapper2D ();


// Did not wrap:  void InitializeRender (vtkRenderer *ren, vtkVolume *vol);this InitializeRender ren vol 


// Did not wrap:  void InitializeRender (vtkRenderer *ren, vtkVolume *vol, int majorDirection);


// Did not wrap:  void GenerateTexturesAndRenderQuads (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void ComputeAxisTextureSize (int axis, int *size);


// Did not wrap:  void RenderSavedTexture ();


// Did not wrap:  vtkVolumeTextureMapper2D (const vtkVolumeTextureMapper2D &);


// Did not wrap:  void vtkVolumeTextureMapper2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeTextureMapper2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeTextureMapper2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeTextureMapper2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeTextureMapper2D();


};

} // end vtkVolumeRendering
