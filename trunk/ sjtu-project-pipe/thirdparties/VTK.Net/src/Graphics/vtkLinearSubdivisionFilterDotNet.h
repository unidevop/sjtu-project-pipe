#pragma once

// managed includes
#include "vtkInterpolatingSubdivisionFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkLinearSubdivisionFilter : public vtkInterpolatingSubdivisionFilter
{

public:
// Did not wrap:  static vtkLinearSubdivisionFilter *New ();


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


  // vtkLinearSubdivisionFilter *NewInstance ();
/// <summary>
/// <para>Construct object with NumberOfSubdivisions set to 1.</para>
/// </summary>
  vtkLinearSubdivisionFilter^ NewInstance();


  // vtkLinearSubdivisionFilter *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Construct object with NumberOfSubdivisions set to 1.</para>
/// </summary>
  static vtkLinearSubdivisionFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkLinearSubdivisionFilter ();


// Did not wrap:  ~vtkLinearSubdivisionFilter ();


// Did not wrap:  void GenerateSubdivisionPoints (vtkPolyData *inputDS, vtkIntArray *edgeData, vtkPoints *outputPts, vtkPointData *outputPD);


// Did not wrap:  vtkLinearSubdivisionFilter (const vtkLinearSubdivisionFilter &);


// Did not wrap:  void vtkLinearSubdivisionFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLinearSubdivisionFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLinearSubdivisionFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLinearSubdivisionFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLinearSubdivisionFilter();


};

} // end vtkGraphics
