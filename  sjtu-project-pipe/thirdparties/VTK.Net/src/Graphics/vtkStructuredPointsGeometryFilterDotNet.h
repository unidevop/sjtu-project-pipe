#pragma once

// managed includes
#include "vtkImageDataGeometryFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkStructuredPointsGeometryFilter : public vtkImageDataGeometryFilter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredPointsGeometryFilter *NewInstance ();
  vtkStructuredPointsGeometryFilter^ NewInstance();


  // vtkStructuredPointsGeometryFilter *SafeDownCast (vtkObject* o);
  static vtkStructuredPointsGeometryFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkStructuredPointsGeometryFilter *New ();


// Did not wrap:  vtkStructuredPointsGeometryFilter ();


// Did not wrap:  ~vtkStructuredPointsGeometryFilter ();


// Did not wrap:  vtkStructuredPointsGeometryFilter (const vtkStructuredPointsGeometryFilter &);


// Did not wrap:  void vtkStructuredPointsGeometryFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredPointsGeometryFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredPointsGeometryFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredPointsGeometryFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredPointsGeometryFilter();


};

} // end vtkGraphics
