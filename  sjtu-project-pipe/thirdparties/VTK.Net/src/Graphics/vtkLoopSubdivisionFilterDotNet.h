#pragma once

// managed includes
#include "vtkApproximatingSubdivisionFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkLoopSubdivisionFilter : public vtkApproximatingSubdivisionFilter
{

public:
// Did not wrap:  static vtkLoopSubdivisionFilter *New ();


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


  // vtkLoopSubdivisionFilter *NewInstance ();
/// <summary>
/// <para>Construct object with NumberOfSubdivisions set to 1.</para>
/// </summary>
  vtkLoopSubdivisionFilter^ NewInstance();


  // vtkLoopSubdivisionFilter *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Construct object with NumberOfSubdivisions set to 1.</para>
/// </summary>
  static vtkLoopSubdivisionFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkLoopSubdivisionFilter ();


// Did not wrap:  ~vtkLoopSubdivisionFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void GenerateSubdivisionPoints (vtkPolyData *inputDS, vtkIntArray *edgeData, vtkPoints *outputPts, vtkPointData *outputPD);


// Did not wrap:  void GenerateEvenStencil (vtkIdType p1, vtkPolyData *polys, vtkIdList *stencilIds, double *weights);


// Did not wrap:  void GenerateOddStencil (vtkIdType p1, vtkIdType p2, vtkPolyData *polys, vtkIdList *stencilIds, double *weights);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkLoopSubdivisionFilter (const vtkLoopSubdivisionFilter &);


// Did not wrap:  void vtkLoopSubdivisionFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLoopSubdivisionFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLoopSubdivisionFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLoopSubdivisionFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLoopSubdivisionFilter();


};

} // end vtkGraphics
