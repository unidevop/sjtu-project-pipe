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

public ref class vtkPolygon : public vtkCell
{

public:
// Did not wrap:  static vtkPolygon *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolygon *NewInstance ();
  vtkPolygon^ NewInstance();


  // vtkPolygon *SafeDownCast (vtkObject* o);
  static vtkPolygon^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetCellType ();return VTK_POLYGON 
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


  // void Clip (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *tris, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut);
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  void Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ tris, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut);


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


  // int IsPrimaryCell ();return 
/// <summary>
/// <para>Polygon specific methods.</para>
/// </summary>
  int IsPrimaryCell();


  // static void ComputeNormal (vtkPoints *p, int numPts, vtkIdType *pts, double n[3]);
/// <summary>
/// <para>Polygon specific methods.</para>
/// </summary>
  static void ComputeNormal(vtkPoints^ p, int numPts, array<int>^ arg2, array<double>^ n);


  // static void ComputeNormal (vtkPoints *p, double n[3]);
/// <summary>
/// <para>Polygon specific methods.</para>
/// </summary>
  static void ComputeNormal(vtkPoints^ p, array<double>^ n);


  // static void ComputeNormal (int numPts, double *pts, double n[3]);
/// <summary>
/// <para>Compute the polygon normal from an array of points. This version assumes that the polygon is convex, and looks for the first valid normal.</para>
/// </summary>
  static void ComputeNormal(int numPts, array<double>^ pts, array<double>^ n);


  // void ComputeWeights (double x[3], double *weights);
/// <summary>
/// <para>Compute interpolation weights using 1/r**2 normalized sum.</para>
/// </summary>
  void ComputeWeights(array<double>^ x, array<double>^ weights);


  // int ParameterizePolygon (double p0[3], double p10[3], double &l10, double p20[3], double &l20, double n[3]);
/// <summary>
/// <para>Create a local s-t coordinate system for a polygon. The point p0 is the origin of the local system, p10 is s-axis vector, and p20 is the t-axis vector. (These are expressed in the modeling coordinate system and are vectors of dimension [3].) The values l20 and l20 are the lengths of the vectors p10 and p20, and n is the polygon normal.</para>
/// </summary>
  int ParameterizePolygon(array<double>^ p0, array<double>^ p10, double% l10, array<double>^ p20, double% l20, array<double>^ n);


  // static int PointInPolygon (double x[3], int numPts, double *pts, double bounds[6], double n[3]);
/// <summary>
/// <para>Determine whether point is inside polygon. Function uses ray-casting to determine if point is inside polygon. Works for arbitrary polygon shape (e.g., non-convex). Returns 0 if point is not in polygon; 1 if it is. Can also return -1 to indicate degenerate polygon.</para>
/// </summary>
  static int PointInPolygon(array<double>^ x, int numPts, array<double>^ pts, array<double>^ bounds, array<double>^ n);


  // int Triangulate (vtkIdList *outTris);
/// <summary>
/// <para>Triangulate this polygon. The user must provide the vtkIdList outTris. On output, the outTris list contains the ids of the points defining the triangulation. The ids are ordered into groups of three: each three-group defines one triangle.</para>
/// </summary>
  int Triangulate(vtkIdList^ outTris);


  // static int IntersectPolygonWithPolygon (int npts, double *pts, double bounds[6], int npts2, double *pts2, double bounds2[3], double tol, double x[3]);
/// <summary>
/// <para>Method intersects two polygons. You must supply the number of points and point coordinates (npts, *pts) and the bounding box (bounds) of the two polygons. Also supply a tolerance squared for controlling error. The method returns 1 if there is an intersection, and 0 if not. A single point of intersection x[3] is also returned if there is an intersection.</para>
/// </summary>
  static int IntersectPolygonWithPolygon(int npts, array<double>^ pts, array<double>^ bounds, int npts2, array<double>^ pts2, array<double>^ bounds2, double tol, array<double>^ x);


// Did not wrap:  vtkPolygon ();


// Did not wrap:  ~vtkPolygon ();


// Did not wrap:  int EarCutTriangulation ();


// Did not wrap:  vtkPolygon (const vtkPolygon &);


// Did not wrap:  void vtkPolygon 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolygon(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolygon(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolygon();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolygon();


};

} // end vtkFiltering
