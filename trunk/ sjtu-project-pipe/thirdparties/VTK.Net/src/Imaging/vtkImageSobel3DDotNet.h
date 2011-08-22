#pragma once

// managed includes
#include "vtkImageSpatialAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageSobel3D : public vtkImageSpatialAlgorithm
{

public:
// Did not wrap:  static vtkImageSobel3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageSobel3D *NewInstance ();
  vtkImageSobel3D^ NewInstance();


  // vtkImageSobel3D *SafeDownCast (vtkObject* o);
  static vtkImageSobel3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkImageSobel3D ();


// Did not wrap:  ~vtkImageSobel3D ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageSobel3D (const vtkImageSobel3D &);


// Did not wrap:  void vtkImageSobel3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageSobel3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageSobel3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageSobel3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageSobel3D();


};

} // end vtkImaging
