#pragma once

// managed includes
#include "vtkImageAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSimpleImageToImageFilter : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSimpleImageToImageFilter *NewInstance ();
  vtkSimpleImageToImageFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkSimpleImageToImageFilter ();


// Did not wrap:  ~vtkSimpleImageToImageFilter ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void SimpleExecute (vtkImageData *input, vtkImageData *output) = 0;


// Did not wrap:  vtkSimpleImageToImageFilter (const vtkSimpleImageToImageFilter &);


// Did not wrap:  void vtkSimpleImageToImageFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSimpleImageToImageFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSimpleImageToImageFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSimpleImageToImageFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSimpleImageToImageFilter();


};

} // end vtkFiltering
