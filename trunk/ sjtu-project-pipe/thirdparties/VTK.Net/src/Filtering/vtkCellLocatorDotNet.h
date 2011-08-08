#pragma once

// managed includes
#include "vtkLocatorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkGenericCell;
ref class vtkPolyData;

public ref class vtkCellLocator : public vtkLocator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellLocator *NewInstance ();
  vtkCellLocator^ NewInstance();


  // vtkCellLocator *SafeDownCast (vtkObject* o);
  static vtkCellLocator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCellLocator *New ();


  // void SetNumberOfCellsPerBucket (int );
/// <summary>
/// <para>Specify the average number of cells in each octant.</para>
/// </summary>
  void SetNumberOfCellsPerBucket(int arg0);


  // int GetNumberOfCellsPerBucketMinValue ();
/// <summary>
/// <para>Specify the average number of cells in each octant.</para>
/// </summary>
  int GetNumberOfCellsPerBucketMinValue();


  // int GetNumberOfCellsPerBucketMaxValue ();
/// <summary>
/// <para>Specify the average number of cells in each octant.</para>
/// </summary>
  int GetNumberOfCellsPerBucketMaxValue();


  // int GetNumberOfCellsPerBucket ();
/// <summary>
/// <para>Specify the average number of cells in each octant.</para>
/// </summary>
  int GetNumberOfCellsPerBucket();


  // void SetCacheCellBounds (int );
/// <summary>
/// <para>Boolean controls whether the bounds of each cell are computed only once and then saved.  Should be 10 to 20% faster if repeatedly  calling any of the FindClosestPoint routines and the extra memory won't cause disk caching (24 extra bytes per cell are required to save the bounds).</para>
/// </summary>
  void SetCacheCellBounds(int arg0);


  // int GetCacheCellBounds ();
/// <summary>
/// <para>Boolean controls whether the bounds of each cell are computed only once and then saved.  Should be 10 to 20% faster if repeatedly  calling any of the FindClosestPoint routines and the extra memory won't cause disk caching (24 extra bytes per cell are required to save the bounds).</para>
/// </summary>
  int GetCacheCellBounds();


  // void CacheCellBoundsOn ();
/// <summary>
/// <para>Boolean controls whether the bounds of each cell are computed only once and then saved.  Should be 10 to 20% faster if repeatedly  calling any of the FindClosestPoint routines and the extra memory won't cause disk caching (24 extra bytes per cell are required to save the bounds).</para>
/// </summary>
  void CacheCellBoundsOn();


  // void CacheCellBoundsOff ();
/// <summary>
/// <para>Boolean controls whether the bounds of each cell are computed only once and then saved.  Should be 10 to 20% faster if repeatedly  calling any of the FindClosestPoint routines and the extra memory won't cause disk caching (24 extra bytes per cell are required to save the bounds).</para>
/// </summary>
  void CacheCellBoundsOff();


  // virtual int IntersectWithLine (double a0[3], double a1[3], double tol, double &t, double x[3], double pcoords[3], int &subId);
/// <summary>
/// <para>Return intersection point (if any) of finite line with cells contained in cell locator.</para>
/// </summary>
  int IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // virtual int IntersectWithLine (double a0[3], double a1[3], double tol, double &t, double x[3], double pcoords[3], int &subId, vtkIdType &cellId);
/// <summary>
/// <para>Return intersection point (if any) AND the cell which was intersected by the finite line.</para>
/// </summary>
  int IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId, int% cellId);


  // virtual int IntersectWithLine (double a0[3], double a1[3], double tol, double &t, double x[3], double pcoords[3], int &subId, vtkIdType &cellId, vtkGenericCell *cell);
/// <summary>
/// <para>Return intersection point (if any) AND the cell which was intersected by the finite line. The cell is returned as a cell id and as a generic cell.</para>
/// </summary>
  int IntersectWithLine(array<double>^ a0, array<double>^ a1, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId, int% cellId, vtkGenericCell^ cell);


  // void FindClosestPoint (double x[3], double closestPoint[3], vtkIdType &cellId, int &subId, double &dist2);
/// <summary>
/// <para>Return the closest point and the cell which is closest to the point x. The closest point is somewhere on a cell, it need not be one of the vertices of the cell.</para>
/// </summary>
  void FindClosestPoint(array<double>^ x, array<double>^ closestPoint, int% cellId, int% subId, double% dist2);


  // void FindClosestPoint (double x[3], double closestPoint[3], vtkGenericCell *cell, vtkIdType &cellId, int &subId, double &dist2);
/// <summary>
/// <para>Return the closest point and the cell which is closest to the point x. The closest point is somewhere on a cell, it need not be one of the vertices of the cell.  This version takes in a vtkGenericCell to avoid allocating and deallocating the cell.  This is much faster than the version which does not take a *cell, especially when this function is called many times in a row such as by a for loop, where the allocation and deallocation can be done only once outside the for loop.  If a cell is found, &quot;cell&quot; contains the points and ptIds for the cell &quot;cellId&quot; upon exit.</para>
/// </summary>
  void FindClosestPoint(array<double>^ x, array<double>^ closestPoint, vtkGenericCell^ cell, int% cellId, int% subId, double% dist2);


  // int FindClosestPointWithinRadius (double x[3], double radius, double closestPoint[3], vtkIdType &cellId, int &subId, double &dist2);
/// <summary>
/// <para>Return the closest point within a specified radius and the cell which is closest to the point x. The closest point is somewhere on a cell, it need not be one of the vertices of the cell. This method returns 1 if a point is found within the specified radius. If there are no cells within the specified radius, the method returns 0 and the values of closestPoint, cellId, subId, and dist2 are undefined.</para>
/// </summary>
  int FindClosestPointWithinRadius(array<double>^ x, double radius, array<double>^ closestPoint, int% cellId, int% subId, double% dist2);


  // int FindClosestPointWithinRadius (double x[3], double radius, double closestPoint[3], vtkGenericCell *cell, vtkIdType &cellId, int &subId, double &dist2);
/// <summary>
/// <para>Return the closest point within a specified radius and the cell which is closest to the point x. The closest point is somewhere on a cell, it need not be one of the vertices of the cell. This method returns 1 if a point is found within the specified radius. If there are no cells within the specified radius, the method returns 0 and the values of closestPoint, cellId, subId, and dist2 are undefined. This version takes in a vtkGenericCell to avoid allocating and deallocating the cell.  This is much faster than the version which does not take a *cell, especially when this function is called many times in a row such as by a for loop, where the allocation and deallocation can be done only once outside the for loop.  If a closest point is found, &quot;cell&quot; contains the points and ptIds for the cell &quot;cellId&quot; upon exit.</para>
/// </summary>
  int FindClosestPointWithinRadius(array<double>^ x, double radius, array<double>^ closestPoint, vtkGenericCell^ cell, int% cellId, int% subId, double% dist2);


  // int FindClosestPointWithinRadius (double x[3], double radius, double closestPoint[3], vtkGenericCell *cell, vtkIdType &cellId, int &subId, double &dist2, int &inside);
/// <summary>
/// <para>Return the closest point within a specified radius and the cell which is closest to the point x. The closest point is somewhere on a cell, it need not be one of the vertices of the cell. This method returns 1 if a point is found within the specified radius. If there are no cells within the specified radius, the method returns 0 and the values of closestPoint, cellId, subId, and dist2 are undefined. This version takes in a vtkGenericCell to avoid allocating and deallocating the cell.  This is much faster than the version which does not take a *cell, especially when this function is called many times in a row such as by a for loop, where the allocation and dealloction can be done only once outside the for loop.  If a closest point is found, &quot;cell&quot; contains the points and ptIds for the cell &quot;cellId&quot; upon exit.  If a closest point is found, inside returns the return value of the EvaluatePosition call to the closest cell; inside(=1) or outside(=0).</para>
/// </summary>
  int FindClosestPointWithinRadius(array<double>^ x, double radius, array<double>^ closestPoint, vtkGenericCell^ cell, int% cellId, int% subId, double% dist2, int% inside);


  // virtual vtkIdList *GetCells (int bucket);
/// <summary>
/// <para>Get the cells in a particular bucket.</para>
/// </summary>
  vtkIdList^ GetCells(int bucket);


  // virtual int GetNumberOfBuckets (void );
/// <summary>
/// <para>Return number of buckets available. Insure that the locator has been  built before attempting to access buckets (octants).</para>
/// </summary>
  int GetNumberOfBuckets();


  // void FreeSearchStructure ();
/// <summary>
/// <para>Satisfy vtkLocator abstract interface.</para>
/// </summary>
  void FreeSearchStructure();


  // void BuildLocator ();
/// <summary>
/// <para>Satisfy vtkLocator abstract interface.</para>
/// </summary>
  void BuildLocator();


  // void GenerateRepresentation (int level, vtkPolyData *pd);
/// <summary>
/// <para>Satisfy vtkLocator abstract interface.</para>
/// </summary>
  void GenerateRepresentation(int level, vtkPolyData^ pd);


// Did not wrap:  vtkCellLocator ();


// Did not wrap:  ~vtkCellLocator ();


// Did not wrap:  void GetBucketNeighbors (int ijk[3], int ndivs, int level);


// Did not wrap:  void GetOverlappingBuckets (double x[3], int ijk[3], double dist, int prevMinLevel[3], int prevMaxLevel[3]);


// Did not wrap:  void ClearCellHasBeenVisited ();


// Did not wrap:  void ClearCellHasBeenVisited (int id);


// Did not wrap:  double Distance2ToBucket (double x[3], int nei[3]);


// Did not wrap:  double Distance2ToBounds (double x[3], double bounds[6]);


// Did not wrap:  void MarkParents (void *, int , int , int , int , int );


// Did not wrap:  void GetChildren (int idx, int level, int children[8]);


// Did not wrap:  int GenerateIndex (int offset, int numDivs, int i, int j, int k, vtkIdType &idx);


// Did not wrap:  void GenerateFace (int face, int numDivs, int i, int j, int k, vtkPoints *pts, vtkCellArray *polys);


// Did not wrap:  void ComputeOctantBounds (int i, int j, int k);


// Did not wrap:  int IsInOctantBounds (double x[3]);if this OctantBounds x x this OctantBounds this OctantBounds x x this OctantBounds this OctantBounds x x this OctantBounds return else return 


// Did not wrap:  vtkCellLocator (const vtkCellLocator &);


// Did not wrap:  void vtkCellLocator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellLocator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellLocator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellLocator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellLocator();


};

} // end vtkFiltering
