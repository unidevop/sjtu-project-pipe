#pragma once

// managed includes
#include "vtkInterpolatingSubdivisionFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkButterflySubdivisionFilter : public vtkInterpolatingSubdivisionFilter
{

public:
// Did not wrap:  static vtkButterflySubdivisionFilter *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Construct object with NumberOfSubdivisions set to 1.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Construct object with NumberOfSubdivisions set to 1.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkButterflySubdivisionFilter *NewInstance ();
/// <summary>
/// <para>Construct object with NumberOfSubdivisions set to 1.</para>
/// </summary>
  vtkButterflySubdivisionFilter^ NewInstance();


  // vtkButterflySubdivisionFilter *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Construct object with NumberOfSubdivisions set to 1.</para>
/// </summary>
  static vtkButterflySubdivisionFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkButterflySubdivisionFilter ();


// Did not wrap:  ~vtkButterflySubdivisionFilter ();


// Did not wrap:  void GenerateSubdivisionPoints (vtkPolyData *inputDS, vtkIntArray *edgeData, vtkPoints *outputPts, vtkPointData *outputPD);


// Did not wrap:  void GenerateButterflyStencil (vtkIdType p1, vtkIdType p2, vtkPolyData *polys, vtkIdList *stencilIds, double *weights);


// Did not wrap:  void GenerateLoopStencil (vtkIdType p1, vtkIdType p2, vtkPolyData *polys, vtkIdList *stencilIds, double *weights);


// Did not wrap:  void GenerateBoundaryStencil (vtkIdType p1, vtkIdType p2, vtkPolyData *polys, vtkIdList *stencilIds, double *weights);


// Did not wrap:  vtkButterflySubdivisionFilter (const vtkButterflySubdivisionFilter &);


// Did not wrap:  void vtkButterflySubdivisionFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkButterflySubdivisionFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkButterflySubdivisionFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkButterflySubdivisionFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkButterflySubdivisionFilter();


};

} // end vtkGraphics
