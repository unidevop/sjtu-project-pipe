#pragma once

// managed includes
#include "vtkImageDataDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkStructuredPoints : public vtkImageData
{

public:
// Did not wrap:  static vtkStructuredPoints *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredPoints *NewInstance ();
  vtkStructuredPoints^ NewInstance();


  // vtkStructuredPoints *SafeDownCast (vtkObject* o);
  static vtkStructuredPoints^ SafeDownCast(vtkObject^ o);


  // int GetDataObjectType ();return VTK_STRUCTURED_POINTS 
  int GetDataObjectType();


// Did not wrap:  vtkStructuredPoints ();


// Did not wrap:  ~vtkStructuredPoints ();


// Did not wrap:  vtkStructuredPoints (const vtkStructuredPoints &);


// Did not wrap:  void vtkStructuredPoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredPoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredPoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredPoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredPoints();


};

} // end vtkFiltering
