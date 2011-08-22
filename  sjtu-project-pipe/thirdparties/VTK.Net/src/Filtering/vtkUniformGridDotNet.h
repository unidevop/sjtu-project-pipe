#pragma once

// managed includes
#include "vtkImageDataDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkDataObject;
ref class vtkDataSet;
ref class vtkGenericCell;

public ref class vtkUniformGrid : public vtkImageData
{

public:
// Did not wrap:  static vtkUniformGrid *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUniformGrid *NewInstance ();
  vtkUniformGrid^ NewInstance();


  // vtkUniformGrid *SafeDownCast (vtkObject* o);
  static vtkUniformGrid^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void CopyStructure (vtkDataSet *ds);
/// <summary>
/// <para>Copy the geometric and topological structure of an input image data object.</para>
/// </summary>
  void CopyStructure(vtkDataSet^ ds);


  // virtual int GetDataObjectType ();return VTK_UNIFORM_GRID 
/// <summary>
/// <para>Return what type of dataset this is.</para>
/// </summary>
  int GetDataObjectType();


  // virtual vtkCell *GetCell (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  vtkCell^ GetCell(int cellId);


  // virtual void GetCell (vtkIdType cellId, vtkGenericCell *cell);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCell(int cellId, vtkGenericCell^ cell);


  // virtual vtkIdType FindCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // virtual vtkIdType FindCell (double x[3], vtkCell *cell, vtkGenericCell *gencell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int FindCell(array<double>^ x, vtkCell^ cell, vtkGenericCell^ gencell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // virtual vtkCell *FindAndGetCell (double x[3], vtkCell *cell, vtkIdType cellId, double tol2, int &subId, double pcoords[3], double *weights);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  vtkCell^ FindAndGetCell(array<double>^ x, vtkCell^ cell, int cellId, double tol2, int% subId, array<double>^ pcoords, array<double>^ weights);


  // virtual int GetCellType (vtkIdType cellId);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetCellType(int cellId);


  // virtual void GetCellPoints (vtkIdType cellId, vtkIdList *ptIds);vtkStructuredData GetCellPoints cellId ptIds this DataDescription this GetDimensions 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetCellPoints(int cellId, vtkIdList^ ptIds);


  // virtual void GetPointCells (vtkIdType ptId, vtkIdList *cellIds);vtkStructuredData GetPointCells ptId cellIds this GetDimensions 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetPointCells(int ptId, vtkIdList^ cellIds);


  // virtual void Initialize ();
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void Initialize();


  // virtual int GetMaxCellSize ();return 
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  int GetMaxCellSize();


  // virtual void GetScalarRange (double range[2]);
/// <summary>
/// <para>Standard vtkDataSet API methods. See vtkDataSet for more information.</para>
/// </summary>
  void GetScalarRange(array<double>^ range);


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


  // virtual void BlankPoint (vtkIdType ptId);
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off points in the structured grid, and hence the cells connected to them. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  void BlankPoint(int ptId);


  // virtual void UnBlankPoint (vtkIdType ptId);
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off points in the structured grid, and hence the cells connected to them. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  void UnBlankPoint(int ptId);


  // virtual void BlankCell (vtkIdType ptId);
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off cells in the structured grid. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  void BlankCell(int ptId);


  // virtual void UnBlankCell (vtkIdType ptId);
/// <summary>
/// <para>Methods for supporting blanking of cells. Blanking turns on or off cells in the structured grid. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  void UnBlankCell(int ptId);


  // virtual vtkUnsignedCharArray *GetPointVisibilityArray ();
/// <summary>
/// <para>Get the array that defines the blanking (visibility) of each point.</para>
/// </summary>
  vtkUnsignedCharArray^ GetPointVisibilityArray();


  // virtual void SetPointVisibilityArray (vtkUnsignedCharArray *pointVisibility);
/// <summary>
/// <para>Set an array that defines the (blanking) visibility of the points  in the grid. Make sure that length of the visibility array matches  the number of points in the grid.</para>
/// </summary>
  void SetPointVisibilityArray(vtkUnsignedCharArray^ pointVisibility);


  // virtual vtkUnsignedCharArray *GetCellVisibilityArray ();
/// <summary>
/// <para>Get the array that defines the blanking (visibility) of each cell.</para>
/// </summary>
  vtkUnsignedCharArray^ GetCellVisibilityArray();


  // virtual void SetCellVisibilityArray (vtkUnsignedCharArray *pointVisibility);
/// <summary>
/// <para>Set an array that defines the (blanking) visibility of the cells  in the grid. Make sure that length of the visibility array matches  the number of points in the grid.</para>
/// </summary>
  void SetCellVisibilityArray(vtkUnsignedCharArray^ pointVisibility);


  // virtual unsigned char IsPointVisible (vtkIdType ptId);
/// <summary>
/// <para>Return non-zero value if specified point is visible. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  unsigned char IsPointVisible(int ptId);


  // virtual unsigned char IsCellVisible (vtkIdType cellId);
/// <summary>
/// <para>Return non-zero value if specified point is visible. These methods should be called only after the dimensions of the grid are set.</para>
/// </summary>
  unsigned char IsCellVisible(int cellId);


  // virtual unsigned char GetPointBlanking ();
/// <summary>
/// <para>Returns 1 if there is any visibility constraint on the points, 0 otherwise.</para>
/// </summary>
  unsigned char GetPointBlanking();


  // virtual unsigned char GetCellBlanking ();
/// <summary>
/// <para>Returns 1 if there is any visibility constraint on the cells, 0 otherwise.</para>
/// </summary>
  unsigned char GetCellBlanking();


  // virtual vtkImageData *NewImageDataCopy ();
  vtkImageData^ NewImageDataCopy();


// Did not wrap:  vtkUniformGrid ();


// Did not wrap:  ~vtkUniformGrid ();


// Did not wrap:  void SetPointVisibility (vtkStructuredVisibilityConstraint *pointVisibility);


// Did not wrap:  vtkStructuredVisibilityConstraint *GetPointVisibility ();


// Did not wrap:  void SetCellVisibility (vtkStructuredVisibilityConstraint *cellVisibility);


// Did not wrap:  vtkStructuredVisibilityConstraint *GetCellVisibility ();


// Did not wrap:  vtkUniformGrid (const vtkUniformGrid &);


// Did not wrap:  void vtkUniformGrid 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUniformGrid(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUniformGrid(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUniformGrid();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUniformGrid();


};

} // end vtkFiltering
