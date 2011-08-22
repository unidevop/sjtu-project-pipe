#pragma once

// managed includes
#include "vtkImageSpatialAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageHybridMedian2D : public vtkImageSpatialAlgorithm
{

public:
// Did not wrap:  static vtkImageHybridMedian2D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageHybridMedian2D *NewInstance ();
  vtkImageHybridMedian2D^ NewInstance();


  // vtkImageHybridMedian2D *SafeDownCast (vtkObject* o);
  static vtkImageHybridMedian2D^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkImageHybridMedian2D ();


// Did not wrap:  ~vtkImageHybridMedian2D ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  vtkImageHybridMedian2D (const vtkImageHybridMedian2D &);


// Did not wrap:  void vtkImageHybridMedian2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageHybridMedian2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageHybridMedian2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageHybridMedian2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageHybridMedian2D();


};

} // end vtkImaging
