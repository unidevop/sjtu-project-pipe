#pragma once

// managed includes
#include "vtkImageResliceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageFlip : public vtkImageReslice
{

public:
// Did not wrap:  static vtkImageFlip *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageFlip *NewInstance ();
  vtkImageFlip^ NewInstance();


  // vtkImageFlip *SafeDownCast (vtkObject* o);
  static vtkImageFlip^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFilteredAxis (int );
/// <summary>
/// <para>Specify which axis will be flipped.  This must be an integer between 0 (for x) and 2 (for z).</para>
/// </summary>
  void SetFilteredAxis(int arg0);


  // int GetFilteredAxis ();
/// <summary>
/// <para>Specify which axis will be flipped.  This must be an integer between 0 (for x) and 2 (for z).</para>
/// </summary>
  int GetFilteredAxis();


  // void SetFlipAboutOrigin (int );
/// <summary>
/// <para>By default the image will be flipped about its center, and the Origin, Spacing and Extent of the output will be identical to the input.  However, if you have a coordinate system associated with the image and you want to use the flip to convert +ve values along one axis to -ve values (and vice versa) then you actually want to flip the image about coordinate (0,0,0) instead of about the center of the image.  This method will adjust the Origin of the output such that the flip occurs about (0,0,0).  Note that this method only changes the Origin (and hence the coordinate system) the output data: the actual pixel values are the same whether or not this method is used.  Also note that the Origin in this method name refers to (0,0,0) in the coordinate system associated with the image, it does not refer to the Origin ivar that is associated with a  vtkImageData.</para>
/// </summary>
  void SetFlipAboutOrigin(int arg0);


  // int GetFlipAboutOrigin ();
/// <summary>
/// <para>By default the image will be flipped about its center, and the Origin, Spacing and Extent of the output will be identical to the input.  However, if you have a coordinate system associated with the image and you want to use the flip to convert +ve values along one axis to -ve values (and vice versa) then you actually want to flip the image about coordinate (0,0,0) instead of about the center of the image.  This method will adjust the Origin of the output such that the flip occurs about (0,0,0).  Note that this method only changes the Origin (and hence the coordinate system) the output data: the actual pixel values are the same whether or not this method is used.  Also note that the Origin in this method name refers to (0,0,0) in the coordinate system associated with the image, it does not refer to the Origin ivar that is associated with a  vtkImageData.</para>
/// </summary>
  int GetFlipAboutOrigin();


  // void FlipAboutOriginOn ();
/// <summary>
/// <para>By default the image will be flipped about its center, and the Origin, Spacing and Extent of the output will be identical to the input.  However, if you have a coordinate system associated with the image and you want to use the flip to convert +ve values along one axis to -ve values (and vice versa) then you actually want to flip the image about coordinate (0,0,0) instead of about the center of the image.  This method will adjust the Origin of the output such that the flip occurs about (0,0,0).  Note that this method only changes the Origin (and hence the coordinate system) the output data: the actual pixel values are the same whether or not this method is used.  Also note that the Origin in this method name refers to (0,0,0) in the coordinate system associated with the image, it does not refer to the Origin ivar that is associated with a  vtkImageData.</para>
/// </summary>
  void FlipAboutOriginOn();


  // void FlipAboutOriginOff ();
/// <summary>
/// <para>By default the image will be flipped about its center, and the Origin, Spacing and Extent of the output will be identical to the input.  However, if you have a coordinate system associated with the image and you want to use the flip to convert +ve values along one axis to -ve values (and vice versa) then you actually want to flip the image about coordinate (0,0,0) instead of about the center of the image.  This method will adjust the Origin of the output such that the flip occurs about (0,0,0).  Note that this method only changes the Origin (and hence the coordinate system) the output data: the actual pixel values are the same whether or not this method is used.  Also note that the Origin in this method name refers to (0,0,0) in the coordinate system associated with the image, it does not refer to the Origin ivar that is associated with a  vtkImageData.</para>
/// </summary>
  void FlipAboutOriginOff();


  // void SetFilteredAxes (int axis);this SetFilteredAxis axis 
/// <summary>
/// <para>For compatibility with old scripts.</para>
/// </summary>
  void SetFilteredAxes(int axis);


  // void SetPreserveImageExtent (int );
/// <summary>
/// <para>PreserveImageExtentOff wasn't covered by test scripts and its implementation was broken.  It is deprecated now and it has no effect (i.e. the ImageExtent is always preserved).</para>
/// </summary>
  void SetPreserveImageExtent(int arg0);


  // int GetPreserveImageExtent ();
/// <summary>
/// <para>PreserveImageExtentOff wasn't covered by test scripts and its implementation was broken.  It is deprecated now and it has no effect (i.e. the ImageExtent is always preserved).</para>
/// </summary>
  int GetPreserveImageExtent();


  // void PreserveImageExtentOn ();
/// <summary>
/// <para>PreserveImageExtentOff wasn't covered by test scripts and its implementation was broken.  It is deprecated now and it has no effect (i.e. the ImageExtent is always preserved).</para>
/// </summary>
  void PreserveImageExtentOn();


  // void PreserveImageExtentOff ();
/// <summary>
/// <para>PreserveImageExtentOff wasn't covered by test scripts and its implementation was broken.  It is deprecated now and it has no effect (i.e. the ImageExtent is always preserved).</para>
/// </summary>
  void PreserveImageExtentOff();


// Did not wrap:  vtkImageFlip ();


// Did not wrap:  ~vtkImageFlip ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageFlip (const vtkImageFlip &);


// Did not wrap:  void vtkImageFlip 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageFlip(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageFlip(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageFlip();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageFlip();


};

} // end vtkImaging
