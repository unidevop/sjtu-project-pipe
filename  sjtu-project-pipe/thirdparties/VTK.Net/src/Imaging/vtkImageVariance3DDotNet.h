#pragma once

// managed includes
#include "vtkImageSpatialAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageVariance3D : public vtkImageSpatialAlgorithm
{

public:
// Did not wrap:  static vtkImageVariance3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageVariance3D *NewInstance ();
  vtkImageVariance3D^ NewInstance();


  // vtkImageVariance3D *SafeDownCast (vtkObject* o);
  static vtkImageVariance3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetKernelSize (int size0, int size1, int size2);
/// <summary>
/// <para>This method sets the size of the neighborhood.  It also sets the default middle of the neighborhood and computes the Elliptical foot print.</para>
/// </summary>
  void SetKernelSize(int size0, int size1, int size2);


// Did not wrap:  vtkImageVariance3D ();


// Did not wrap:  ~vtkImageVariance3D ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageVariance3D (const vtkImageVariance3D &);


// Did not wrap:  void vtkImageVariance3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageVariance3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageVariance3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageVariance3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageVariance3D();


};

} // end vtkImaging
