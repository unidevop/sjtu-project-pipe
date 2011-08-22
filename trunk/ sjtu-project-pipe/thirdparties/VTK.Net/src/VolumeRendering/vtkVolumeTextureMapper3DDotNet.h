#pragma once

// managed includes
#include "vtkVolumeMapperDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeTextureMapper3D : public vtkVolumeMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeTextureMapper3D *NewInstance ();
  vtkVolumeTextureMapper3D^ NewInstance();


  // vtkVolumeTextureMapper3D *SafeDownCast (vtkObject* o);
  static vtkVolumeTextureMapper3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkVolumeTextureMapper3D *New ();


  // void SetSampleDistance (float );
/// <summary>
/// <para>The distance at which to space sampling planes. This may not be honored for interactive renders. An interactive render is defined as one that has less than 1 second of allocated render time.</para>
/// </summary>
  void SetSampleDistance(float arg0);


  // float GetSampleDistance ();
/// <summary>
/// <para>The distance at which to space sampling planes. This may not be honored for interactive renders. An interactive render is defined as one that has less than 1 second of allocated render time.</para>
/// </summary>
  float GetSampleDistance();


  // int  *GetVolumeDimensions ();
/// <summary>
/// <para>These are the dimensions of the 3D texture</para>
/// </summary>
  array<int>^ GetVolumeDimensions();


  // float  *GetVolumeSpacing ();
/// <summary>
/// <para>This is the spacing of the 3D texture</para>
/// </summary>
  array<float>^ GetVolumeSpacing();


  // virtual int IsRenderSupported (vtkVolumeProperty *);return 
/// <summary>
/// <para>Based on hardware and properties, we may or may not be able to render using 3D texture mapping. This indicates if 3D texture mapping is supported by the hardware, and if the other extensions necessary to support the specific properties are available.</para>
/// </summary>
  int IsRenderSupported(vtkVolumeProperty^ arg0);


  // int GetNumberOfPolygons ();
/// <summary>
/// <para>Allow access to the number of polygons used for the rendering.</para>
/// </summary>
  int GetNumberOfPolygons();


  // float GetActualSampleDistance ();
/// <summary>
/// <para>Allow access to the actual sample distance used to render the image.</para>
/// </summary>
  float GetActualSampleDistance();


  // void SetPreferredRenderMethod (int );
/// <summary>
/// <para>Set the preferred render method. If it is supported, this one will be used. Don't allow ATI_METHOD - it is not actually supported.</para>
/// </summary>
  void SetPreferredRenderMethod(int arg0);


  // int GetPreferredRenderMethodMinValue ();
/// <summary>
/// <para>Set the preferred render method. If it is supported, this one will be used. Don't allow ATI_METHOD - it is not actually supported.</para>
/// </summary>
  int GetPreferredRenderMethodMinValue();


  // int GetPreferredRenderMethodMaxValue ();
/// <summary>
/// <para>Set the preferred render method. If it is supported, this one will be used. Don't allow ATI_METHOD - it is not actually supported.</para>
/// </summary>
  int GetPreferredRenderMethodMaxValue();


  // void SetPreferredMethodToFragmentProgram ();this SetPreferredRenderMethod vtkVolumeTextureMapper3D FRAGMENT_PROGRAM_METHOD 
/// <summary>
/// <para>Set the preferred render method. If it is supported, this one will be used. Don't allow ATI_METHOD - it is not actually supported.</para>
/// </summary>
  void SetPreferredMethodToFragmentProgram();


  // void SetPreferredMethodToNVidia ();this SetPreferredRenderMethod vtkVolumeTextureMapper3D NVIDIA_METHOD 
  void SetPreferredMethodToNVidia();


// Did not wrap:  vtkVolumeTextureMapper3D ();


// Did not wrap:  ~vtkVolumeTextureMapper3D ();


// Did not wrap:  void ComputePolygons (vtkRenderer *ren, vtkVolume *vol, double bounds[6]);


// Did not wrap:  int UpdateVolumes (vtkVolume *);


// Did not wrap:  int UpdateColorLookup (vtkVolume *);


// Did not wrap:  vtkVolumeTextureMapper3D (const vtkVolumeTextureMapper3D &);


// Did not wrap:  void vtkVolumeTextureMapper3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeTextureMapper3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeTextureMapper3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeTextureMapper3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeTextureMapper3D();


};

} // end vtkVolumeRendering
