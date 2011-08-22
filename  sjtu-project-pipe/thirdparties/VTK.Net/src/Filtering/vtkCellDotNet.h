#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCellArray;
ref class vtkCellData;
ref class vtkPointData;
ref class vtkPointLocator;

public ref class vtkCell : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCell *NewInstance ();
  vtkCell^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Initialize (int npts, vtkIdType *pts, vtkPoints *p);
/// <summary>
/// <para>Initialize cell from outside with point ids and point coordinates specified.</para>
/// </summary>
  void Initialize(int npts, array<int>^ arg1, vtkPoints^ p);


  // virtual void ShallowCopy (vtkCell *c);
/// <summary>
/// <para>Copy this cell by reference counting the internal data structures.  This is safe if you want a &quot;read-only&quot; copy. If you modify the cell you might wish to use DeepCopy().</para>
/// </summary>
  void ShallowCopy(vtkCell^ c);


  // virtual void DeepCopy (vtkCell *c);
/// <summary>
/// <para>Copy this cell by completely copying internal data structures. This is slower but safer than ShallowCopy().</para>
/// </summary>
  void DeepCopy(vtkCell^ c);


  // virtual int GetCellType () = 0;
/// <summary>
/// <para>Return the type of cell.</para>
/// </summary>
  int GetCellType();


  // virtual int GetCellDimension () = 0;
/// <summary>
/// <para>Return the topological dimensional of the cell (0,1,2, or 3).</para>
/// </summary>
  int GetCellDimension();


  // virtual int IsLinear ();return 
/// <summary>
/// <para>Some cells require initialization prior to access. For example, they may have to triangulate themselves or set up internal data structures.</para>
/// </summary>
  int IsLinear();


  // virtual int RequiresInitialization ();return 
/// <summary>
/// <para>Some cells require initialization prior to access. For example, they may have to triangulate themselves or set up internal data structures.</para>
/// </summary>
  int RequiresInitialization();


  // virtual void Initialize ();
/// <summary>
/// <para>Explicit cells require additional representational information beyond the usual cell type and connectivity list information. Most cells in VTK are implicit cells.</para>
/// </summary>
  void Initialize();


  // virtual int IsExplicitCell ();return 
/// <summary>
/// <para>Get the point coordinates for the cell.</para>
/// </summary>
  int IsExplicitCell();


  // vtkPoints *GetPoints ();return this Points 
/// <summary>
/// <para>Return the number of points in the cell.</para>
/// </summary>
  vtkPoints^ GetPoints();


  // int GetNumberOfPoints ();return this PointIds GetNumberOfIds 
/// <summary>
/// <para>Return the number of edges in the cell.</para>
/// </summary>
  int GetNumberOfPoints();


  // virtual int GetNumberOfEdges () = 0;
/// <summary>
/// <para>Return the number of edges in the cell.</para>
/// </summary>
  int GetNumberOfEdges();


  // virtual int GetNumberOfFaces () = 0;
/// <summary>
/// <para>Return the number of faces in the cell.</para>
/// </summary>
  int GetNumberOfFaces();


  // vtkIdList *GetPointIds ();return this PointIds 
/// <summary>
/// <para>For cell point i, return the actual point id.</para>
/// </summary>
  vtkIdList^ GetPointIds();


  // vtkIdType GetPointId (int ptId);return this PointIds GetId ptId 
/// <summary>
/// <para>Return the edge cell from the edgeId of the cell.</para>
/// </summary>
  int GetPointId(int ptId);


  // virtual vtkCell *GetEdge (int edgeId) = 0;
/// <summary>
/// <para>Return the edge cell from the edgeId of the cell.</para>
/// </summary>
  vtkCell^ GetEdge(int edgeId);


  // virtual vtkCell *GetFace (int faceId) = 0;
/// <summary>
/// <para>Return the face cell from the faceId of the cell.</para>
/// </summary>
  vtkCell^ GetFace(int faceId);


  // virtual int CellBoundary (int subId, double pcoords[3], vtkIdList *pts) = 0;
/// <summary>
/// <para>Given parametric coordinates of a point, return the closest cell boundary, and whether the point is inside or outside of the cell. The cell boundary is defined by a list of points (pts) that specify a face (3D cell), edge (2D cell), or vertex (1D cell). If the return value of the method is != 0, then the point is inside the cell.</para>
/// </summary>
  int CellBoundary(int subId, array<double>^ pcoords, vtkIdList^ pts);


  // virtual int EvaluatePosition (double x[3], double *closestPoint, int &subId, double pcoords[3], double &dist2, double *weights) = 0;
/// <summary>
/// <para>Given a point x[3] return inside(=1) or outside(=0) cell; evaluate parametric coordinates, sub-cell id (!=0 only if cell is composite), distance squared of point x[3] to cell (in particular, the sub-cell indicated), closest point on cell to x[3] (unless closestPoint is null, in which case, the closest point and dist2 are not found), and interpolation weights in cell. (The number of weights is equal to the number of points defining the cell). Note: on rare occasions a -1 is returned from the method. This means that numerical error has occurred and all data returned from this method should be ignored. Also, inside/outside is determine parametrically. That is, a point is inside if it satisfies parametric limits. This can cause problems for cells of topological dimension 2 or less, since a point in 3D can project onto the cell within parametric limits but be &quot;far&quot; from the cell.  Thus the value dist2 may be checked to determine true in/out.</para>
/// </summary>
  int EvaluatePosition(array<double>^ x, array<double>^ closestPoint, int% subId, array<double>^ pcoords, double% dist2, array<double>^ weights);


  // virtual void EvaluateLocation (int &subId, double pcoords[3], double x[3], double *weights) = 0;
/// <summary>
/// <para>Determine global coordinate (x[3]) from subId and parametric coordinates. Also returns interpolation weights. (The number of weights is equal to the number of points in the cell.)</para>
/// </summary>
  void EvaluateLocation(int% subId, array<double>^ pcoords, array<double>^ x, array<double>^ weights);


  // virtual void Contour (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *verts, vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd) = 0;
/// <summary>
/// <para>Generate contouring primitives. The scalar list cellScalars are scalar values at each cell point. The point locator is essentially a  points list that merges points as they are inserted (i.e., prevents  duplicates). Contouring primitives can be vertices, lines, or polygons. It is possible to interpolate point data along the edge by providing input and output point data - if outPd is NULL, then no interpolation is performed. Also, if the output cell data is non-NULL, the cell data from the contoured cell is passed to the generated contouring primitives. (Note: the CopyAllocate() method must be invoked on both the output cell and point data. The  cellId refers to the cell from which the cell data is copied.)</para>
/// </summary>
  void Contour(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ verts, vtkCellArray^ lines, vtkCellArray^ polys, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd);


  // virtual void Clip (double value, vtkDataArray *cellScalars, vtkPointLocator *locator, vtkCellArray *connectivity, vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId, vtkCellData *outCd, int insideOut) = 0;
/// <summary>
/// <para>Cut (or clip) the cell based on the input cellScalars and the specified value. The output of the clip operation will be one or more cells of the same topological dimension as the original cell.  The flag insideOut controls what part of the cell is considered inside -  normally cell points whose scalar value is greater than &quot;value&quot; are considered inside. If insideOut is on, this is reversed. Also, if the  output cell data is non-NULL, the cell data from the clipped cell is  passed to the generated contouring primitives. (Note: the CopyAllocate()  method must be invoked on both the output cell and point data. The cellId refers to the cell from which the cell data is copied.)</para>
/// </summary>
  void Clip(double value, vtkDataArray^ cellScalars, vtkPointLocator^ locator, vtkCellArray^ connectivity, vtkPointData^ inPd, vtkPointData^ outPd, vtkCellData^ inCd, int cellId, vtkCellData^ outCd, int insideOut);


  // virtual int IntersectWithLine (double p1[3], double p2[3], double tol, double &t, double x[3], double pcoords[3], int &subId) = 0;
/// <summary>
/// <para>Intersect with a ray. Return parametric coordinates (both line and cell) and global intersection coordinates, given ray definition and tolerance.  The method returns non-zero value if intersection occurs.</para>
/// </summary>
  int IntersectWithLine(array<double>^ p1, array<double>^ p2, double tol, double% t, array<double>^ x, array<double>^ pcoords, int% subId);


  // virtual int Triangulate (int index, vtkIdList *ptIds, vtkPoints *pts) = 0;
/// <summary>
/// <para>Generate simplices of proper dimension. If cell is 3D, tetrahedron are  generated; if 2D triangles; if 1D lines; if 0D points. The form of the output is a sequence of points, each n+1 points (where n is topological  cell dimension) defining a simplex. The index is a parameter that controls which triangulation to use (if more than one is possible). If numerical degeneracy encountered, 0 is returned, otherwise 1 is returned. This method does not insert new points: all the points that define the simplices are the points that define the cell.</para>
/// </summary>
  int Triangulate(int index, vtkIdList^ ptIds, vtkPoints^ pts);


  // virtual void Derivatives (int subId, double pcoords[3], double *values, int dim, double *derivs) = 0;
/// <summary>
/// <para>Compute derivatives given cell subId and parametric coordinates. The values array is a series of data value(s) at the cell points. There is a one-to-one correspondence between cell point and data value(s). Dim is the number of data values per cell point. Derivs are derivatives in the x-y-z coordinate directions for each data value. Thus, if computing derivatives for a scalar function in a hexahedron, dim=1, 8 values are supplied, and 3 deriv values are returned (i.e., derivatives in x-y-z directions). On the other hand, if computing derivatives of velocity (vx,vy,vz) dim=3, 24 values are supplied ((vx,vy,vz)1, (vx,vy,vz)2, ....()8), and 9 deriv values are returned ((d(vx)/dx),(d(vx)/dy),(d(vx)/dz), (d(vy)/dx),(d(vy)/dy), (d(vy)/dz), (d(vz)/dx),(d(vz)/dy),(d(vz)/dz)).</para>
/// </summary>
  void Derivatives(int subId, array<double>^ pcoords, array<double>^ values, int dim, array<double>^ derivs);


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Compute cell bounding box (xmin,xmax,ymin,ymax,zmin,zmax). Copy result into user provided array.</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // double *GetBounds ();
/// <summary>
/// <para>Compute cell bounding box (xmin,xmax,ymin,ymax,zmin,zmax). Return pointer to array of six double values.</para>
/// </summary>
  array<double>^ GetBounds();


  // double GetLength2 ();
/// <summary>
/// <para>Compute Length squared of cell (i.e., bounding box diagonal squared).</para>
/// </summary>
  double GetLength2();


  // virtual int GetParametricCenter (double pcoords[3]);
/// <summary>
/// <para>Return center of the cell in parametric coordinates.  Note that the parametric center is not always located at (0.5,0.5,0.5). The return value is the subId that the center is in (if a composite cell). If you want the center in x-y-z space, invoke the EvaluateLocation() method.</para>
/// </summary>
  int GetParametricCenter(array<double>^ pcoords);


  // virtual double GetParametricDistance (double pcoords[3]);
/// <summary>
/// <para>Return the distance of the parametric coordinate provided to the cell. If inside the cell, a distance of zero is returned. This is used during picking to get the correct cell picked. (The tolerance will occasionally allow cells to be picked who are not really intersected &quot;inside&quot; the cell.)</para>
/// </summary>
  double GetParametricDistance(array<double>^ pcoords);


  // virtual int IsPrimaryCell ();return 
/// <summary>
/// <para>Return a contiguous array of parametric coordinates of the points defining this cell. In other words, (px,py,pz, px,py,pz, etc..)  The coordinates are ordered consistent with the definition of the point ordering for the cell. This method returns a non-NULL pointer when the cell is a primary type (i.e., IsPrimaryCell() is true). Note that 3D parametric coordinates are returned no matter what the topological dimension of the cell.</para>
/// </summary>
  int IsPrimaryCell();


// Did not wrap:  virtual double *GetParametricCoords ();


// Did not wrap:  vtkCell ();


// Did not wrap:  ~vtkCell ();


// Did not wrap:  vtkCell (const vtkCell &);


// Did not wrap:  void vtkCell 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCell(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCell(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCell();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCell();


};

} // end vtkFiltering
