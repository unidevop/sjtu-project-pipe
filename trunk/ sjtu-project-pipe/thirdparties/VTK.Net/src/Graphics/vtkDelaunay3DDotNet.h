#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDelaunay3D : public vtkUnstructuredGridAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDelaunay3D *NewInstance ();
  vtkDelaunay3D^ NewInstance();


  // vtkDelaunay3D *SafeDownCast (vtkObject* o);
  static vtkDelaunay3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkDelaunay3D *New ();


  // void SetAlpha (double );
/// <summary>
/// <para>Specify alpha (or distance) value to control output of this filter. For a non-zero alpha value, only edges, faces, or tetra contained  within the circumsphere (of radius alpha) will be output. Otherwise, only tetrahedra will be output.</para>
/// </summary>
  void SetAlpha(double arg0);


  // double GetAlphaMinValue ();
/// <summary>
/// <para>Specify alpha (or distance) value to control output of this filter. For a non-zero alpha value, only edges, faces, or tetra contained  within the circumsphere (of radius alpha) will be output. Otherwise, only tetrahedra will be output.</para>
/// </summary>
  double GetAlphaMinValue();


  // double GetAlphaMaxValue ();
/// <summary>
/// <para>Specify alpha (or distance) value to control output of this filter. For a non-zero alpha value, only edges, faces, or tetra contained  within the circumsphere (of radius alpha) will be output. Otherwise, only tetrahedra will be output.</para>
/// </summary>
  double GetAlphaMaxValue();


  // double GetAlpha ();
/// <summary>
/// <para>Specify alpha (or distance) value to control output of this filter. For a non-zero alpha value, only edges, faces, or tetra contained  within the circumsphere (of radius alpha) will be output. Otherwise, only tetrahedra will be output.</para>
/// </summary>
  double GetAlpha();


  // void SetTolerance (double );
/// <summary>
/// <para>Specify a tolerance to control discarding of closely spaced points. This tolerance is specified as a fraction of the diagonal length of the bounding box of the points.</para>
/// </summary>
  void SetTolerance(double arg0);


  // double GetToleranceMinValue ();
/// <summary>
/// <para>Specify a tolerance to control discarding of closely spaced points. This tolerance is specified as a fraction of the diagonal length of the bounding box of the points.</para>
/// </summary>
  double GetToleranceMinValue();


  // double GetToleranceMaxValue ();
/// <summary>
/// <para>Specify a tolerance to control discarding of closely spaced points. This tolerance is specified as a fraction of the diagonal length of the bounding box of the points.</para>
/// </summary>
  double GetToleranceMaxValue();


  // double GetTolerance ();
/// <summary>
/// <para>Specify a tolerance to control discarding of closely spaced points. This tolerance is specified as a fraction of the diagonal length of the bounding box of the points.</para>
/// </summary>
  double GetTolerance();


  // void SetOffset (double );
/// <summary>
/// <para>Specify a multiplier to control the size of the initial, bounding Delaunay triangulation.</para>
/// </summary>
  void SetOffset(double arg0);


  // double GetOffsetMinValue ();
/// <summary>
/// <para>Specify a multiplier to control the size of the initial, bounding Delaunay triangulation.</para>
/// </summary>
  double GetOffsetMinValue();


  // double GetOffsetMaxValue ();
/// <summary>
/// <para>Specify a multiplier to control the size of the initial, bounding Delaunay triangulation.</para>
/// </summary>
  double GetOffsetMaxValue();


  // double GetOffset ();
/// <summary>
/// <para>Specify a multiplier to control the size of the initial, bounding Delaunay triangulation.</para>
/// </summary>
  double GetOffset();


  // void SetBoundingTriangulation (int );
/// <summary>
/// <para>Boolean controls whether bounding triangulation points (and associated triangles) are included in the output. (These are introduced as an initial triangulation to begin the triangulation process. This feature is nice for debugging output.)</para>
/// </summary>
  void SetBoundingTriangulation(int arg0);


  // int GetBoundingTriangulation ();
/// <summary>
/// <para>Boolean controls whether bounding triangulation points (and associated triangles) are included in the output. (These are introduced as an initial triangulation to begin the triangulation process. This feature is nice for debugging output.)</para>
/// </summary>
  int GetBoundingTriangulation();


  // void BoundingTriangulationOn ();
/// <summary>
/// <para>Boolean controls whether bounding triangulation points (and associated triangles) are included in the output. (These are introduced as an initial triangulation to begin the triangulation process. This feature is nice for debugging output.)</para>
/// </summary>
  void BoundingTriangulationOn();


  // void BoundingTriangulationOff ();
/// <summary>
/// <para>Boolean controls whether bounding triangulation points (and associated triangles) are included in the output. (These are introduced as an initial triangulation to begin the triangulation process. This feature is nice for debugging output.)</para>
/// </summary>
  void BoundingTriangulationOff();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default,  an instance of vtkPointLocator is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default,  an instance of vtkPointLocator is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified. The  locator is used to eliminate &quot;coincident&quot; points.</para>
/// </summary>
  void CreateDefaultLocator();


// Did not wrap:  vtkUnstructuredGrid *InitPointInsertion (double center[3], double length, vtkIdType numPts, vtkPoints &pts);


  // void InsertPoint (vtkUnstructuredGrid *Mesh, vtkPoints *points, vtkIdType id, double x[3], vtkIdList *holeTetras);
/// <summary>
/// <para>This is a helper method used with InitPointInsertion() to create tetrahedronalizations of points. Its purpose is to inject point at coordinates specified into tetrahedronalization. The point id is an index into the list of points in the mesh structure.  (See vtkDelaunay3D::InitPointInsertion() for more information.)  When you have completed inserting points, traverse the mesh structure to extract desired tetrahedra (or tetra faces and edges).The holeTetras id list lists all the tetrahedra that are deleted (invalid) in the mesh structure.</para>
/// </summary>
  void InsertPoint(vtkUnstructuredGrid^ Mesh, vtkPoints^ points, int id, array<double>^ x, vtkIdList^ holeTetras);


  // void EndPointInsertion ();
/// <summary>
/// <para>Invoke this method after all points have been inserted. The purpose of the method is to clean up internal data structures. Note that the  (vtkUnstructuredGrid *)Mesh returned from InitPointInsertion() is NOT deleted, you still are responsible for cleaning that up.</para>
/// </summary>
  void EndPointInsertion();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the locator.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkDelaunay3D ();


// Did not wrap:  ~vtkDelaunay3D ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int FindTetra (vtkUnstructuredGrid *Mesh, double x[3], vtkIdType tetId, int depth);


// Did not wrap:  int InSphere (double x[3], vtkIdType tetraId);


// Did not wrap:  void InsertTetra (vtkUnstructuredGrid *Mesh, vtkPoints *pts, vtkIdType tetraId);


// Did not wrap:  vtkIdType FindEnclosingFaces (double x[3], vtkUnstructuredGrid *Mesh, vtkIdList *tetras, vtkIdList *faces, vtkPointLocator *Locator);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkDelaunay3D (const vtkDelaunay3D &);


// Did not wrap:  void vtkDelaunay3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDelaunay3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDelaunay3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDelaunay3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDelaunay3D();


};

} // end vtkGraphics
