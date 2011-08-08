#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkBSPCuts;

public ref class vtkBSPIntersections : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBSPIntersections *NewInstance ();
  vtkBSPIntersections^ NewInstance();


  // vtkBSPIntersections *SafeDownCast (vtkObject* o);
  static vtkBSPIntersections^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkBSPIntersections *New ();


  // void SetCuts (vtkBSPCuts *cuts);
  void SetCuts(vtkBSPCuts^ cuts);


  // vtkBSPCuts *GetCuts ();
  vtkBSPCuts^ GetCuts();


  // int GetBounds (double *bounds);
  int GetBounds(array<double>^ bounds);


  // int GetNumberOfRegions ();
  int GetNumberOfRegions();


  // int GetRegionBounds (int regionID, double bounds[6]);
  int GetRegionBounds(int regionID, array<double>^ bounds);


  // int GetRegionDataBounds (int regionID, double bounds[6]);
  int GetRegionDataBounds(int regionID, array<double>^ bounds);


  // int IntersectsBox (int regionId, double *x);
/// <summary>
/// <para>Determine whether a region of the spatial decomposition     intersects an axis aligned box.</para>
/// </summary>
  int IntersectsBox(int regionId, array<double>^ x);


  // int IntersectsBox (int regionId, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
/// <summary>
/// <para>Determine whether a region of the spatial decomposition     intersects an axis aligned box.</para>
/// </summary>
  int IntersectsBox(int regionId, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // int IntersectsBox (int *ids, int len, double *x);
/// <summary>
/// <para>Compute a list of the Ids of all regions that     intersect the specified axis aligned box.    Returns: the number of ids in the list.</para>
/// </summary>
  int IntersectsBox(array<int>^ ids, int len, array<double>^ x);


  // int IntersectsBox (int *ids, int len, double x0, double x1, double y0, double y1, double z0, double z1);
/// <summary>
/// <para>Compute a list of the Ids of all regions that     intersect the specified axis aligned box.    Returns: the number of ids in the list.</para>
/// </summary>
  int IntersectsBox(array<int>^ ids, int len, double x0, double x1, double y0, double y1, double z0, double z1);


  // int IntersectsSphere2 (int regionId, double x, double y, double z, double rSquared);
/// <summary>
/// <para>Determine whether a region of the spatial decomposition     intersects a sphere, given the center of the sphere     and the square of it's radius.</para>
/// </summary>
  int IntersectsSphere2(int regionId, double x, double y, double z, double rSquared);


  // int IntersectsSphere2 (int *ids, int len, double x, double y, double z, double rSquared);
/// <summary>
/// <para>Compute a list of the Ids of all regions that     intersect the specified sphere.  The sphere is given    by it's center and the square of it's radius.    Returns: the number of ids in the list.</para>
/// </summary>
  int IntersectsSphere2(array<int>^ ids, int len, double x, double y, double z, double rSquared);


  // int IntersectsCell (int regionId, vtkCell *cell, int cellRegion);
/// <summary>
/// <para>Determine whether a region of the spatial decomposition    intersects the given cell.  If you already    know the region that the cell centroid lies in, provide     that as the last argument to make the computation quicker.</para>
/// </summary>
  int IntersectsCell(int regionId, vtkCell^ cell, int cellRegion);


  // int IntersectsCell (int *ids, int len, vtkCell *cell, int cellRegion);
/// <summary>
/// <para>Compute a list of the Ids of all regions that    intersect the given cell.  If you alrady    know the region that the cell centroid lies in, provide    that as the last argument to make the computation quicker.    Returns the number of regions the cell intersects.</para>
/// </summary>
  int IntersectsCell(array<int>^ ids, int len, vtkCell^ cell, int cellRegion);


  // int GetComputeIntersectionsUsingDataBounds ();
  int GetComputeIntersectionsUsingDataBounds();


  // void SetComputeIntersectionsUsingDataBounds (int c);
  void SetComputeIntersectionsUsingDataBounds(int c);


  // void ComputeIntersectionsUsingDataBoundsOn ();
  void ComputeIntersectionsUsingDataBoundsOn();


  // void ComputeIntersectionsUsingDataBoundsOff ();
  void ComputeIntersectionsUsingDataBoundsOff();


// Did not wrap:  vtkBSPIntersections ();


// Did not wrap:  ~vtkBSPIntersections ();


// Did not wrap:  long unsigned GetRegionListBuildTime ();


// Did not wrap:  int BuildRegionList ();


// Did not wrap:  vtkKdNode *GetRegionList ();return this RegionList 


// Did not wrap:  static int NumberOfLeafNodes (vtkKdNode *kd);


// Did not wrap:  static void SetIDRanges (vtkKdNode *kd, int &min, int &max);


// Did not wrap:  int SelfRegister (vtkKdNode *kd);


// Did not wrap:  static void SetCellBounds (vtkCell *cell, double *bounds);


// Did not wrap:  int _IntersectsBox (vtkKdNode *node, int *ids, int len, double x0, double x1, double y0, double y1, double z0, double z1);


// Did not wrap:  int _IntersectsSphere2 (vtkKdNode *node, int *ids, int len, double x, double y, double z, double rSquared);


// Did not wrap:  int _IntersectsCell (vtkKdNode *node, int *ids, int len, vtkCell *cell, int cellRegion);


// Did not wrap:  vtkBSPIntersections (const vtkBSPIntersections &);


// Did not wrap:  void vtkBSPIntersections 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBSPIntersections(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBSPIntersections(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBSPIntersections();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBSPIntersections();


};

} // end vtkGraphics
