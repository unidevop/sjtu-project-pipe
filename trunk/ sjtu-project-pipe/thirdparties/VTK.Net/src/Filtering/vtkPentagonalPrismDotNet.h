#pragma once

// managed includes
#include "vtkCell3DDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCell;

public ref class vtkPentagonalPrism : public vtkCell3D
{

public:
// Did not wrap:  static vtkPentagonalPrism *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPentagonalPrism *NewInstance ();
  vtkPentagonalPrism^ NewInstance();


  // vtkPentagonalPrism *SafeDownCast (vtkObject* o);
  static vtkPentagonalPrism^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual void GetEdgePoints (int edgeId, int &pts);


// Did not wrap:  virtual void GetFacePoints (int faceId, int &pts);


  // int GetCellType ();return VTK_PENTAGONAL_PRISM 
/// <summary>
/// <para>See the vtkCell3D API for descriptions of these methods.</para>
/// </summary>
  int GetCellType();


  // int GetCellDimension ();return 
/// <summary>
/// <para>See the vtkCell3D API for descriptions of these methods.</para>
/// </summary>
  int GetCellDimension();


  // int GetNumberOfEdges ();return 
/// <summary>
/// <para>See the vtkCell3D API for descriptions of these methods.</para>
/// </summary>
  int GetNumberOfEdges();


  // int GetNumberOfFaces ();return 
/// <summary>
/// <para>See the vtkCell3D API for descriptions of these methods.</para>
/// </summary>
  int GetNumberOfFaces();


  // vtkCell *GetEdge (int edgeId);
/// <summary>
/// <para>See the vtkCell3D API for descriptions of these methods.</para>
/// </summary>
  vtkCell^ GetEdge(int edgeId);


  // vtkCell *GetFace (int faceId);
/// <summary>
/// <para>See the vtkCell3D API for descriptions of these methods.</para>
/// </summary>
  vtkCell^ GetFace(int faceId);


  // int CellBoundary (int subId, double pcoords[3], vtkIdList *pts);
/// <summary>
/// <para>See the vtkCell3D API for descriptions of these methods.</para>
/// </summary>
  int CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts);


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


// Did not wrap:  double *GetParametricCoords ();


  // int GetParametricCenter (double pcoords[3]);
/// <summary>
/// <para>Return the center of the wedge in parametric coordinates.</para>
/// </summary>
  int GetParametricCenter(array<double>^ pcoords);


  // static void InterpolationFunctions (double pcoords[3], double weights[10]);
/// <summary>
/// <para>Pentagonal prism specific</para>
/// </summary>
  static void InterpolationFunctions(array<double>^ pcoords, array<double>^ weights);


  // static void InterpolationDerivs (double pcoords[3], double derivs[30]);
/// <summary>
/// <para>Pentagonal prism specific</para>
/// </summary>
  static void InterpolationDerivs(array<double>^ pcoords, array<double>^ derivs);


// Did not wrap:  static int *GetEdgeArray (int edgeId);


// Did not wrap:  static int *GetFaceArray (int faceId);


// Did not wrap:  void JacobianInverse (double pcoords[3], double *inverse, double derivs[30]);


// Did not wrap:  vtkPentagonalPrism ();


// Did not wrap:  ~vtkPentagonalPrism ();


// Did not wrap:  vtkPentagonalPrism (const vtkPentagonalPrism &);


// Did not wrap:  void vtkPentagonalPrism 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPentagonalPrism(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPentagonalPrism(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPentagonalPrism();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPentagonalPrism();


};

} // end vtkFiltering
