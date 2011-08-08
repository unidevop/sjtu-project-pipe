#pragma once

// managed includes
#include "vtkVolumeTextureMapper3DDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOpenGLVolumeTextureMapper3D : public vtkVolumeTextureMapper3D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLVolumeTextureMapper3D *NewInstance ();
  vtkOpenGLVolumeTextureMapper3D^ NewInstance();


  // vtkOpenGLVolumeTextureMapper3D *SafeDownCast (vtkObject* o);
  static vtkOpenGLVolumeTextureMapper3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkOpenGLVolumeTextureMapper3D *New ();


  // int IsRenderSupported (vtkVolumeProperty *);
/// <summary>
/// <para>Is hardware rendering supported? No if the input data is more than one independent component, or if the hardware does not support the required extensions</para>
/// </summary>
  int IsRenderSupported(vtkVolumeProperty^ arg0);


  // int GetInitialized ();
  int GetInitialized();


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this texture. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


// Did not wrap:  vtkOpenGLVolumeTextureMapper3D ();


// Did not wrap:  ~vtkOpenGLVolumeTextureMapper3D ();


// Did not wrap:  void Initialize ();


// Did not wrap:  virtual void RenderNV (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  virtual void RenderFP (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderOneIndependentNoShadeFP (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderOneIndependentShadeFP (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderTwoDependentNoShadeFP (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderTwoDependentShadeFP (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderFourDependentNoShadeFP (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderFourDependentShadeFP (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderOneIndependentNoShadeNV (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderOneIndependentShadeNV (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderTwoDependentNoShadeNV (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderTwoDependentShadeNV (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderFourDependentNoShadeNV (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void RenderFourDependentShadeNV (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void SetupOneIndependentTextures (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void SetupTwoDependentTextures (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void SetupFourDependentTextures (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  void SetupRegisterCombinersNoShadeNV (vtkRenderer *ren, vtkVolume *vol, int components);


// Did not wrap:  void SetupRegisterCombinersShadeNV (vtkRenderer *ren, vtkVolume *vol, int components);


// Did not wrap:  void DeleteTextureIndex (GLuint *index);


// Did not wrap:  void CreateTextureIndex (GLuint *index);


// Did not wrap:  void RenderPolygons (vtkRenderer *ren, vtkVolume *vol, int stages[4]);


// Did not wrap:  void SetupProgramLocalsForShadingFP (vtkRenderer *ren, vtkVolume *vol);


// Did not wrap:  int IsTextureSizeSupported (int size[3]);


// Did not wrap:  void Setup3DTextureParameters (vtkVolumeProperty *property);


// Did not wrap:  vtkOpenGLVolumeTextureMapper3D (const vtkOpenGLVolumeTextureMapper3D &);


// Did not wrap:  void vtkOpenGLVolumeTextureMapper3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLVolumeTextureMapper3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLVolumeTextureMapper3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLVolumeTextureMapper3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLVolumeTextureMapper3D();


};

} // end vtkVolumeRendering
