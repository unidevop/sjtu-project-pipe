#pragma once

// managed includes
#include "vtkImageDecomposeFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageFourierFilter : public vtkImageDecomposeFilter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageFourierFilter *NewInstance ();
  vtkImageFourierFilter^ NewInstance();


// Did not wrap:  vtkImageFourierFilter ();


// Did not wrap:  ~vtkImageFourierFilter ();


// Did not wrap:  vtkImageFourierFilter (const vtkImageFourierFilter &);


// Did not wrap:  void vtkImageFourierFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageFourierFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageFourierFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageFourierFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageFourierFilter();


};

} // end vtkImaging
