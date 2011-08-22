#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCellArray;
ref class vtkCellData;
ref class vtkGenericAttribute;
ref class vtkGenericAttributeCollection;
ref class vtkGenericCellIterator;
ref class vtkGenericCellTessellator;
ref class vtkGenericPointIterator;
ref class vtkPointData;
ref class vtkPointLocator;

public ref class vtkGenericAdaptorCell : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericAdaptorCell *NewInstance ();
  vtkGenericAdaptorCell^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual vtkIdType GetId () = 0;
/// <summary>
/// <para>Unique identification number of the cell over the whole data set. This unique key may not be contiguous.</para>
/// </summary>
  int GetId();


  // virtual int IsInDataSet () = 0;
/// <summary>
/// <para>Does `this' a cell of a dataset? (otherwise, it is a boundary cell)</para>
/// </summary>
  int IsInDataSet();


  // virtual int GetType () = 0;
/// <summary>
/// <para>Return the type of the current cell. \post (result==VTK_HIGHER_ORDER_EDGE)||       (result==VTK_HIGHER_ORDER_TRIANGLE)||       (result==VTK_HIGHER_ORDER_TETRAHEDRON)</para>
/// </summary>
  int GetType();


  // virtual int GetDimension () = 0;
/// <summary>
/// <para>Return the topological dimension of the current cell. \post valid_result: result&gt;=0 &amp;&amp; result&lt;=3</para>
/// </summary>
  int GetDimension();


  // virtual int GetGeometryOrder () = 0;
/// <summary>
/// <para>Return the interpolation order of the geometry. \post positive_result: result&gt;=0</para>
/// </summary>
  int GetGeometryOrder();


  // int IsGeometryLinear ();
/// <summary>
/// <para>Does the cell have a non-linear interpolation for the geometry? \post definition: result==(GetGeometryOrder()==1)</para>
/// </summary>
  int IsGeometryLinear();


  // virtual int GetAttributeOrder (vtkGenericAttribute *a) = 0;
/// <summary>
/// <para>Return the Interpolation order of attribute `a' on the cell (may differ by cell).   \pre a_exists: a!=0  \post positive_result: result&gt;=0</para>
/// </summary>
  int GetAttributeOrder(vtkGenericAttribute^ a);


  // virtual int GetHighestOrderAttribute (vtkGenericAttributeCollection *ac);
/// <summary>
/// <para>Return the index of the first point centered attribute with the highest order in `ac'. \pre ac_exists: ac!=0 \post valid_result: result&gt;=-1 &amp;&amp; result&lt;ac-&gt;GetNumberOfAttributes()</para>
/// </summary>
  int GetHighestOrderAttribute(vtkGenericAttributeCollection^ ac);


  // int IsAttributeLinear (vtkGenericAttribute *a);
/// <summary>
/// <para>Does the attribute `a' have a non-linear interpolation? \pre a_exists: a!=0 \post definition: result==(GetAttributeOrder()==1)</para>
/// </summary>
  int IsAttributeLinear(vtkGenericAttribute^ a);


  // virtual int IsPrimary () = 0;
/// <summary>
/// <para>Is the cell primary (i.e. not composite) ?</para>
/// </summary>
  int IsPrimary();


  // virtual int GetNumberOfPoints () = 0;
/// <summary>
/// <para>Return the number of points that compose the cell. \post positive_result: result&gt;=0</para>
/// </summary>
  int GetNumberOfPoints();


  // virtual int GetNumberOfBoundaries (int dim) = 0;
/// <summary>
/// <para>Return the number of boundaries of dimension `dim' (or all dimensions greater than 0 and less than GetDimension() if -1) of the cell. When \a dim is -1, the number of vertices is not included in the count because vertices are a special case: a vertex will have at most a single field value associated with it; DOF nodes may have an arbitrary number of field values associated with them. \pre valid_dim_range: (dim==-1) || ((dim&gt;=0)&amp;&amp;(dim&lt;GetDimension())) \post positive_result: result&gt;=0</para>
/// </summary>
  int GetNumberOfBoundaries(int dim);


  // virtual int GetNumberOfDOFNodes () = 0;
/// <summary>
/// <para>Accumulated number of DOF nodes of the current cell. A DOF node is a component of cell with a given topological dimension. e.g.: a triangle has 4 DOF: 1 face and 3 edges. An hexahedron has 19 DOF: 1 region, 6 faces, and 12 edges.</para>
/// <para>The number of vertices is not included in the count because vertices are a special case: a vertex will have at most a single field value associated with it; DOF nodes may have an arbitrary number of field values associated with them. \post valid_result: result==GetNumberOfBoundaries(-1)+1</para>
/// </summary>
  int GetNumberOfDOFNodes();


  // virtual void GetPointIterator (vtkGenericPointIterator *it) = 0;
/// <summary>
/// <para>Return the points of cell into `it'. \pre it_exists: it!=0</para>
/// </summary>
  void GetPointIterator(vtkGenericPointIterator^ it);


  // virtual vtkGenericCellIterator *NewCellIterator () = 0;
/// <summary>
/// <para>Create an empty cell iterator. The user is responsible for deleting it. \post result_exists: result!=0</para>
/// </summary>
  vtkGenericCellIterator^ NewCellIterator();


  // virtual void GetBoundaryIterator (vtkGenericCellIterator *boundaries, int dim) = 0;
/// <summary>
/// <para>Return the `boundaries' the cells of dimension `dim' (or all dimensions less than GetDimension() if -1) that are part of the boundary of the cell. \pre valid_dim_range: (dim==-1) || ((dim&gt;=0)&amp;&amp;(dim&lt;GetDimension())) \pre boundaries_exist: boundaries!=0</para>
/// </summary>
  void GetBoundaryIterator(vtkGenericCellIterator^ boundaries, int dim);


  // virtual int CountNeighbors (vtkGenericAdaptorCell *boundary) = 0;
/// <summary>
/// <para>Number of cells (dimension&gt;boundary-&gt;GetDimension()) of the dataset that share the boundary `boundary' of `this'. `this' IS NOT INCLUDED. \pre boundary_exists: boundary!=0 \pre real_boundary: !boundary-&gt;IsInDataSet() \pre cell_of_the_dataset: IsInDataSet() \pre boundary: HasBoundary(boundary) \post positive_result: result&gt;=0</para>
/// </summary>
  int CountNeighbors(vtkGenericAdaptorCell^ boundary);


  // virtual void CountEdgeNeighbors (int *sharing) = 0;
/// <summary>
/// <para>Number of cells (dimension&gt;boundary-&gt;GetDimension()) of the dataset that share the boundary `boundary' of `this'. `this' IS NOT INCLUDED. \pre boundary_exists: boundary!=0 \pre real_boundary: !boundary-&gt;IsInDataSet() \pre cell_of_the_dataset: IsInDataSet() \pre boundary: HasBoundary(boundary) \post positive_result: result&gt;=0</para>
/// </summary>
  void CountEdgeNeighbors(array<int>^ sharing);


  // virtual void GetNeighbors (vtkGenericAdaptorCell *boundary, vtkGenericCellIterator *neighbors) = 0;
/// <summary>
/// <para>Put into `neighbors' the cells (dimension&gt;boundary-&gt;GetDimension()) of the dataset that share the boundary `boundary' with this cell. `this' IS NOT INCLUDED. \pre boundary_exists: boundary!=0 \pre real_boundary: !boundary-&gt;IsInDataSet() \pre cell_of_the_dataset: IsInDataSet() \pre boundary: HasBoundary(boundary) \pre neighbors_exist: neighbors!=0</para>
/// </summary>
  void GetNeighbors(vtkGenericAdaptorCell^ boundary, vtkGenericCellIterator^ neighbors);


// Did not wrap:  virtual int FindClosestBoundary (int subId, double pcoords[3], vtkGenericCellIterator &boundary) = 0;


  // virtual int EvaluatePosition (double x[3], double *closestPoint, int &subId, double pcoords[3], double &dist2) = 0;
/// <summary>
/// <para>Is `x' inside the current cell? It also evaluate parametric coordinates `pcoords', sub-cell id `subId' (0 means primary cell), distance squared to the sub-cell in `dist2' and closest corner point `closestPoint'. `dist2' and `closestPoint' are not evaluated if `closestPoint'==0. If a numerical error occurred, -1 is returned and all other results should be ignored. \post valid_result: result==-1 || result==0 || result==1 \post positive_distance: result!=-1 implies (closestPoint!=0 implies                                               dist2&gt;=0)</para>
/// </summary>
  int EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2);


  // virtual void EvaluateLocation (int subId, double pcoords[3], double x[3]) = 0;
/// <summary>
/// <para>Determine the global coordinates `x' from sub-cell `subId' and parametric coordinates `pcoords' in the cell. \pre positive_subId: subId&gt;=0 \pre clamped_pcoords: (0&lt;=pcoords[0])&amp;&amp;(pcoords[0]&lt;=1)&amp;&amp;(0&lt;=pcoords[1]) &amp;&amp;(pcoords[1]&lt;=1)&amp;&amp;(0&lt;=pcoords[2])&amp;&amp;(pcoords[2]&lt;=1)</para>
/// </summary>
  void EvaluateLocation(int subId, array<double>^ pcoords, array<double>^ x);


  // virtual void InterpolateTuple (vtkGenericAttribute *a, double pcoords[3], double *val) = 0;
/// <summary>
/// <para>Interpolate the attribute `a' at local position `pcoords' of the cell into `val'. \pre a_exists: a!=0 \pre a_is_point_centered: a-&gt;GetCentering()==vtkPointCentered \pre clamped_point: pcoords[0]&gt;=0 &amp;&amp; pcoords[0]&lt;=1 &amp;&amp; pcoords[1]&gt;=0 &amp;&amp;                     pcoords[1]&lt;=1 &amp;&amp; pcoords[2]&gt;=0 &amp;&amp; pcoords[2]&lt;=1 \pre val_exists: val!=0 \pre valid_size: sizeof(val)==a-&gt;GetNumberOfComponents()</para>
/// </summary>
  void InterpolateTuple(vtkGenericAttribute^ a, array<double>^ pcoords, array<double>^ val);


  // virtual void InterpolateTuple (vtkGenericAttributeCollection *c, double pcoords[3], double *val) = 0;
/// <summary>
/// <para>Interpolate the whole collection of attributes `c' at local position `pcoords' of the cell into `val'. Only point centered attributes are taken into account. \pre c_exists: c!=0 \pre clamped_point: pcoords[0]&gt;=0 &amp;&amp; pcoords[0]&lt;=1 &amp;&amp; pcoords[1]&gt;=0 &amp;&amp;                     pcoords[1]&lt;=1 &amp;&amp; pcoords[2]&gt;=0 &amp;&amp; pcoords[2]&lt;=1 \pre val_exists: val!=0 \pre valid_size: sizeof(val)==c-&gt;GetNumberOfPointCenteredComponents()</para>
/// </summary>
  void InterpolateTuple(vtkGenericAttributeCollection^ c, array<double>^ pcoords, array<double>^ val);


  // virtual void Contour (vtkContourValues *values, vtkImplicitFunction *f, vtkGenericAttributeCollection *attributes, vtkGenericCellTessellator *tess, vtkPointLocator *locator, vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys, vtkPointData *outPd, vtkCellData *outCd, vtkPointData *internalPd, vtkPointData *secondaryPd, vtkCellData *secondaryCd);
/// <summary>
/// <para>Generate a contour (contouring primitives) for each `values' or with respect to an implicit function `f'. Contouring is performed on the scalar attribute (`attributes-&gt;GetActiveAttribute()' `attributes-&gt;GetActiveComponent()').  Contouring interpolates the `attributes-&gt;GetNumberOfattributesToInterpolate()' attributes `attributes-&gt;GetAttributesToInterpolate()'.  The `locator', `verts', `lines', `polys', `outPd' and `outCd' are cumulative data arrays over cell iterations: they store the result of each call to Contour(): - `locator' is points list that merges points as they are inserted (i.e., prevents duplicates). - `verts' is an array of generated vertices - `lines' is an array of generated lines - `polys' is an array of generated polygons - `outPd' is an array of interpolated point data along the edge (if not-NULL) - `outCd' is an array of copied cell data of the current cell (if  not-NULL) `internalPd', `secondaryPd' and `secondaryCd' are initialized by the filter that call it from `attributes'. - `internalPd' stores the result of the tessellation pass: the higher-order cell is tessellated into linear sub-cells. - `secondaryPd' and `secondaryCd' are used internally as inputs to the Contour() method on linear sub-cells. Note: the CopyAllocate() method must be invoked on both `outPd' and `outCd', from `secondaryPd' and `secondaryCd'.</para>
/// <para>NOTE: `vtkGenericAttributeCollection *attributes' will be replaced by a       `vtkInformation'.</para>
/// <para>\pre values_exist: (values!=0 &amp;&amp; f==0) || (values==0 &amp;&amp; f!=0) \pre attributes_exist: attributes!=0 \pre tessellator_exists: tess!=0 \pre locator_exists: locator!=0 \pre verts_exist: verts!=0 \pre lines_exist: lines!=0 \pre polys_exist: polys!=0 \pre internalPd_exists: internalPd!=0 \pre secondaryPd_exists: secondaryPd!=0 \pre secondaryCd_exists: secondaryCd!=0</para>
/// </summary>
  void Contour(vtkContourValues^ values, vtkImplicitFunction^ f, vtkGenericAttributeCollection^ attributes, vtkGenericCellTessellator^ tess, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ outPd, vtkCellData^ outCd, vtkPointData^ internalPd, vtkPointData^ secondaryPd, vtkCellData^ secondaryCd);


  // virtual void Clip (double value, vtkImplicitFunction *f, vtkGenericAttributeCollection *attributes, vtkGenericCellTessellator *tess, int insideOut, vtkPointLocator *locator, vtkCellArray *connectivity, vtkPointData *outPd, vtkCellData *outCd, vtkPointData *internalPd, vtkPointData *secondaryPd, vtkCellData *secondaryCd);
/// <summary>
/// <para>Cut (or clip) the current cell with respect to the contour defined by the `value' or the implicit function `f' of the scalar attribute (`attributes-&gt;GetActiveAttribute()',`attributes-&gt;GetActiveComponent()'). If `f' exists, `value' is not used. The output is the part of the current cell which is inside the contour.  The output is a set of zero, one or more cells of the same topological dimension as the current cell. Normally, cell points whose scalar value is greater than &quot;value&quot; are considered inside. If `insideOut' is on, this is reversed.  Clipping interpolates the `attributes-&gt;GetNumberOfattributesToInterpolate()' attributes `attributes-&gt;GetAttributesToInterpolate()'.  `locator', `connectivity', `outPd' and `outCd' are cumulative data arrays over cell iterations: they store the result of each call to Clip(): - `locator' is points list that merges points as they are inserted (i.e., prevents duplicates). - `connectivity' is an array of generated cells - `outPd' is an array of interpolated point data along the edge (if not-NULL) - `outCd' is an array of copied cell data of the current cell (if not-NULL) `internalPd', `secondaryPd' and `secondaryCd' are initialized by the filter that call it from `attributes'. - `internalPd' stores the result of the tessellation pass: the higher-order cell is tessellated into linear sub-cells. - `secondaryPd' and `secondaryCd' are used internally as inputs to the Clip() method on linear sub-cells. Note: the CopyAllocate() method must be invoked on both `outPd' and `outCd', from `secondaryPd' and `secondaryCd'.</para>
/// <para>NOTE: `vtkGenericAttributeCollection *attributes' will be replaced by a       `vtkInformation'.</para>
/// <para>\pre attributes_exist: attributes!=0 \pre tessellator_exists: tess!=0 \pre locator_exists: locator!=0 \pre connectivity_exists: connectivity!=0 \pre internalPd_exists: internalPd!=0 \pre secondaryPd_exists: secondaryPd!=0 \pre secondaryCd_exists: secondaryCd!=0</para>
/// </summary>
  void Clip(double value, vtkImplicitFunction^ f, vtkGenericAttributeCollection^ attributes, vtkGenericCellTessellator^ tess, int insideOut, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ outPd, vtkCellData^ outCd, vtkPointData^ internalPd, vtkPointData^ secondaryPd, vtkCellData^ secondaryCd);


  // virtual int IntersectWithLine (double p1[3], double p2[3], double tol, double &t, double x[3], double pcoords[3], int &subId) = 0;
/// <summary>
/// <para>Is there an intersection between the current cell and the ray (`p1',`p2') according to a tolerance `tol'? If true, `x' is the global intersection, `t' is the parametric coordinate for the line, `pcoords' are the parametric coordinates for cell. `subId' is the sub-cell where the intersection occurs. \pre positive_tolerance: tol&gt;0</para>
/// </summary>
  int IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // virtual void Derivatives (int subId, double pcoords[3], vtkGenericAttribute *attribute, double *derivs) = 0;
/// <summary>
/// <para>Compute derivatives `derivs' of the attribute `attribute' (from its values at the corner points of the cell) given sub-cell `subId' (0 means primary cell) and parametric coordinates `pcoords'. Derivatives are in the x-y-z coordinate directions for each data value. \pre positive_subId: subId&gt;=0 \pre clamped_pcoords: (0&lt;=pcoords[0])&amp;&amp;(pcoords[0]&lt;=1)&amp;&amp;(0&lt;=pcoords[1]) &amp;&amp;(pcoords[1]&lt;=1)&amp;&amp;(0&lt;=pcoords[2])%%(pcoords[2]&lt;=1) \pre attribute_exists: attribute!=0 \pre derivs_exists: derivs!=0 \pre valid_size: sizeof(derivs)&gt;=attribute-&gt;GetNumberOfComponents()*3</para>
/// </summary>
  void Derivatives(int subId, array<double>^ pcoords, vtkGenericAttribute^ attribute, array<double>^ derivs);


  // virtual void GetBounds (double bounds[6]) = 0;
/// <summary>
/// <para>Compute the bounding box of the current cell in `bounds' in global coordinates. THREAD SAFE</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


// Did not wrap:  virtual double *GetBounds ();


  // virtual double GetLength2 ();
/// <summary>
/// <para>Return the bounding box diagonal squared of the current cell. \post positive_result: result&gt;=0</para>
/// </summary>
  double GetLength2();


  // virtual int GetParametricCenter (double pcoords[3]) = 0;
/// <summary>
/// <para>Get the center of the current cell (in parametric coordinates)and place in the `pcoords'.  If the current cell is a composite, the return value is the sub-cell id that the center is in.  \post valid_result: (result&gt;=0) &amp;&amp; (IsPrimary() implies result==0)</para>
/// </summary>
  int GetParametricCenter(array<double>^ pcoords);


  // virtual double GetParametricDistance (double pcoords[3]) = 0;
/// <summary>
/// <para>Return the distance of the parametric coordinate `pcoords' to the current cell.  If inside the cell, a distance of zero is returned. This is used during picking to get the correct cell picked. (The tolerance will occasionally allow cells to be picked who are not really intersected &quot;inside&quot; the cell.)  \post positive_result: result&gt;=0</para>
/// </summary>
  double GetParametricDistance(array<double>^ pcoords);


// Did not wrap:  virtual double *GetParametricCoords () = 0;


  // virtual void Tessellate (vtkGenericAttributeCollection *attributes, vtkGenericCellTessellator *tess, vtkPoints *points, vtkPointLocator *locator, vtkCellArray *cellArray, vtkPointData *internalPd, vtkPointData *pd, vtkCellData *cd, vtkUnsignedCharArray *types);
/// <summary>
/// <para>Tessellate the cell if it is not linear or if at least one attribute of `attributes' is not linear. The output are linear cells of the same dimension than than cell. If the cell is linear and all attributes are linear, the output is just a copy of the current cell. `points', `cellArray', `pd' and `cd' are cumulative output data arrays over cell iterations: they store the result of each call to Tessellate(). `internalPd' is initialized by the calling filter and stores the result of the tessellation. If it is not null, `types' is fill with the types of the linear cells. `types' is null when it is called from vtkGenericGeometryFilter and not null when it is called from vtkGenericDatasetTessellator. \pre attributes_exist: attributes!=0 \pre tessellator_exists: tess!=0 \pre points_exist: points!=0 \pre cellArray_exists: cellArray!=0 \pre internalPd_exists: internalPd!=0 \pre pd_exist: pd!=0 \pre cd_exists: cd!=0</para>
/// </summary>
  void Tessellate(vtkGenericAttributeCollection^ attributes, vtkGenericCellTessellator^ tess, vtkPoints^ points, vtkPointLocator^ locator, vtkCellArray^ cellArray, vtkPointData^ internalPd, vtkPointData^ pd, vtkCellData^ cd, vtkUnsignedCharArray^ types);


  // virtual int IsFaceOnBoundary (vtkIdType faceId) = 0;
/// <summary>
/// <para>Is the face `faceId' of the current cell on a exterior boundary of the dataset? \pre 3d: GetDimension()==3</para>
/// </summary>
  int IsFaceOnBoundary(int faceId);


  // virtual int IsOnBoundary () = 0;
/// <summary>
/// <para>Is the cell on the exterior boundary of the dataset? \pre 2d: GetDimension()==2</para>
/// </summary>
  int IsOnBoundary();


  // virtual void GetPointIds (vtkIdType *id) = 0;
/// <summary>
/// <para>Put into `id' the list of ids the point of the cell. \pre id_exists: id!=0 \pre valid_size: sizeof(id)==GetNumberOfPoints();</para>
/// </summary>
  void GetPointIds(array<int>^ arg0);


  // virtual void TriangulateFace (vtkGenericAttributeCollection *attributes, vtkGenericCellTessellator *tess, int index, vtkPoints *points, vtkPointLocator *locator, vtkCellArray *cellArray, vtkPointData *internalPd, vtkPointData *pd, vtkCellData *cd);
/// <summary>
/// <para>Tessellate face `index' of the cell. See Tessellate() for further explanations. \pre cell_is_3d: GetDimension()==3 \pre attributes_exist: attributes!=0 \pre tessellator_exists: tess!=0 \pre valid_face: index&gt;=0 \pre points_exist: points!=0 \pre cellArray_exists: cellArray!=0 \pre internalPd_exists: internalPd!=0 \pre pd_exist: pd!=0 \pre cd_exists: cd!=0</para>
/// </summary>
  void TriangulateFace(vtkGenericAttributeCollection^ attributes, vtkGenericCellTessellator^ tess, int index, vtkPoints^ points, vtkPointLocator^ locator, vtkCellArray^ cellArray, vtkPointData^ internalPd, vtkPointData^ pd, vtkCellData^ cd);


// Did not wrap:  virtual int *GetFaceArray (int faceId) = 0;


  // virtual int GetNumberOfVerticesOnFace (int faceId) = 0;
/// <summary>
/// <para>Return the number of vertices defining face `faceId'. \pre is_3d: this-&gt;GetDimension()==3 \pre valid_faceId_range: faceId&gt;=0 &amp;&amp; faceId&lt;this-&gt;GetNumberOfBoundaries(2) \post positive_result: &amp;&amp; result&gt;0</para>
/// </summary>
  int GetNumberOfVerticesOnFace(int faceId);


// Did not wrap:  virtual int *GetEdgeArray (int edgeId) = 0;


// Did not wrap:  vtkGenericAdaptorCell ();


// Did not wrap:  virtual ~vtkGenericAdaptorCell ();


// Did not wrap:  void Reset ();


// Did not wrap:  void AllocateTuples (int size);


// Did not wrap:  vtkGenericAdaptorCell (const vtkGenericAdaptorCell &);


// Did not wrap:  void vtkGenericAdaptorCell 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericAdaptorCell(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericAdaptorCell(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericAdaptorCell();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericAdaptorCell();


};

} // end vtkFiltering
