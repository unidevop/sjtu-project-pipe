#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkHull : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkHull *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHull *NewInstance ();
  vtkHull^ NewInstance();


  // vtkHull *SafeDownCast (vtkObject* o);
  static vtkHull^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void RemoveAllPlanes (void );
/// <summary>
/// <para>Remove all planes from the current set of planes.  </para>
/// </summary>
  void RemoveAllPlanes();


  // int AddPlane (double A, double B, double C);
/// <summary>
/// <para>Add a plane to the current set of planes. It will be added at the end of the list, and an index that can later be used to set this plane's normal will be returned. The values A, B, C are from the plane equation Ax + By + Cz + D = 0. This vector does not have to have unit length (but it must have a non-zero length!). If a value 0 &gt; i &gt;= -NumberOfPlanes is returned, then the plane is parallel with a previously inserted plane, and |-i-1| is the index of the plane that was previously inserted. If a value i &lt; -NumberOfPlanes is returned, then the plane normal is zero length.</para>
/// </summary>
  int AddPlane(double A, double B, double C);


  // int AddPlane (double plane[3]);
/// <summary>
/// <para>Add a plane to the current set of planes. It will be added at the end of the list, and an index that can later be used to set this plane's normal will be returned. The values A, B, C are from the plane equation Ax + By + Cz + D = 0. This vector does not have to have unit length (but it must have a non-zero length!). If a value 0 &gt; i &gt;= -NumberOfPlanes is returned, then the plane is parallel with a previously inserted plane, and |-i-1| is the index of the plane that was previously inserted. If a value i &lt; -NumberOfPlanes is returned, then the plane normal is zero length.</para>
/// </summary>
  int AddPlane(array<double>^ plane);


  // void SetPlane (int i, double A, double B, double C);
/// <summary>
/// <para>Set the normal values for plane i. This is a plane that was already added to the current set of planes with AddPlane(), and is now being modified. The values A, B, C are from the plane equation  Ax + By + Cz + D = 0. This vector does not have to have unit length. Note that D is set to zero, except in the case of the method taking a vtkPlanes* argument, where it is set to the D value defined there.</para>
/// </summary>
  void SetPlane(int i, double A, double B, double C);


  // void SetPlane (int i, double plane[3]);
/// <summary>
/// <para>Set the normal values for plane i. This is a plane that was already added to the current set of planes with AddPlane(), and is now being modified. The values A, B, C are from the plane equation  Ax + By + Cz + D = 0. This vector does not have to have unit length. Note that D is set to zero, except in the case of the method taking a vtkPlanes* argument, where it is set to the D value defined there.</para>
/// </summary>
  void SetPlane(int i, array<double>^ plane);


  // int AddPlane (double A, double B, double C, double D);
/// <summary>
/// <para>Variations of AddPlane()/SetPlane() that allow D to be set. These  methods are used when GenerateHull() is used.</para>
/// </summary>
  int AddPlane(double A, double B, double C, double D);


  // int AddPlane (double plane[3], double D);
/// <summary>
/// <para>Variations of AddPlane()/SetPlane() that allow D to be set. These  methods are used when GenerateHull() is used.</para>
/// </summary>
  int AddPlane(array<double>^ plane, double D);


  // void SetPlane (int i, double A, double B, double C, double D);
/// <summary>
/// <para>Variations of AddPlane()/SetPlane() that allow D to be set. These  methods are used when GenerateHull() is used.</para>
/// </summary>
  void SetPlane(int i, double A, double B, double C, double D);


  // void SetPlane (int i, double plane[3], double D);
/// <summary>
/// <para>Variations of AddPlane()/SetPlane() that allow D to be set. These  methods are used when GenerateHull() is used.</para>
/// </summary>
  void SetPlane(int i, array<double>^ plane, double D);


  // void SetPlanes (vtkPlanes *planes);
/// <summary>
/// <para>Set all the planes at once using a vtkPlanes implicit function. This also sets the D value, so it can be used with GenerateHull().</para>
/// </summary>
  void SetPlanes(vtkPlanes^ planes);


  // int GetNumberOfPlanes ();
/// <summary>
/// <para>Get the number of planes in the current set of planes.</para>
/// </summary>
  int GetNumberOfPlanes();


  // void AddCubeVertexPlanes ();
/// <summary>
/// <para>Add the 8 planes that represent the vertices of a cube - the combination of the three face planes connecting to a vertex - (1,1,1), (1,1,-1), (1,-1,1), (1,-1,1), (-1,1,1), (-1,1,-1), (-1,-1,1), (-1,-1-1).</para>
/// </summary>
  void AddCubeVertexPlanes();


  // void AddCubeEdgePlanes ();
/// <summary>
/// <para>Add the 12 planes that represent the edges of a cube - halfway between the two connecting face planes - (1,1,0), (-1,-1,0), (-1,1,0), (1,-1,0), (0,1,1), (0,-1,-1), (0,1,-1), (0,-1,1), (1,0,1), (-1,0,-1), (1,0,-1), (-1,0,1)</para>
/// </summary>
  void AddCubeEdgePlanes();


  // void AddCubeFacePlanes ();
/// <summary>
/// <para>Add the six planes that make up the faces of a cube - (1,0,0), (-1, 0, 0), (0,1,0), (0,-1,0), (0,0,1), (0,0,-1)</para>
/// </summary>
  void AddCubeFacePlanes();


  // void AddRecursiveSpherePlanes (int level);
/// <summary>
/// <para>Add the planes that represent the normals of the vertices of a polygonal sphere formed by recursively subdividing the triangles in an octahedron.  Each triangle is subdivided by connecting the midpoints of the edges thus forming 4 smaller triangles. The level indicates how many subdivisions to do with a level of 0 used to add the 6 planes from the original octahedron, level 1 will add 18 planes, and so on.</para>
/// </summary>
  void AddRecursiveSpherePlanes(int level);


  // void GenerateHull (vtkPolyData *pd, double *bounds);
/// <summary>
/// <para>A special method that is used to generate a polyhedron directly from a set of n planes. The planes that are supplied by the user are not squeezed towards the input data (in fact the user need not specify an input). To use this method, you must provide an instance of vtkPolyData into which the points and cells defining the polyhedron are placed. You must also provide a bounding box where you expect the resulting polyhedron to lie. This can be a very generous fit, it's only used to create the initial polygons that are eventually clipped.</para>
/// </summary>
  void GenerateHull(vtkPolyData^ pd, array<double>^ bounds);


  // void GenerateHull (vtkPolyData *pd, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
/// <summary>
/// <para>A special method that is used to generate a polyhedron directly from a set of n planes. The planes that are supplied by the user are not squeezed towards the input data (in fact the user need not specify an input). To use this method, you must provide an instance of vtkPolyData into which the points and cells defining the polyhedron are placed. You must also provide a bounding box where you expect the resulting polyhedron to lie. This can be a very generous fit, it's only used to create the initial polygons that are eventually clipped.</para>
/// </summary>
  void GenerateHull(vtkPolyData^ pd, double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


// Did not wrap:  vtkHull ();


// Did not wrap:  ~vtkHull ();


// Did not wrap:  void ComputePlaneDistances (vtkPolyData *input);


// Did not wrap:  void ClipPolygonsFromPlanes (vtkPoints *points, vtkCellArray *polys, double *bounds);


// Did not wrap:  void CreateInitialPolygon (double *, int , double *);


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkHull (const vtkHull &);


// Did not wrap:  void vtkHull 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHull(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHull(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHull();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHull();


};

} // end vtkGraphics
