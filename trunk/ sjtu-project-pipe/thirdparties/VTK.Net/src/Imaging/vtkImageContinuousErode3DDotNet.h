#pragma once

// managed includes
#include "vtkImageSpatialAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageContinuousErode3D : public vtkImageSpatialAlgorithm
{

public:
// Did not wrap:  static vtkImageContinuousErode3D *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Construct an instance of vtkImageContinuousErode3D filter. By default zero values are eroded.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Construct an instance of vtkImageContinuousErode3D filter. By default zero values are eroded.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkImageContinuousErode3D *NewInstance ();
/// <summary>
/// <para>Construct an instance of vtkImageContinuousErode3D filter. By default zero values are eroded.</para>
/// </summary>
  vtkImageContinuousErode3D^ NewInstance();


  // vtkImageContinuousErode3D *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Construct an instance of vtkImageContinuousErode3D filter. By default zero values are eroded.</para>
/// </summary>
  static vtkImageContinuousErode3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetKernelSize (int size0, int size1, int size2);
/// <summary>
/// <para>This method sets the size of the neighborhood.  It also sets the  default middle of the neighborhood and computes the elliptical foot print.</para>
/// </summary>
  void SetKernelSize(int size0, int size1, int size2);


// Did not wrap:  vtkImageContinuousErode3D ();


// Did not wrap:  ~vtkImageContinuousErode3D ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageContinuousErode3D (const vtkImageContinuousErode3D &);


// Did not wrap:  void vtkImageContinuousErode3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageContinuousErode3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageContinuousErode3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageContinuousErode3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageContinuousErode3D();


};

} // end vtkImaging
