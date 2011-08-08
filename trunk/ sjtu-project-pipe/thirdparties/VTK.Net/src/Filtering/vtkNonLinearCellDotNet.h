#pragma once

// managed includes
#include "vtkCellDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataSet;
ref class vtkPointLocator;
ref class vtkPolyData;
ref class vtkUnstructuredGrid;

public ref class vtkNonLinearCell : public vtkCell
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkNonLinearCell *NewInstance ();
  vtkNonLinearCell^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetError (double );
/// <summary>
/// <para>Set/Get the normalized error measure used to control the  tessellation of the cell.</para>
/// </summary>
  void SetError(double arg0);


  // double GetErrorMinValue ();
/// <summary>
/// <para>Set/Get the normalized error measure used to control the  tessellation of the cell.</para>
/// </summary>
  double GetErrorMinValue();


  // double GetErrorMaxValue ();
/// <summary>
/// <para>Set/Get the normalized error measure used to control the  tessellation of the cell.</para>
/// </summary>
  double GetErrorMaxValue();


  // double GetError ();
/// <summary>
/// <para>Set/Get the normalized error measure used to control the  tessellation of the cell.</para>
/// </summary>
  double GetError();


  // virtual int IsLinear ();return 
/// <summary>
/// <para>This method tessellates the cell returning polydata. (The Error ivar controls the tessellation depth.) The new dataset will contain polydata primitives, possibly new points as well as interpolated point and cell data.  The user must provide (the output) polydata which is filled in by the method. If the optional PointLocator is supplied, then any new points that are created are inserted through the vtkPointLocator, rather than directly in the vtkPolyData.  (Note: the input dataset and cellId are used if the cell requires access to its owning dataset.) This method is called when the topological dimension of the cell is 2D or less.</para>
/// </summary>
  int IsLinear();


  // virtual void Tessellate (vtkIdType cellId, vtkDataSet *input, vtkPolyData *output, vtkPointLocator *locatorNULL);
/// <summary>
/// <para>This method tessellates the cell returning polydata. (The Error ivar controls the tessellation depth.) The new dataset will contain polydata primitives, possibly new points as well as interpolated point and cell data.  The user must provide (the output) polydata which is filled in by the method. If the optional PointLocator is supplied, then any new points that are created are inserted through the vtkPointLocator, rather than directly in the vtkPolyData.  (Note: the input dataset and cellId are used if the cell requires access to its owning dataset.) This method is called when the topological dimension of the cell is 2D or less.</para>
/// </summary>
  void Tessellate(int cellId, vtkDataSet^ input, vtkPolyData^ output, vtkPointLocator^ locatorNULL);


  // virtual void Tessellate (vtkIdType cellId, vtkDataSet *input, vtkUnstructuredGrid *output, vtkPointLocator *locatorNULL);
/// <summary>
/// <para>This method tessellates the cell returning unstructured grid. (The Error ivar controls the tessellation depth.) The new dataset will contain unstructured grid primitives, possibly new points as well as interpolated point and cell data.  The user must provide (the output) unstructured grid which is filled in by the method. If the optional PointLocator is supplied, then any new points that are created are inserted through the vtkPointLocator, rather than directly in the vtkUnstructuredGrid.  (Note: the input dataset and cellId are used if the cell requires access to its owning dataset.) This method is called when the topological dimension of the cell is 3D.</para>
/// </summary>
  void Tessellate(int cellId, vtkDataSet^ input, vtkUnstructuredGrid^ output, vtkPointLocator^ locatorNULL);


// Did not wrap:  vtkNonLinearCell ();


// Did not wrap:  ~vtkNonLinearCell ();


// Did not wrap:  vtkIdType InsertPoint (vtkPointLocator *locator, vtkPoints *pts, double *x);if locator NULL vtkIdType p locator InsertUniquePoint x p return p else return pts InsertNextPoint x 


// Did not wrap:  vtkNonLinearCell (const vtkNonLinearCell &);


// Did not wrap:  void vtkNonLinearCell 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkNonLinearCell(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkNonLinearCell(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkNonLinearCell();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkNonLinearCell();


};

} // end vtkFiltering
