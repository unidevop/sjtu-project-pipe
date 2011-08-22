#pragma once

// managed includes
#include "vtkDataSetDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkDataObject;
ref class vtkGenericCell;

public ref class vtkRectilinearGrid : public vtkDataSet
{

public:
// Did not wrap:  static vtkRectilinearGrid *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRectilinearGrid *NewInstance ();
  vtkRectilinearGrid^ NewInstance();


  // vtkRectilinearGrid *SafeDownCast (vtkObject* o);
  static vtkRectilinearGrid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataObjectType ();return VTK_RECTILINEAR_GRID 
/// <summary>
/// <para>Return what type of dataset this is.</para>
/// </summary>
  int GetDataObjectType();


  // void CopyStructure (vtkDataSet *ds);
/// <summary>
/// <para>Copy the geometric and topological structure of an input rectilinear grid object.</para>
/// </summary>
  void CopyStructure(vtkDataSet^ ds);


  // void Initialize ();
/// <summary>
/// <para>Restore object to initial state. Release memory back to system.</para>
/// </summary>
  void Initialize();


  // vtkIdType GetNumberOfCells ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetNumberOfCells();


  // vtkIdType GetNumberOfPoints ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetNumberOfPoints();


  // double *GetPoint (vtkIdType ptId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  array<double>^ GetPoint(int ptId);


  // void GetPoint (vtkIdType id, double x[3]);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetPoint(int id, array<double>^ x);


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


  // int FindPoint (double x, double y, double z);return this vtkDataSet FindPoint x y z 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindPoint(double x, double y, double z);


  // vtkIdType FindPoint (double x[3]);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindPoint(array<double>^ x);


  // vtkIdType FindCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // vtkIdType FindCell (double x[3], vtkCell *cell, vtkGenericCell *gencell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // vtkCell *FindAndGetCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  vtkCell^ FindAndGetCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // int GetCellType (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetCellType(int cellId);


  // void GetCellPoints (vtkIdType cellId, vtkIdList *ptIds);vtkStructuredData GetCellPoints cellId ptIds this DataDescription this Dimensions 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCellPoints(int cellId, vtkIdList^ ptIds);


  // void GetPointCells (vtkIdType ptId, vtkIdList *cellIds);vtkStructuredData GetPointCells ptId cellIds this Dimensions 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetPointCells(int ptId, vtkIdList^ cellIds);


  // void ComputeBounds ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void ComputeBounds();


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


  // void SetDimensions (int i, int j, int k);
/// <summary>
/// <para>Set dimensions of rectilinear grid dataset. This also sets the extent.</para>
/// </summary>
  void SetDimensions(int i, int j, int k);


  // void SetDimensions (int dim[3]);
/// <summary>
/// <para>Set dimensions of rectilinear grid dataset. This also sets the extent.</para>
/// </summary>
  void SetDimensions(array<int>^ dim);


  // int  *GetDimensions ();
/// <summary>
/// <para>Get dimensions of this rectilinear grid dataset.</para>
/// </summary>
  array<int>^ GetDimensions();


  // int GetDataDimension ();
/// <summary>
/// <para>Return the dimensionality of the data.</para>
/// </summary>
  int GetDataDimension();


  // int ComputeStructuredCoordinates (double x[3], int ijk[3], double pcoords[3]);
/// <summary>
/// <para>Convenience function computes the structured coordinates for a point x[3]. The cell is specified by the array ijk[3], and the parametric coordinates in the cell are specified with pcoords[3]. The function returns a 0 if the point x is outside of the grid, and a 1 if inside the grid.</para>
/// </summary>
  int ComputeStructuredCoordinates(array<double>^ x, array<int>^ ijk, array<double>^ pcoords);


  // vtkIdType ComputePointId (int ijk[3]);
/// <summary>
/// <para>Given a location in structured coordinates (i-j-k), return the point id.</para>
/// </summary>
  int ComputePointId(array<int>^ ijk);


  // vtkIdType ComputeCellId (int ijk[3]);
/// <summary>
/// <para>Given a location in structured coordinates (i-j-k), return the cell id.</para>
/// </summary>
  int ComputeCellId(array<int>^ ijk);


  // virtual void SetXCoordinates (vtkDataArray *);
/// <summary>
/// <para>Specify the grid coordinates in the x-direction.</para>
/// </summary>
  void SetXCoordinates(vtkDataArray^ arg0);


  // vtkDataArray *GetXCoordinates ();
/// <summary>
/// <para>Specify the grid coordinates in the x-direction.</para>
/// </summary>
  vtkDataArray^ GetXCoordinates();


  // virtual void SetYCoordinates (vtkDataArray *);
/// <summary>
/// <para>Specify the grid coordinates in the y-direction.</para>
/// </summary>
  void SetYCoordinates(vtkDataArray^ arg0);


  // vtkDataArray *GetYCoordinates ();
/// <summary>
/// <para>Specify the grid coordinates in the y-direction.</para>
/// </summary>
  vtkDataArray^ GetYCoordinates();


  // virtual void SetZCoordinates (vtkDataArray *);
/// <summary>
/// <para>Specify the grid coordinates in the z-direction.</para>
/// </summary>
  void SetZCoordinates(vtkDataArray^ arg0);


  // vtkDataArray *GetZCoordinates ();
/// <summary>
/// <para>Specify the grid coordinates in the z-direction.</para>
/// </summary>
  vtkDataArray^ GetZCoordinates();


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
/// <para>Structured extent. The extent type is a 3D extent</para>
/// </summary>
  int GetExtentType();


  // virtual void Crop ();
/// <summary>
/// <para>Reallocates and copies to set the Extent to the UpdateExtent. This is used internally when the exact extent is requested,  and the source generated more than the update extent. </para>
/// </summary>
  void Crop();


// Did not wrap:  vtkRectilinearGrid ();


// Did not wrap:  ~vtkRectilinearGrid ();


// Did not wrap:  void GetCellNeighbors (vtkIdType cellId, vtkIdList &ptIds, vtkIdList &cellIds);this GetCellNeighbors cellId ptIds cellIds 


// Did not wrap:  vtkRectilinearGrid (const vtkRectilinearGrid &);


// Did not wrap:  void vtkRectilinearGrid 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRectilinearGrid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRectilinearGrid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRectilinearGrid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRectilinearGrid();


};

} // end vtkFiltering
