#pragma once

// managed includes
#include "vtkProp3DDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageActor : public vtkProp3D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageActor *NewInstance ();
  vtkImageActor^ NewInstance();


  // vtkImageActor *SafeDownCast (vtkObject* o);
  static vtkImageActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImageActor *New ();


  // virtual void SetInput (vtkImageData *);
/// <summary>
/// <para>Set/Get the image data input for the image actor.  </para>
/// </summary>
  void SetInput(vtkImageData^ arg0);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Set/Get the image data input for the image actor.  </para>
/// </summary>
  vtkImageData^ GetInput();


  // int GetInterpolate ();
/// <summary>
/// <para>Turn on/off linear interpolation of the image when rendering.</para>
/// </summary>
  int GetInterpolate();


  // void SetInterpolate (int );
/// <summary>
/// <para>Turn on/off linear interpolation of the image when rendering.</para>
/// </summary>
  void SetInterpolate(int arg0);


  // void InterpolateOn ();
/// <summary>
/// <para>Turn on/off linear interpolation of the image when rendering.</para>
/// </summary>
  void InterpolateOn();


  // void InterpolateOff ();
/// <summary>
/// <para>Turn on/off linear interpolation of the image when rendering.</para>
/// </summary>
  void InterpolateOff();


  // void SetOpacity (double );
/// <summary>
/// <para>Set/Get the object's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  void SetOpacity(double arg0);


  // double GetOpacityMinValue ();
/// <summary>
/// <para>Set/Get the object's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  double GetOpacityMinValue();


  // double GetOpacityMaxValue ();
/// <summary>
/// <para>Set/Get the object's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  double GetOpacityMaxValue();


  // double GetOpacity ();
/// <summary>
/// <para>Set/Get the object's opacity. 1.0 is totally opaque and 0.0 is completely transparent.</para>
/// </summary>
  double GetOpacity();


  // void SetDisplayExtent (int extent[6]);
/// <summary>
/// <para>The image extent is generally set explicitly, but if not set it will be determined from the input image data.</para>
/// </summary>
  void SetDisplayExtent(array<int>^ extent);


  // void SetDisplayExtent (int minX, int maxX, int minY, int maxY, int minZ, int maxZ);
/// <summary>
/// <para>The image extent is generally set explicitly, but if not set it will be determined from the input image data.</para>
/// </summary>
  void SetDisplayExtent(int minX, int maxX, int minY, int maxY, int minZ, int maxZ);


  // void GetDisplayExtent (int extent[6]);
/// <summary>
/// <para>The image extent is generally set explicitly, but if not set it will be determined from the input image data.</para>
/// </summary>
  void GetDisplayExtent(array<int>^ extent);


  // int *GetDisplayExtent ();return this DisplayExtent 
/// <summary>
/// <para>Get the bounds of this image actor. Either copy the bounds into a user provided array or return a pointer to an array. In either case the boudns is expressed as a 6-vector  (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  array<int>^ GetDisplayExtent();


  // double *GetBounds ();
/// <summary>
/// <para>Get the bounds of this image actor. Either copy the bounds into a user provided array or return a pointer to an array. In either case the boudns is expressed as a 6-vector  (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  array<double>^ GetBounds();


  // void GetBounds (double bounds[6]);this Superclass GetBounds bounds 
/// <summary>
/// <para>Get the bounds of this image actor. Either copy the bounds into a user provided array or return a pointer to an array. In either case the boudns is expressed as a 6-vector  (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


// Did not wrap:  double *GetDisplayBounds ();


  // void GetDisplayBounds (double bounds[6]);
/// <summary>
/// <para>Get the bounds of the data that is displayed by this image actor.  If the transformation matrix for this actor is the identity matrix, this will return the same value as GetBounds.</para>
/// </summary>
  void GetDisplayBounds(array<double>^ bounds);


  // int GetSliceNumber ();
/// <summary>
/// <para>Return a slice number computed from the display extent.</para>
/// </summary>
  int GetSliceNumber();


  // void SetZSlice (int z);this SetDisplayExtent this DisplayExtent this DisplayExtent this DisplayExtent this DisplayExtent z z 
/// <summary>
/// <para>Set/Get the current slice number. The axis Z in ZSlice does not necessarily have any relation to the z axis of the data on disk. It is simply the axis orthogonal to the x,y, display plane. GetWholeZMax and Min are convenience methods for obtaining the number of slices that can be displayed. Again the number of slices is in reference to the display z axis, which is not necessarily the z axis on disk. (due to reformatting etc)</para>
/// </summary>
  void SetZSlice(int z);


  // int GetZSlice ();return this DisplayExtent 
  int GetZSlice();


  // int GetWholeZMin ();
  int GetWholeZMin();


  // int GetWholeZMax ();
  int GetWholeZMax();


// Did not wrap:  vtkImageActor ();


// Did not wrap:  ~vtkImageActor ();


// Did not wrap:  vtkImageActor (const vtkImageActor &);


// Did not wrap:  void vtkImageActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageActor();


};

} // end vtkRendering
