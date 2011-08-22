#pragma once

// managed includes
#include "vtkMarchingCubesDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDiscreteMarchingCubes : public vtkMarchingCubes
{

public:
// Did not wrap:  static vtkDiscreteMarchingCubes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDiscreteMarchingCubes *NewInstance ();
  vtkDiscreteMarchingCubes^ NewInstance();


  // vtkDiscreteMarchingCubes *SafeDownCast (vtkObject* o);
  static vtkDiscreteMarchingCubes^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkDiscreteMarchingCubes ();


// Did not wrap:  ~vtkDiscreteMarchingCubes ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkDiscreteMarchingCubes (const vtkDiscreteMarchingCubes &);


// Did not wrap:  void vtkDiscreteMarchingCubes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDiscreteMarchingCubes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDiscreteMarchingCubes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDiscreteMarchingCubes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDiscreteMarchingCubes();


};

} // end vtkGraphics
