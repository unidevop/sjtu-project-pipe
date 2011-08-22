#pragma once

// managed includes
#include "vtkLocatorDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkPolyData;

public ref class vtkPointLocator : public vtkLocator
{

public:
// Did not wrap:  static vtkPointLocator *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointLocator *NewInstance ();
  vtkPointLocator^ NewInstance();


  // vtkPointLocator *SafeDownCast (vtkObject* o);
  static vtkPointLocator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDivisions (int , int , int );
/// <summary>
/// <para>Set the number of divisions in x-y-z directions.</para>
/// </summary>
  void SetDivisions(int arg0, int arg1, int arg2);


  // void SetDivisions (int  a[3]);
/// <summary>
/// <para>Set the number of divisions in x-y-z directions.</para>
/// </summary>
  void SetDivisions(array<int>^ a);


  // int  *GetDivisions ();
/// <summary>
/// <para>Set the number of divisions in x-y-z directions.</para>
/// </summary>
  array<int>^ GetDivisions();


  // void SetNumberOfPointsPerBucket (int );
/// <summary>
/// <para>Specify the average number of points in each bucket.</para>
/// </summary>
  void SetNumberOfPointsPerBucket(int arg0);


  // int GetNumberOfPointsPerBucketMinValue ();
/// <summary>
/// <para>Specify the average number of points in each bucket.</para>
/// </summary>
  int GetNumberOfPointsPerBucketMinValue();


  // int GetNumberOfPointsPerBucketMaxValue ();
/// <summary>
/// <para>Specify the average number of points in each bucket.</para>
/// </summary>
  int GetNumberOfPointsPerBucketMaxValue();


  // int GetNumberOfPointsPerBucket ();
/// <summary>
/// <para>Specify the average number of points in each bucket.</para>
/// </summary>
  int GetNumberOfPointsPerBucket();


  // virtual vtkIdType FindClosestPoint (const double x[3]);
/// <summary>
/// <para>Given a position x, return the id of the point closest to it. Alternative method requires separate x-y-z values. These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  int FindClosestPoint(array<double>^ x);


  // vtkIdType FindClosestPoint (double x, double y, double z);
/// <summary>
/// <para>Given a position x, return the id of the point closest to it. Alternative method requires separate x-y-z values. These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  int FindClosestPoint(double x, double y, double z);


  // vtkIdType FindClosestPointWithinRadius (double radius, const double x[3], double &dist2);
/// <summary>
/// <para>Given a position x and a radius r, return the id of the point  closest to the point in that radius. These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first. dist2 returns the squared distance to the point.</para>
/// </summary>
  int FindClosestPointWithinRadius(double radius, array<double>^ x, double% dist2);


  // vtkIdType FindClosestPointWithinRadius (double radius, const double x[3], double inputDataLength, double &dist2);
/// <summary>
/// <para>Given a position x and a radius r, return the id of the point  closest to the point in that radius. These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first. dist2 returns the squared distance to the point.</para>
/// </summary>
  int FindClosestPointWithinRadius(double radius, array<double>^ x, double inputDataLength, double% dist2);


  // virtual int InitPointInsertion (vtkPoints *newPts, const double bounds[6]);
/// <summary>
/// <para>Initialize the point insertion process. The newPts is an object representing point coordinates into which incremental insertion methods place their data. Bounds are the box that the points lie in. Not thread safe.</para>
/// </summary>
  int InitPointInsertion(vtkPoints^ newPts, array<double>^ bounds);


  // virtual int InitPointInsertion (vtkPoints *newPts, const double bounds[6], vtkIdType estSize);
/// <summary>
/// <para>Initialize the point insertion process. The newPts is an object representing point coordinates into which incremental insertion methods place their data. Bounds are the box that the points lie in. Not thread safe.</para>
/// </summary>
  int InitPointInsertion(vtkPoints^ newPts, array<double>^ bounds, int estSize);


  // virtual void InsertPoint (vtkIdType ptId, const double x[3]);
/// <summary>
/// <para>Incrementally insert a point into search structure with a particular index value. You should use the method IsInsertedPoint() to see whether  this point has already been inserted (that is, if you desire to prevent duplicate points). Before using this method you must make sure that  newPts have been supplied, the bounds has been set properly, and that  divs are properly set. (See InitPointInsertion().) Not thread safe.</para>
/// </summary>
  void InsertPoint(int ptId, array<double>^ x);


  // virtual vtkIdType InsertNextPoint (const double x[3]);
/// <summary>
/// <para>Incrementally insert a point into search structure. The method returns the insertion location (i.e., point id). You should use the method  IsInsertedPoint() to see whether this point has already been inserted (that is, if you desire to prevent duplicate points). Before using this method you must make sure that newPts have been supplied, the bounds has been set properly, and that divs are  properly set. (See InitPointInsertion().) Not thread safe.</para>
/// </summary>
  int InsertNextPoint(array<double>^ x);


  // vtkIdType IsInsertedPoint (double x, double y, double z);double xyz xyz x xyz y xyz z return this IsInsertedPoint xyz 
/// <summary>
/// <para>Determine whether point given by x[3] has been inserted into points list. Return id of previously inserted point if this is true, otherwise return -1. This method is thread safe.</para>
/// </summary>
  int IsInsertedPoint(double x, double y, double z);


  // virtual vtkIdType IsInsertedPoint (const double x[3]);
/// <summary>
/// <para>Determine whether point given by x[3] has been inserted into points list. Return id of previously inserted point if this is true, otherwise return -1. This method is thread safe.</para>
/// </summary>
  int IsInsertedPoint(array<double>^ x);


  // virtual int InsertUniquePoint (const double x[3], vtkIdType &ptId);
/// <summary>
/// <para>Determine whether point given by x[3] has been inserted into points list. Return 0 if point was already in the list, otherwise return 1. If the point was not in the list, it will be ADDED.  In either case, the id of the point (newly inserted or not) is returned in the ptId argument. Note this combines the functionality of IsInsertedPoint() followed by a call to InsertNextPoint(). This method is not thread safe.</para>
/// </summary>
  int InsertUniquePoint(array<double>^ x, int% ptId);


  // virtual vtkIdType FindClosestInsertedPoint (const double x[3]);
/// <summary>
/// <para>Given a position x, return the id of the point closest to it. This method is used when performing incremental point insertion. Note that -1  indicates that no point was found. This method is thread safe if  BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  int FindClosestInsertedPoint(array<double>^ x);


  // virtual void FindClosestNPoints (int N, const double x[3], vtkIdList *result);
/// <summary>
/// <para>Find the closest N points to a position. This returns the closest N points to a position. A faster method could be created that returned N close points to a position, but necessarily the exact N closest. The returned points are sorted from closest to farthest. These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  void FindClosestNPoints(int N, array<double>^ x, vtkIdList^ result);


  // virtual void FindClosestNPoints (int N, double x, double y, double z, vtkIdList *result);
/// <summary>
/// <para>Find the closest N points to a position. This returns the closest N points to a position. A faster method could be created that returned N close points to a position, but necessarily the exact N closest. The returned points are sorted from closest to farthest. These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  void FindClosestNPoints(int N, double x, double y, double z, vtkIdList^ result);


  // virtual void FindDistributedPoints (int N, const double x[3], vtkIdList *result, int M);
/// <summary>
/// <para>Find the closest points to a position such that each octant of space around the position contains at least N points. Loosely  limit the search to a maximum number of points evaluated, M.  These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  void FindDistributedPoints(int N, array<double>^ x, vtkIdList^ result, int M);


  // virtual void FindDistributedPoints (int N, double x, double y, double z, vtkIdList *result, int M);
/// <summary>
/// <para>Find the closest points to a position such that each octant of space around the position contains at least N points. Loosely  limit the search to a maximum number of points evaluated, M.  These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  void FindDistributedPoints(int N, double x, double y, double z, vtkIdList^ result, int M);


  // virtual void FindPointsWithinRadius (double R, const double x[3], vtkIdList *result);
/// <summary>
/// <para>Find all points within a specified radius R of position x. The result is not sorted in any specific manner. These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  void FindPointsWithinRadius(double R, array<double>^ x, vtkIdList^ result);


  // virtual void FindPointsWithinRadius (double R, double x, double y, double z, vtkIdList *result);
/// <summary>
/// <para>Find all points within a specified radius R of position x. The result is not sorted in any specific manner. These methods are thread safe if BuildLocator() is directly or indirectly called from a single thread first.</para>
/// </summary>
  void FindPointsWithinRadius(double R, double x, double y, double z, vtkIdList^ result);


  // virtual vtkIdList *GetPointsInBucket (const double x[3], int ijk[3]);
/// <summary>
/// <para>Given a position x, return the list of points in the bucket that contains the point. It is possible that NULL is returned. The user provides an ijk array that is the indices into the locator. This method is thread safe.</para>
/// </summary>
  vtkIdList^ GetPointsInBucket(array<double>^ x, array<int>^ ijk);


  // vtkPoints *GetPoints ();
/// <summary>
/// <para>Provide an accessor to the points.</para>
/// </summary>
  vtkPoints^ GetPoints();


// Did not wrap:  double *GetBounds ();return this Bounds 


  // void Initialize ();
/// <summary>
/// <para>See vtkLocator interface documentation. These methods are not thread safe.</para>
/// </summary>
  void Initialize();


  // void FreeSearchStructure ();
/// <summary>
/// <para>See vtkLocator interface documentation. These methods are not thread safe.</para>
/// </summary>
  void FreeSearchStructure();


  // void BuildLocator ();
/// <summary>
/// <para>See vtkLocator interface documentation. These methods are not thread safe.</para>
/// </summary>
  void BuildLocator();


  // void GenerateRepresentation (int level, vtkPolyData *pd);
/// <summary>
/// <para>See vtkLocator interface documentation. These methods are not thread safe.</para>
/// </summary>
  void GenerateRepresentation(int level, vtkPolyData^ pd);


// Did not wrap:  vtkPointLocator ();


// Did not wrap:  ~vtkPointLocator ();


// Did not wrap:  void GetBucketNeighbors (vtkNeighborPoints *buckets, const int ijk[3], const int ndivs[3], int level);


// Did not wrap:  void GetOverlappingBuckets (vtkNeighborPoints *buckets, const double x[3], const int ijk[3], double dist, int level);


// Did not wrap:  void GetOverlappingBuckets (vtkNeighborPoints *buckets, const double x[3], double dist, int prevMinLevel[3], int prevMaxLevel[3]);


// Did not wrap:  void GenerateFace (int face, int i, int j, int k, vtkPoints *pts, vtkCellArray *polys);


// Did not wrap:  double Distance2ToBucket (const double x[3], const int nei[3]);


// Did not wrap:  double Distance2ToBounds (const double x[3], const double bounds[6]);


// Did not wrap:  vtkPointLocator (const vtkPointLocator &);


// Did not wrap:  void vtkPointLocator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointLocator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointLocator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointLocator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointLocator();


};

} // end vtkFiltering
