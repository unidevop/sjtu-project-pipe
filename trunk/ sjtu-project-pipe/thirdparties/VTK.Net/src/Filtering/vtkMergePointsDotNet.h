#pragma once

// managed includes
#include "vtkPointLocatorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkMergePoints : public vtkPointLocator
{

public:
// Did not wrap:  static vtkMergePoints *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMergePoints *NewInstance ();
  vtkMergePoints^ NewInstance();


  // vtkMergePoints *SafeDownCast (vtkObject* o);
  static vtkMergePoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkIdType IsInsertedPoint (const double x[3]);
/// <summary>
/// <para>Determine whether point given by x[3] has been inserted into points list. Return id of previously inserted point if this is true, otherwise return -1.</para>
/// </summary>
  int IsInsertedPoint(array<double>^ x);


  // vtkIdType IsInsertedPoint (double x, double y, double z);return this vtkPointLocator IsInsertedPoint x y z 
/// <summary>
/// <para>Determine whether point given by x[3] has been inserted into points list. Return id of previously inserted point if this is true, otherwise return -1.</para>
/// </summary>
  int IsInsertedPoint(double x, double y, double z);


  // int InsertUniquePoint (const double x[3], vtkIdType &ptId);
/// <summary>
/// <para>Determine whether point given by x[3] has been inserted into points list. Return 0 if point was already in the list, otherwise return 1. If the point was not in the list, it will be ADDED.  In either case, the id of the point (newly inserted or not) is returned in the ptId argument. Note this combines the functionality of IsInsertedPoint() followed by a call to InsertNextPoint().</para>
/// </summary>
  int InsertUniquePoint(array<double>^ x, int% ptId);


// Did not wrap:  vtkMergePoints ();


// Did not wrap:  ~vtkMergePoints ();


// Did not wrap:  vtkMergePoints (const vtkMergePoints &);


// Did not wrap:  void vtkMergePoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMergePoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMergePoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMergePoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMergePoints();


};

} // end vtkFiltering
