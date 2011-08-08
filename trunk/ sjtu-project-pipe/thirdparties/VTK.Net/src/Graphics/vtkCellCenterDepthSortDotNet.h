#pragma once

// managed includes
#include "vtkVisibilitySortDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkCellCenterDepthSort : public vtkVisibilitySort
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellCenterDepthSort *NewInstance ();
  vtkCellCenterDepthSort^ NewInstance();


  // vtkCellCenterDepthSort *SafeDownCast (vtkObject* o);
  static vtkCellCenterDepthSort^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCellCenterDepthSort *New ();


  // virtual void InitTraversal ();
  void InitTraversal();


  // virtual vtkIdTypeArray *GetNextCells ();
  vtkIdTypeArray^ GetNextCells();


// Did not wrap:  vtkCellCenterDepthSort ();


// Did not wrap:  virtual ~vtkCellCenterDepthSort ();


// Did not wrap:  virtual float *ComputeProjectionVector ();


// Did not wrap:  virtual void ComputeCellCenters ();


// Did not wrap:  virtual void ComputeDepths ();


// Did not wrap:  vtkCellCenterDepthSort (const vtkCellCenterDepthSort &);


// Did not wrap:  void vtkCellCenterDepthSort 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellCenterDepthSort(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellCenterDepthSort(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellCenterDepthSort();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellCenterDepthSort();


};

} // end vtkGraphics
