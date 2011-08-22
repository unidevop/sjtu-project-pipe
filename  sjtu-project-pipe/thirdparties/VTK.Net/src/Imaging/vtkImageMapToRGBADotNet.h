#pragma once

// managed includes
#include "vtkImageMapToColorsDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMapToRGBA : public vtkImageMapToColors
{

public:
// Did not wrap:  static vtkImageMapToRGBA *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMapToRGBA *NewInstance ();
  vtkImageMapToRGBA^ NewInstance();


  // vtkImageMapToRGBA *SafeDownCast (vtkObject* o);
  static vtkImageMapToRGBA^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkImageMapToRGBA ();


// Did not wrap:  ~vtkImageMapToRGBA ();


// Did not wrap:  vtkImageMapToRGBA (const vtkImageMapToRGBA &);


// Did not wrap:  void vtkImageMapToRGBA 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMapToRGBA(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMapToRGBA(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMapToRGBA();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMapToRGBA();


};

} // end vtkImaging
