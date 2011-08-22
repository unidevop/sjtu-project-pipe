#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCellArray;
ref class vtkCellData;
ref class vtkPointData;
ref class vtkPointLocator;
ref class vtkTetra;
ref class vtkUnstructuredGrid;

public ref class vtkOrderedTriangulator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOrderedTriangulator *NewInstance ();
  vtkOrderedTriangulator^ NewInstance();


  // vtkOrderedTriangulator *SafeDownCast (vtkObject* o);
  static vtkOrderedTriangulator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkOrderedTriangulator *New ();


  // void InitTriangulation (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax, int numPts);
/// <summary>
/// <para>Initialize the triangulation process. Provide a bounding box and the maximum number of points to be inserted. Note that since the triangulation is performed using parametric coordinates (see InsertPoint()) the bounds should be represent the range of the parametric coordinates inserted. \post no_point_inserted: GetNumberOfPoints()==0</para>
/// </summary>
  void InitTriangulation(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax, int numPts);


  // void InitTriangulation (double bounds[6], int numPts);
/// <summary>
/// <para>Initialize the triangulation process. Provide a bounding box and the maximum number of points to be inserted. Note that since the triangulation is performed using parametric coordinates (see InsertPoint()) the bounds should be represent the range of the parametric coordinates inserted. \post no_point_inserted: GetNumberOfPoints()==0</para>
/// </summary>
  void InitTriangulation(array<double>^ bounds, int numPts);


  // vtkIdType InsertPoint (vtkIdType id, double x[3], double p[3], int type);
/// <summary>
/// <para>For each point to be inserted, provide an id, a position x, parametric coordinate p, and whether the point is inside (type=0), outside (type=1), or on the boundary (type=2). You must call InitTriangulation() prior to invoking this method. Make sure that the number of points inserted does not exceed the numPts specified in InitTriangulation(). Also note that the &quot;id&quot; can be any integer and can be greater than numPts. It is used to create tetras (in AddTetras()) with the appropriate connectivity ids. The method returns an internal id that can be used prior to the Triangulate() method to update the type of the point with UpdatePointType(). (Note: the algorithm triangulated with the parametric coordinate p[3] and creates tetras with the global coordinate x[3]. The parametric coordinates and global coordinates may be the same.)</para>
/// </summary>
  int InsertPoint(int id, array<double>^ x, array<double>^ p, int type);


  // vtkIdType InsertPoint (vtkIdType id, vtkIdType sortid, double x[3], double p[3], int type);
/// <summary>
/// <para>For each point to be inserted, provide an id, a position x, parametric coordinate p, and whether the point is inside (type=0), outside (type=1), or on the boundary (type=2). You must call InitTriangulation() prior to invoking this method. Make sure that the number of points inserted does not exceed the numPts specified in InitTriangulation(). Also note that the &quot;id&quot; can be any integer and can be greater than numPts. It is used to create tetras (in AddTetras()) with the appropriate connectivity ids. The method returns an internal id that can be used prior to the Triangulate() method to update the type of the point with UpdatePointType(). (Note: the algorithm triangulated with the parametric coordinate p[3] and creates tetras with the global coordinate x[3]. The parametric coordinates and global coordinates may be the same.)</para>
/// </summary>
  int InsertPoint(int id, int sortid, array<double>^ x, array<double>^ p, int type);


  // vtkIdType InsertPoint (vtkIdType id, vtkIdType sortid, vtkIdType sortid2, double x[3], double p[3], int type);
/// <summary>
/// <para>For each point to be inserted, provide an id, a position x, parametric coordinate p, and whether the point is inside (type=0), outside (type=1), or on the boundary (type=2). You must call InitTriangulation() prior to invoking this method. Make sure that the number of points inserted does not exceed the numPts specified in InitTriangulation(). Also note that the &quot;id&quot; can be any integer and can be greater than numPts. It is used to create tetras (in AddTetras()) with the appropriate connectivity ids. The method returns an internal id that can be used prior to the Triangulate() method to update the type of the point with UpdatePointType(). (Note: the algorithm triangulated with the parametric coordinate p[3] and creates tetras with the global coordinate x[3]. The parametric coordinates and global coordinates may be the same.)</para>
/// </summary>
  int InsertPoint(int id, int sortid, int sortid2, array<double>^ x, array<double>^ p, int type);


  // void Triangulate ();
/// <summary>
/// <para>Perform the triangulation. (Complete all calls to InsertPoint() prior to invoking this method.) A special version is available when templates should be used.</para>
/// </summary>
  void Triangulate();


  // void TemplateTriangulate (int cellType, int numPts, int numEdges);
/// <summary>
/// <para>Perform the triangulation. (Complete all calls to InsertPoint() prior to invoking this method.) A special version is available when templates should be used.</para>
/// </summary>
  void TemplateTriangulate(int cellType, int numPts, int numEdges);


  // void UpdatePointType (vtkIdType internalId, int type);
/// <summary>
/// <para>Update the point type. This is useful when the merging of nearly  coincident points is performed. The id is the internal id returned from InsertPoint(). The method should be invoked prior to the Triangulate method. The type is specified as inside (type=0),  outside (type=1), or on the boundary (type=2). \pre valid_range: internalId&gt;=0 &amp;&amp; internalId&lt;this-&gt;GetNumberOfPoints()</para>
/// </summary>
  void UpdatePointType(int internalId, int type);


// Did not wrap:  double *GetPointPosition (vtkIdType internalId);


// Did not wrap:  double *GetPointLocation (vtkIdType internalId);


  // vtkIdType GetPointId (vtkIdType internalId);
/// <summary>
/// <para>Return the Id of point `internalId'. This id is the one passed in argument of InsertPoint. It assumes that the point has already been inserted. The method should be invoked prior to the Triangulate method. \pre valid_range: internalId&gt;=0 &amp;&amp; internalId&lt;this-&gt;GetNumberOfPoints()</para>
/// </summary>
  int GetPointId(int internalId);


  // int GetNumberOfPoints ();
/// <summary>
/// <para>Return the number of inserted points.</para>
/// </summary>
  int GetNumberOfPoints();


  // void SetUseTemplates (int );
/// <summary>
/// <para>If this flag is set, then the ordered triangulator will create and use templates for the triangulation. To use templates, the TemplateTriangulate() method should be called when appropriate. (Note: the TemplateTriangulate() method works for complete  (interior) cells without extra points due to intersection, etc.)</para>
/// </summary>
  void SetUseTemplates(int arg0);


  // int GetUseTemplates ();
/// <summary>
/// <para>If this flag is set, then the ordered triangulator will create and use templates for the triangulation. To use templates, the TemplateTriangulate() method should be called when appropriate. (Note: the TemplateTriangulate() method works for complete  (interior) cells without extra points due to intersection, etc.)</para>
/// </summary>
  int GetUseTemplates();


  // void UseTemplatesOn ();
/// <summary>
/// <para>If this flag is set, then the ordered triangulator will create and use templates for the triangulation. To use templates, the TemplateTriangulate() method should be called when appropriate. (Note: the TemplateTriangulate() method works for complete  (interior) cells without extra points due to intersection, etc.)</para>
/// </summary>
  void UseTemplatesOn();


  // void UseTemplatesOff ();
/// <summary>
/// <para>If this flag is set, then the ordered triangulator will create and use templates for the triangulation. To use templates, the TemplateTriangulate() method should be called when appropriate. (Note: the TemplateTriangulate() method works for complete  (interior) cells without extra points due to intersection, etc.)</para>
/// </summary>
  void UseTemplatesOff();


  // void SetPreSorted (int );
/// <summary>
/// <para>Boolean indicates whether the points have been pre-sorted. If  pre-sorted is enabled, the points are not sorted on point id. By default, presorted is off. (The point id is defined in InsertPoint().)</para>
/// </summary>
  void SetPreSorted(int arg0);


  // int GetPreSorted ();
/// <summary>
/// <para>Boolean indicates whether the points have been pre-sorted. If  pre-sorted is enabled, the points are not sorted on point id. By default, presorted is off. (The point id is defined in InsertPoint().)</para>
/// </summary>
  int GetPreSorted();


  // void PreSortedOn ();
/// <summary>
/// <para>Boolean indicates whether the points have been pre-sorted. If  pre-sorted is enabled, the points are not sorted on point id. By default, presorted is off. (The point id is defined in InsertPoint().)</para>
/// </summary>
  void PreSortedOn();


  // void PreSortedOff ();
/// <summary>
/// <para>Boolean indicates whether the points have been pre-sorted. If  pre-sorted is enabled, the points are not sorted on point id. By default, presorted is off. (The point id is defined in InsertPoint().)</para>
/// </summary>
  void PreSortedOff();


  // void SetUseTwoSortIds (int );
/// <summary>
/// <para>Tells the triangulator that a second sort id is provided for each point and should also be considered when sorting.</para>
/// </summary>
  void SetUseTwoSortIds(int arg0);


  // int GetUseTwoSortIds ();
/// <summary>
/// <para>Tells the triangulator that a second sort id is provided for each point and should also be considered when sorting.</para>
/// </summary>
  int GetUseTwoSortIds();


  // void UseTwoSortIdsOn ();
/// <summary>
/// <para>Tells the triangulator that a second sort id is provided for each point and should also be considered when sorting.</para>
/// </summary>
  void UseTwoSortIdsOn();


  // void UseTwoSortIdsOff ();
/// <summary>
/// <para>Tells the triangulator that a second sort id is provided for each point and should also be considered when sorting.</para>
/// </summary>
  void UseTwoSortIdsOff();


  // vtkIdType GetTetras (int classification, vtkUnstructuredGrid *ugrid);
/// <summary>
/// <para>Initialize and add the tetras and points from the triangulation to the unstructured grid provided.  New points are created and the mesh is allocated. (This method differs from AddTetras() in that it inserts points and cells; AddTetras only adds the tetra cells.) The tetrahdera added are of the type specified (0=inside,1=outside,2=all). Inside tetrahedron are those whose points are classified &quot;inside&quot; or on the &quot;boundary.&quot;  Outside tetrahedron have at least one point classified &quot;outside.&quot;  The method returns the number of tetrahedrahedron of the type requested.</para>
/// </summary>
  int GetTetras(int classification, vtkUnstructuredGrid^ ugrid);


  // vtkIdType AddTetras (int classification, vtkUnstructuredGrid *ugrid);
/// <summary>
/// <para>Add the tetras to the unstructured grid provided. The unstructured grid is assumed to have been initialized (with Allocate()) and points set (with SetPoints()). The tetrahdera added are of the type specified (0=inside,1=outside,2=all). Inside tetrahedron are  those whose points are classified &quot;inside&quot; or on the &quot;boundary.&quot;  Outside tetrahedron have at least one point classified &quot;outside.&quot;  The method returns the number of tetrahedrahedron of the type  requested.</para>
/// </summary>
  int AddTetras(int classification, vtkUnstructuredGrid^ ugrid);


  // vtkIdType AddTetras (int classification, vtkCellArray *connectivity);
/// <summary>
/// <para>Add the tetrahedra classified (0=inside,1=outside) to the connectivity list provided. Inside tetrahedron are those whose points are all classified &quot;inside.&quot; Outside tetrahedron have at least one point classified &quot;outside.&quot; The method returns the number of tetrahedron of the type requested.    </para>
/// </summary>
  int AddTetras(int classification, vtkCellArray^ connectivity);


  // vtkIdType AddTetras (int classification, vtkPointLocator *locator, vtkCellArray *outConnectivity, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD);
/// <summary>
/// <para>Assuming that all the inserted points come from a cell `cellId' to triangulate, get the tetrahedra in outConnectivity, the points in locator and copy point data and cell data. Return the number of added tetras. \pre locator_exists: locator!=0 \pre outConnectivity: outConnectivity!=0 \pre inPD_exists: inPD!=0 \pre outPD_exists:  outPD!=0 \pre inCD_exists: inCD!=0 \pre outCD_exists: outCD!=0</para>
/// </summary>
  int AddTetras(int classification, vtkPointLocator^ locator, vtkCellArray^ outConnectivity, vtkPointData^ inPD, vtkPointData^ outPD, vtkCellData^ inCD, int cellId, vtkCellData^ outCD);


  // vtkIdType AddTetras (int classification, vtkIdList *ptIds, vtkPoints *pts);
/// <summary>
/// <para>Add the tetrahedra classified (0=inside,1=outside) to the list of ids and coordinates provided. These assume that the first four points form a tetrahedron, the next four the next, and so on.</para>
/// </summary>
  int AddTetras(int classification, vtkIdList^ ptIds, vtkPoints^ pts);


  // vtkIdType AddTriangles (vtkCellArray *connectivity);
/// <summary>
/// <para>Add the triangle faces classified (2=boundary) to the connectivity list provided. The method returns the number of triangles.</para>
/// </summary>
  int AddTriangles(vtkCellArray^ connectivity);


  // vtkIdType AddTriangles (vtkIdType id, vtkCellArray *connectivity);
/// <summary>
/// <para>Add the triangle faces classified (2=boundary) and attached to the specified point id to the connectivity list provided. (The id is the same as that specified in InsertPoint().)  </para>
/// </summary>
  int AddTriangles(int id, vtkCellArray^ connectivity);


  // void InitTetraTraversal ();
/// <summary>
/// <para>Methods to get one tetra at a time. Start with InitTetraTraversal() and then invoke GetNextTetra() until the method returns 0.</para>
/// </summary>
  void InitTetraTraversal();


  // int GetNextTetra (int classification, vtkTetra *tet, vtkDataArray *cellScalars, vtkDoubleArray *tetScalars);
/// <summary>
/// <para>Methods to get one tetra at a time. Start with InitTetraTraversal() and then invoke GetNextTetra() until the method returns 0. cellScalars are point-centered scalars on the original cell. tetScalars are point-centered scalars on the tetra: the values will be copied from cellScalars. \pre tet_exists: tet!=0 \pre cellScalars_exists: cellScalars!=0 \pre tetScalars_exists: tetScalars!=0 \pre tetScalars_valid_size: tetScalars-&gt;GetNumberOfTuples()==4</para>
/// </summary>
  int GetNextTetra(int classification, vtkTetra^ tet, vtkDataArray^ cellScalars, vtkDoubleArray^ tetScalars);


// Did not wrap:  vtkOrderedTriangulator ();


// Did not wrap:  ~vtkOrderedTriangulator ();


// Did not wrap:  void Initialize ();


// Did not wrap:  int TemplateTriangulation ();


// Did not wrap:  void AddTemplate ();


// Did not wrap:  TemplateIDType ComputeTemplateIndex ();


// Did not wrap:  vtkOrderedTriangulator (const vtkOrderedTriangulator &);


// Did not wrap:  void vtkOrderedTriangulator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOrderedTriangulator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOrderedTriangulator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOrderedTriangulator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOrderedTriangulator();


};

} // end vtkFiltering
