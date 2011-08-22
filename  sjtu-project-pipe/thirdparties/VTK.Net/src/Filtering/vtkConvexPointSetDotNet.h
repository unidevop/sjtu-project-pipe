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

public ref class vtkConvexPointSet : public vtkCell3D
{

public:
// Did not wrap:  static vtkConvexPointSet *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkConvexPointSet *NewInstance ();
  vtkConvexPointSet^ NewInstance();


  // vtkConvexPointSet *SafeDownCast (vtkObject* o);
  static vtkConvexPointSet^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int HasFixedTopology ();return 
/// <summary>
/// <para>See vtkCell3D API for description of these methods.</para>
/// </summary>
  int HasFixedTopology();


// Did not wrap:  virtual void GetEdgePoints (int , int &);


// Did not wrap:  virtual void GetFacePoints (int , int &);


// Did not wrap:  virtual double *GetParametricCoords ();


  // virtual int GetCellType ();return VTK_CONVEX_POINT_SET 
/// <summary>
/// <para>This cell requires that it be initialized prior to access.</para>
/// </summary>
  int GetCellType();


  // virtual int RequiresInitialization ();return 
/// <summary>
/// <para>This cell requires that it be initialized prior to access.</para>
/// </summary>
  int RequiresInitialization();


  // virtual void Initialize ();
/// <summary>
/// <para>This cell requires that it be initialized prior to access.</para>
/// </summary>
  void Initialize();


  // virtual int GetNumberOfEdges ();return 
/// <summary>
/// <para>A convex point set has no explicit cell edge or faces; however implicitly (after triangulation) it does. Currently the method GetNumberOfEdges() always returns 0 while the GetNumberOfFaces() returns the number of boundary triangles of the triangulation of the convex point set. The method GetNumberOfFaces() triggers a triangulation of the convex point set; repeated calls to GetFace() then return the boundary faces. (Note: GetNumberOfEdges() currently returns 0 because it is a  rarely used method and hard to implement. It can be changed in the future.</para>
/// </summary>
  int GetNumberOfEdges();


  // virtual vtkCell *GetEdge (int );return NULL 
/// <summary>
/// <para>A convex point set has no explicit cell edge or faces; however implicitly (after triangulation) it does. Currently the method GetNumberOfEdges() always returns 0 while the GetNumberOfFaces() returns the number of boundary triangles of the triangulation of the convex point set. The method GetNumberOfFaces() triggers a triangulation of the convex point set; repeated calls to GetFace() then return the boundary faces. (Note: GetNumberOfEdges() currently returns 0 because it is a  rarely used method and hard to implement. It can be changed in the future.</para>
/// </summary>
  vtkCell^ GetEdge(int arg0);


  // virtual int GetNumberOfFaces ();
/// <summary>
/// <para>A convex point set has no explicit cell edge or faces; however implicitly (after triangulation) it does. Currently the method GetNumberOfEdges() always returns 0 while the GetNumberOfFaces() returns the number of boundary triangles of the triangulation of the convex point set. The method GetNumberOfFaces() triggers a triangulation of the convex point set; repeated calls to GetFace() then return the boundary faces. (Note: GetNumberOfEdges() currently returns 0 because it is a  rarely used method and hard to implement. It can be changed in the future.</para>
/// </summary>
  int GetNumberOfFaces();


  // virtual vtkCell *GetFace (int faceId);
/// <summary>
/// <para>A convex point set has no explicit cell edge or faces; however implicitly (after triangulation) it does. Currently the method GetNumberOfEdges() always returns 0 while the GetNumberOfFaces() returns the number of boundary triangles of the triangulation of the convex point set. The method GetNumberOfFaces() triggers a triangulation of the convex point set; repeated calls to GetFace() then return the boundary faces. (Note: GetNumberOfEdges() currently returns 0 because it is a  rarely used method and hard to implement. It can be changed in the future.</para>
/// </summary>
  vtkCell^ GetFace(int faceId);


  // virtual void Contour (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd);
/// <summary>
/// <para>Satisfy the vtkCell API. This method contours by triangulating the cell and then contouring the resulting tetrahedra.</para>
/// </summary>
  void Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd);


  // virtual void Clip (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *connectivity, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut);
/// <summary>
/// <para>Satisfy the vtkCell API. This method contours by triangulating the cell and then adding clip-edge intersection points into the triangulation; extracting the clipped region.</para>
/// </summary>
  void Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut);


  // virtual int EvaluatePosition (double x[3], double *closestPoint, int &subId, double pcoords[3], double &dist2, double *weights);
/// <summary>
/// <para>Satisfy the vtkCell API. This method determines the subId, pcoords, and weights by triangulating the convex point set, and then  determining which tetrahedron the point lies in.</para>
/// </summary>
  int EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights);


  // virtual void EvaluateLocation (int &subId, double pcoords[3], double x[3], double *weights);
/// <summary>
/// <para>The inverse of EvaluatePosition.</para>
/// </summary>
  void EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights);


  // virtual int IntersectWithLine (double p1[3], double p2[3], double tol, double &t, double x[3], double pcoords[3], int &subId);
/// <summary>
/// <para>Triangulates the cells and then intersects them to determine the intersection point.</para>
/// </summary>
  int IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // virtual int Triangulate (int index, vtkIdList *ptIds, vtkPoints *pts);
/// <summary>
/// <para>Triangulate using methods of vtkOrderedTriangulator.</para>
/// </summary>
  int Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts);


  // virtual void Derivatives (int subId, double pcoords[3], double *values, int dim, double *derivs);
/// <summary>
/// <para>Computes derivatives by triangulating and from subId and pcoords, evaluating derivatives on the resulting tetrahedron.</para>
/// </summary>
  void Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs);


  // virtual int CellBoundary (int subId, double pcoords[3], vtkIdList *pts);
/// <summary>
/// <para>Returns the set of points forming a face of the triangulation of these points that are on the boundary of the cell that are closest  parametrically to the point specified.</para>
/// </summary>
  int CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts);


  // virtual int GetParametricCenter (double pcoords[3]);
/// <summary>
/// <para>Return the center of the cell in parametric coordinates. </para>
/// </summary>
  int GetParametricCenter(array<double>^ pcoords);


  // int IsPrimaryCell ();return 
  int IsPrimaryCell();


// Did not wrap:  vtkConvexPointSet ();


// Did not wrap:  ~vtkConvexPointSet ();


// Did not wrap:  vtkConvexPointSet (const vtkConvexPointSet &);


// Did not wrap:  void vtkConvexPointSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkConvexPointSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkConvexPointSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkConvexPointSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkConvexPointSet();


};

} // end vtkFiltering
