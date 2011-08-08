#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDirectionEncoder;

public ref class vtkEncodedGradientEstimator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEncodedGradientEstimator *NewInstance ();
  vtkEncodedGradientEstimator^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkImageData *);
/// <summary>
/// <para>Set/Get the scalar input for which the normals will be  calculated</para>
/// </summary>
  void SetInput(vtkImageData^ arg0);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Set/Get the scalar input for which the normals will be  calculated</para>
/// </summary>
  vtkImageData^ GetInput();


  // void SetGradientMagnitudeScale (float );
/// <summary>
/// <para>Set/Get the scale and bias for the gradient magnitude</para>
/// </summary>
  void SetGradientMagnitudeScale(float arg0);


  // float GetGradientMagnitudeScale ();
/// <summary>
/// <para>Set/Get the scale and bias for the gradient magnitude</para>
/// </summary>
  float GetGradientMagnitudeScale();


  // void SetGradientMagnitudeBias (float );
/// <summary>
/// <para>Set/Get the scale and bias for the gradient magnitude</para>
/// </summary>
  void SetGradientMagnitudeBias(float arg0);


  // float GetGradientMagnitudeBias ();
/// <summary>
/// <para>Set/Get the scale and bias for the gradient magnitude</para>
/// </summary>
  float GetGradientMagnitudeBias();


  // void SetBoundsClip (int );
/// <summary>
/// <para>Turn on / off the bounding of the normal computation by the this-&gt;Bounds bounding box</para>
/// </summary>
  void SetBoundsClip(int arg0);


  // int GetBoundsClipMinValue ();
/// <summary>
/// <para>Turn on / off the bounding of the normal computation by the this-&gt;Bounds bounding box</para>
/// </summary>
  int GetBoundsClipMinValue();


  // int GetBoundsClipMaxValue ();
/// <summary>
/// <para>Turn on / off the bounding of the normal computation by the this-&gt;Bounds bounding box</para>
/// </summary>
  int GetBoundsClipMaxValue();


  // int GetBoundsClip ();
/// <summary>
/// <para>Turn on / off the bounding of the normal computation by the this-&gt;Bounds bounding box</para>
/// </summary>
  int GetBoundsClip();


  // void BoundsClipOn ();
/// <summary>
/// <para>Turn on / off the bounding of the normal computation by the this-&gt;Bounds bounding box</para>
/// </summary>
  void BoundsClipOn();


  // void BoundsClipOff ();
/// <summary>
/// <para>Turn on / off the bounding of the normal computation by the this-&gt;Bounds bounding box</para>
/// </summary>
  void BoundsClipOff();


  // void SetBounds (int , int , int , int , int , int );
/// <summary>
/// <para>Set / Get the bounds of the computation (used if  this-&gt;ComputationBounds is 1.) The bounds are specified xmin, xmax, ymin, ymax, zmin, zmax.</para>
/// </summary>
  void SetBounds(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetBounds (int  a[6]);
/// <summary>
/// <para>Set / Get the bounds of the computation (used if  this-&gt;ComputationBounds is 1.) The bounds are specified xmin, xmax, ymin, ymax, zmin, zmax.</para>
/// </summary>
  void SetBounds(array<int>^ a);


  // int  *GetBounds ();
/// <summary>
/// <para>Set / Get the bounds of the computation (used if  this-&gt;ComputationBounds is 1.) The bounds are specified xmin, xmax, ymin, ymax, zmin, zmax.</para>
/// </summary>
  array<int>^ GetBounds();


  // void Update (void );
/// <summary>
/// <para>Recompute the encoded normals and gradient magnitudes.</para>
/// </summary>
  void Update();


// Did not wrap:  unsigned short *GetEncodedNormals (void );


  // int GetEncodedNormalIndex (int xyz_index);
/// <summary>
/// <para>Get the encoded normal at an x,y,z location in the volume</para>
/// </summary>
  int GetEncodedNormalIndex(int xyz_index);


  // int GetEncodedNormalIndex (int x_index, int y_index, int z_index);
/// <summary>
/// <para>Get the encoded normal at an x,y,z location in the volume</para>
/// </summary>
  int GetEncodedNormalIndex(int x_index, int y_index, int z_index);


// Did not wrap:  unsigned char *GetGradientMagnitudes (void );


  // void SetNumberOfThreads (int );
/// <summary>
/// <para>Get/Set the number of threads to create when encoding normals This defaults to the number of available processors on the machine</para>
/// </summary>
  void SetNumberOfThreads(int arg0);


  // int GetNumberOfThreadsMinValue ();
/// <summary>
/// <para>Get/Set the number of threads to create when encoding normals This defaults to the number of available processors on the machine</para>
/// </summary>
  int GetNumberOfThreadsMinValue();


  // int GetNumberOfThreadsMaxValue ();
/// <summary>
/// <para>Get/Set the number of threads to create when encoding normals This defaults to the number of available processors on the machine</para>
/// </summary>
  int GetNumberOfThreadsMaxValue();


  // int GetNumberOfThreads ();
/// <summary>
/// <para>Get/Set the number of threads to create when encoding normals This defaults to the number of available processors on the machine</para>
/// </summary>
  int GetNumberOfThreads();


  // void SetDirectionEncoder (vtkDirectionEncoder *direnc);
/// <summary>
/// <para>Set / Get the direction encoder used to encode normal directions to fit within two bytes</para>
/// </summary>
  void SetDirectionEncoder(vtkDirectionEncoder^ direnc);


  // vtkDirectionEncoder *GetDirectionEncoder ();
/// <summary>
/// <para>Set / Get the direction encoder used to encode normal directions to fit within two bytes</para>
/// </summary>
  vtkDirectionEncoder^ GetDirectionEncoder();


  // void SetComputeGradientMagnitudes (int );
/// <summary>
/// <para>If you don't want to compute gradient magnitudes (but you do want normals for shading) this can be used. Be careful - if if you a non-constant gradient magnitude transfer function and you turn this on, it may crash</para>
/// </summary>
  void SetComputeGradientMagnitudes(int arg0);


  // int GetComputeGradientMagnitudes ();
/// <summary>
/// <para>If you don't want to compute gradient magnitudes (but you do want normals for shading) this can be used. Be careful - if if you a non-constant gradient magnitude transfer function and you turn this on, it may crash</para>
/// </summary>
  int GetComputeGradientMagnitudes();


  // void ComputeGradientMagnitudesOn ();
/// <summary>
/// <para>If you don't want to compute gradient magnitudes (but you do want normals for shading) this can be used. Be careful - if if you a non-constant gradient magnitude transfer function and you turn this on, it may crash</para>
/// </summary>
  void ComputeGradientMagnitudesOn();


  // void ComputeGradientMagnitudesOff ();
/// <summary>
/// <para>If you don't want to compute gradient magnitudes (but you do want normals for shading) this can be used. Be careful - if if you a non-constant gradient magnitude transfer function and you turn this on, it may crash</para>
/// </summary>
  void ComputeGradientMagnitudesOff();


  // void SetCylinderClip (int );
/// <summary>
/// <para>If the data in each slice is only contained within a circle circumscribed within the slice, and the slice is square, then don't compute anything outside the circle. This circle through the slices forms a cylinder.</para>
/// </summary>
  void SetCylinderClip(int arg0);


  // int GetCylinderClip ();
/// <summary>
/// <para>If the data in each slice is only contained within a circle circumscribed within the slice, and the slice is square, then don't compute anything outside the circle. This circle through the slices forms a cylinder.</para>
/// </summary>
  int GetCylinderClip();


  // void CylinderClipOn ();
/// <summary>
/// <para>If the data in each slice is only contained within a circle circumscribed within the slice, and the slice is square, then don't compute anything outside the circle. This circle through the slices forms a cylinder.</para>
/// </summary>
  void CylinderClipOn();


  // void CylinderClipOff ();
/// <summary>
/// <para>If the data in each slice is only contained within a circle circumscribed within the slice, and the slice is square, then don't compute anything outside the circle. This circle through the slices forms a cylinder.</para>
/// </summary>
  void CylinderClipOff();


  // float GetLastUpdateTimeInSeconds ();
/// <summary>
/// <para>Get the time required for the last update in seconds or cpu seconds</para>
/// </summary>
  float GetLastUpdateTimeInSeconds();


  // float GetLastUpdateTimeInCPUSeconds ();
/// <summary>
/// <para>Get the time required for the last update in seconds or cpu seconds</para>
/// </summary>
  float GetLastUpdateTimeInCPUSeconds();


  // int GetUseCylinderClip ();
  int GetUseCylinderClip();


// Did not wrap:  int *GetCircleLimits ();return this CircleLimits 


  // void SetZeroNormalThreshold (float v);
/// <summary>
/// <para>Set / Get the ZeroNormalThreshold - this defines the minimum magnitude  of a gradient that is considered sufficient to define a  direction. Gradients with magnitudes at or less than this value are given a &quot;zero normal&quot; index. These are handled specially in the shader,  and you can set the intensity of light for these zero normals in the gradient shader.</para>
/// </summary>
  void SetZeroNormalThreshold(float v);


  // float GetZeroNormalThreshold ();
/// <summary>
/// <para>Set / Get the ZeroNormalThreshold - this defines the minimum magnitude  of a gradient that is considered sufficient to define a  direction. Gradients with magnitudes at or less than this value are given a &quot;zero normal&quot; index. These are handled specially in the shader,  and you can set the intensity of light for these zero normals in the gradient shader.</para>
/// </summary>
  float GetZeroNormalThreshold();


  // void SetZeroPad (int );
/// <summary>
/// <para>Assume that the data value outside the volume is zero when computing normals.</para>
/// </summary>
  void SetZeroPad(int arg0);


  // int GetZeroPadMinValue ();
/// <summary>
/// <para>Assume that the data value outside the volume is zero when computing normals.</para>
/// </summary>
  int GetZeroPadMinValue();


  // int GetZeroPadMaxValue ();
/// <summary>
/// <para>Assume that the data value outside the volume is zero when computing normals.</para>
/// </summary>
  int GetZeroPadMaxValue();


  // int GetZeroPad ();
/// <summary>
/// <para>Assume that the data value outside the volume is zero when computing normals.</para>
/// </summary>
  int GetZeroPad();


  // void ZeroPadOn ();
/// <summary>
/// <para>Assume that the data value outside the volume is zero when computing normals.</para>
/// </summary>
  void ZeroPadOn();


  // void ZeroPadOff ();
/// <summary>
/// <para>Assume that the data value outside the volume is zero when computing normals.</para>
/// </summary>
  void ZeroPadOff();


// Did not wrap:  vtkEncodedGradientEstimator ();


// Did not wrap:  ~vtkEncodedGradientEstimator ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual void UpdateNormals (void ) = 0;


// Did not wrap:  void ComputeCircleLimits (int size);


// Did not wrap:  vtkEncodedGradientEstimator (const vtkEncodedGradientEstimator &);


// Did not wrap:  void vtkEncodedGradientEstimator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEncodedGradientEstimator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEncodedGradientEstimator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEncodedGradientEstimator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEncodedGradientEstimator();


};

} // end vtkVolumeRendering
