#pragma once

// managed includes
#include "vtkEncodedGradientEstimatorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkFiniteDifferenceGradientEstimator : public vtkEncodedGradientEstimator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFiniteDifferenceGradientEstimator *NewInstance ();
  vtkFiniteDifferenceGradientEstimator^ NewInstance();


  // vtkFiniteDifferenceGradientEstimator *SafeDownCast (vtkObject* o);
  static vtkFiniteDifferenceGradientEstimator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkFiniteDifferenceGradientEstimator *New ();


  // void SetSampleSpacingInVoxels (int );
/// <summary>
/// <para>Set/Get the spacing between samples for the finite differences method used to compute the normal. This spacing is in voxel units.</para>
/// </summary>
  void SetSampleSpacingInVoxels(int arg0);


  // int GetSampleSpacingInVoxels ();
/// <summary>
/// <para>Set/Get the spacing between samples for the finite differences method used to compute the normal. This spacing is in voxel units.</para>
/// </summary>
  int GetSampleSpacingInVoxels();


// Did not wrap:  vtkFiniteDifferenceGradientEstimator ();


// Did not wrap:  ~vtkFiniteDifferenceGradientEstimator ();


// Did not wrap:  void UpdateNormals (void );


// Did not wrap:  vtkFiniteDifferenceGradientEstimator (const vtkFiniteDifferenceGradientEstimator &);


// Did not wrap:  void vtkFiniteDifferenceGradientEstimator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFiniteDifferenceGradientEstimator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFiniteDifferenceGradientEstimator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFiniteDifferenceGradientEstimator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFiniteDifferenceGradientEstimator();


};

} // end vtkVolumeRendering
