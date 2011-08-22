#pragma once

// managed includes
#include "vtkImageSpatialAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageContinuousDilate3D : public vtkImageSpatialAlgorithm
{

public:
// Did not wrap:  static vtkImageContinuousDilate3D *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Construct an instance of vtkImageContinuousDilate3D filter. By default zero values are dilated.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Construct an instance of vtkImageContinuousDilate3D filter. By default zero values are dilated.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkImageContinuousDilate3D *NewInstance ();
/// <summary>
/// <para>Construct an instance of vtkImageContinuousDilate3D filter. By default zero values are dilated.</para>
/// </summary>
  vtkImageContinuousDilate3D^ NewInstance();


  // vtkImageContinuousDilate3D *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Construct an instance of vtkImageContinuousDilate3D filter. By default zero values are dilated.</para>
/// </summary>
  static vtkImageContinuousDilate3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetKernelSize (int size0, int size1, int size2);
/// <summary>
/// <para>This method sets the size of the neighborhood.  It also sets the  default middle of the neighborhood and computes the elliptical foot print.</para>
/// </summary>
  void SetKernelSize(int size0, int size1, int size2);


// Did not wrap:  vtkImageContinuousDilate3D ();


// Did not wrap:  ~vtkImageContinuousDilate3D ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageContinuousDilate3D (const vtkImageContinuousDilate3D &);


// Did not wrap:  void vtkImageContinuousDilate3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageContinuousDilate3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageContinuousDilate3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageContinuousDilate3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageContinuousDilate3D();


};

} // end vtkImaging
