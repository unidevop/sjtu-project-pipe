#pragma once

// managed includes
#include "vtkUnstructuredGridVolumeRayCastFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridBunykRayCastFunction : public vtkUnstructuredGridVolumeRayCastFunction
{

public:
// Did not wrap:  static vtkUnstructuredGridBunykRayCastFunction *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridBunykRayCastFunction *NewInstance ();
  vtkUnstructuredGridBunykRayCastFunction^ NewInstance();


  // vtkUnstructuredGridBunykRayCastFunction *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGridBunykRayCastFunction^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkUnstructuredGridBunykRayCastFunction ();


// Did not wrap:  ~vtkUnstructuredGridBunykRayCastFunction ();


// Did not wrap:  vtkUnstructuredGridBunykRayCastFunction (const vtkUnstructuredGridBunykRayCastFunction &);


// Did not wrap:  void vtkUnstructuredGridBunykRayCastFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridBunykRayCastFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridBunykRayCastFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridBunykRayCastFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridBunykRayCastFunction();


};

} // end vtkVolumeRendering
