#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkBSPCuts;
ref class vtkKdNode;

public ref class vtkKdTree : public vtkLocator
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkKdTree *NewInstance ();
  vtkKdTree^ NewInstance();


  // vtkKdTree *SafeDownCast (vtkObject* o);
  static vtkKdTree^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkKdTree *New ();


  // void TimingOn ();
/// <summary>
/// <para>Turn on timing of the k-d tree build</para>
/// </summary>
  void TimingOn();


  // void TimingOff ();
/// <summary>
/// <para>Turn on timing of the k-d tree build</para>
/// </summary>
  void TimingOff();


  // void SetTiming (int );
/// <summary>
/// <para>Turn on timing of the k-d tree build</para>
/// </summary>
  void SetTiming(int arg0);


  // int GetTiming ();
/// <summary>
/// <para>Turn on timing of the k-d tree build</para>
/// </summary>
  int GetTiming();


  // void SetMinCells (int );
/// <summary>
/// <para>Minimum number of cells per spatial region.  Default is 100.</para>
/// </summary>
  void SetMinCells(int arg0);


  // int GetMinCells ();
/// <summary>
/// <para>Minimum number of cells per spatial region.  Default is 100.</para>
/// </summary>
  int GetMinCells();


  // int GetNumberOfRegionsOrLess ();
  int GetNumberOfRegionsOrLess();


  // void SetNumberOfRegionsOrLess (int );
  void SetNumberOfRegionsOrLess(int arg0);


  // int GetNumberOfRegionsOrMore ();
  int GetNumberOfRegionsOrMore();


  // void SetNumberOfRegionsOrMore (int );
  void SetNumberOfRegionsOrMore(int arg0);


  // double GetFudgeFactor ();
  double GetFudgeFactor();


  // void SetFudgeFactor (double );
  void SetFudgeFactor(double arg0);


  // vtkBSPCuts *GetCuts ();
  vtkBSPCuts^ GetCuts();


  // void SetCuts (vtkBSPCuts *cuts);
  void SetCuts(vtkBSPCuts^ cuts);


  // void OmitXPartitioning ();
/// <summary>
/// <para>Omit partitions along the X axis, yielding shafts in the X direction</para>
/// </summary>
  void OmitXPartitioning();


  // void OmitYPartitioning ();
/// <summary>
/// <para>Omit partitions along the Y axis, yielding shafts in the Y direction</para>
/// </summary>
  void OmitYPartitioning();


  // void OmitZPartitioning ();
/// <summary>
/// <para>Omit partitions along the Z axis, yielding shafts in the Z direction</para>
/// </summary>
  void OmitZPartitioning();


  // void OmitXYPartitioning ();
/// <summary>
/// <para>Omit partitions along the X and Y axes, yielding slabs along Z</para>
/// </summary>
  void OmitXYPartitioning();


  // void OmitYZPartitioning ();
/// <summary>
/// <para>Omit partitions along the Y and Z axes, yielding slabs along X</para>
/// </summary>
  void OmitYZPartitioning();


  // void OmitZXPartitioning ();
/// <summary>
/// <para>Omit partitions along the Z and X axes, yielding slabs along Y</para>
/// </summary>
  void OmitZXPartitioning();


  // void OmitNoPartitioning ();
/// <summary>
/// <para>Partition along all three axes - this is the default</para>
/// </summary>
  void OmitNoPartitioning();


  // void SetDataSet (vtkDataSet *set);
  void SetDataSet(vtkDataSet^ set);


  // void SetNthDataSet (int index, vtkDataSet *set);
  void SetNthDataSet(int index, vtkDataSet^ set);


  // void RemoveDataSet (int index);
  void RemoveDataSet(int index);


  // void RemoveDataSet (vtkDataSet *set);
  void RemoveDataSet(vtkDataSet^ set);


  // void AddDataSet (vtkDataSet *set);
  void AddDataSet(vtkDataSet^ set);


  // int GetNumberOfDataSets ();return this NumDataSets 
/// <summary>
/// <para>Get the number of data sets included in spatial paritioning</para>
/// </summary>
  int GetNumberOfDataSets();


  // vtkDataSet *GetDataSet (int n);
  vtkDataSet^ GetDataSet(int n);


  // vtkDataSet *GetDataSet ();return this GetDataSet 
/// <summary>
/// <para>Get handle for one of the data sets included in spatial paritioning.   Handles can change after RemoveDataSet.</para>
/// </summary>
  vtkDataSet^ GetDataSet();


  // int GetDataSet (vtkDataSet *set);
/// <summary>
/// <para>Get handle for one of the data sets included in spatial paritioning.   Handles can change after RemoveDataSet.</para>
/// </summary>
  int GetDataSet(vtkDataSet^ set);


  // void GetBounds (double *bounds);
/// <summary>
/// <para>Get the spatial bounds of the entire k-d tree space. Sets    bounds array to xmin, xmax, ymin, ymax, zmin, zmax.</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // void SetNewBounds (double *bounds);
  void SetNewBounds(array<double>^ bounds);


  // int GetNumberOfRegions ();
/// <summary>
/// <para>The number of leaf nodes of the tree, the spatial regions</para>
/// </summary>
  int GetNumberOfRegions();


  // void GetRegionBounds (int regionID, double bounds[6]);
/// <summary>
/// <para>Get the spatial bounds of k-d tree region</para>
/// </summary>
  void GetRegionBounds(int regionID, array<double>^ bounds);


  // void GetRegionDataBounds (int regionID, double bounds[6]);
/// <summary>
/// <para>Get the bounds of the data within the k-d tree region</para>
/// </summary>
  void GetRegionDataBounds(int regionID, array<double>^ bounds);


  // void PrintTree ();
/// <summary>
/// <para>Print out nodes of kd tree</para>
/// </summary>
  void PrintTree();


  // void PrintVerboseTree ();
/// <summary>
/// <para>Print out nodes of kd tree</para>
/// </summary>
  void PrintVerboseTree();


  // void PrintRegion (int id);
/// <summary>
/// <para>Print out leaf node data for given id</para>
/// </summary>
  void PrintRegion(int id);


  // void CreateCellLists (int DataSet, int *regionReqList, int reqListSize);
  void CreateCellLists(int DataSet, array<int>^ regionReqList, int reqListSize);


  // void CreateCellLists (vtkDataSet *set, int *regionReqList, int reqListSize);
  void CreateCellLists(vtkDataSet^ set, array<int>^ regionReqList, int reqListSize);


  // void CreateCellLists (int *regionReqList, int listSize);
  void CreateCellLists(array<int>^ regionReqList, int listSize);


  // void CreateCellLists ();
  void CreateCellLists();


  // void SetIncludeRegionBoundaryCells (int );
/// <summary>
/// <para>If IncludeRegionBoundaryCells is ON,   CreateCellLists() will also create a list of cells which   intersect a given region, but are not assigned   to the region.  These lists are obtained with    GetBoundaryCellList().  Default is OFF.</para>
/// </summary>
  void SetIncludeRegionBoundaryCells(int arg0);


  // int GetIncludeRegionBoundaryCells ();
/// <summary>
/// <para>If IncludeRegionBoundaryCells is ON,   CreateCellLists() will also create a list of cells which   intersect a given region, but are not assigned   to the region.  These lists are obtained with    GetBoundaryCellList().  Default is OFF.</para>
/// </summary>
  int GetIncludeRegionBoundaryCells();


  // void IncludeRegionBoundaryCellsOn ();
/// <summary>
/// <para>If IncludeRegionBoundaryCells is ON,   CreateCellLists() will also create a list of cells which   intersect a given region, but are not assigned   to the region.  These lists are obtained with    GetBoundaryCellList().  Default is OFF.</para>
/// </summary>
  void IncludeRegionBoundaryCellsOn();


  // void IncludeRegionBoundaryCellsOff ();
/// <summary>
/// <para>If IncludeRegionBoundaryCells is ON,   CreateCellLists() will also create a list of cells which   intersect a given region, but are not assigned   to the region.  These lists are obtained with    GetBoundaryCellList().  Default is OFF.</para>
/// </summary>
  void IncludeRegionBoundaryCellsOff();


  // void DeleteCellLists ();
/// <summary>
/// <para>Free the memory used by the cell lists.</para>
/// </summary>
  void DeleteCellLists();


  // vtkIdList *GetCellList (int regionID);
/// <summary>
/// <para>Get the cell list for a region.  This returns a pointer    to vtkKdTree's memory, so don't free it.</para>
/// </summary>
  vtkIdList^ GetCellList(int regionID);


  // vtkIdList *GetBoundaryCellList (int regionID);
/// <summary>
/// <para>The cell list obtained with GetCellList is the list    of all cells such that their centroid is contained in    the spatial region.  It may also be desirable to get    a list of all cells intersecting a spatial region,    but with centroid in some other region.  This is that    list.  This list is computed in CreateCellLists() if    and only if IncludeRegionBoundaryCells is ON.  This    returns a pointer to KdTree's memory, so don't free it.</para>
/// </summary>
  vtkIdList^ GetBoundaryCellList(int regionID);


  // vtkIdType GetCellLists (vtkIntArray *regions, int set, vtkIdList *inRegionCells, vtkIdList *onBoundaryCells);
/// <summary>
/// <para>For a list of regions, get two cell lists.  The first lists   the IDs  all cells whose centroids lie in one of the regions.   The second lists the IDs of all cells that intersect the regions,   but whose centroid lies in a region not on the list.</para>
/// <para>The total number of cell IDs written to both lists is returned.   Either list pointer passed in can be NULL, and it will be ignored.   If there are multiple data sets, you must specify which data set   you wish cell IDs for.</para>
/// <para>The caller should delete these two lists when done.  This method   uses the cell lists created in CreateCellLists().   If the cell list for any of the requested regions does not   exist, then this method will call CreateCellLists() to create   cell lists for *every* region of the k-d tree.  You must remember    to DeleteCellLists() when done with all calls to this method, as    cell lists can require a great deal of memory.</para>
/// </summary>
  int GetCellLists(vtkIntArray^ regions, int set, vtkIdList^ inRegionCells, vtkIdList^ onBoundaryCells);


  // vtkIdType GetCellLists (vtkIntArray *regions, vtkDataSet *set, vtkIdList *inRegionCells, vtkIdList *onBoundaryCells);
/// <summary>
/// <para>For a list of regions, get two cell lists.  The first lists   the IDs  all cells whose centroids lie in one of the regions.   The second lists the IDs of all cells that intersect the regions,   but whose centroid lies in a region not on the list.</para>
/// <para>The total number of cell IDs written to both lists is returned.   Either list pointer passed in can be NULL, and it will be ignored.   If there are multiple data sets, you must specify which data set   you wish cell IDs for.</para>
/// <para>The caller should delete these two lists when done.  This method   uses the cell lists created in CreateCellLists().   If the cell list for any of the requested regions does not   exist, then this method will call CreateCellLists() to create   cell lists for *every* region of the k-d tree.  You must remember    to DeleteCellLists() when done with all calls to this method, as    cell lists can require a great deal of memory.</para>
/// </summary>
  int GetCellLists(vtkIntArray^ regions, vtkDataSet^ set, vtkIdList^ inRegionCells, vtkIdList^ onBoundaryCells);


  // vtkIdType GetCellLists (vtkIntArray *regions, vtkIdList *inRegionCells, vtkIdList *onBoundaryCells);
/// <summary>
/// <para>For a list of regions, get two cell lists.  The first lists   the IDs  all cells whose centroids lie in one of the regions.   The second lists the IDs of all cells that intersect the regions,   but whose centroid lies in a region not on the list.</para>
/// <para>The total number of cell IDs written to both lists is returned.   Either list pointer passed in can be NULL, and it will be ignored.   If there are multiple data sets, you must specify which data set   you wish cell IDs for.</para>
/// <para>The caller should delete these two lists when done.  This method   uses the cell lists created in CreateCellLists().   If the cell list for any of the requested regions does not   exist, then this method will call CreateCellLists() to create   cell lists for *every* region of the k-d tree.  You must remember    to DeleteCellLists() when done with all calls to this method, as    cell lists can require a great deal of memory.</para>
/// </summary>
  int GetCellLists(vtkIntArray^ regions, vtkIdList^ inRegionCells, vtkIdList^ onBoundaryCells);


  // int GetRegionContainingCell (vtkDataSet *set, vtkIdType cellID);
/// <summary>
/// <para>Get the id of the region containing the cell centroid.  If    no DataSet is specified, assume DataSet 0.  If you need the    region ID for every cell, use AllGetRegionContainingCell    instead.  It is more efficient.</para>
/// </summary>
  int GetRegionContainingCell(vtkDataSet^ set, int cellID);


  // int GetRegionContainingCell (int set, vtkIdType cellID);
/// <summary>
/// <para>Get the id of the region containing the cell centroid.  If    no DataSet is specified, assume DataSet 0.  If you need the    region ID for every cell, use AllGetRegionContainingCell    instead.  It is more efficient.</para>
/// </summary>
  int GetRegionContainingCell(int set, int cellID);


  // int GetRegionContainingCell (vtkIdType cellID);
/// <summary>
/// <para>Get the id of the region containing the cell centroid.  If    no DataSet is specified, assume DataSet 0.  If you need the    region ID for every cell, use AllGetRegionContainingCell    instead.  It is more efficient.</para>
/// </summary>
  int GetRegionContainingCell(int cellID);


// Did not wrap:  int *AllGetRegionContainingCell ();


  // int GetRegionContainingPoint (double x, double y, double z);
/// <summary>
/// <para>Get the id of the region containing the specified location.</para>
/// </summary>
  int GetRegionContainingPoint(double x, double y, double z);


  // void BuildLocator ();
/// <summary>
/// <para>Create the k-d tree decomposition of the cells of the data set or data sets.  Cells are assigned to k-d tree spatial regions based on the location of their centroids.</para>
/// </summary>
  void BuildLocator();


// Did not wrap:  int MinimalNumberOfConvexSubRegions (vtkIntArray *regionIdList, double *convexRegionBounds);


  // int DepthOrderAllRegions (double *dop, vtkIntArray *orderedList);
  int DepthOrderAllRegions(array<double>^ dop, vtkIntArray^ orderedList);


  // int DepthOrderRegions (vtkIntArray *regionIds, double *dop, vtkIntArray *orderedList);
  int DepthOrderRegions(vtkIntArray^ regionIds, array<double>^ dop, vtkIntArray^ orderedList);


  // void BuildLocatorFromPoints (vtkPoints *ptArray);
/// <summary>
/// <para>This is a special purpose locator that builds a k-d tree to  find duplicate and near-by points.  It builds the tree from  one or more vtkPoints objects instead of from the cells of a vtkDataSet.  This build would normally be followed by BuildMapForDuplicatePoints, FindPoint, or FindClosestPoint. Since this will build a normal k-d tree, all the region intersection queries will still work, as will most other calls except those that have &quot;Cell&quot; in the name.</para>
/// <para>This method works most efficiently when the point arrays are float arrays.</para>
/// </summary>
  void BuildLocatorFromPoints(vtkPoints^ ptArray);


// Did not wrap:  void BuildLocatorFromPoints (vtkPoints *ptArray, int numPtArrays);


  // vtkIdTypeArray *BuildMapForDuplicatePoints (float tolerance);
/// <summary>
/// <para>This call returns a mapping from the original point IDs supplied to BuildLocatorFromPoints to a subset of those IDs that is unique  within the specified tolerance.   If points 2, 5, and 12 are the same, then  IdMap[2] = IdMap[5] = IdMap[12] = 2 (or 5 or 12).</para>
/// <para>&quot;original point IDs&quot; - For point IDs we start at 0 for the first point in the first vtkPoints object, and increase by 1 for subsequent points and subsequent vtkPoints objects.</para>
/// <para>You must have called BuildLocatorFromPoints() before calling this. You are responsible for deleting the returned array.</para>
/// </summary>
  vtkIdTypeArray^ BuildMapForDuplicatePoints(float tolerance);


  // vtkIdType FindPoint (double *x);
/// <summary>
/// <para>Find the Id of the point that was previously supplied to BuildLocatorFromPoints().  Returns -1 if the point was not in the original array.</para>
/// </summary>
  int FindPoint(array<double>^ x);


  // vtkIdType FindPoint (double x, double y, double z);
/// <summary>
/// <para>Find the Id of the point that was previously supplied to BuildLocatorFromPoints().  Returns -1 if the point was not in the original array.</para>
/// </summary>
  int FindPoint(double x, double y, double z);


  // vtkIdType FindClosestPoint (double *x, double &dist2);
/// <summary>
/// <para>Find the Id of the point that was previously supplied to BuildLocatorFromPoints() which is closest to the given point. Set the square of the distance between the two points.</para>
/// </summary>
  int FindClosestPoint(array<double>^ x, double% dist2);


  // vtkIdType FindClosestPoint (double x, double y, double z, double &dist2);
/// <summary>
/// <para>Find the Id of the point that was previously supplied to BuildLocatorFromPoints() which is closest to the given point. Set the square of the distance between the two points.</para>
/// </summary>
  int FindClosestPoint(double x, double y, double z, double% dist2);


  // vtkIdType FindClosestPointInRegion (int regionId, double *x, double &dist2);
/// <summary>
/// <para>Find the Id of the point in the given region which is closest to the given point.  Return the ID of the point, and set the square of the distance of between the points.</para>
/// </summary>
  int FindClosestPointInRegion(int regionId, array<double>^ x, double% dist2);


  // vtkIdType FindClosestPointInRegion (int regionId, double x, double y, double z, double &dist2);
/// <summary>
/// <para>Find the Id of the point in the given region which is closest to the given point.  Return the ID of the point, and set the square of the distance of between the points.</para>
/// </summary>
  int FindClosestPointInRegion(int regionId, double x, double y, double z, double% dist2);


  // vtkIdTypeArray *GetPointsInRegion (int regionId);
/// <summary>
/// <para>Get a list of the original IDs of all points in a region.  You must have called BuildLocatorFromPoints before calling this.</para>
/// </summary>
  vtkIdTypeArray^ GetPointsInRegion(int regionId);


  // void FreeSearchStructure ();
/// <summary>
/// <para>Delete the k-d tree data structure. Also delete any cell lists that were computed with CreateCellLists().</para>
/// </summary>
  void FreeSearchStructure();


  // void GenerateRepresentation (int level, vtkPolyData *pd);
/// <summary>
/// <para>Create a polydata representation of the boundaries of the k-d tree regions.  If level equals GetLevel(), the leaf nodes are represented.</para>
/// </summary>
  void GenerateRepresentation(int level, vtkPolyData^ pd);


  // void GenerateRepresentation (int *regionList, int len, vtkPolyData *pd);
/// <summary>
/// <para>Generate a polygonal representation of a list of regions.    Only leaf nodes have region IDs, so these will be leaf nodes.</para>
/// </summary>
  void GenerateRepresentation(array<int>^ regionList, int len, vtkPolyData^ pd);


  // void GenerateRepresentationUsingDataBoundsOn ();
/// <summary>
/// <para>The polydata representation of the k-d tree shows the boundaries    of the k-d tree decomposition spatial regions.  The data inside    the regions may not occupy the entire space.  To draw just the    bounds of the data in the regions, set this variable ON.</para>
/// </summary>
  void GenerateRepresentationUsingDataBoundsOn();


  // void GenerateRepresentationUsingDataBoundsOff ();
/// <summary>
/// <para>The polydata representation of the k-d tree shows the boundaries    of the k-d tree decomposition spatial regions.  The data inside    the regions may not occupy the entire space.  To draw just the    bounds of the data in the regions, set this variable ON.</para>
/// </summary>
  void GenerateRepresentationUsingDataBoundsOff();


  // void SetGenerateRepresentationUsingDataBounds (int );
/// <summary>
/// <para>The polydata representation of the k-d tree shows the boundaries    of the k-d tree decomposition spatial regions.  The data inside    the regions may not occupy the entire space.  To draw just the    bounds of the data in the regions, set this variable ON.</para>
/// </summary>
  void SetGenerateRepresentationUsingDataBounds(int arg0);


  // int GetGenerateRepresentationUsingDataBounds ();
/// <summary>
/// <para>The polydata representation of the k-d tree shows the boundaries    of the k-d tree decomposition spatial regions.  The data inside    the regions may not occupy the entire space.  To draw just the    bounds of the data in the regions, set this variable ON.</para>
/// </summary>
  int GetGenerateRepresentationUsingDataBounds();


// Did not wrap:  virtual void PrintTiming (ostream &os, vtkIndent indent);


  // int NewGeometry ();
/// <summary>
/// <para>Return 1 if the geometry of the input data sets    has changed since the last time the k-d tree was built.</para>
/// </summary>
  int NewGeometry();


// Did not wrap:  int NewGeometry (vtkDataSet *sets, int numDataSets);


  // static vtkKdNode *CopyTree (vtkKdNode *kd);
  static vtkKdNode^ CopyTree(vtkKdNode^ kd);


// Did not wrap:  vtkKdTree ();


// Did not wrap:  ~vtkKdTree ();


// Did not wrap:  void SetCalculator (vtkKdNode *kd);


// Did not wrap:  int ProcessUserDefinedCuts (double *bounds);


// Did not wrap:  void SetCuts (vtkBSPCuts *cuts, int userDefined);


// Did not wrap:  void UpdateBuildTime ();


// Did not wrap:  int DivideTest (int numberOfPoints, int level);


// Did not wrap:  static void DeleteAllDescendants (vtkKdNode *nd);


// Did not wrap:  void BuildRegionList ();


// Did not wrap:  virtual int SelectCutDirection (vtkKdNode *kd);


// Did not wrap:  void SetActualLevel ();this Level vtkKdTree ComputeLevel this Top 


// Did not wrap:  void GetRegionsAtLevel (int level, vtkKdNode *nodes);


// Did not wrap:  static void GetLeafNodeIds (vtkKdNode *node, vtkIntArray *ids);


// Did not wrap:  int GetNumberOfCells ();


// Did not wrap:  int GetDataSetsNumberOfCells (int set1, int set2);


// Did not wrap:  void ComputeCellCenter (vtkDataSet *set, int cellId, float *center);


// Did not wrap:  void ComputeCellCenter (vtkDataSet *set, int cellId, double *center);


// Did not wrap:  float *ComputeCellCenters ();


// Did not wrap:  float *ComputeCellCenters (int set);


// Did not wrap:  float *ComputeCellCenters (vtkDataSet *set);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  static void _SetNewBounds (vtkKdNode *kd, double *b, int *fixDim);


// Did not wrap:  static void CopyChildNodes (vtkKdNode *to, vtkKdNode *from);


// Did not wrap:  static void CopyKdNode (vtkKdNode *to, vtkKdNode *from);


// Did not wrap:  static void SetDataBoundsToSpatialBounds (vtkKdNode *kd);


// Did not wrap:  static void ZeroNumberOfPoints (vtkKdNode *kd);


// Did not wrap:  void InitializeCellLists ();


// Did not wrap:  vtkIdList *GetList (int regionId, vtkIdList *which);


// Did not wrap:  void ComputeCellCenter (vtkCell *cell, double *center, double *weights);


// Did not wrap:  void GenerateRepresentationDataBounds (int level, vtkPolyData *pd);


// Did not wrap:  void _generateRepresentationDataBounds (vtkKdNode *kd, vtkPoints *pts, vtkCellArray *polys, int level);


// Did not wrap:  void GenerateRepresentationWholeSpace (int level, vtkPolyData *pd);


// Did not wrap:  void _generateRepresentationWholeSpace (vtkKdNode *kd, vtkPoints *pts, vtkCellArray *polys, int level);


// Did not wrap:  void AddPolys (vtkKdNode *kd, vtkPoints *pts, vtkCellArray *polys);


// Did not wrap:  void _printTree (int verbose);


// Did not wrap:  int SearchNeighborsForDuplicate (int regionId, float *point, int *pointsSoFar, int *len, float tolerance, float tolerance2);


// Did not wrap:  int SearchRegionForDuplicate (float *point, int *pointsSoFar, int len, float tolerance2);


// Did not wrap:  int _FindClosestPointInRegion (int regionId, double x, double y, double z, double &dist2);


// Did not wrap:  int FindClosestPointInSphere (double x, double y, double z, double radius, int skipRegion, double &dist2);


// Did not wrap:  int _DepthOrderRegions (vtkIntArray *IdsOfInterest, double *dop, vtkIntArray *orderedList);


// Did not wrap:  static int __DepthOrderRegions (vtkKdNode *node, vtkIntArray *list, vtkIntArray *IdsOfInterest, double *dir, int nextId);


// Did not wrap:  static int __ConvexSubRegions (int *ids, int len, vtkKdNode *tree, vtkKdNode *nodes);


// Did not wrap:  static int FoundId (vtkIntArray *idArray, int id);


// Did not wrap:  void NewParitioningRequest (int req);


// Did not wrap:  void SetInputDataInfo (int i, int dims[3], double origin[3], double spacing[3]);


// Did not wrap:  int CheckInputDataInfo (int i, int dims[3], double origin[3], double spacing[3]);


// Did not wrap:  void ClearLastBuildCache ();


// Did not wrap:  static int MidValue (int dim, float *c1, int nvals, double &coord);


// Did not wrap:  static int Select (int dim, float *c1, int *ids, int nvals, double &coord);


// Did not wrap:  static float FindMaxLeftHalf (int dim, float *c1, int K);


// Did not wrap:  static void _Select (int dim, float *X, int *ids, int L, int R, int K);


// Did not wrap:  static vtkKdNode *_GetRegionsAtLevel (int level, vtkKdNode *nodes, vtkKdNode *kd);


// Did not wrap:  static void AddNewRegions (vtkKdNode *kd, float *c1, int midpt, int dim, double coord);


// Did not wrap:  void NewPartitioningRequest (int req);


// Did not wrap:  vtkKdTree (const vtkKdTree &);


// Did not wrap:  void vtkKdTree 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkKdTree(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkKdTree(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkKdTree();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkKdTree();


};

} // end vtkGraphics
