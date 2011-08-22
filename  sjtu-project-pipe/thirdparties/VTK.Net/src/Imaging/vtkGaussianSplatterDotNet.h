#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGaussianSplatter : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGaussianSplatter *NewInstance ();
  vtkGaussianSplatter^ NewInstance();


  // vtkGaussianSplatter *SafeDownCast (vtkObject* o);
  static vtkGaussianSplatter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGaussianSplatter *New ();


  // void SetSampleDimensions (int i, int j, int k);
/// <summary>
/// <para>Set / get the dimensions of the sampling structured point set. Higher values produce better results but are much slower.</para>
/// </summary>
  void SetSampleDimensions(int i, int j, int k);


  // void SetSampleDimensions (int dim[3]);
/// <summary>
/// <para>Set / get the dimensions of the sampling structured point set. Higher values produce better results but are much slower.</para>
/// </summary>
  void SetSampleDimensions(array<int>^ dim);


  // int  *GetSampleDimensions ();
/// <summary>
/// <para>Set / get the dimensions of the sampling structured point set. Higher values produce better results but are much slower.</para>
/// </summary>
  array<int>^ GetSampleDimensions();


  // void SetModelBounds (double , double , double , double , double , double );
/// <summary>
/// <para>Set / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in which the sampling is performed. If any of the (min,max) bounds values are min &gt;= max, then the bounds will be computed automatically from the input data. Otherwise, the user-specified bounds will be used.</para>
/// </summary>
  void SetModelBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetModelBounds (double  a[6]);
/// <summary>
/// <para>Set / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in which the sampling is performed. If any of the (min,max) bounds values are min &gt;= max, then the bounds will be computed automatically from the input data. Otherwise, the user-specified bounds will be used.</para>
/// </summary>
  void SetModelBounds(array<double>^ a);


  // double  *GetModelBounds ();
/// <summary>
/// <para>Set / get the (xmin,xmax, ymin,ymax, zmin,zmax) bounding box in which the sampling is performed. If any of the (min,max) bounds values are min &gt;= max, then the bounds will be computed automatically from the input data. Otherwise, the user-specified bounds will be used.</para>
/// </summary>
  array<double>^ GetModelBounds();


  // void SetRadius (double );
/// <summary>
/// <para>Set / get the radius of propagation of the splat. This value is expressed as a percentage of the length of the longest side of the sampling volume. Smaller numbers greatly reduce execution time.</para>
/// </summary>
  void SetRadius(double arg0);


  // double GetRadiusMinValue ();
/// <summary>
/// <para>Set / get the radius of propagation of the splat. This value is expressed as a percentage of the length of the longest side of the sampling volume. Smaller numbers greatly reduce execution time.</para>
/// </summary>
  double GetRadiusMinValue();


  // double GetRadiusMaxValue ();
/// <summary>
/// <para>Set / get the radius of propagation of the splat. This value is expressed as a percentage of the length of the longest side of the sampling volume. Smaller numbers greatly reduce execution time.</para>
/// </summary>
  double GetRadiusMaxValue();


  // double GetRadius ();
/// <summary>
/// <para>Set / get the radius of propagation of the splat. This value is expressed as a percentage of the length of the longest side of the sampling volume. Smaller numbers greatly reduce execution time.</para>
/// </summary>
  double GetRadius();


  // void SetScaleFactor (double );
/// <summary>
/// <para>Multiply Gaussian splat distribution by this value. If ScalarWarping is on, then the Scalar value will be multiplied by the ScaleFactor times the Gaussian function.</para>
/// </summary>
  void SetScaleFactor(double arg0);


  // double GetScaleFactorMinValue ();
/// <summary>
/// <para>Multiply Gaussian splat distribution by this value. If ScalarWarping is on, then the Scalar value will be multiplied by the ScaleFactor times the Gaussian function.</para>
/// </summary>
  double GetScaleFactorMinValue();


  // double GetScaleFactorMaxValue ();
/// <summary>
/// <para>Multiply Gaussian splat distribution by this value. If ScalarWarping is on, then the Scalar value will be multiplied by the ScaleFactor times the Gaussian function.</para>
/// </summary>
  double GetScaleFactorMaxValue();


  // double GetScaleFactor ();
/// <summary>
/// <para>Multiply Gaussian splat distribution by this value. If ScalarWarping is on, then the Scalar value will be multiplied by the ScaleFactor times the Gaussian function.</para>
/// </summary>
  double GetScaleFactor();


  // void SetExponentFactor (double );
/// <summary>
/// <para>Set / get the sharpness of decay of the splats. This is the exponent constant in the Gaussian equation. Normally this is a negative value.</para>
/// </summary>
  void SetExponentFactor(double arg0);


  // double GetExponentFactor ();
/// <summary>
/// <para>Set / get the sharpness of decay of the splats. This is the exponent constant in the Gaussian equation. Normally this is a negative value.</para>
/// </summary>
  double GetExponentFactor();


  // void SetNormalWarping (int );
/// <summary>
/// <para>Turn on/off the generation of elliptical splats. If normal warping is on, then the input normals affect the distribution of the splat. This boolean is used in combination with the Eccentricity ivar.</para>
/// </summary>
  void SetNormalWarping(int arg0);


  // int GetNormalWarping ();
/// <summary>
/// <para>Turn on/off the generation of elliptical splats. If normal warping is on, then the input normals affect the distribution of the splat. This boolean is used in combination with the Eccentricity ivar.</para>
/// </summary>
  int GetNormalWarping();


  // void NormalWarpingOn ();
/// <summary>
/// <para>Turn on/off the generation of elliptical splats. If normal warping is on, then the input normals affect the distribution of the splat. This boolean is used in combination with the Eccentricity ivar.</para>
/// </summary>
  void NormalWarpingOn();


  // void NormalWarpingOff ();
/// <summary>
/// <para>Turn on/off the generation of elliptical splats. If normal warping is on, then the input normals affect the distribution of the splat. This boolean is used in combination with the Eccentricity ivar.</para>
/// </summary>
  void NormalWarpingOff();


  // void SetEccentricity (double );
/// <summary>
/// <para>Control the shape of elliptical splatting. Eccentricity is the ratio of the major axis (aligned along normal) to the minor (axes) aligned along other two axes. So Eccentricity &gt; 1 creates needles with the long axis in the direction of the normal; Eccentricity&lt;1 creates pancakes perpendicular to the normal vector.</para>
/// </summary>
  void SetEccentricity(double arg0);


  // double GetEccentricityMinValue ();
/// <summary>
/// <para>Control the shape of elliptical splatting. Eccentricity is the ratio of the major axis (aligned along normal) to the minor (axes) aligned along other two axes. So Eccentricity &gt; 1 creates needles with the long axis in the direction of the normal; Eccentricity&lt;1 creates pancakes perpendicular to the normal vector.</para>
/// </summary>
  double GetEccentricityMinValue();


  // double GetEccentricityMaxValue ();
/// <summary>
/// <para>Control the shape of elliptical splatting. Eccentricity is the ratio of the major axis (aligned along normal) to the minor (axes) aligned along other two axes. So Eccentricity &gt; 1 creates needles with the long axis in the direction of the normal; Eccentricity&lt;1 creates pancakes perpendicular to the normal vector.</para>
/// </summary>
  double GetEccentricityMaxValue();


  // double GetEccentricity ();
/// <summary>
/// <para>Control the shape of elliptical splatting. Eccentricity is the ratio of the major axis (aligned along normal) to the minor (axes) aligned along other two axes. So Eccentricity &gt; 1 creates needles with the long axis in the direction of the normal; Eccentricity&lt;1 creates pancakes perpendicular to the normal vector.</para>
/// </summary>
  double GetEccentricity();


  // void SetScalarWarping (int );
/// <summary>
/// <para>Turn on/off the scaling of splats by scalar value.</para>
/// </summary>
  void SetScalarWarping(int arg0);


  // int GetScalarWarping ();
/// <summary>
/// <para>Turn on/off the scaling of splats by scalar value.</para>
/// </summary>
  int GetScalarWarping();


  // void ScalarWarpingOn ();
/// <summary>
/// <para>Turn on/off the scaling of splats by scalar value.</para>
/// </summary>
  void ScalarWarpingOn();


  // void ScalarWarpingOff ();
/// <summary>
/// <para>Turn on/off the scaling of splats by scalar value.</para>
/// </summary>
  void ScalarWarpingOff();


  // void SetCapping (int );
/// <summary>
/// <para>Turn on/off the capping of the outer boundary of the volume to a specified cap value. This can be used to close surfaces (after iso-surfacing) and create other effects.</para>
/// </summary>
  void SetCapping(int arg0);


  // int GetCapping ();
/// <summary>
/// <para>Turn on/off the capping of the outer boundary of the volume to a specified cap value. This can be used to close surfaces (after iso-surfacing) and create other effects.</para>
/// </summary>
  int GetCapping();


  // void CappingOn ();
/// <summary>
/// <para>Turn on/off the capping of the outer boundary of the volume to a specified cap value. This can be used to close surfaces (after iso-surfacing) and create other effects.</para>
/// </summary>
  void CappingOn();


  // void CappingOff ();
/// <summary>
/// <para>Turn on/off the capping of the outer boundary of the volume to a specified cap value. This can be used to close surfaces (after iso-surfacing) and create other effects.</para>
/// </summary>
  void CappingOff();


  // void SetCapValue (double );
/// <summary>
/// <para>Specify the cap value to use. (This instance variable only has effect  if the ivar Capping is on.)</para>
/// </summary>
  void SetCapValue(double arg0);


  // double GetCapValue ();
/// <summary>
/// <para>Specify the cap value to use. (This instance variable only has effect  if the ivar Capping is on.)</para>
/// </summary>
  double GetCapValue();


  // void SetAccumulationMode (int );
/// <summary>
/// <para>Specify the scalar accumulation mode. This mode expresses how scalar values are combined when splats are overlapped. The Max mode acts like a set union operation and is the most commonly used; the Min mode acts like a set intersection, and the sum is just weird.</para>
/// </summary>
  void SetAccumulationMode(int arg0);


  // int GetAccumulationModeMinValue ();
/// <summary>
/// <para>Specify the scalar accumulation mode. This mode expresses how scalar values are combined when splats are overlapped. The Max mode acts like a set union operation and is the most commonly used; the Min mode acts like a set intersection, and the sum is just weird.</para>
/// </summary>
  int GetAccumulationModeMinValue();


  // int GetAccumulationModeMaxValue ();
/// <summary>
/// <para>Specify the scalar accumulation mode. This mode expresses how scalar values are combined when splats are overlapped. The Max mode acts like a set union operation and is the most commonly used; the Min mode acts like a set intersection, and the sum is just weird.</para>
/// </summary>
  int GetAccumulationModeMaxValue();


  // int GetAccumulationMode ();
/// <summary>
/// <para>Specify the scalar accumulation mode. This mode expresses how scalar values are combined when splats are overlapped. The Max mode acts like a set union operation and is the most commonly used; the Min mode acts like a set intersection, and the sum is just weird.</para>
/// </summary>
  int GetAccumulationMode();


  // void SetAccumulationModeToMin ();this SetAccumulationMode VTK_ACCUMULATION_MODE_MIN 
/// <summary>
/// <para>Specify the scalar accumulation mode. This mode expresses how scalar values are combined when splats are overlapped. The Max mode acts like a set union operation and is the most commonly used; the Min mode acts like a set intersection, and the sum is just weird.</para>
/// </summary>
  void SetAccumulationModeToMin();


  // void SetAccumulationModeToMax ();this SetAccumulationMode VTK_ACCUMULATION_MODE_MAX 
/// <summary>
/// <para>Specify the scalar accumulation mode. This mode expresses how scalar values are combined when splats are overlapped. The Max mode acts like a set union operation and is the most commonly used; the Min mode acts like a set intersection, and the sum is just weird.</para>
/// </summary>
  void SetAccumulationModeToMax();


  // void SetAccumulationModeToSum ();this SetAccumulationMode VTK_ACCUMULATION_MODE_SUM 
/// <summary>
/// <para>Specify the scalar accumulation mode. This mode expresses how scalar values are combined when splats are overlapped. The Max mode acts like a set union operation and is the most commonly used; the Min mode acts like a set intersection, and the sum is just weird.</para>
/// </summary>
  void SetAccumulationModeToSum();


  // const char *GetAccumulationModeAsString ();
/// <summary>
/// <para>Specify the scalar accumulation mode. This mode expresses how scalar values are combined when splats are overlapped. The Max mode acts like a set union operation and is the most commonly used; the Min mode acts like a set intersection, and the sum is just weird.</para>
/// </summary>
  System::String^ GetAccumulationModeAsString();


  // void SetNullValue (double );
/// <summary>
/// <para>Set the Null value for output points not receiving a contribution from the input points. (This is the initial value of the voxel samples.)</para>
/// </summary>
  void SetNullValue(double arg0);


  // double GetNullValue ();
/// <summary>
/// <para>Set the Null value for output points not receiving a contribution from the input points. (This is the initial value of the voxel samples.)</para>
/// </summary>
  double GetNullValue();


  // void ComputeModelBounds (vtkDataSet *input, vtkImageData *output, vtkInformation *outInfo);
/// <summary>
/// <para>Compute the size of the sample bounding box automatically from the input data. This is an internal helper function.</para>
/// </summary>
  void ComputeModelBounds(vtkDataSet^ input, vtkImageData^ output, vtkInformation^ outInfo);


// Did not wrap:  vtkGaussianSplatter ();


// Did not wrap:  ~vtkGaussianSplatter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void Cap (vtkDoubleArray *s);


// Did not wrap:  double Gaussian (double x[3]);


// Did not wrap:  double EccentricGaussian (double x[3]);


// Did not wrap:  double ScalarSampling (double s);return this ScaleFactor s 


// Did not wrap:  double PositionSampling (double );return this ScaleFactor 


// Did not wrap:  void SetScalar (int idx, double dist2, vtkDoubleArray *newScalars);


// Did not wrap:  vtkGaussianSplatter (const vtkGaussianSplatter &);


// Did not wrap:  void vtkGaussianSplatter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGaussianSplatter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGaussianSplatter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGaussianSplatter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGaussianSplatter();


};

} // end vtkImaging
