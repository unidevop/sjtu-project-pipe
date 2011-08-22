#pragma once

// managed includes
#include "vtkPointSetDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkCellArray;
ref class vtkCellLinks;
ref class vtkDataObject;
ref class vtkDataSet;
ref class vtkGenericCell;

public ref class vtkUnstructuredGrid : public vtkPointSet
{

public:
// Did not wrap:  static vtkUnstructuredGrid *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGrid *NewInstance ();
  vtkUnstructuredGrid^ NewInstance();


  // vtkUnstructuredGrid *SafeDownCast (vtkObject* o);
  static vtkUnstructuredGrid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataObjectType ();return VTK_UNSTRUCTURED_GRID 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetDataObjectType();


  // virtual void Allocate (vtkIdType numCells, int extSize);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void Allocate(int numCells, int extSize);


  // vtkIdType InsertNextCell (int type, vtkIdType npts, vtkIdType *pts);
/// <summary>
/// <para>Insert/create cell in object by type and list of point ids defining cell topology.</para>
/// </summary>
  int InsertNextCell(int type, int npts, array<int>^ arg2);


  // vtkIdType InsertNextCell (int type, vtkIdList *ptIds);
/// <summary>
/// <para>Insert/create cell in object by type and list of point ids defining cell topology.</para>
/// </summary>
  int InsertNextCell(int type, vtkIdList^ ptIds);


  // void Reset ();
  void Reset();


  // virtual void CopyStructure (vtkDataSet *ds);
  void CopyStructure(vtkDataSet^ ds);


  // vtkIdType GetNumberOfCells ();
  int GetNumberOfCells();


  // virtual vtkCell *GetCell (vtkIdType cellId);
  vtkCell^ GetCell(int cellId);


  // virtual void GetCell (vtkIdType cellId, vtkGenericCell *cell);
  void GetCell(int cellId, vtkGenericCell^ cell);


  // virtual void GetCellBounds (vtkIdType cellId, double bounds[6]);
  void GetCellBounds(int cellId, array<double>^ bounds);


  // virtual void GetCellPoints (vtkIdType cellId, vtkIdList *ptIds);
  void GetCellPoints(int cellId, vtkIdList^ ptIds);


  // void GetPointCells (vtkIdType ptId, vtkIdList *cellIds);
  void GetPointCells(int ptId, vtkIdList^ cellIds);


  // int GetCellType (vtkIdType cellId);
  int GetCellType(int cellId);


  // vtkUnsignedCharArray *GetCellTypesArray ();return this Types 
  vtkUnsignedCharArray^ GetCellTypesArray();


  // vtkIdTypeArray *GetCellLocationsArray ();return this Locations 
  vtkIdTypeArray^ GetCellLocationsArray();


  // void Squeeze ();
  void Squeeze();


  // void Initialize ();
  void Initialize();


  // int GetMaxCellSize ();
  int GetMaxCellSize();


  // void BuildLinks ();
  void BuildLinks();


  // vtkCellLinks *GetCellLinks ();return this Links 
  vtkCellLinks^ GetCellLinks();


// Did not wrap:  virtual void GetCellPoints (vtkIdType cellId, vtkIdType &npts, vtkIdType &pts);


  // void SetCells (int type, vtkCellArray *cells);
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  void SetCells(int type, vtkCellArray^ cells);


  // void SetCells (int *types, vtkCellArray *cells);
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  void SetCells(array<int>^ types, vtkCellArray^ cells);


  // void SetCells (vtkUnsignedCharArray *cellTypes, vtkIdTypeArray *cellLocations, vtkCellArray *cells);
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  void SetCells(vtkUnsignedCharArray^ cellTypes, vtkIdTypeArray^ cellLocations, vtkCellArray^ cells);


  // vtkCellArray *GetCells ();return this Connectivity 
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  vtkCellArray^ GetCells();


  // void ReplaceCell (vtkIdType cellId, int npts, vtkIdType *pts);
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  void ReplaceCell(int cellId, int npts, array<int>^ arg2);


  // int InsertNextLinkedCell (int type, int npts, vtkIdType *pts);
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  int InsertNextLinkedCell(int type, int npts, array<int>^ arg2);


  // void RemoveReferenceToCell (vtkIdType ptId, vtkIdType cellId);
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  void RemoveReferenceToCell(int ptId, int cellId);


  // void AddReferenceToCell (vtkIdType ptId, vtkIdType cellId);
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  void AddReferenceToCell(int ptId, int cellId);


  // void ResizeCellList (vtkIdType ptId, int size);
/// <summary>
/// <para>Special methods specific to vtkUnstructuredGrid for defining the cells composing the dataset.</para>
/// </summary>
  void ResizeCellList(int ptId, int size);


  // virtual void GetCellNeighbors (vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds);
/// <summary>
/// <para>Topological inquiry to get all cells using list of points exclusive of cell specified (e.g., cellId). THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds);


  // void GetUpdateExtent (int &piece, int &numPieces, int &ghostLevel);
/// <summary>
/// <para>For streaming.  User/next filter specifies which piece the want updated. The source of this poly data has to return exactly this piece.</para>
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
/// <para>Set / Get the piece and the number of pieces. Similar to extent in 3D.</para>
/// </summary>
  int GetPiece();


  // virtual int GetNumberOfPieces ();
/// <summary>
/// <para>Set / Get the piece and the number of pieces. Similar to extent in 3D.</para>
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


  // virtual void ShallowCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void ShallowCopy(vtkDataObject^ src);


  // virtual void DeepCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  void DeepCopy(vtkDataObject^ src);


  // void GetIdsOfCellsOfType (int type, vtkIdTypeArray *array);
/// <summary>
/// <para>Fill vtkIdTypeArray container with list of cell Ids.  This method traverses all cells and, for a particular cell type, inserts the cell Id into the container.</para>
/// </summary>
  void GetIdsOfCellsOfType(int type, vtkIdTypeArray^ arg1);


  // int IsHomogeneous ();
/// <summary>
/// <para>Traverse cells and determine if cells are all of the same type.</para>
/// </summary>
  int IsHomogeneous();


  // void RemoveGhostCells (int level);
/// <summary>
/// <para>This method will remove any cell that has a ghost level array value greater or equal to level.</para>
/// </summary>
  void RemoveGhostCells(int level);


// Did not wrap:  vtkUnstructuredGrid ();


// Did not wrap:  ~vtkUnstructuredGrid ();


// Did not wrap:  void GetCellNeighbors (vtkIdType cellId, vtkIdList &ptIds, vtkIdList &cellIds);


// Did not wrap:  vtkUnstructuredGrid (const vtkUnstructuredGrid &);


// Did not wrap:  void vtkUnstructuredGrid 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGrid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGrid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGrid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGrid();


};

} // end vtkFiltering
