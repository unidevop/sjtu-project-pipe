#pragma once

// managed includes
#include "vtkCell3DDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkCellArray;
ref class vtkCellData;
ref class vtkPointData;
ref class vtkPointLocator;

public ref class vtkTetra : public vtkCell3D
{

public:
// Did not wrap:  static vtkTetra *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTetra *NewInstance ();
  vtkTetra^ NewInstance();


  // vtkTetra *SafeDownCast (vtkObject* o);
  static vtkTetra^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual void GetEdgePoints (int edgeId, int &pts);


// Did not wrap:  virtual void GetFacePoints (int faceId, int &pts);


  // int GetCellType ();return VTK_TETRA 
/// <summary>
/// <para>See the vtkCell API for descriptions of these methods.</para>
/// </summary>
  int GetCellType();


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


// Did not wrap:  virtual double *GetParametricCoords ();


  // int CellBoundary (int subId, double pcoords[3], vtkIdList *pts);
/// <summary>
/// <para>Returns the set of points that are on the boundary of the tetrahedron that are closest parametrically to the point specified. This may include faces, edges, or vertices.</para>
/// </summary>
  int CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts);


  // int GetParametricCenter (double pcoords[3]);
/// <summary>
/// <para>Return the center of the tetrahedron in parametric coordinates.</para>
/// </summary>
  int GetParametricCenter(array<double>^ pcoords);


  // double GetParametricDistance (double pcoords[3]);
/// <summary>
/// <para>Return the distance of the parametric coordinate provided to the cell. If inside the cell, a distance of zero is returned. </para>
/// </summary>
  double GetParametricDistance(array<double>^ pcoords);


  // static void TetraCenter (double p1[3], double p2[3], double p3[3], double p4[3], double center[3]);
/// <summary>
/// <para>Compute the center of the tetrahedron,</para>
/// </summary>
  static void TetraCenter(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ p4, array<double>^ center);


  // static double Circumsphere (double p1[3], double p2[3], double p3[3], double p4[3], double center[3]);
/// <summary>
/// <para>Compute the circumcenter (center[3]) and radius squared (method return value) of a tetrahedron defined by the four points x1, x2, x3, and x4.</para>
/// </summary>
  static double Circumsphere(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ p4, array<double>^ center);


  // static double Insphere (double p1[3], double p2[3], double p3[3], double p4[3], double center[3]);
/// <summary>
/// <para>Compute the center (center[3]) and radius (method return value) of a sphere that just fits inside the faces of a tetrahedron defined by the four points x1, x2, x3, and x4.</para>
/// </summary>
  static double Insphere(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ p4, array<double>^ center);


  // static int BarycentricCoords (double x[3], double x1[3], double x2[3], double x3[3], double x4[3], double bcoords[4]);
/// <summary>
/// <para>Given a 3D point x[3], determine the barycentric coordinates of the point. Barycentric coordinates are a natural coordinate system for simplices that express a position as a linear combination of the vertices. For a  tetrahedron, there are four barycentric coordinates (because there are four vertices), and the sum of the coordinates must equal 1. If a  point x is inside a simplex, then all four coordinates will be strictly  positive.  If three coordinates are zero (so the fourth =1), then the  point x is on a vertex. If two coordinates are zero, the point x is on an  edge (and so on). In this method, you must specify the vertex coordinates x1-&gt;x4. Returns 0 if tetrahedron is degenerate.</para>
/// </summary>
  static int BarycentricCoords(array<double>^ x, array<double>^ x1, array<double>^ x2, array<double>^ x3, array<double>^ x4, array<double>^ bcoords);


  // static double ComputeVolume (double p1[3], double p2[3], double p3[3], double p4[3]);
/// <summary>
/// <para>Compute the volume of a tetrahedron defined by the four points p1, p2, p3, and p4.</para>
/// </summary>
  static double ComputeVolume(array<double>^ p1, array<double>^ p2, array<double>^ p3, array<double>^ p4);


// Did not wrap:  int JacobianInverse (double *inverse, double derivs[12]);


  // static void InterpolationFunctions (double pcoords[3], double weights[4]);
/// <summary>
/// <para>Tetra specific methods.</para>
/// </summary>
  static void InterpolationFunctions(array<double>^ pcoords, array<double>^ weights);


  // static void InterpolationDerivs (double derivs[12]);
/// <summary>
/// <para>Tetra specific methods.</para>
/// </summary>
  static void InterpolationDerivs(array<double>^ derivs);


// Did not wrap:  static int *GetEdgeArray (int edgeId);


// Did not wrap:  static int *GetFaceArray (int faceId);


// Did not wrap:  vtkTetra ();


// Did not wrap:  ~vtkTetra ();


// Did not wrap:  vtkTetra (const vtkTetra &);


// Did not wrap:  void vtkTetra 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTetra(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTetra(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTetra();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTetra();


};

} // end vtkFiltering
