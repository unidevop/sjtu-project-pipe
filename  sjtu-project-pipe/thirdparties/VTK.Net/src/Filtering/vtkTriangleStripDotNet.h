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

public ref class vtkTriangleStrip : public vtkCell
{

public:
// Did not wrap:  static vtkTriangleStrip *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTriangleStrip *NewInstance ();
  vtkTriangleStrip^ NewInstance();


  // vtkTriangleStrip *SafeDownCast (vtkObject* o);
  static vtkTriangleStrip^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetCellType ();return VTK_TRIANGLE_STRIP 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetCellType();


  // int GetCellDimension ();return 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetCellDimension();


  // int GetNumberOfEdges ();return this GetNumberOfPoints 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetNumberOfEdges();


  // int GetNumberOfFaces ();return 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetNumberOfFaces();


  // vtkCell *GetEdge (int edgeId);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  vtkCell^ GetEdge(int edgeId);


  // vtkCell *GetFace (int );return 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  vtkCell^ GetFace(int arg0);


  // int CellBoundary (int subId, double pcoords[3], vtkIdList *pts);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts);


  // void Contour (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd);


  // void Clip (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut);


  // int EvaluatePosition (double x[3], double *closestPoint, int &subId, double pcoords[3], double &dist2, double *weights);
  int EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights);


  // void EvaluateLocation (int &subId, double pcoords[3], double x[3], double *weights);
  void EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights);


  // int IntersectWithLine (double p1[3], double p2[3], double tol, double &t, double x[3], double pcoords[3], int &subId);
  int IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // int Triangulate (int index, vtkIdList *ptIds, vtkPoints *pts);
  int Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts);


  // void Derivatives (int subId, double pcoords[3], double *values, int dim, double *derivs);
  void Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs);


  // int IsPrimaryCell ();return 
/// <summary>
/// <para>Return the center of the point cloud in parametric coordinates.</para>
/// </summary>
  int IsPrimaryCell();


  // int GetParametricCenter (double pcoords[3]);
/// <summary>
/// <para>Return the center of the point cloud in parametric coordinates.</para>
/// </summary>
  int GetParametricCenter(array<double>^ pcoords);


  // static void DecomposeStrip (int npts, vtkIdType *pts, vtkCellArray *tris);
/// <summary>
/// <para>Given a triangle strip, decompose it into a list of (triangle)  polygons. The polygons are appended to the end of the list of triangles.</para>
/// </summary>
  static void DecomposeStrip(int npts, array<int>^ arg1, vtkCellArray^ tris);


// Did not wrap:  vtkTriangleStrip ();


// Did not wrap:  ~vtkTriangleStrip ();


// Did not wrap:  vtkTriangleStrip (const vtkTriangleStrip &);


// Did not wrap:  void vtkTriangleStrip 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTriangleStrip(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTriangleStrip(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTriangleStrip();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTriangleStrip();


};

} // end vtkFiltering
