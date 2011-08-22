#pragma once

// managed includes
#include "vtkImageSpatialAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageAnisotropicDiffusion3D : public vtkImageSpatialAlgorithm
{

public:
// Did not wrap:  static vtkImageAnisotropicDiffusion3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageAnisotropicDiffusion3D *NewInstance ();
  vtkImageAnisotropicDiffusion3D^ NewInstance();


  // vtkImageAnisotropicDiffusion3D *SafeDownCast (vtkObject* o);
  static vtkImageAnisotropicDiffusion3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfIterations (int num);
/// <summary>
/// <para>This method sets the number of interations which also affects the input neighborhood needed to compute one output pixel.  Each iterations requires an extra pixel layer on the neighborhood.  This is only relavent when you are trying to stream or are requesting a sub extent of the &quot;wholeExtent&quot;.</para>
/// </summary>
  void SetNumberOfIterations(int num);


  // int GetNumberOfIterations ();
/// <summary>
/// <para>Get the number of iterations.</para>
/// </summary>
  int GetNumberOfIterations();


  // void SetDiffusionThreshold (double );
/// <summary>
/// <para>Set/Get the difference threshold that stops diffusion.  when the difference between two pixel is greater than this threshold, the pixels are not diffused.  This causes diffusion to avoid sharp edges. If the GradientMagnitudeThreshold is set, then gradient magnitude is used  for comparison instead of pixel differences.</para>
/// </summary>
  void SetDiffusionThreshold(double arg0);


  // double GetDiffusionThreshold ();
/// <summary>
/// <para>Set/Get the difference threshold that stops diffusion.  when the difference between two pixel is greater than this threshold, the pixels are not diffused.  This causes diffusion to avoid sharp edges. If the GradientMagnitudeThreshold is set, then gradient magnitude is used  for comparison instead of pixel differences.</para>
/// </summary>
  double GetDiffusionThreshold();


  // void SetDiffusionFactor (double );
/// <summary>
/// <para>Set/Get the difference factor</para>
/// </summary>
  void SetDiffusionFactor(double arg0);


  // double GetDiffusionFactor ();
/// <summary>
/// <para>Set/Get the difference factor</para>
/// </summary>
  double GetDiffusionFactor();


  // void SetFaces (int );
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void SetFaces(int arg0);


  // int GetFaces ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  int GetFaces();


  // void FacesOn ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void FacesOn();


  // void FacesOff ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void FacesOff();


  // void SetEdges (int );
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void SetEdges(int arg0);


  // int GetEdges ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  int GetEdges();


  // void EdgesOn ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void EdgesOn();


  // void EdgesOff ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void EdgesOff();


  // void SetCorners (int );
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void SetCorners(int arg0);


  // int GetCorners ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  int GetCorners();


  // void CornersOn ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void CornersOn();


  // void CornersOff ();
/// <summary>
/// <para>Choose neighbors to diffuse (6 faces, 12 edges, 8 corners).</para>
/// </summary>
  void CornersOff();


  // void SetGradientMagnitudeThreshold (int );
/// <summary>
/// <para>Switch between gradient magnitude threshold and pixel gradient threshold.</para>
/// </summary>
  void SetGradientMagnitudeThreshold(int arg0);


  // int GetGradientMagnitudeThreshold ();
/// <summary>
/// <para>Switch between gradient magnitude threshold and pixel gradient threshold.</para>
/// </summary>
  int GetGradientMagnitudeThreshold();


  // void GradientMagnitudeThresholdOn ();
/// <summary>
/// <para>Switch between gradient magnitude threshold and pixel gradient threshold.</para>
/// </summary>
  void GradientMagnitudeThresholdOn();


  // void GradientMagnitudeThresholdOff ();
/// <summary>
/// <para>Switch between gradient magnitude threshold and pixel gradient threshold.</para>
/// </summary>
  void GradientMagnitudeThresholdOff();


// Did not wrap:  vtkImageAnisotropicDiffusion3D ();


// Did not wrap:  ~vtkImageAnisotropicDiffusion3D ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  void Iterate (vtkImageData *in, vtkImageData *out, double ar0, double ar1, double ar3, int *coreExtent, int count);


// Did not wrap:  vtkImageAnisotropicDiffusion3D (const vtkImageAnisotropicDiffusion3D &);


// Did not wrap:  void vtkImageAnisotropicDiffusion3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageAnisotropicDiffusion3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageAnisotropicDiffusion3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageAnisotropicDiffusion3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageAnisotropicDiffusion3D();


};

} // end vtkImaging
