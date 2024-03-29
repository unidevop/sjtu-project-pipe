#pragma once

// managed includes
#include "vtkImageDecomposeFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageCityBlockDistance : public vtkImageDecomposeFilter
{

public:
// Did not wrap:  static vtkImageCityBlockDistance *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageCityBlockDistance *NewInstance ();
  vtkImageCityBlockDistance^ NewInstance();


  // vtkImageCityBlockDistance *SafeDownCast (vtkObject* o);
  static vtkImageCityBlockDistance^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkImageCityBlockDistance ();


// Did not wrap:  ~vtkImageCityBlockDistance ();


// Did not wrap:  virtual int IterativeRequestUpdateExtent (vtkInformation *in, vtkInformation *out);


// Did not wrap:  virtual int IterativeRequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void AllocateOutputScalars (vtkImageData *outData, int *updateExtent, int *wholeExtent);


// Did not wrap:  vtkImageCityBlockDistance (const vtkImageCityBlockDistance &);


// Did not wrap:  void vtkImageCityBlockDistance 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageCityBlockDistance(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageCityBlockDistance(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageCityBlockDistance();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageCityBlockDistance();


};

} // end vtkImaging
