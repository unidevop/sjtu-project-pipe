#pragma once

// managed includes
#include "vtkPointSetDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkCellArray;
ref class vtkDataObject;
ref class vtkDataSet;
ref class vtkGenericCell;
ref class vtkPointLocator;

public ref class vtkPolyData : public vtkPointSet
{

public:
// Did not wrap:  static vtkPolyData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyData *NewInstance ();
  vtkPolyData^ NewInstance();


  // vtkPolyData *SafeDownCast (vtkObject* o);
  static vtkPolyData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataObjectType ();return VTK_POLY_DATA 
/// <summary>
/// <para>Copy the geometric and topological structure of an input poly data object.</para>
/// </summary>
  int GetDataObjectType();


  // void CopyStructure (vtkDataSet *ds);
/// <summary>
/// <para>Copy the geometric and topological structure of an input poly data object.</para>
/// </summary>
  void CopyStructure(vtkDataSet^ ds);


  // vtkIdType GetNumberOfCells ();
/// <summary>
/// <para>Standard vtkDataSet interface.</para>
/// </summary>
  int GetNumberOfCells();


  // vtkCell *GetCell (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet interface.</para>
/// </summary>
  vtkCell^ GetCell(int cellId);


  // void GetCell (vtkIdType cellId, vtkGenericCell *cell);
/// <summary>
/// <para>Standard vtkDataSet interface.</para>
/// </summary>
  void GetCell(int cellId, vtkGenericCell^ cell);


  // int GetCellType (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet interface.</para>
/// </summary>
  int GetCellType(int cellId);


  // void GetCellBounds (vtkIdType cellId, double bounds[6]);
/// <summary>
/// <para>Standard vtkDataSet interface.</para>
/// </summary>
  void GetCellBounds(int cellId, array<double>^ bounds);


  // void GetCellNeighbors (vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds);
/// <summary>
/// <para>Standard vtkDataSet interface.</para>
/// </summary>
  void GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds);


  // void CopyCells (vtkPolyData *pd, vtkIdList *idList, vtkPointLocator *locatorNULL);
/// <summary>
/// <para>Copy cells listed in idList from pd, including points, point data, and cell data.  This method assumes that point and cell data have been allocated.  If you pass in a point locator, then the points won't be duplicated in the output.</para>
/// </summary>
  void CopyCells(vtkPolyData^ pd, vtkIdList^ idList, vtkPointLocator^ locatorNULL);


  // void GetCellPoints (vtkIdType cellId, vtkIdList *ptIds);
/// <summary>
/// <para>Copy a cells point ids into list provided. (Less efficient.)</para>
/// </summary>
  void GetCellPoints(int cellId, vtkIdList^ ptIds);


  // void GetPointCells (vtkIdType ptId, vtkIdList *cellIds);
/// <summary>
/// <para>Efficient method to obtain cells using a particular point. Make sure that routine BuildLinks() has been called.</para>
/// </summary>
  void GetPointCells(int ptId, vtkIdList^ cellIds);


  // void ComputeBounds ();
/// <summary>
/// <para>Compute the (X, Y, Z)  bounds of the data.</para>
/// </summary>
  void ComputeBounds();


  // void Squeeze ();
/// <summary>
/// <para>Recover extra allocated memory when creating data whose initial size is unknown. Examples include using the InsertNextCell() method, or when using the CellArray::EstimateSize() method to create vertices, lines, polygons, or triangle strips.</para>
/// </summary>
  void Squeeze();


  // int GetMaxCellSize ();
/// <summary>
/// <para>Return the maximum cell size in this poly data.</para>
/// </summary>
  int GetMaxCellSize();


  // void SetVerts (vtkCellArray *v);
/// <summary>
/// <para>Set the cell array defining vertices.</para>
/// </summary>
  void SetVerts(vtkCellArray^ v);


  // vtkCellArray *GetVerts ();
/// <summary>
/// <para>Get the cell array defining vertices. If there are no vertices, an empty array will be returned (convenience to simplify traversal).</para>
/// </summary>
  vtkCellArray^ GetVerts();


  // void SetLines (vtkCellArray *l);
/// <summary>
/// <para>Set the cell array defining lines.</para>
/// </summary>
  void SetLines(vtkCellArray^ l);


  // vtkCellArray *GetLines ();
/// <summary>
/// <para>Get the cell array defining lines. If there are no lines, an empty array will be returned (convenience to simplify traversal).</para>
/// </summary>
  vtkCellArray^ GetLines();


  // void SetPolys (vtkCellArray *p);
/// <summary>
/// <para>Set the cell array defining polygons.</para>
/// </summary>
  void SetPolys(vtkCellArray^ p);


  // vtkCellArray *GetPolys ();
/// <summary>
/// <para>Get the cell array defining polygons. If there are no polygons, an empty array will be returned (convenience to simplify traversal).</para>
/// </summary>
  vtkCellArray^ GetPolys();


  // void SetStrips (vtkCellArray *s);
/// <summary>
/// <para>Set the cell array defining triangle strips.</para>
/// </summary>
  void SetStrips(vtkCellArray^ s);


  // vtkCellArray *GetStrips ();
/// <summary>
/// <para>Get the cell array defining triangle strips. If there are no triangle strips, an empty array will be returned (convenience to  simplify traversal).</para>
/// </summary>
  vtkCellArray^ GetStrips();


  // vtkIdType GetNumberOfVerts ();
/// <summary>
/// <para>Return the number of primitives of a particular type held..</para>
/// </summary>
  int GetNumberOfVerts();


  // vtkIdType GetNumberOfLines ();
/// <summary>
/// <para>Return the number of primitives of a particular type held..</para>
/// </summary>
  int GetNumberOfLines();


  // vtkIdType GetNumberOfPolys ();
/// <summary>
/// <para>Return the number of primitives of a particular type held..</para>
/// </summary>
  int GetNumberOfPolys();


  // vtkIdType GetNumberOfStrips ();
/// <summary>
/// <para>Return the number of primitives of a particular type held..</para>
/// </summary>
  int GetNumberOfStrips();


  // void Allocate (vtkIdType numCells, int extSize);
/// <summary>
/// <para>Method allocates initial storage for vertex, line, polygon, and  triangle strip arrays. Use this method before the method  PolyData::InsertNextCell(). (Or, provide vertex, line, polygon, and triangle strip cell arrays.)</para>
/// </summary>
  void Allocate(int numCells, int extSize);


  // void Allocate (vtkPolyData *inPolyData, vtkIdType numCells, int extSize);
/// <summary>
/// <para>Similar to the method above, this method allocates initial storage for vertex, line, polygon, and triangle strip arrays. It does this more intelligently, examining the supplied inPolyData to determine whether to allocate the verts, lines, polys, and strips arrays.  (These arrays are allocated only if there is data in the corresponding arrays in the inPolyData.)  Caution: if the inPolyData has no verts, and after allocating with this method an PolyData::InsertNextCell() is invoked where a vertex is inserted, bad things will happen.</para>
/// </summary>
  void Allocate(vtkPolyData^ inPolyData, int numCells, int extSize);


  // int InsertNextCell (int type, int npts, vtkIdType *pts);
/// <summary>
/// <para>Insert a cell of type VTK_VERTEX, VTK_POLY_VERTEX, VTK_LINE, VTK_POLY_LINE, VTK_TRIANGLE, VTK_QUAD, VTK_POLYGON, or VTK_TRIANGLE_STRIP.  Make sure that the PolyData::Allocate() function has been called first or that vertex, line, polygon, and triangle strip arrays have been supplied. Note: will also insert VTK_PIXEL, but converts it to VTK_QUAD.</para>
/// </summary>
  int InsertNextCell(int type, int npts, array<int>^ arg2);


  // int InsertNextCell (int type, vtkIdList *pts);
/// <summary>
/// <para>Insert a cell of type VTK_VERTEX, VTK_POLY_VERTEX, VTK_LINE, VTK_POLY_LINE, VTK_TRIANGLE, VTK_QUAD, VTK_POLYGON, or VTK_TRIANGLE_STRIP.  Make sure that the PolyData::Allocate() function has been called first or that vertex, line, polygon, and triangle strip arrays have been supplied. Note: will also insert VTK_PIXEL, but converts it to VTK_QUAD.</para>
/// </summary>
  int InsertNextCell(int type, vtkIdList^ pts);


  // void Reset ();
/// <summary>
/// <para>Begin inserting data all over again. Memory is not freed but otherwise objects are returned to their initial state.</para>
/// </summary>
  void Reset();


  // void BuildCells ();
/// <summary>
/// <para>Create data structure that allows random access of cells.</para>
/// </summary>
  void BuildCells();


  // void BuildLinks (int initialSize);
/// <summary>
/// <para>Create upward links from points to cells that use each point. Enables topologically complex queries. Normally the links array is allocated based on the number of points in the vtkPolyData. The optional  initialSize parameter can be used to allocate a larger size initially.</para>
/// </summary>
  void BuildLinks(int initialSize);


  // void DeleteCells ();
/// <summary>
/// <para>Release data structure that allows random access of the cells. This must be done before a 2nd call to BuildLinks(). DeleteCells implicitly deletes the links as well since they are no longer valid.</para>
/// </summary>
  void DeleteCells();


  // void DeleteLinks ();
/// <summary>
/// <para>Release the upward links from point to cells that use each point.</para>
/// </summary>
  void DeleteLinks();


// Did not wrap:  void GetPointCells (vtkIdType ptId, unsigned short &ncells, vtkIdType &cells);


  // void GetCellEdgeNeighbors (vtkIdType cellId, vtkIdType p1, vtkIdType p2, vtkIdList *cellIds);
/// <summary>
/// <para>Get the neighbors at an edge. More efficient than the general  GetCellNeighbors(). Assumes links have been built (with BuildLinks()),  and looks specifically for edge neighbors.</para>
/// </summary>
  void GetCellEdgeNeighbors(int cellId, int p1, int p2, vtkIdList^ cellIds);


// Did not wrap:  void GetCellPoints (vtkIdType cellId, vtkIdType &npts, vtkIdType &pts);


  // int IsTriangle (int v1, int v2, int v3);
/// <summary>
/// <para>Given three vertices, determine whether it's a triangle. Make sure  BuildLinks() has been called first.</para>
/// </summary>
  int IsTriangle(int v1, int v2, int v3);


  // int IsEdge (vtkIdType p1, vtkIdType p2);
/// <summary>
/// <para>Determine whether two points form an edge. If they do, return non-zero. By definition PolyVertex and PolyLine have no edges since 1-dimensional  edges are only found on cells 2D and higher.  Edges are defined as 1-D boundary entities to cells. Make sure BuildLinks() has been called first.</para>
/// </summary>
  int IsEdge(int p1, int p2);


  // int IsPointUsedByCell (vtkIdType ptId, vtkIdType cellId);
/// <summary>
/// <para>Determine whether a point is used by a particular cell. If it is, return non-zero. Make sure BuildCells() has been called first.</para>
/// </summary>
  int IsPointUsedByCell(int ptId, int cellId);


  // void ReplaceCell (vtkIdType cellId, int npts, vtkIdType *pts);
/// <summary>
/// <para>Replace the points defining cell &quot;cellId&quot; with a new set of points. This operator is (typically) used when links from points to cells have not been  built (i.e., BuildLinks() has not been executed). Use the operator  ReplaceLinkedCell() to replace a cell when cell structure has been built.</para>
/// </summary>
  void ReplaceCell(int cellId, int npts, array<int>^ arg2);


  // void ReplaceCellPoint (vtkIdType cellId, vtkIdType oldPtId, vtkIdType newPtId);
/// <summary>
/// <para>Replace a point in the cell connectivity list with a different point.</para>
/// </summary>
  void ReplaceCellPoint(int cellId, int oldPtId, int newPtId);


  // void ReverseCell (vtkIdType cellId);
/// <summary>
/// <para>Reverse the order of point ids defining the cell.</para>
/// </summary>
  void ReverseCell(int cellId);


  // void DeletePoint (vtkIdType ptId);
/// <summary>
/// <para>Mark a point/cell as deleted from this vtkPolyData.</para>
/// </summary>
  void DeletePoint(int ptId);


  // void DeleteCell (vtkIdType cellId);
/// <summary>
/// <para>Mark a point/cell as deleted from this vtkPolyData.</para>
/// </summary>
  void DeleteCell(int cellId);


  // int InsertNextLinkedPoint (int numLinks);
/// <summary>
/// <para>Add a point to the cell data structure (after cell pointers have been built). This method adds the point and then allocates memory for the links to the cells.  (To use this method, make sure points are available and BuildLinks() has been invoked.) Of the two methods below, one inserts a point coordinate and the other just makes room for cell links.</para>
/// </summary>
  int InsertNextLinkedPoint(int numLinks);


  // int InsertNextLinkedPoint (double x[3], int numLinks);
/// <summary>
/// <para>Add a point to the cell data structure (after cell pointers have been built). This method adds the point and then allocates memory for the links to the cells.  (To use this method, make sure points are available and BuildLinks() has been invoked.) Of the two methods below, one inserts a point coordinate and the other just makes room for cell links.</para>
/// </summary>
  int InsertNextLinkedPoint(array<double>^ x, int numLinks);


  // int InsertNextLinkedCell (int type, int npts, vtkIdType *pts);
/// <summary>
/// <para>Add a new cell to the cell data structure (after cell pointers have been built). This method adds the cell and then updates the links from the points to the cells. (Memory is allocated as necessary.)</para>
/// </summary>
  int InsertNextLinkedCell(int type, int npts, array<int>^ arg2);


  // void ReplaceLinkedCell (vtkIdType cellId, int npts, vtkIdType *pts);
/// <summary>
/// <para>Replace one cell with another in cell structure. This operator updates the connectivity list and the point's link list. It does not delete references to the old cell in the point's link list. Use the operator  RemoveCellReference() to delete all references from points to (old) cell. You may also want to consider using the operator ResizeCellList() if the  link list is changing size.</para>
/// </summary>
  void ReplaceLinkedCell(int cellId, int npts, array<int>^ arg2);


  // void RemoveCellReference (vtkIdType cellId);
/// <summary>
/// <para>Remove all references to cell in cell structure. This means the links from the cell's points to the cell are deleted. Memory is not reclaimed. Use the method ResizeCellList() to resize the link list from a point to its using  cells. (This operator assumes BuildLinks() has been called.)</para>
/// </summary>
  void RemoveCellReference(int cellId);


  // void AddCellReference (vtkIdType cellId);
/// <summary>
/// <para>Add references to cell in cell structure. This means the links from the cell's points to the cell are modified. Memory is not extended. Use the method ResizeCellList() to resize the link list from a point to its using  cells. (This operator assumes BuildLinks() has been called.)</para>
/// </summary>
  void AddCellReference(int cellId);


  // void RemoveReferenceToCell (vtkIdType ptId, vtkIdType cellId);
/// <summary>
/// <para>Remove a reference to a cell in a particular point's link list. You may also consider using RemoveCellReference() to remove the references from all the cell's points to the cell. This operator does not reallocate memory; use the operator ResizeCellList() to do this if necessary.</para>
/// </summary>
  void RemoveReferenceToCell(int ptId, int cellId);


  // void AddReferenceToCell (vtkIdType ptId, vtkIdType cellId);
/// <summary>
/// <para>Add a reference to a cell in a particular point's link list. (You may also consider using AddCellReference() to add the references from all the  cell's points to the cell.) This operator does not realloc memory; use the operator ResizeCellList() to do this if necessary.</para>
/// </summary>
  void AddReferenceToCell(int ptId, int cellId);


  // void ResizeCellList (vtkIdType ptId, int size);
/// <summary>
/// <para>Resize the list of cells using a particular point. (This operator assumes that BuildLinks() has been called.)</para>
/// </summary>
  void ResizeCellList(int ptId, int size);


  // virtual void Initialize ();
/// <summary>
/// <para>Restore object to initial state. Release memory back to system.</para>
/// </summary>
  void Initialize();


  // void GetUpdateExtent (int &piece, int &numPieces, int &ghostLevel);
/// <summary>
/// <para>For streaming.  User/next filter specifies which piece they want updated. The source of this poly data has to return exactly this piece.</para>
/// </summary>
  void GetUpdateExtent(int% piece, int% numPieces, int% ghostLevel);


// Did not wrap:  virtual int *GetUpdateExtent ();


  // virtual void GetUpdateExtent (int &x0, int &x1, int &y0, int &y1, int &z0, int &z1);
/// <summary>
/// <para>We need this here to avoid hiding superclass method</para>
/// </summary>
  void GetUpdateExtent(int% x0, int% x1, int% y0, int% y1, int% z0, int% z1);


  // virtual void GetUpdateExtent (int extent[6]);
/// <summary>
/// <para>We need this here to avoid hiding superclass method</para>
/// </summary>
  void GetUpdateExtent(array<int>^ extent);


  // virtual int GetPiece ();
/// <summary>
/// <para>Get the piece and the number of pieces. Similar to extent in 3D.</para>
/// </summary>
  int GetPiece();


  // virtual int GetNumberOfPieces ();
/// <summary>
/// <para>Get the piece and the number of pieces. Similar to extent in 3D.</para>
/// </summary>
  int GetNumberOfPieces();


  // virtual int GetGhostLevel ();
/// <summary>
/// <para>Get the ghost level.</para>
/// </summary>
  int GetGhostLevel();


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the actual size of the data in kilobytes. This number is valid only after the pipeline has updated. The memory size returned is guaranteed to be greater than or equal to the memory required to represent the data (e.g., extra space in arrays, etc. are not included in the return value). THIS METHOD IS THREAD SAFE.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // void ShallowCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void ShallowCopy(vtkDataObject^ src);


  // void DeepCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void DeepCopy(vtkDataObject^ src);


  // void RemoveGhostCells (int level);
/// <summary>
/// <para>This method will remove any cell that has a ghost level array value greater or equal to level.  It does not remove unused points (yet).</para>
/// </summary>
  void RemoveGhostCells(int level);


// Did not wrap:  vtkPolyData ();


// Did not wrap:  ~vtkPolyData ();


// Did not wrap:  virtual void Crop ();


// Did not wrap:  void GetCellNeighbors (vtkIdType cellId, vtkIdList &ptIds, vtkIdList &cellIds);this GetCellNeighbors cellId ptIds cellIds 


// Did not wrap:  vtkPolyData (const vtkPolyData &);


// Did not wrap:  void vtkPolyData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyData();


};

} // end vtkFiltering
