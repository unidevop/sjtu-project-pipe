#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageStencilData;

public ref class vtkImageReslice : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageReslice *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageReslice *NewInstance ();
  vtkImageReslice^ NewInstance();


  // vtkImageReslice *SafeDownCast (vtkObject* o);
  static vtkImageReslice^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetResliceAxes (vtkMatrix4x4 *);
/// <summary>
/// <para>This method is used to set up the axes for the output voxels. The output Spacing, Origin, and Extent specify the locations of the voxels within the coordinate system defined by the axes. The ResliceAxes are used most often to permute the data, e.g. to extract ZY or XZ slices of a volume as 2D XY images. </para>
/// <para>The first column of the matrix specifies the x-axis  vector (the fourth element must be set to zero), the second column specifies the y-axis, and the third column the z-axis.  The fourth column is the origin of the axes (the fourth element must be set to one).   </para>
/// <para>An alternative to SetResliceAxes() is to use  SetResliceAxesDirectionCosines() to set the directions of the axes and SetResliceAxesOrigin() to set the origin of the axes.</para>
/// </summary>
  void SetResliceAxes(vtkMatrix4x4^ arg0);


  // vtkMatrix4x4 *GetResliceAxes ();
/// <summary>
/// <para>This method is used to set up the axes for the output voxels. The output Spacing, Origin, and Extent specify the locations of the voxels within the coordinate system defined by the axes. The ResliceAxes are used most often to permute the data, e.g. to extract ZY or XZ slices of a volume as 2D XY images. </para>
/// <para>The first column of the matrix specifies the x-axis  vector (the fourth element must be set to zero), the second column specifies the y-axis, and the third column the z-axis.  The fourth column is the origin of the axes (the fourth element must be set to one).   </para>
/// <para>An alternative to SetResliceAxes() is to use  SetResliceAxesDirectionCosines() to set the directions of the axes and SetResliceAxesOrigin() to set the origin of the axes.</para>
/// </summary>
  vtkMatrix4x4^ GetResliceAxes();


  // void SetResliceAxesDirectionCosines (double x0, double x1, double x2, double y0, double y1, double y2, double z0, double z1, double z2);
/// <summary>
/// <para>Specify the direction cosines for the ResliceAxes (i.e. the first three elements of each of the first three columns of  the ResliceAxes matrix).  This will modify the current ResliceAxes matrix, or create a new matrix if none exists.</para>
/// </summary>
  void SetResliceAxesDirectionCosines(double x0, double x1, double x2, double y0, double y1, double y2, double z0, double z1, double z2);


  // void SetResliceAxesDirectionCosines (const double x[3], const double y[3], const double z[3]);this SetResliceAxesDirectionCosines x x x y y y z z z 
/// <summary>
/// <para>Specify the direction cosines for the ResliceAxes (i.e. the first three elements of each of the first three columns of  the ResliceAxes matrix).  This will modify the current ResliceAxes matrix, or create a new matrix if none exists.</para>
/// </summary>
  void SetResliceAxesDirectionCosines(array<double>^ x, array<double>^ y, array<double>^ z);


  // void SetResliceAxesDirectionCosines (const double xyz[9]);this SetResliceAxesDirectionCosines xyz xyz xyz xyz xyz xyz xyz xyz xyz 
/// <summary>
/// <para>Specify the direction cosines for the ResliceAxes (i.e. the first three elements of each of the first three columns of  the ResliceAxes matrix).  This will modify the current ResliceAxes matrix, or create a new matrix if none exists.</para>
/// </summary>
  void SetResliceAxesDirectionCosines(array<double>^ xyz);


  // void GetResliceAxesDirectionCosines (double x[3], double y[3], double z[3]);
/// <summary>
/// <para>Specify the direction cosines for the ResliceAxes (i.e. the first three elements of each of the first three columns of  the ResliceAxes matrix).  This will modify the current ResliceAxes matrix, or create a new matrix if none exists.</para>
/// </summary>
  void GetResliceAxesDirectionCosines(array<double>^ x, array<double>^ y, array<double>^ z);


  // void GetResliceAxesDirectionCosines (double xyz[9]);this GetResliceAxesDirectionCosines xyz xyz xyz 
/// <summary>
/// <para>Specify the direction cosines for the ResliceAxes (i.e. the first three elements of each of the first three columns of  the ResliceAxes matrix).  This will modify the current ResliceAxes matrix, or create a new matrix if none exists.</para>
/// </summary>
  void GetResliceAxesDirectionCosines(array<double>^ xyz);


  // double *GetResliceAxesDirectionCosines ();this GetResliceAxesDirectionCosines this ResliceAxesDirectionCosines return this ResliceAxesDirectionCosines 
/// <summary>
/// <para>Specify the direction cosines for the ResliceAxes (i.e. the first three elements of each of the first three columns of  the ResliceAxes matrix).  This will modify the current ResliceAxes matrix, or create a new matrix if none exists.</para>
/// </summary>
  array<double>^ GetResliceAxesDirectionCosines();


  // void SetResliceAxesOrigin (double x, double y, double z);
/// <summary>
/// <para>Specify the origin for the ResliceAxes (i.e. the first three elements of the final column of the ResliceAxes matrix). This will modify the current ResliceAxes matrix, or create new matrix if none exists.</para>
/// </summary>
  void SetResliceAxesOrigin(double x, double y, double z);


  // void SetResliceAxesOrigin (const double xyz[3]);this SetResliceAxesOrigin xyz xyz xyz 
/// <summary>
/// <para>Specify the origin for the ResliceAxes (i.e. the first three elements of the final column of the ResliceAxes matrix). This will modify the current ResliceAxes matrix, or create new matrix if none exists.</para>
/// </summary>
  void SetResliceAxesOrigin(array<double>^ xyz);


  // void GetResliceAxesOrigin (double xyz[3]);
/// <summary>
/// <para>Specify the origin for the ResliceAxes (i.e. the first three elements of the final column of the ResliceAxes matrix). This will modify the current ResliceAxes matrix, or create new matrix if none exists.</para>
/// </summary>
  void GetResliceAxesOrigin(array<double>^ xyz);


  // double *GetResliceAxesOrigin ();this GetResliceAxesOrigin this ResliceAxesOrigin return this ResliceAxesOrigin 
/// <summary>
/// <para>Specify the origin for the ResliceAxes (i.e. the first three elements of the final column of the ResliceAxes matrix). This will modify the current ResliceAxes matrix, or create new matrix if none exists.</para>
/// </summary>
  array<double>^ GetResliceAxesOrigin();


  // virtual void SetResliceTransform (vtkAbstractTransform *);
/// <summary>
/// <para>Set a transform to be applied to the resampling grid that has been defined via the ResliceAxes and the output Origin, Spacing and Extent.  Note that applying a transform to the resampling grid (which lies in the output coordinate system) is equivalent to applying the inverse of that transform to the input volume.  Nonlinear transforms such as vtkGridTransform and vtkThinPlateSplineTransform can be used here.</para>
/// </summary>
  void SetResliceTransform(vtkAbstractTransform^ arg0);


  // vtkAbstractTransform *GetResliceTransform ();
/// <summary>
/// <para>Set a transform to be applied to the resampling grid that has been defined via the ResliceAxes and the output Origin, Spacing and Extent.  Note that applying a transform to the resampling grid (which lies in the output coordinate system) is equivalent to applying the inverse of that transform to the input volume.  Nonlinear transforms such as vtkGridTransform and vtkThinPlateSplineTransform can be used here.</para>
/// </summary>
  vtkAbstractTransform^ GetResliceTransform();


  // virtual void SetInformationInput (vtkImageData *);
/// <summary>
/// <para>Set a vtkImageData from which the default Spacing, Origin, and WholeExtent of the output will be copied.  The spacing, origin, and extent will be permuted according to the  ResliceAxes.  Any values set via SetOutputSpacing,  SetOutputOrigin, and SetOutputExtent will override these values.  By default, the Spacing, Origin, and WholeExtent of the Input are used.</para>
/// </summary>
  void SetInformationInput(vtkImageData^ arg0);


  // vtkImageData *GetInformationInput ();
/// <summary>
/// <para>Set a vtkImageData from which the default Spacing, Origin, and WholeExtent of the output will be copied.  The spacing, origin, and extent will be permuted according to the  ResliceAxes.  Any values set via SetOutputSpacing,  SetOutputOrigin, and SetOutputExtent will override these values.  By default, the Spacing, Origin, and WholeExtent of the Input are used.</para>
/// </summary>
  vtkImageData^ GetInformationInput();


  // void SetTransformInputSampling (int );
/// <summary>
/// <para>Specify whether to transform the spacing, origin and extent of the Input (or the InformationInput) according to the direction cosines and origin of the ResliceAxes before applying them as the default output spacing, origin and extent  (default: On).</para>
/// </summary>
  void SetTransformInputSampling(int arg0);


  // void TransformInputSamplingOn ();
/// <summary>
/// <para>Specify whether to transform the spacing, origin and extent of the Input (or the InformationInput) according to the direction cosines and origin of the ResliceAxes before applying them as the default output spacing, origin and extent  (default: On).</para>
/// </summary>
  void TransformInputSamplingOn();


  // void TransformInputSamplingOff ();
/// <summary>
/// <para>Specify whether to transform the spacing, origin and extent of the Input (or the InformationInput) according to the direction cosines and origin of the ResliceAxes before applying them as the default output spacing, origin and extent  (default: On).</para>
/// </summary>
  void TransformInputSamplingOff();


  // int GetTransformInputSampling ();
/// <summary>
/// <para>Specify whether to transform the spacing, origin and extent of the Input (or the InformationInput) according to the direction cosines and origin of the ResliceAxes before applying them as the default output spacing, origin and extent  (default: On).</para>
/// </summary>
  int GetTransformInputSampling();


  // void SetAutoCropOutput (int );
/// <summary>
/// <para>Turn this on if you want to guarantee that the extent of the output will be large enough to ensure that none of the  data will be cropped (default: Off).</para>
/// </summary>
  void SetAutoCropOutput(int arg0);


  // void AutoCropOutputOn ();
/// <summary>
/// <para>Turn this on if you want to guarantee that the extent of the output will be large enough to ensure that none of the  data will be cropped (default: Off).</para>
/// </summary>
  void AutoCropOutputOn();


  // void AutoCropOutputOff ();
/// <summary>
/// <para>Turn this on if you want to guarantee that the extent of the output will be large enough to ensure that none of the  data will be cropped (default: Off).</para>
/// </summary>
  void AutoCropOutputOff();


  // int GetAutoCropOutput ();
/// <summary>
/// <para>Turn this on if you want to guarantee that the extent of the output will be large enough to ensure that none of the  data will be cropped (default: Off).</para>
/// </summary>
  int GetAutoCropOutput();


  // void SetWrap (int );
/// <summary>
/// <para>Turn on wrap-pad feature (default: Off).</para>
/// </summary>
  void SetWrap(int arg0);


  // int GetWrap ();
/// <summary>
/// <para>Turn on wrap-pad feature (default: Off).</para>
/// </summary>
  int GetWrap();


  // void WrapOn ();
/// <summary>
/// <para>Turn on wrap-pad feature (default: Off).</para>
/// </summary>
  void WrapOn();


  // void WrapOff ();
/// <summary>
/// <para>Turn on wrap-pad feature (default: Off).</para>
/// </summary>
  void WrapOff();


  // void SetMirror (int );
/// <summary>
/// <para>Turn on mirror-pad feature (default: Off). This will override the wrap-pad. </para>
/// </summary>
  void SetMirror(int arg0);


  // int GetMirror ();
/// <summary>
/// <para>Turn on mirror-pad feature (default: Off). This will override the wrap-pad. </para>
/// </summary>
  int GetMirror();


  // void MirrorOn ();
/// <summary>
/// <para>Turn on mirror-pad feature (default: Off). This will override the wrap-pad. </para>
/// </summary>
  void MirrorOn();


  // void MirrorOff ();
/// <summary>
/// <para>Turn on mirror-pad feature (default: Off). This will override the wrap-pad. </para>
/// </summary>
  void MirrorOff();


  // void SetBorder (int );
/// <summary>
/// <para>Extend the apparent input border by a half voxel (default: On). This changes how interpolation is handled at the borders of the input image: if the center of an output voxel is beyond the edge of the input image, but is within a half voxel width of the edge (using the input voxel width), then the value of the output voxel is calculated as if the input's edge voxels were duplicated past the edges of the input. This has no effect if Mirror or Wrap are on.</para>
/// </summary>
  void SetBorder(int arg0);


  // int GetBorder ();
/// <summary>
/// <para>Extend the apparent input border by a half voxel (default: On). This changes how interpolation is handled at the borders of the input image: if the center of an output voxel is beyond the edge of the input image, but is within a half voxel width of the edge (using the input voxel width), then the value of the output voxel is calculated as if the input's edge voxels were duplicated past the edges of the input. This has no effect if Mirror or Wrap are on.</para>
/// </summary>
  int GetBorder();


  // void BorderOn ();
/// <summary>
/// <para>Extend the apparent input border by a half voxel (default: On). This changes how interpolation is handled at the borders of the input image: if the center of an output voxel is beyond the edge of the input image, but is within a half voxel width of the edge (using the input voxel width), then the value of the output voxel is calculated as if the input's edge voxels were duplicated past the edges of the input. This has no effect if Mirror or Wrap are on.</para>
/// </summary>
  void BorderOn();


  // void BorderOff ();
/// <summary>
/// <para>Extend the apparent input border by a half voxel (default: On). This changes how interpolation is handled at the borders of the input image: if the center of an output voxel is beyond the edge of the input image, but is within a half voxel width of the edge (using the input voxel width), then the value of the output voxel is calculated as if the input's edge voxels were duplicated past the edges of the input. This has no effect if Mirror or Wrap are on.</para>
/// </summary>
  void BorderOff();


  // void SetInterpolationMode (int );
/// <summary>
/// <para>Set interpolation mode (default: nearest neighbor). </para>
/// </summary>
  void SetInterpolationMode(int arg0);


  // int GetInterpolationMode ();
/// <summary>
/// <para>Set interpolation mode (default: nearest neighbor). </para>
/// </summary>
  int GetInterpolationMode();


  // void SetInterpolationModeToNearestNeighbor ();this SetInterpolationMode VTK_RESLICE_NEAREST 
/// <summary>
/// <para>Set interpolation mode (default: nearest neighbor). </para>
/// </summary>
  void SetInterpolationModeToNearestNeighbor();


  // void SetInterpolationModeToLinear ();this SetInterpolationMode VTK_RESLICE_LINEAR 
/// <summary>
/// <para>Set interpolation mode (default: nearest neighbor). </para>
/// </summary>
  void SetInterpolationModeToLinear();


  // void SetInterpolationModeToCubic ();this SetInterpolationMode VTK_RESLICE_CUBIC 
/// <summary>
/// <para>Set interpolation mode (default: nearest neighbor). </para>
/// </summary>
  void SetInterpolationModeToCubic();


  // const char *GetInterpolationModeAsString ();
/// <summary>
/// <para>Set interpolation mode (default: nearest neighbor). </para>
/// </summary>
  System::String^ GetInterpolationModeAsString();


  // void SetOptimization (int );
/// <summary>
/// <para>Turn on and off optimizations (default on, they should only be turned off for testing purposes). </para>
/// </summary>
  void SetOptimization(int arg0);


  // int GetOptimization ();
/// <summary>
/// <para>Turn on and off optimizations (default on, they should only be turned off for testing purposes). </para>
/// </summary>
  int GetOptimization();


  // void OptimizationOn ();
/// <summary>
/// <para>Turn on and off optimizations (default on, they should only be turned off for testing purposes). </para>
/// </summary>
  void OptimizationOn();


  // void OptimizationOff ();
/// <summary>
/// <para>Turn on and off optimizations (default on, they should only be turned off for testing purposes). </para>
/// </summary>
  void OptimizationOff();


  // void SetBackgroundColor (double , double , double , double );
/// <summary>
/// <para>Set the background color (for multi-component images).</para>
/// </summary>
  void SetBackgroundColor(double arg0, double arg1, double arg2, double arg3);


  // void SetBackgroundColor (double  a[4]);
/// <summary>
/// <para>Set the background color (for multi-component images).</para>
/// </summary>
  void SetBackgroundColor(array<double>^ a);


  // double  *GetBackgroundColor ();
/// <summary>
/// <para>Set the background color (for multi-component images).</para>
/// </summary>
  array<double>^ GetBackgroundColor();


  // void SetBackgroundLevel (double v);this SetBackgroundColor v v v v 
/// <summary>
/// <para>Set background grey level (for single-component images).</para>
/// </summary>
  void SetBackgroundLevel(double v);


  // double GetBackgroundLevel ();return this GetBackgroundColor 
/// <summary>
/// <para>Set background grey level (for single-component images).</para>
/// </summary>
  double GetBackgroundLevel();


  // void SetOutputSpacing (double , double , double );
/// <summary>
/// <para>Set the voxel spacing for the output data.  The default output spacing is the input spacing permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputSpacing(double arg0, double arg1, double arg2);


  // void SetOutputSpacing (double  a[3]);
/// <summary>
/// <para>Set the voxel spacing for the output data.  The default output spacing is the input spacing permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputSpacing(array<double>^ a);


  // double  *GetOutputSpacing ();
/// <summary>
/// <para>Set the voxel spacing for the output data.  The default output spacing is the input spacing permuted through the ResliceAxes.</para>
/// </summary>
  array<double>^ GetOutputSpacing();


  // void SetOutputSpacingToDefault ();this SetOutputSpacing VTK_DOUBLE_MAX VTK_DOUBLE_MAX VTK_DOUBLE_MAX 
/// <summary>
/// <para>Set the voxel spacing for the output data.  The default output spacing is the input spacing permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputSpacingToDefault();


  // void SetOutputOrigin (double , double , double );
/// <summary>
/// <para>Set the origin for the output data.  The default output origin is the input origin permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputOrigin(double arg0, double arg1, double arg2);


  // void SetOutputOrigin (double  a[3]);
/// <summary>
/// <para>Set the origin for the output data.  The default output origin is the input origin permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputOrigin(array<double>^ a);


  // double  *GetOutputOrigin ();
/// <summary>
/// <para>Set the origin for the output data.  The default output origin is the input origin permuted through the ResliceAxes.</para>
/// </summary>
  array<double>^ GetOutputOrigin();


  // void SetOutputOriginToDefault ();this SetOutputOrigin VTK_DOUBLE_MAX VTK_DOUBLE_MAX VTK_DOUBLE_MAX 
/// <summary>
/// <para>Set the origin for the output data.  The default output origin is the input origin permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputOriginToDefault();


  // void SetOutputExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Set the extent for the output data.  The default output extent is the input extent permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetOutputExtent (int  a[6]);
/// <summary>
/// <para>Set the extent for the output data.  The default output extent is the input extent permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputExtent(array<int>^ a);


  // int  *GetOutputExtent ();
/// <summary>
/// <para>Set the extent for the output data.  The default output extent is the input extent permuted through the ResliceAxes.</para>
/// </summary>
  array<int>^ GetOutputExtent();


  // void SetOutputExtentToDefault ();this SetOutputExtent VTK_INT_MIN VTK_INT_MAX VTK_INT_MIN VTK_INT_MAX VTK_INT_MIN VTK_INT_MAX 
/// <summary>
/// <para>Set the extent for the output data.  The default output extent is the input extent permuted through the ResliceAxes.</para>
/// </summary>
  void SetOutputExtentToDefault();


  // void SetOutputDimensionality (int );
/// <summary>
/// <para>Force the dimensionality of the output to either 1, 2, 3 or 0 (default: 3).  If the dimensionality is 2D, then the Z extent of the output is forced to (0,0) and the Z origin of the output is forced to 0.0 (i.e. the output extent is confined to the xy plane).  If the dimensionality is 1D, the output extent is confined to the x axis.   For 0D, the output extent consists of a single voxel at  (0,0,0).</para>
/// </summary>
  void SetOutputDimensionality(int arg0);


  // int GetOutputDimensionality ();
/// <summary>
/// <para>Force the dimensionality of the output to either 1, 2, 3 or 0 (default: 3).  If the dimensionality is 2D, then the Z extent of the output is forced to (0,0) and the Z origin of the output is forced to 0.0 (i.e. the output extent is confined to the xy plane).  If the dimensionality is 1D, the output extent is confined to the x axis.   For 0D, the output extent consists of a single voxel at  (0,0,0).</para>
/// </summary>
  int GetOutputDimensionality();


  // unsigned long GetMTime ();
/// <summary>
/// <para>When determining the modified time of the filter,  this check the modified time of the transform and matrix.</para>
/// </summary>
  unsigned long GetMTime();


  // void SetInterpolate (int t);if t this GetInterpolate this SetInterpolationModeToLinear else if t this GetInterpolate this SetInterpolationModeToNearestNeighbor 
/// <summary>
/// <para>Convenient methods for switching between nearest-neighbor and linear interpolation.   InterpolateOn() is equivalent to SetInterpolationModeToLinear() and InterpolateOff() is equivalent to SetInterpolationModeToNearestNeighbor(). You should not use these methods if you use the SetInterpolationMode methods.</para>
/// </summary>
  void SetInterpolate(int t);


  // void InterpolateOn ();this SetInterpolate 
/// <summary>
/// <para>Convenient methods for switching between nearest-neighbor and linear interpolation.   InterpolateOn() is equivalent to SetInterpolationModeToLinear() and InterpolateOff() is equivalent to SetInterpolationModeToNearestNeighbor(). You should not use these methods if you use the SetInterpolationMode methods.</para>
/// </summary>
  void InterpolateOn();


  // void InterpolateOff ();this SetInterpolate 
/// <summary>
/// <para>Convenient methods for switching between nearest-neighbor and linear interpolation.   InterpolateOn() is equivalent to SetInterpolationModeToLinear() and InterpolateOff() is equivalent to SetInterpolationModeToNearestNeighbor(). You should not use these methods if you use the SetInterpolationMode methods.</para>
/// </summary>
  void InterpolateOff();


  // int GetInterpolate ();return this GetInterpolationMode VTK_RESLICE_NEAREST 
/// <summary>
/// <para>Convenient methods for switching between nearest-neighbor and linear interpolation.   InterpolateOn() is equivalent to SetInterpolationModeToLinear() and InterpolateOff() is equivalent to SetInterpolationModeToNearestNeighbor(). You should not use these methods if you use the SetInterpolationMode methods.</para>
/// </summary>
  int GetInterpolate();


  // void SetStencil (vtkImageStencilData *stencil);
/// <summary>
/// <para>Use a stencil to limit the calculations to a specific region of the output.  Portions of the output that are 'outside' the stencil will be cleared to the background color.  </para>
/// </summary>
  void SetStencil(vtkImageStencilData^ stencil);


  // vtkImageStencilData *GetStencil ();
/// <summary>
/// <para>Use a stencil to limit the calculations to a specific region of the output.  Portions of the output that are 'outside' the stencil will be cleared to the background color.  </para>
/// </summary>
  vtkImageStencilData^ GetStencil();


// Did not wrap:  vtkImageReslice ();


// Did not wrap:  ~vtkImageReslice ();


// Did not wrap:  void GetAutoCroppedOutputBounds (vtkInformation *inInfo, double bounds[6]);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkMatrix4x4 *GetIndexMatrix (vtkInformation *inInfo, vtkInformation *outInfo);


// Did not wrap:  vtkAbstractTransform *GetOptimizedTransform ();return this OptimizedTransform 


// Did not wrap:  vtkImageReslice (const vtkImageReslice &);


// Did not wrap:  void vtkImageReslice 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageReslice(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageReslice(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageReslice();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageReslice();


};

} // end vtkImaging
