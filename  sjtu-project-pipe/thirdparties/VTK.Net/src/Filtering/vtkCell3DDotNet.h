#pragma once

// managed includes
#include "vtkCellDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCellArray;
ref class vtkCellData;
ref class vtkPointData;
ref class vtkPointLocator;

public ref class vtkCell3D : public vtkCell
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCell3D *NewInstance ();
  vtkCell3D^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual void GetEdgePoints (int edgeId, int &pts) = 0;


// Did not wrap:  virtual void GetFacePoints (int faceId, int &pts) = 0;


  // void Contour (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd);
  void Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd);


  // virtual void Clip (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *connectivity, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut);
/// <summary>
/// <para>Cut (or clip) the cell based on the input cellScalars and the specified value. The output of the clip operation will be one or more cells of the same topological dimension as the original cell.  The flag insideOut controls what part of the cell is considered inside - normally cell points whose scalar value is greater than &quot;value&quot; are considered inside. If insideOut is on, this is reversed. Also, if the output cell data is non-NULL, the cell data from the clipped cell is passed to the generated contouring primitives. (Note: the CopyAllocate() method must be invoked on both the output cell and point data. The cellId refers to the cell from which the cell data is copied.)  (Satisfies vtkCell API.)</para>
/// </summary>
  void Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut);


  // virtual int GetCellDimension ();return 
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate tetrahedra during clipping.</para>
/// </summary>
  int GetCellDimension();


  // void SetMergeTolerance (double );
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate tetrahedra during clipping.</para>
/// </summary>
  void SetMergeTolerance(double arg0);


  // double GetMergeToleranceMinValue ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate tetrahedra during clipping.</para>
/// </summary>
  double GetMergeToleranceMinValue();


  // double GetMergeToleranceMaxValue ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate tetrahedra during clipping.</para>
/// </summary>
  double GetMergeToleranceMaxValue();


  // double GetMergeTolerance ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate tetrahedra during clipping.</para>
/// </summary>
  double GetMergeTolerance();


// Did not wrap:  vtkCell3D ();


// Did not wrap:  ~vtkCell3D ();


// Did not wrap:  vtkCell3D (const vtkCell3D &);


// Did not wrap:  void vtkCell3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCell3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCell3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCell3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCell3D();


};

} // end vtkFiltering
