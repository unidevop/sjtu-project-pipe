#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDelaunay2D : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDelaunay2D *NewInstance ();
  vtkDelaunay2D^ NewInstance();


  // vtkDelaunay2D *SafeDownCast (vtkObject* o);
  static vtkDelaunay2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkDelaunay2D *New ();


  // void SetSource (vtkPolyData *);
/// <summary>
/// <para>Specify the source object used to specify constrained edges and loops. (This is optional.) If set, and lines/polygons are defined, a constrained triangulation is created. The lines/polygons are assumed to reference points in the input point set (i.e. point ids are identical in the input and source). Old style. See SetSourceConnection.</para>
/// </summary>
  void SetSource(vtkPolyData^ arg0);


  // void SetSourceConnection (vtkAlgorithmOutput *algOutput);
/// <summary>
/// <para>Specify the source object used to specify constrained edges and loops. (This is optional.) If set, and lines/polygons are defined, a constrained triangulation is created. The lines/polygons are assumed to reference points in the input point set (i.e. point ids are identical in the input and source). New style. This method is equivalent to SetInputConnection(1, algOutput).</para>
/// </summary>
  void SetSourceConnection(vtkAlgorithmOutput^ algOutput);


  // vtkPolyData *GetSource ();
/// <summary>
/// <para>Get a pointer to the source object.</para>
/// </summary>
  vtkPolyData^ GetSource();


  // void SetAlpha (double );
/// <summary>
/// <para>Specify alpha (or distance) value to control output of this filter. For a non-zero alpha value, only edges or triangles contained within a sphere centered at mesh vertices will be output. Otherwise, only triangles will be output.</para>
/// </summary>
  void SetAlpha(double arg0);


  // double GetAlphaMinValue ();
/// <summary>
/// <para>Specify alpha (or distance) value to control output of this filter. For a non-zero alpha value, only edges or triangles contained within a sphere centered at mesh vertices will be output. Otherwise, only triangles will be output.</para>
/// </summary>
  double GetAlphaMinValue();


  // double GetAlphaMaxValue ();
/// <summary>
/// <para>Specify alpha (or distance) value to control output of this filter. For a non-zero alpha value, only edges or triangles contained within a sphere centered at mesh vertices will be output. Otherwise, only triangles will be output.</para>
/// </summary>
  double GetAlphaMaxValue();


  // double GetAlpha ();
/// <summary>
/// <para>Specify alpha (or distance) value to control output of this filter. For a non-zero alpha value, only edges or triangles contained within a sphere centered at mesh vertices will be output. Otherwise, only triangles will be output.</para>
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


  // virtual void SetTransform (vtkAbstractTransform *);
/// <summary>
/// <para>Set / get the transform which is applied to points to generate a 2D problem.  This maps a 3D dataset into a 2D dataset where triangulation can be done on the XY plane.  The points are transformed and triangulated.  The topology of triangulated points is used as the output topology.  The output points are the original (untransformed) points.  The transform can be any subclass of vtkAbstractTransform (thus it does not need to be a linear or invertible transform).</para>
/// </summary>
  void SetTransform(vtkAbstractTransform^ arg0);


  // vtkAbstractTransform *GetTransform ();
/// <summary>
/// <para>Set / get the transform which is applied to points to generate a 2D problem.  This maps a 3D dataset into a 2D dataset where triangulation can be done on the XY plane.  The points are transformed and triangulated.  The topology of triangulated points is used as the output topology.  The output points are the original (untransformed) points.  The transform can be any subclass of vtkAbstractTransform (thus it does not need to be a linear or invertible transform).</para>
/// </summary>
  vtkAbstractTransform^ GetTransform();


  // void SetProjectionPlaneMode (int );
/// <summary>
/// <para>Define</para>
/// </summary>
  void SetProjectionPlaneMode(int arg0);


  // int GetProjectionPlaneModeMinValue ();
/// <summary>
/// <para>Define</para>
/// </summary>
  int GetProjectionPlaneModeMinValue();


  // int GetProjectionPlaneModeMaxValue ();
/// <summary>
/// <para>Define</para>
/// </summary>
  int GetProjectionPlaneModeMaxValue();


  // int GetProjectionPlaneMode ();
/// <summary>
/// <para>Define</para>
/// </summary>
  int GetProjectionPlaneMode();


// Did not wrap:  vtkDelaunay2D ();


// Did not wrap:  ~vtkDelaunay2D ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkAbstractTransform *ComputeBestFittingPlane (vtkPointSet *input);


// Did not wrap:  void SetPoint (vtkIdType id, double *x);vtkIdType idx id this Points idx x this Points idx x this Points idx x 


// Did not wrap:  void GetPoint (vtkIdType id, double x[3]);double ptr this Points id x ptr x ptr x ptr 


// Did not wrap:  int *RecoverBoundary (vtkPolyData *source);


// Did not wrap:  int RecoverEdge (vtkIdType p1, vtkIdType p2);


// Did not wrap:  void FillPolygons (vtkCellArray *polys, int *triUse);


// Did not wrap:  int InCircle (double x[3], double x1[3], double x2[3], double x3[3]);


// Did not wrap:  vtkIdType FindTriangle (double x[3], vtkIdType ptIds[3], vtkIdType tri, double tol, vtkIdType nei[3], vtkIdList *neighbors);


// Did not wrap:  void CheckEdge (vtkIdType ptId, double x[3], vtkIdType p1, vtkIdType p2, vtkIdType tri);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkDelaunay2D (const vtkDelaunay2D &);


// Did not wrap:  void vtkDelaunay2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDelaunay2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDelaunay2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDelaunay2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDelaunay2D();


};

} // end vtkGraphics
