#pragma once

// managed includes
#include "vtkImagePadFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMirrorPad : public vtkImagePadFilter
{

public:
// Did not wrap:  static vtkImageMirrorPad *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMirrorPad *NewInstance ();
  vtkImageMirrorPad^ NewInstance();


  // vtkImageMirrorPad *SafeDownCast (vtkObject* o);
  static vtkImageMirrorPad^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkImageMirrorPad ();


// Did not wrap:  ~vtkImageMirrorPad ();


// Did not wrap:  void ComputeInputUpdateExtent (int inExt[6], int outExt[6], int wExt[6]);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageMirrorPad (const vtkImageMirrorPad &);


// Did not wrap:  void vtkImageMirrorPad 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMirrorPad(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMirrorPad(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMirrorPad();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMirrorPad();


};

} // end vtkImaging
