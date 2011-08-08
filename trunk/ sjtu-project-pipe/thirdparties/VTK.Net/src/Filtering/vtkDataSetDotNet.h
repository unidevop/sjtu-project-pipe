#pragma once

// managed includes
#include "vtkDataObjectDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkCellData;
ref class vtkCellTypes;
ref class vtkGenericCell;
ref class vtkPointData;

public ref class vtkDataSet : public vtkDataObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSet *NewInstance ();
  vtkDataSet^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void CopyStructure (vtkDataSet *ds) = 0;
/// <summary>
/// <para>Copy the geometric and topological structure of an object. Note that the invoking object and the object pointed to by the parameter ds must be of the same type. THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  void CopyStructure(vtkDataSet^ ds);


  // virtual vtkIdType GetNumberOfPoints () = 0;
/// <summary>
/// <para>Determine the number of points composing the dataset. THIS METHOD IS THREAD SAFE</para>
/// </summary>
  int GetNumberOfPoints();


  // virtual vtkIdType GetNumberOfCells () = 0;
/// <summary>
/// <para>Determine the number of cells composing the dataset. THIS METHOD IS THREAD SAFE</para>
/// </summary>
  int GetNumberOfCells();


  // virtual double *GetPoint (vtkIdType ptId) = 0;
/// <summary>
/// <para>Get point coordinates with ptId such that: 0 &lt;= ptId &lt; NumberOfPoints. THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  array<double>^ GetPoint(int ptId);


  // virtual void GetPoint (vtkIdType id, double x[3]);
/// <summary>
/// <para>Copy point coordinates into user provided array x[3] for specified point id. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetPoint(int id, array<double>^ x);


  // virtual vtkCell *GetCell (vtkIdType cellId) = 0;
/// <summary>
/// <para>Get cell with cellId such that: 0 &lt;= cellId &lt; NumberOfCells. THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  vtkCell^ GetCell(int cellId);


  // virtual void GetCell (vtkIdType cellId, vtkGenericCell *cell) = 0;
/// <summary>
/// <para>Get cell with cellId such that: 0 &lt;= cellId &lt; NumberOfCells.  This is a thread-safe alternative to the previous GetCell() method. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetCell(int cellId, vtkGenericCell^ cell);


  // virtual void GetCellBounds (vtkIdType cellId, double bounds[6]);
/// <summary>
/// <para>Get the bounds of the cell with cellId such that:     0 &lt;= cellId &lt; NumberOfCells. A subclass may be able to determine the bounds of cell without using an expensive GetCell() method. A default implementation is provided that actually uses a GetCell() call.  This is to ensure the method is available to all datasets.  Subclasses should override this method to provide an efficient implementation. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetCellBounds(int cellId, array<double>^ bounds);


  // virtual int GetCellType (vtkIdType cellId) = 0;
/// <summary>
/// <para>Get type of cell with cellId such that: 0 &lt;= cellId &lt; NumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  int GetCellType(int cellId);


  // virtual void GetCellTypes (vtkCellTypes *types);
/// <summary>
/// <para>Get a list of types of cells in a dataset. The list consists of an array of types (not necessarily in any order), with a single entry per type. For example a dataset 5 triangles, 3 lines, and 100 hexahedra would result a list of three entries, corresponding to the types VTK_TRIANGLE, VTK_LINE, and VTK_HEXAHEDRON. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetCellTypes(vtkCellTypes^ types);


  // virtual void GetCellPoints (vtkIdType cellId, vtkIdList *ptIds) = 0;
/// <summary>
/// <para>Topological inquiry to get points defining cell. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetCellPoints(int cellId, vtkIdList^ ptIds);


  // virtual void GetPointCells (vtkIdType ptId, vtkIdList *cellIds) = 0;
/// <summary>
/// <para>Topological inquiry to get cells using point. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetPointCells(int ptId, vtkIdList^ cellIds);


  // virtual void GetCellNeighbors (vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds);
/// <summary>
/// <para>Topological inquiry to get all cells using list of points exclusive of cell specified (e.g., cellId). Note that the list consists of only cells that use ALL the points provided. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds);


  // vtkIdType FindPoint (double x, double y, double z);double xyz xyz x xyz y xyz z return this FindPoint xyz 
/// <summary>
/// <para>Locate the closest point to the global coordinate x. Return the point id. If point id &lt; 0; then no point found. (This may arise when point is outside of dataset.) THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  int FindPoint(double x, double y, double z);


  // virtual vtkIdType FindPoint (double x[3]) = 0;
/// <summary>
/// <para>Locate the closest point to the global coordinate x. Return the point id. If point id &lt; 0; then no point found. (This may arise when point is outside of dataset.) THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  int FindPoint(array<double>^ x);


  // virtual vtkIdType FindCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights) = 0;
/// <summary>
/// <para>Locate cell based on global coordinate x and tolerance squared. If cell and cellId is non-NULL, then search starts from this cell and looks at immediate neighbors.  Returns cellId &gt;= 0 if inside, &lt; 0 otherwise.  The parametric coordinates are provided in pcoords[3]. The interpolation weights are returned in weights[]. (The number of weights is equal to the number of points in the found cell). Tolerance is used to control how close the point is to be considered &quot;in&quot; the cell. THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // virtual vtkIdType FindCell (double x[3], vtkCell *cell, vtkGenericCell *gencell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights) = 0;
/// <summary>
/// <para>This is a version of the above method that can be used with  multithreaded applications. A vtkGenericCell must be passed in to be used in internal calls that might be made to GetCell() THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // virtual vtkCell *FindAndGetCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Locate the cell that contains a point and return the cell. Also returns the subcell id, parametric coordinates and weights for subsequent interpolation. This method combines the derived class methods int FindCell and vtkCell *GetCell. Derived classes may provide a more  efficient implementation. See for example vtkStructuredPoints. THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  vtkCell^ FindAndGetCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Datasets are composite objects and need to check each part for MTime THIS METHOD IS THREAD SAFE</para>
/// </summary>
  unsigned long GetMTime();


  // vtkCellData *GetCellData ();return this CellData 
/// <summary>
/// <para>return pointer to this dataset's point data THIS METHOD IS THREAD SAFE</para>
/// </summary>
  vtkCellData^ GetCellData();


  // vtkPointData *GetPointData ();return this PointData 
/// <summary>
/// <para>return pointer to this dataset's point data THIS METHOD IS THREAD SAFE</para>
/// </summary>
  vtkPointData^ GetPointData();


  // virtual void Squeeze ();
/// <summary>
/// <para>Reclaim any extra memory used to store data. THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  void Squeeze();


  // virtual void ComputeBounds ();
/// <summary>
/// <para>Compute the data bounding box from data points. THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  void ComputeBounds();


  // double *GetBounds ();
/// <summary>
/// <para>Return a pointer to the geometry bounding box in the form (xmin,xmax, ymin,ymax, zmin,zmax). THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  array<double>^ GetBounds();


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Return a pointer to the geometry bounding box in the form (xmin,xmax, ymin,ymax, zmin,zmax). THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // double *GetCenter ();
/// <summary>
/// <para>Get the center of the bounding box. THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  array<double>^ GetCenter();


  // void GetCenter (double center[3]);
/// <summary>
/// <para>Get the center of the bounding box. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetCenter(array<double>^ center);


  // double GetLength ();
/// <summary>
/// <para>Return the length of the diagonal of the bounding box. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  double GetLength();


  // void Initialize ();
/// <summary>
/// <para>Restore data object to initial state, THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  void Initialize();


  // virtual void GetScalarRange (double range[2]);
/// <summary>
/// <para>Convenience method to get the range of the scalar data (if there is any  scalar data). Returns the (min/max) range of combined point and cell data. If there are no point or cell scalars the method will return (0,1). Note: Update needs to be called to create the scalars. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED</para>
/// </summary>
  void GetScalarRange(array<double>^ range);


  // double *GetScalarRange ();
/// <summary>
/// <para>Convenience method to get the range of the scalar data (if there is any  scalar data).  THIS METHOD IS NOT THREAD SAFE.</para>
/// </summary>
  array<double>^ GetScalarRange();


  // virtual int GetMaxCellSize () = 0;
/// <summary>
/// <para>Convenience method returns largest cell size in dataset. This is generally used to allocate memory for supporting data structures. THIS METHOD IS THREAD SAFE</para>
/// </summary>
  int GetMaxCellSize();


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the actual size of the data in kilobytes. This number is valid only after the pipeline has updated. The memory size returned is guaranteed to be greater than or equal to the memory required to represent the data (e.g., extra space in arrays, etc. are not included in the return value). THIS METHOD IS THREAD SAFE.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // int GetDataObjectType ();return VTK_DATA_SET 
/// <summary>
/// <para>Shallow and Deep copy.</para>
/// </summary>
  int GetDataObjectType();


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


  // int CheckAttributes ();
/// <summary>
/// <para>This method checks to see if the cell and point attributes match the geometry.  Many filters will crash if the number of  tupples in an array is less than the number of points/cells. This method returns 1 if there is a mismatch,  and 0 if everything is ok.  It prints an error if an array is too short, and a warning if an array is too long.</para>
/// </summary>
  int CheckAttributes();


  // virtual void GenerateGhostLevelArray ();
/// <summary>
/// <para>Normally called by pipeline executives or algoritgms only. This method computes the ghost arrays for a given dataset.</para>
/// </summary>
  void GenerateGhostLevelArray();


// Did not wrap:  vtkDataSet ();


// Did not wrap:  ~vtkDataSet ();


// Did not wrap:  void InternalDataSetCopy (vtkDataSet *src);


// Did not wrap:  vtkDataSet (const vtkDataSet &);


// Did not wrap:  void vtkDataSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSet();


};

} // end vtkFiltering
