#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeMapper : public vtkAbstractVolumeMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeMapper *NewInstance ();
  vtkVolumeMapper^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkImageData *);
/// <summary>
/// <para>Set/Get the input data</para>
/// </summary>
  void SetInput(vtkImageData^ arg0);


  // virtual void SetInput (vtkDataSet *);
/// <summary>
/// <para>Set/Get the input data</para>
/// </summary>
  void SetInput(vtkDataSet^ arg0);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Set/Get the input data</para>
/// </summary>
  vtkImageData^ GetInput();


  // void SetBlendMode (int );
/// <summary>
/// <para>Set/Get the blend mode. Currently this is only supported by the vtkFixedPointVolumeRayCastMapper - other mappers have different ways to set this (supplying a function to a vtkVolumeRayCastMapper) or don't have any options (vtkVolumeTextureMapper2D supports only compositing)</para>
/// </summary>
  void SetBlendMode(int arg0);


  // void SetBlendModeToComposite ();this SetBlendMode vtkVolumeMapper COMPOSITE_BLEND 
/// <summary>
/// <para>Set/Get the blend mode. Currently this is only supported by the vtkFixedPointVolumeRayCastMapper - other mappers have different ways to set this (supplying a function to a vtkVolumeRayCastMapper) or don't have any options (vtkVolumeTextureMapper2D supports only compositing)</para>
/// </summary>
  void SetBlendModeToComposite();


  // void SetBlendModeToMaximumIntensity ();this SetBlendMode vtkVolumeMapper MAXIMUM_INTENSITY_BLEND 
/// <summary>
/// <para>Set/Get the blend mode. Currently this is only supported by the vtkFixedPointVolumeRayCastMapper - other mappers have different ways to set this (supplying a function to a vtkVolumeRayCastMapper) or don't have any options (vtkVolumeTextureMapper2D supports only compositing)</para>
/// </summary>
  void SetBlendModeToMaximumIntensity();


  // int GetBlendMode ();
/// <summary>
/// <para>Set/Get the blend mode. Currently this is only supported by the vtkFixedPointVolumeRayCastMapper - other mappers have different ways to set this (supplying a function to a vtkVolumeRayCastMapper) or don't have any options (vtkVolumeTextureMapper2D supports only compositing)</para>
/// </summary>
  int GetBlendMode();


  // void SetCropping (int );
/// <summary>
/// <para>Turn On/Off orthogonal cropping. (Clipping planes are perpendicular to the coordinate axes.)</para>
/// </summary>
  void SetCropping(int arg0);


  // int GetCroppingMinValue ();
/// <summary>
/// <para>Turn On/Off orthogonal cropping. (Clipping planes are perpendicular to the coordinate axes.)</para>
/// </summary>
  int GetCroppingMinValue();


  // int GetCroppingMaxValue ();
/// <summary>
/// <para>Turn On/Off orthogonal cropping. (Clipping planes are perpendicular to the coordinate axes.)</para>
/// </summary>
  int GetCroppingMaxValue();


  // int GetCropping ();
/// <summary>
/// <para>Turn On/Off orthogonal cropping. (Clipping planes are perpendicular to the coordinate axes.)</para>
/// </summary>
  int GetCropping();


  // void CroppingOn ();
/// <summary>
/// <para>Turn On/Off orthogonal cropping. (Clipping planes are perpendicular to the coordinate axes.)</para>
/// </summary>
  void CroppingOn();


  // void CroppingOff ();
/// <summary>
/// <para>Turn On/Off orthogonal cropping. (Clipping planes are perpendicular to the coordinate axes.)</para>
/// </summary>
  void CroppingOff();


  // void SetCroppingRegionPlanes (double , double , double , double , double , double );
/// <summary>
/// <para>Set/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax, zmin, zmax ) These planes are defined in volume coordinates - spacing and origin are considered.</para>
/// </summary>
  void SetCroppingRegionPlanes(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetCroppingRegionPlanes (double  a[6]);
/// <summary>
/// <para>Set/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax, zmin, zmax ) These planes are defined in volume coordinates - spacing and origin are considered.</para>
/// </summary>
  void SetCroppingRegionPlanes(array<double>^ a);


  // double  *GetCroppingRegionPlanes ();
/// <summary>
/// <para>Set/Get the Cropping Region Planes ( xmin, xmax, ymin, ymax, zmin, zmax ) These planes are defined in volume coordinates - spacing and origin are considered.</para>
/// </summary>
  array<double>^ GetCroppingRegionPlanes();


  // double  *GetVoxelCroppingRegionPlanes ();
/// <summary>
/// <para>Get the cropping region planes in voxels. Only valid during the  rendering process</para>
/// </summary>
  array<double>^ GetVoxelCroppingRegionPlanes();


  // void SetCroppingRegionFlags (int );
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  void SetCroppingRegionFlags(int arg0);


  // int GetCroppingRegionFlagsMinValue ();
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  int GetCroppingRegionFlagsMinValue();


  // int GetCroppingRegionFlagsMaxValue ();
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  int GetCroppingRegionFlagsMaxValue();


  // int GetCroppingRegionFlags ();
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  int GetCroppingRegionFlags();


  // void SetCroppingRegionFlagsToSubVolume ();this SetCroppingRegionFlags VTK_CROP_SUBVOLUME 
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  void SetCroppingRegionFlagsToSubVolume();


  // void SetCroppingRegionFlagsToFence ();this SetCroppingRegionFlags VTK_CROP_FENCE 
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  void SetCroppingRegionFlagsToFence();


  // void SetCroppingRegionFlagsToInvertedFence ();this SetCroppingRegionFlags VTK_CROP_INVERTED_FENCE 
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  void SetCroppingRegionFlagsToInvertedFence();


  // void SetCroppingRegionFlagsToCross ();this SetCroppingRegionFlags VTK_CROP_CROSS 
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  void SetCroppingRegionFlagsToCross();


  // void SetCroppingRegionFlagsToInvertedCross ();this SetCroppingRegionFlags VTK_CROP_INVERTED_CROSS 
/// <summary>
/// <para>Set the flags for the cropping regions. The clipping planes divide the volume into 27 regions - there is one bit for each region. The regions  start from the one containing voxel (0,0,0), moving along the x axis  fastest, the y axis next, and the z axis slowest. These are represented  from the lowest bit to bit number 27 in the integer containing the  flags. There are several convenience functions to set some common  configurations - subvolume (the default), fence (between any of the  clip plane pairs), inverted fence, cross (between any two of the  clip plane pairs) and inverted cross.</para>
/// </summary>
  void SetCroppingRegionFlagsToInvertedCross();


// Did not wrap:  vtkVolumeMapper ();


// Did not wrap:  ~vtkVolumeMapper ();


// Did not wrap:  void ConvertCroppingRegionPlanesToVoxels ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkVolumeMapper (const vtkVolumeMapper &);


// Did not wrap:  void vtkVolumeMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeMapper();


};

} // end vtkVolumeRendering
