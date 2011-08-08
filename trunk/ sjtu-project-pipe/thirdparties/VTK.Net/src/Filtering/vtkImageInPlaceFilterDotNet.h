#pragma once

// managed includes
#include "vtkImageAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageInPlaceFilter : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageInPlaceFilter *NewInstance ();
  vtkImageInPlaceFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkImageInPlaceFilter ();


// Did not wrap:  ~vtkImageInPlaceFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  void CopyData (vtkImageData *in, vtkImageData *out);


// Did not wrap:  vtkImageInPlaceFilter (const vtkImageInPlaceFilter &);


// Did not wrap:  void vtkImageInPlaceFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageInPlaceFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageInPlaceFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageInPlaceFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageInPlaceFilter();


};

} // end vtkFiltering
