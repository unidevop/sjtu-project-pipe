#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;

public ref class vtkCellArray : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellArray *NewInstance ();
  vtkCellArray^ NewInstance();


  // vtkCellArray *SafeDownCast (vtkObject* o);
  static vtkCellArray^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCellArray *New ();


  // int Allocate (const vtkIdType sz, const int ext);return this Ia Allocate sz ext 
/// <summary>
/// <para>Free any memory and reset to an empty state.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // void Initialize ();this Ia Initialize 
/// <summary>
/// <para>Get the number of cells in the array.</para>
/// </summary>
  void Initialize();


  // vtkIdType GetNumberOfCells ();
/// <summary>
/// <para>Get the number of cells in the array.</para>
/// </summary>
  int GetNumberOfCells();


  // void SetNumberOfCells (vtkIdType );
/// <summary>
/// <para>Set the number of cells in the array. DO NOT do any kind of allocation, advanced use only.</para>
/// </summary>
  void SetNumberOfCells(int arg0);


  // vtkIdType EstimateSize (vtkIdType numCells, int maxPtsPerCell);return numCells maxPtsPerCell 
/// <summary>
/// <para>A cell traversal methods that is more efficient than vtkDataSet traversal methods.  InitTraversal() initializes the traversal of the list of cells.</para>
/// </summary>
  int EstimateSize(int numCells, int maxPtsPerCell);


  // void InitTraversal ();this TraversalLocation 
/// <summary>
/// <para>A cell traversal methods that is more efficient than vtkDataSet traversal methods.  InitTraversal() initializes the traversal of the list of cells.</para>
/// </summary>
  void InitTraversal();


// Did not wrap:  int GetNextCell (vtkIdType &npts, vtkIdType &pts);


  // vtkIdType GetSize ();return this Ia GetSize 
/// <summary>
/// <para>Get the total number of entries (i.e., data values) in the connectivity  array. This may be much less than the allocated size (i.e., return value  from GetSize().)</para>
/// </summary>
  int GetSize();


  // vtkIdType GetNumberOfConnectivityEntries ();return this Ia GetMaxId 
/// <summary>
/// <para>Internal method used to retrieve a cell given an offset into the internal array.</para>
/// </summary>
  int GetNumberOfConnectivityEntries();


// Did not wrap:  void GetCell (vtkIdType loc, vtkIdType &npts, vtkIdType &pts);


  // vtkIdType InsertNextCell (vtkCell *cell);
/// <summary>
/// <para>Insert a cell object. Return the cell id of the cell.</para>
/// </summary>
  int InsertNextCell(vtkCell^ cell);


  // vtkIdType InsertNextCell (vtkIdType npts, const vtkIdType *pts);
/// <summary>
/// <para>Create a cell by specifying the number of points and an array of point id's.  Return the cell id of the cell.</para>
/// </summary>
  int InsertNextCell(int npts, array<int>^ pts);


  // vtkIdType InsertNextCell (vtkIdList *pts);
/// <summary>
/// <para>Create a cell by specifying a list of point ids. Return the cell id of the cell.</para>
/// </summary>
  int InsertNextCell(vtkIdList^ pts);


  // vtkIdType InsertNextCell (int npts);
/// <summary>
/// <para>Create cells by specifying count, and then adding points one at a time using method InsertCellPoint(). If you don't know the count initially, use the method UpdateCellCount() to complete the cell. Return the cell id of the cell.</para>
/// </summary>
  int InsertNextCell(int npts);


  // void InsertCellPoint (vtkIdType id);
/// <summary>
/// <para>Used in conjunction with InsertNextCell(int npts) to add another point to the list of cells.</para>
/// </summary>
  void InsertCellPoint(int id);


  // void UpdateCellCount (int npts);
/// <summary>
/// <para>Used in conjunction with InsertNextCell(int npts) and InsertCellPoint() to update the number of points defining the cell.</para>
/// </summary>
  void UpdateCellCount(int npts);


  // vtkIdType GetInsertLocation (int npts);return this InsertLocation npts 
/// <summary>
/// <para>Computes the current insertion location within the internal array.  Used in conjunction with GetCell(int loc,...).</para>
/// </summary>
  int GetInsertLocation(int npts);


  // vtkIdType GetTraversalLocation ();return this TraversalLocation 
/// <summary>
/// <para>Get/Set the current traversal location.</para>
/// </summary>
  int GetTraversalLocation();


  // void SetTraversalLocation (vtkIdType loc);this TraversalLocation loc 
/// <summary>
/// <para>Computes the current traversal location within the internal array. Used  in conjunction with GetCell(int loc,...).</para>
/// </summary>
  void SetTraversalLocation(int loc);


  // vtkIdType GetTraversalLocation (vtkIdType npts);return this TraversalLocation npts 
/// <summary>
/// <para>Special method inverts ordering of current cell. Must be called carefully or the cell topology may be corrupted.</para>
/// </summary>
  int GetTraversalLocation(int npts);


  // void ReverseCell (vtkIdType loc);
/// <summary>
/// <para>Special method inverts ordering of current cell. Must be called carefully or the cell topology may be corrupted.</para>
/// </summary>
  void ReverseCell(int loc);


  // void ReplaceCell (vtkIdType loc, int npts, const vtkIdType *pts);
/// <summary>
/// <para>Replace the point ids of the cell with a different list of point ids.</para>
/// </summary>
  void ReplaceCell(int loc, int npts, array<int>^ pts);


  // int GetMaxCellSize ();
/// <summary>
/// <para>Returns the size of the largest cell. The size is the number of points defining the cell.</para>
/// </summary>
  int GetMaxCellSize();


// Did not wrap:  vtkIdType *GetPointer ();return this Ia GetPointer 


// Did not wrap:  vtkIdType *WritePointer (const vtkIdType ncells, const vtkIdType size);


  // void SetCells (vtkIdType ncells, vtkIdTypeArray *cells);
/// <summary>
/// <para>Define multiple cells by providing a connectivity list. The list is in the form (npts,p0,p1,...p(npts-1), repeated for each cell). Be careful using this method because it discards the old cells, and anything referring these cells becomes invalid (for example, if BuildCells() has been called see vtkPolyData).  The traversal location is reset to the beginning of the list; the insertion location is set to the end of the list.</para>
/// </summary>
  void SetCells(int ncells, vtkIdTypeArray^ cells);


  // void DeepCopy (vtkCellArray *ca);
/// <summary>
/// <para>Perform a deep copy (no reference counting) of the given cell array.</para>
/// </summary>
  void DeepCopy(vtkCellArray^ ca);


  // vtkIdTypeArray *GetData ();return this Ia 
/// <summary>
/// <para>Reuse list. Reset to initial condition.</para>
/// </summary>
  vtkIdTypeArray^ GetData();


  // void Reset ();
/// <summary>
/// <para>Reuse list. Reset to initial condition.</para>
/// </summary>
  void Reset();


  // void Squeeze ();this Ia Squeeze 
/// <summary>
/// <para>Return the memory in kilobytes consumed by this cell array. Used to support streaming and reading/writing data. The value returned is guaranteed to be greater than or equal to the memory required to actually represent the data represented by this object. The  information returned is valid only after the pipeline has  been updated.</para>
/// </summary>
  void Squeeze();


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the memory in kilobytes consumed by this cell array. Used to support streaming and reading/writing data. The value returned is guaranteed to be greater than or equal to the memory required to actually represent the data represented by this object. The  information returned is valid only after the pipeline has  been updated.</para>
/// </summary>
  unsigned long GetActualMemorySize();


// Did not wrap:  vtkCellArray ();


// Did not wrap:  ~vtkCellArray ();


// Did not wrap:  vtkCellArray (const vtkCellArray &);


// Did not wrap:  void vtkCellArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellArray();


};

} // end vtkFiltering
