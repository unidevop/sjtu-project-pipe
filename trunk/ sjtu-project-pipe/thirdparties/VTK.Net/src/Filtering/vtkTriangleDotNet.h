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

public ref class vtkTriangle : public vtkCell
{

public:
// Did not wrap:  static vtkTriangle *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTriangle *NewInstance ();
  vtkTriangle^ NewInstance();


  // vtkTriangle *SafeDownCast (vtkObject* o);
  static vtkTriangle^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkCell *GetEdge (int edgeId);
/// <summary>
/// <para>Get the edge specified by edgeId (range 0 to 2) and return that edge's coordinates.</para>
/// </summary>
  vtkCell^ GetEdge(int edgeId);


  // int GetCellType ();return VTK_TRIANGLE 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetCellType();


  // int GetCellDimension ();return 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetCellDimension();


  // int GetNumberOfEdges ();return 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetNumberOfEdges();


  // int GetNumberOfFaces ();return 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetNumberOfFaces();


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


// Did not wrap:  virtual double *GetParametricCoords ();


  // void Clip (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut);
/// <summary>
/// <para>Clip this triangle using scalar value provided. Like contouring, except that it cuts the triangle to produce other triangles.</para>
/// </summary>
  void Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut);


  // static void InterpolationFunctions (double pcoords[3], double sf[3]);
/// <summary>
/// <para>vtkTriangle specific methods.</para>
/// </summary>
  static void InterpolationFunctions(array<double>^ pcoords, array<double>^ sf);


  // static void InterpolationDerivs (double pcoords[3], double derivs[6]);
/// <summary>
/// <para>vtkTriangle specific methods.</para>
/// </summary>
  static void InterpolationDerivs(array<double>^ pcoords, array<double>^ derivs);


  // int IntersectWithLine (double p1[3], double p2[3], double tol, double &t, double x[3], double pcoords[3], int &subId);
/// <summary>
/// <para>Plane intersection plus in/out test on triangle. The in/out test is  performed using tol as the tolerance.</para>
/// </summary>
  int IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // int GetParametricCenter (double pcoords[3]);
/// <summary>
/// <para>Return the center of the triangle in parametric coordinates.</para>
/// </summary>
  int GetParametricCenter(array<double>^ pcoords);


  // double GetParametricDistance (double pcoords[3]);
/// <summary>
/// <para>Return the distance of the parametric coordinate provided to the cell. If inside the cell, a distance of zero is returned. </para>
/// </summary>
  double GetParametricDistance(array<double>^ pcoords);


  // static void TriangleCenter (double p1[3], double p2[3], double p3[3], double center[3]);
/// <summary>
/// <para>Compute the center of the triangle.</para>
/// </summary>
  static void TriangleCenter(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ center);


  // static double TriangleArea (double p1[3], double p2[3], double p3[3]);
/// <summary>
/// <para>Compute the area of a triangle in 3D.</para>
/// </summary>
  static double TriangleArea(array<double>^ p1, array<double>^ p2, array<double>^ p3);


  // static double Circumcircle (double p1[2], double p2[2], double p3[2], double center[2]);
/// <summary>
/// <para>Compute the circumcenter (center[3]) and radius squared (method return value) of a triangle defined by the three points x1, x2, and x3. (Note that the coordinates are 2D. 3D points can be used but the z-component will be ignored.)</para>
/// </summary>
  static double Circumcircle(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ center);


  // static int BarycentricCoords (double x[2], double x1[2], double x2[2], double x3[2], double bcoords[3]);
/// <summary>
/// <para>Given a 2D point x[2], determine the barycentric coordinates of the point. Barycentric coordinates are a natural coordinate system for simplices that express a position as a linear combination of the vertices. For a  triangle, there are three barycentric coordinates (because there are three vertices), and the sum of the coordinates must equal 1. If a  point x is inside a simplex, then all three coordinates will be strictly  positive.  If two coordinates are zero (so the third =1), then the  point x is on a vertex. If one coordinates are zero, the point x is on an  edge. In this method, you must specify the vertex coordinates x1-&gt;x3.  Returns 0 if triangle is degenerate.</para>
/// </summary>
  static int BarycentricCoords(array<double>^ x, array<double>^ x1, array<double>^ x2, array<double>^ x3, array<double>^ bcoords);


  // static int ProjectTo2D (double x1[3], double x2[3], double x3[3], double v1[2], double v2[2], double v3[2]);
/// <summary>
/// <para>Project triangle defined in 3D to 2D coordinates. Returns 0 if degenerate triangle; non-zero value otherwise. Input points are x1-&gt;x3; output 2D points are v1-&gt;v3.</para>
/// </summary>
  static int ProjectTo2D(array<double>^ x1, array<double>^ x2, array<double>^ x3, array<double>^ v1, array<double>^ v2, array<double>^ v3);


  // static void ComputeNormal (vtkPoints *p, int numPts, vtkIdType *pts, double n[3]);
/// <summary>
/// <para>Compute the triangle normal from a points list, and a list of point ids that index into the points list.</para>
/// </summary>
  static void ComputeNormal(vtkPoints^ p, int numPts, array<int>^ arg2, array<double>^ n);


  // static void ComputeNormal (double v1[3], double v2[3], double v3[3], double n[3]);
/// <summary>
/// <para>Compute the triangle normal from three points.</para>
/// </summary>
  static void ComputeNormal(array<double>^ v1, array<double>^ v2, array<double>^ v3, array<double>^ n);


  // static void ComputeNormalDirection (double v1[3], double v2[3], double v3[3], double n[3]);
/// <summary>
/// <para>Compute the (unnormalized) triangle normal direction from three points.</para>
/// </summary>
  static void ComputeNormalDirection(array<double>^ v1, array<double>^ v2, array<double>^ v3, array<double>^ n);


  // static int PointInTriangle (double x[3], double x1[3], double x2[3], double x3[3], double tol2);
/// <summary>
/// <para>Given a point x, determine whether it is inside (within the tolerance squared, tol2) the triangle defined by the three  coordinate values p1, p2, p3. Method is via comparing dot products. (Note: in current implementation the tolerance only works in the neighborhood of the three vertices of the triangle.</para>
/// </summary>
  static int PointInTriangle(array<double>^ x, array<double>^ x1, array<double>^ x2, array<double>^ x3, double tol2);


  // static void ComputeQuadric (double x1[3], double x2[3], double x3[3], double quadric[4][4]);
/// <summary>
/// <para>Calculate the error quadric for this triangle.  Return the quadric as a 4x4 matrix or a vtkQuadric.  (from Peter Lindstrom's Siggraph 2000 paper, &quot;Out-of-Core Simplification of Large Polygonal Models&quot;)</para>
/// </summary>
  static void ComputeQuadric(array<double>^ x1, array<double>^ x2, array<double>^ x3, array<double,2>^ quadric);


  // static void ComputeQuadric (double x1[3], double x2[3], double x3[3], vtkQuadric *quadric);
/// <summary>
/// <para>Calculate the error quadric for this triangle.  Return the quadric as a 4x4 matrix or a vtkQuadric.  (from Peter Lindstrom's Siggraph 2000 paper, &quot;Out-of-Core Simplification of Large Polygonal Models&quot;)</para>
/// </summary>
  static void ComputeQuadric(array<double>^ x1, array<double>^ x2, array<double>^ x3, vtkQuadric^ quadric);


// Did not wrap:  vtkTriangle ();


// Did not wrap:  ~vtkTriangle ();


// Did not wrap:  vtkTriangle (const vtkTriangle &);


// Did not wrap:  void vtkTriangle 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTriangle(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTriangle(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTriangle();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTriangle();


};

} // end vtkFiltering
