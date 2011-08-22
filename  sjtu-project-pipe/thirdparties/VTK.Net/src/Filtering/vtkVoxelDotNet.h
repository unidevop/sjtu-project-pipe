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

public ref class vtkVoxel : public vtkCell3D
{

public:
// Did not wrap:  static vtkVoxel *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVoxel *NewInstance ();
  vtkVoxel^ NewInstance();


  // vtkVoxel *SafeDownCast (vtkObject* o);
  static vtkVoxel^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual void GetEdgePoints (int edgeId, int &pts);


// Did not wrap:  virtual void GetFacePoints (int faceId, int &pts);


// Did not wrap:  virtual double *GetParametricCoords ();


  // int GetCellType ();return VTK_VOXEL 
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


  // static void InterpolationFunctions (double pcoords[3], double weights[8]);
/// <summary>
/// <para>Voxel specific methods for interpolation and derivatives.</para>
/// </summary>
  static void InterpolationFunctions(array<double>^ pcoords, array<double>^ weights);


  // static void InterpolationDerivs (double pcoords[3], double derivs[24]);
/// <summary>
/// <para>Voxel specific methods for interpolation and derivatives.</para>
/// </summary>
  static void InterpolationDerivs(array<double>^ pcoords, array<double>^ derivs);


// Did not wrap:  static int *GetEdgeArray (int edgeId);


// Did not wrap:  static int *GetFaceArray (int faceId);


// Did not wrap:  vtkVoxel ();


// Did not wrap:  ~vtkVoxel ();


// Did not wrap:  vtkVoxel (const vtkVoxel &);


// Did not wrap:  void vtkVoxel 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVoxel(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVoxel(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVoxel();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVoxel();


};

} // end vtkFiltering
