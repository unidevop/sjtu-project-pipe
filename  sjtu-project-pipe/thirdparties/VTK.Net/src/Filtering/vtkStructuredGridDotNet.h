#pragma once

// managed includes
#include "vtkPointSetDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkDataObject;
ref class vtkDataSet;
ref class vtkGenericCell;

public ref class vtkStructuredGrid : public vtkPointSet
{

public:
// Did not wrap:  static vtkStructuredGrid *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredGrid *NewInstance ();
  vtkStructuredGrid^ NewInstance();


  // vtkStructuredGrid *SafeDownCast (vtkObject* o);
  static vtkStructuredGrid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataObjectType ();return VTK_STRUCTURED_GRID 
/// <summary>
/// <para>Copy the geometric and topological structure of an input poly data object.</para>
/// </summary>
  int GetDataObjectType();


  // void CopyStructure (vtkDataSet *ds);
/// <summary>
/// <para>Copy the geometric and topological structure of an input poly data object.</para>
/// </summary>
  void CopyStructure(vtkDataSet^ ds);


  // vtkIdType GetNumberOfPoints ();return vtkPointSet GetNumberOfPoints 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetNumberOfPoints();


  // double *GetPoint (vtkIdType ptId);return this vtkPointSet GetPoint ptId 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  array<double>^ GetPoint(int ptId);


  // void GetPoint (vtkIdType ptId, double p[3]);this vtkPointSet GetPoint ptId p 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetPoint(int ptId, array<double>^ p);


  // vtkCell *GetCell (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  vtkCell^ GetCell(int cellId);


  // void GetCell (vtkIdType cellId, vtkGenericCell *cell);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCell(int cellId, vtkGenericCell^ cell);


  // void GetCellBounds (vtkIdType cellId, double bounds[6]);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCellBounds(int cellId, array<double>^ bounds);


  // int GetCellType (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetCellType(int cellId);


  // vtkIdType GetNumberOfCells ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetNumberOfCells();


  // void GetCellPoints (vtkIdType cellId, vtkIdList *ptIds);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCellPoints(int cellId, vtkIdList^ ptIds);


  // void GetPointCells (vtkIdType ptId, vtkIdList *cellIds);vtkStructuredData GetPointCells ptId cellIds this GetDimensions 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetPointCells(int ptId, vtkIdList^ cellIds);


  // void Initialize ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void Initialize();


  // int GetMaxCellSize ();return 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetMaxCellSize();


  // void GetCellNeighbors (vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds);


  // virtual void GetScalarRange (double range[2]);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetScalarRange(array<double>^ range);


  // double *GetScalarRange ();return this Superclass GetScalarRange 
/// <summary>
/// <para>following methods are specific to structured grid</para>
/// </summary>
  array<double>^ GetScalarRange();


  // void SetDimensions (int i, int j, int k);
/// <summary>
/// <para>following methods are specific to structured grid</para>
/// </summary>
  void SetDimensions(int i, int j, int k);


  // void SetDimensions (int dim[3]);
/// <summary>
/// <para>following methods are specific to structured grid</para>
/// </summary>
  void SetDimensions(array<int>^ dim);


  // virtual int *GetDimensions ();
/// <summary>
/// <para>Get dimensions of this structured points dataset.</para>
/// </summary>
  array<int>^ GetDimensions();


  // virtual void GetDimensions (int dim[3]);
/// <summary>
/// <para>Get dimensions of this structured points dataset.</para>
/// </summary>
  void GetDimensions(array<int>^ dim);


  // int GetDataDimension ();
/// <summary>
/// <para>Return the dimensionality of the data.</para>
/// </summary>
  int GetDataDimension();


  // void SetExtent (int extent[6]);
/// <summary>
/// <para>Different ways to set the extent of the data array.  The extent should be set before the &quot;Scalars&quot; are set or allocated. The Extent is stored  in the order (X, Y, Z).</para>
/// </summary>
  void SetExtent(array<int>^ extent);


  // void SetExtent (int x1, int x2, int y1, int y2, int z1, int z2);
/// <summary>
/// <para>Different ways to set the extent of the data array.  The extent should be set before the &quot;Scalars&quot; are set or allocated. The Extent is stored  in the order (X, Y, Z).</para>
/// </summary>
  void SetExtent(int x1, int x2, int y1, int y2, int z1, int z2);


  // int  *GetExtent ();
/// <summary>
/// <para>Different ways to set the extent of the data array.  The extent should be set before the &quot;Scalars&quot; are set or allocated. The Extent is stored  in the order (X, Y, Z).</para>
/// </summary>
  array<int>^ GetExtent();


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


  // int GetExtentType ();return VTK_3D_EXTENT 
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off points in the structured grid, and hence the cells connected to them. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  int GetExtentType();


  // void BlankPoint (vtkIdType ptId);
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off points in the structured grid, and hence the cells connected to them. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  void BlankPoint(int ptId);


  // void UnBlankPoint (vtkIdType ptId);
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off points in the structured grid, and hence the cells connected to them. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  void UnBlankPoint(int ptId);


  // void BlankCell (vtkIdType ptId);
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off cells in the structured grid, and hence the cells connected to them. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  void BlankCell(int ptId);


  // void UnBlankCell (vtkIdType ptId);
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off cells in the structured grid, and hence the cells connected to them. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  void UnBlankCell(int ptId);


  // vtkUnsignedCharArray *GetPointVisibilityArray ();
/// <summary>
/// <para>Get the array that defines the blanking (visibility) of each point.</para>
/// </summary>
  vtkUnsignedCharArray^ GetPointVisibilityArray();


  // void SetPointVisibilityArray (vtkUnsignedCharArray *pointVisibility);
/// <summary>
/// <para>Set an array that defines the (blanking) visibility of the points  in the grid. Make sure that length of the visibility array matches  the number of points in the grid.</para>
/// </summary>
  void SetPointVisibilityArray(vtkUnsignedCharArray^ pointVisibility);


  // vtkUnsignedCharArray *GetCellVisibilityArray ();
/// <summary>
/// <para>Get the array that defines the blanking (visibility) of each cell.</para>
/// </summary>
  vtkUnsignedCharArray^ GetCellVisibilityArray();


  // void SetCellVisibilityArray (vtkUnsignedCharArray *pointVisibility);
/// <summary>
/// <para>Set an array that defines the (blanking) visibility of the cells  in the grid. Make sure that length of the visibility array matches  the number of points in the grid.</para>
/// </summary>
  void SetCellVisibilityArray(vtkUnsignedCharArray^ pointVisibility);


  // unsigned char IsPointVisible (vtkIdType ptId);
/// <summary>
/// <para>Return non-zero value if specified point is visible. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  unsigned char IsPointVisible(int ptId);


  // unsigned char IsCellVisible (vtkIdType cellId);
/// <summary>
/// <para>Return non-zero value if specified point is visible. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  unsigned char IsCellVisible(int cellId);


  // unsigned char GetPointBlanking ();
/// <summary>
/// <para>Returns 1 if there is any visibility constraint on the points, 0 otherwise.</para>
/// </summary>
  unsigned char GetPointBlanking();


  // unsigned char GetCellBlanking ();
/// <summary>
/// <para>Returns 1 if there is any visibility constraint on the cells, 0 otherwise.</para>
/// </summary>
  unsigned char GetCellBlanking();


  // virtual void Crop ();
/// <summary>
/// <para>Reallocates and copies to set the Extent to the UpdateExtent. This is used internally when the exact extent is requested,  and the source generated more than the update extent. </para>
/// </summary>
  void Crop();


// Did not wrap:  vtkStructuredGrid ();


// Did not wrap:  ~vtkStructuredGrid ();


// Did not wrap:  void SetPointVisibility (vtkStructuredVisibilityConstraint *pointVisibility);


// Did not wrap:  vtkStructuredVisibilityConstraint *GetPointVisibility ();


// Did not wrap:  void SetCellVisibility (vtkStructuredVisibilityConstraint *cellVisibility);


// Did not wrap:  vtkStructuredVisibilityConstraint *GetCellVisibility ();


// Did not wrap:  void GetCellNeighbors (vtkIdType cellId, vtkIdList &ptIds, vtkIdList &cellIds);this GetCellNeighbors cellId ptIds cellIds 


// Did not wrap:  void InternalStructuredGridCopy (vtkStructuredGrid *src);


// Did not wrap:  vtkStructuredGrid (const vtkStructuredGrid &);


// Did not wrap:  void vtkStructuredGrid 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredGrid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredGrid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredGrid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredGrid();


};

} // end vtkFiltering
