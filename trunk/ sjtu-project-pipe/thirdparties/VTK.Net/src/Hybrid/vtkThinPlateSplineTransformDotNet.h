#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkThinPlateSplineTransform : public vtkWarpTransform
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkThinPlateSplineTransform *NewInstance ();
  vtkThinPlateSplineTransform^ NewInstance();


  // vtkThinPlateSplineTransform *SafeDownCast (vtkObject* o);
  static vtkThinPlateSplineTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkThinPlateSplineTransform *New ();


  // double GetSigma ();
/// <summary>
/// <para>Specify the 'stiffness' of the spline. The default is 1.0.</para>
/// </summary>
  double GetSigma();


  // void SetSigma (double );
/// <summary>
/// <para>Specify the 'stiffness' of the spline. The default is 1.0.</para>
/// </summary>
  void SetSigma(double arg0);


  // void SetBasis (int basis);
/// <summary>
/// <para>Specify the radial basis function to use.  The default is R2LogR which is appropriate for 2D. Use |R| (SetBasisToR)  if your data is 3D. Alternatively specify your own basis function,  however this will mean that the transform will no longer be a true  thin-plate spline.</para>
/// </summary>
  void SetBasis(int basis);


  // int GetBasis ();
/// <summary>
/// <para>Specify the radial basis function to use.  The default is R2LogR which is appropriate for 2D. Use |R| (SetBasisToR)  if your data is 3D. Alternatively specify your own basis function,  however this will mean that the transform will no longer be a true  thin-plate spline.</para>
/// </summary>
  int GetBasis();


  // void SetBasisToR ();this SetBasis VTK_RBF_R 
/// <summary>
/// <para>Specify the radial basis function to use.  The default is R2LogR which is appropriate for 2D. Use |R| (SetBasisToR)  if your data is 3D. Alternatively specify your own basis function,  however this will mean that the transform will no longer be a true  thin-plate spline.</para>
/// </summary>
  void SetBasisToR();


  // void SetBasisToR2LogR ();this SetBasis VTK_RBF_R2LOGR 
/// <summary>
/// <para>Specify the radial basis function to use.  The default is R2LogR which is appropriate for 2D. Use |R| (SetBasisToR)  if your data is 3D. Alternatively specify your own basis function,  however this will mean that the transform will no longer be a true  thin-plate spline.</para>
/// </summary>
  void SetBasisToR2LogR();


  // const char *GetBasisAsString ();
/// <summary>
/// <para>Specify the radial basis function to use.  The default is R2LogR which is appropriate for 2D. Use |R| (SetBasisToR)  if your data is 3D. Alternatively specify your own basis function,  however this will mean that the transform will no longer be a true  thin-plate spline.</para>
/// </summary>
  System::String^ GetBasisAsString();


  // void SetSourceLandmarks (vtkPoints *source);
/// <summary>
/// <para>Set the source landmarks for the warp.  If you add or change the vtkPoints object, you must call Modified() on it or the transformation might not update.</para>
/// </summary>
  void SetSourceLandmarks(vtkPoints^ source);


  // vtkPoints *GetSourceLandmarks ();
/// <summary>
/// <para>Set the source landmarks for the warp.  If you add or change the vtkPoints object, you must call Modified() on it or the transformation might not update.</para>
/// </summary>
  vtkPoints^ GetSourceLandmarks();


  // void SetTargetLandmarks (vtkPoints *target);
/// <summary>
/// <para>Set the target landmarks for the warp.  If you add or change the vtkPoints object, you must call Modified() on it or the transformation might not update.</para>
/// </summary>
  void SetTargetLandmarks(vtkPoints^ target);


  // vtkPoints *GetTargetLandmarks ();
/// <summary>
/// <para>Set the target landmarks for the warp.  If you add or change the vtkPoints object, you must call Modified() on it or the transformation might not update.</para>
/// </summary>
  vtkPoints^ GetTargetLandmarks();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the MTime.</para>
/// </summary>
  unsigned long GetMTime();


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make another transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


// Did not wrap:  vtkThinPlateSplineTransform ();


// Did not wrap:  ~vtkThinPlateSplineTransform ();


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *transform);


// Did not wrap:  void ForwardTransformPoint (const float in[3], float out[3]);


// Did not wrap:  void ForwardTransformPoint (const double in[3], double out[3]);


// Did not wrap:  void ForwardTransformDerivative (const float in[3], float out[3], float derivative[3][3]);


// Did not wrap:  void ForwardTransformDerivative (const double in[3], double out[3], double derivative[3][3]);


// Did not wrap:  vtkThinPlateSplineTransform (const vtkThinPlateSplineTransform &);


// Did not wrap:  void vtkThinPlateSplineTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkThinPlateSplineTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkThinPlateSplineTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkThinPlateSplineTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkThinPlateSplineTransform();


};

} // end vtkHybrid
