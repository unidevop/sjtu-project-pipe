#pragma once

// managed includes
#include "vtkNonLinearCellDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;
ref class vtkCellArray;
ref class vtkCellData;
ref class vtkPointData;
ref class vtkPointLocator;

public ref class vtkQuadraticHexahedron : public vtkNonLinearCell
{

public:
// Did not wrap:  static vtkQuadraticHexahedron *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkQuadraticHexahedron *NewInstance ();
  vtkQuadraticHexahedron^ NewInstance();


  // vtkQuadraticHexahedron *SafeDownCast (vtkObject* o);
  static vtkQuadraticHexahedron^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetCellType ();return VTK_QUADRATIC_HEXAHEDRON 
/// <summary>
/// <para>Implement the vtkCell API. See the vtkCell API for descriptions  of these methods.</para>
/// </summary>
  int GetCellType();


  // int GetCellDimension ();return 
/// <summary>
/// <para>Implement the vtkCell API. See the vtkCell API for descriptions  of these methods.</para>
/// </summary>
  int GetCellDimension();


  // int GetNumberOfEdges ();return 
/// <summary>
/// <para>Implement the vtkCell API. See the vtkCell API for descriptions  of these methods.</para>
/// </summary>
  int GetNumberOfEdges();


  // int GetNumberOfFaces ();return 
/// <summary>
/// <para>Implement the vtkCell API. See the vtkCell API for descriptions  of these methods.</para>
/// </summary>
  int GetNumberOfFaces();


  // vtkCell *GetEdge (int );
/// <summary>
/// <para>Implement the vtkCell API. See the vtkCell API for descriptions  of these methods.</para>
/// </summary>
  vtkCell^ GetEdge(int arg0);


  // vtkCell *GetFace (int );
/// <summary>
/// <para>Implement the vtkCell API. See the vtkCell API for descriptions  of these methods.</para>
/// </summary>
  vtkCell^ GetFace(int arg0);


  // int CellBoundary (int subId, double pcoords[3], vtkIdList *pts);
  int CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts);


  // void Contour (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd);
  void Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd);


  // int EvaluatePosition (double x[3], double *closestPoint, int &subId, double pcoords[3], double &dist2, double *weights);
  int EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights);


  // void EvaluateLocation (int &subId, double pcoords[3], double x[3], double *weights);
  void EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights);


  // int Triangulate (int index, vtkIdList *ptIds, vtkPoints *pts);
  int Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts);


  // void Derivatives (int subId, double pcoords[3], double *values, int dim, double *derivs);
  void Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs);


// Did not wrap:  virtual double *GetParametricCoords ();


  // void Clip (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *tetras, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut);
/// <summary>
/// <para>Clip this quadratic hexahedron using scalar value provided. Like  contouring, except that it cuts the hex to produce linear  tetrahedron.</para>
/// </summary>
  void Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ tetras, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut);


  // int IntersectWithLine (double p1[3], double p2[3], double tol, double &t, double x[3], double pcoords[3], int &subId);
/// <summary>
/// <para>Line-edge intersection. Intersection has to occur within [0,1] parametric coordinates and with specified tolerance.</para>
/// </summary>
  int IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // static void InterpolationFunctions (double pcoords[3], double weights[20]);
/// <summary>
/// <para>Quadratic hexahedron specific methods. </para>
/// </summary>
  static void InterpolationFunctions(array<double>^ pcoords, array<double>^ weights);


  // static void InterpolationDerivs (double pcoords[3], double derivs[60]);
/// <summary>
/// <para>Quadratic hexahedron specific methods. </para>
/// </summary>
  static void InterpolationDerivs(array<double>^ pcoords, array<double>^ derivs);


// Did not wrap:  void JacobianInverse (double pcoords[3], double *inverse, double derivs[60]);


// Did not wrap:  vtkQuadraticHexahedron ();


// Did not wrap:  ~vtkQuadraticHexahedron ();


// Did not wrap:  void Subdivide (vtkPointData *inPd, vtkCellData *inCd, vtkIdType cellId, vtkDataArray *cellScalars);


// Did not wrap:  vtkQuadraticHexahedron (const vtkQuadraticHexahedron &);


// Did not wrap:  void vtkQuadraticHexahedron 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkQuadraticHexahedron(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkQuadraticHexahedron(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkQuadraticHexahedron();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkQuadraticHexahedron();


};

} // end vtkFiltering
