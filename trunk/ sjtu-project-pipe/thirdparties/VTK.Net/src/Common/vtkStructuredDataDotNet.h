#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkIdList;

public ref class vtkStructuredData : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredData *NewInstance ();
  vtkStructuredData^ NewInstance();


  // static int SetDimensions (int inDim[3], int dim[3]);
/// <summary>
/// <para>Specify the dimensions of a regular, rectangular dataset. The input is the new dimensions (inDim) and the current dimensions (dim). The function  returns the dimension of the dataset (0-3D). If the dimensions are  improperly specified a -1 is returned. If the dimensions are unchanged, a value of 100 is returned.</para>
/// </summary>
  static int SetDimensions(array<int>^ inDim, array<int>^ dim);


  // static int SetExtent (int inExt[6], int ext[6]);
/// <summary>
/// <para>Specify the dimensions of a regular, rectangular dataset. The input is the new dimensions (inDim) and the current dimensions (dim). The function  returns the dimension of the dataset (0-3D). If the dimensions are  improperly specified a -1 is returned. If the dimensions are unchanged, a value of 100 is returned.</para>
/// </summary>
  static int SetExtent(array<int>^ inExt, array<int>^ ext);


  // static int GetDataDimension (int dataDescription);
/// <summary>
/// <para>Return the topological dimension of the data (e.g., 0, 1, 2, or 3D).</para>
/// </summary>
  static int GetDataDimension(int dataDescription);


  // static void GetCellPoints (vtkIdType cellId, vtkIdList *ptIds, int dataDescription, int dim[3]);
/// <summary>
/// <para>Get the points defining a cell. (See vtkDataSet for more info.)</para>
/// </summary>
  static void GetCellPoints(int cellId, vtkIdList^ ptIds, int dataDescription, array<int>^ dim);


  // static void GetPointCells (vtkIdType ptId, vtkIdList *cellIds, int dim[3]);
/// <summary>
/// <para>Get the cells using a point. (See vtkDataSet for more info.)</para>
/// </summary>
  static void GetPointCells(int ptId, vtkIdList^ cellIds, array<int>^ dim);


  // static void GetCellNeighbors (vtkIdType cellId, vtkIdList *ptIds, vtkIdList *cellIds, int dim[3]);
/// <summary>
/// <para>Get the cells using the points ptIds, exclusive of the cell cellId.  (See vtkDataSet for more info.)</para>
/// </summary>
  static void GetCellNeighbors(int cellId, vtkIdList^ ptIds, vtkIdList^ cellIds, array<int>^ dim);


  // static vtkIdType ComputePointId (int dim[3], int ijk[3]);return ijk dim ijk dim ijk 
/// <summary>
/// <para>Given a location in structured coordinates (i-j-k), and the dimensions of the structured dataset, return the cell id.</para>
/// </summary>
  static int ComputePointId(array<int>^ dim, array<int>^ ijk);


  // static vtkIdType ComputeCellId (int dim[3], int ijk[3]);return ijk dim ijk dim ijk 
  static int ComputeCellId(array<int>^ dim, array<int>^ ijk);


// Did not wrap:  vtkStructuredData ();


// Did not wrap:  ~vtkStructuredData ();


// Did not wrap:  vtkStructuredData (const vtkStructuredData &);


// Did not wrap:  void vtkStructuredData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredData();


};

} // end vtkCommon
