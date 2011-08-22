#pragma once

// managed includes
#include "vtkCellDotNet.h"
#include "vtkCellDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCellArray;
ref class vtkCellData;
ref class vtkPointData;
ref class vtkPointLocator;

public ref class vtkGenericCell : public vtkCell
{

public:
// Did not wrap:  static vtkGenericCell *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericCell *NewInstance ();
  vtkGenericCell^ NewInstance();


  // vtkGenericCell *SafeDownCast (vtkObject* o);
  static vtkGenericCell^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ShallowCopy (vtkCell *c);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void ShallowCopy(vtkCell^ c);


  // void DeepCopy (vtkCell *c);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void DeepCopy(vtkCell^ c);


  // int GetCellType ();
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetCellType();


  // int GetCellDimension ();
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetCellDimension();


  // int IsLinear ();
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int IsLinear();


  // int RequiresInitialization ();
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int RequiresInitialization();


  // void Initialize ();
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void Initialize();


  // int GetNumberOfEdges ();
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetNumberOfEdges();


  // int GetNumberOfFaces ();
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetNumberOfFaces();


  // vtkCell *GetEdge (int edgeId);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  vtkCell^ GetEdge(int edgeId);


  // vtkCell *GetFace (int faceId);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  vtkCell^ GetFace(int faceId);


  // int CellBoundary (int subId, double pcoords[3], vtkIdList *pts);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts);


  // int EvaluatePosition (double x[3], double *closestPoint, int &subId, double pcoords[3], double &dist2, double *weights);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights);


  // void EvaluateLocation (int &subId, double pcoords[3], double x[3], double *weights);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights);


  // void Contour (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd);


  // void Clip (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *connectivity, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut);


  // int IntersectWithLine (double p1[3], double p2[3], double tol, double &t, double x[3], double pcoords[3], int &subId);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // int Triangulate (int index, vtkIdList *ptIds, vtkPoints *pts);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts);


  // void Derivatives (int subId, double pcoords[3], double *values, int dim, double *derivs);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs);


  // int GetParametricCenter (double pcoords[3]);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetParametricCenter(array<double>^ pcoords);


// Did not wrap:  double *GetParametricCoords ();


  // int IsPrimaryCell ();
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int IsPrimaryCell();


  // void SetCellType (int cellType);
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellType(int cellType);


  // void SetCellTypeToEmptyCell ();this SetCellType VTK_EMPTY_CELL 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToEmptyCell();


  // void SetCellTypeToVertex ();this SetCellType VTK_VERTEX 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToVertex();


  // void SetCellTypeToPolyVertex ();this SetCellType VTK_POLY_VERTEX 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToPolyVertex();


  // void SetCellTypeToLine ();this SetCellType VTK_LINE 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToLine();


  // void SetCellTypeToPolyLine ();this SetCellType VTK_POLY_LINE 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToPolyLine();


  // void SetCellTypeToTriangle ();this SetCellType VTK_TRIANGLE 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToTriangle();


  // void SetCellTypeToTriangleStrip ();this SetCellType VTK_TRIANGLE_STRIP 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToTriangleStrip();


  // void SetCellTypeToPolygon ();this SetCellType VTK_POLYGON 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToPolygon();


  // void SetCellTypeToPixel ();this SetCellType VTK_PIXEL 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToPixel();


  // void SetCellTypeToQuad ();this SetCellType VTK_QUAD 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToQuad();


  // void SetCellTypeToTetra ();this SetCellType VTK_TETRA 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToTetra();


  // void SetCellTypeToVoxel ();this SetCellType VTK_VOXEL 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToVoxel();


  // void SetCellTypeToHexahedron ();this SetCellType VTK_HEXAHEDRON 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToHexahedron();


  // void SetCellTypeToWedge ();this SetCellType VTK_WEDGE 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToWedge();


  // void SetCellTypeToPyramid ();this SetCellType VTK_PYRAMID 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToPyramid();


  // void SetCellTypeToPentagonalPrism ();this SetCellType VTK_PENTAGONAL_PRISM 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToPentagonalPrism();


  // void SetCellTypeToHexagonalPrism ();this SetCellType VTK_HEXAGONAL_PRISM 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToHexagonalPrism();


  // void SetCellTypeToConvexPointSet ();this SetCellType VTK_CONVEX_POINT_SET 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToConvexPointSet();


  // void SetCellTypeToQuadraticEdge ();this SetCellType VTK_QUADRATIC_EDGE 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToQuadraticEdge();


  // void SetCellTypeToQuadraticTriangle ();this SetCellType VTK_QUADRATIC_TRIANGLE 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToQuadraticTriangle();


  // void SetCellTypeToQuadraticQuad ();this SetCellType VTK_QUADRATIC_QUAD 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToQuadraticQuad();


  // void SetCellTypeToQuadraticTetra ();this SetCellType VTK_QUADRATIC_TETRA 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToQuadraticTetra();


  // void SetCellTypeToQuadraticHexahedron ();this SetCellType VTK_QUADRATIC_HEXAHEDRON 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToQuadraticHexahedron();


  // void SetCellTypeToQuadraticWedge ();this SetCellType VTK_QUADRATIC_WEDGE 
/// <summary>
/// <para>This method is used to support the vtkDataSet::GetCell(vtkGenericCell *) method. It allows vtkGenericCell to act like any cell type by dereferencing an internal instance of a concrete cell type. When you set the cell type, you are resetting a pointer to an internal cell which is then used for computation.</para>
/// </summary>
  void SetCellTypeToQuadraticWedge();


  // void SetCellTypeToQuadraticPyramid ();this SetCellType VTK_QUADRATIC_PYRAMID 
  void SetCellTypeToQuadraticPyramid();


// Did not wrap:  vtkGenericCell ();


// Did not wrap:  ~vtkGenericCell ();


// Did not wrap:  vtkGenericCell (const vtkGenericCell &);


// Did not wrap:  void vtkGenericCell 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericCell(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericCell(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericCell();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericCell();


};

} // end vtkFiltering
