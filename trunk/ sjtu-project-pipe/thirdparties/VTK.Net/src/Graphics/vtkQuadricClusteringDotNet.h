#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkFeatureEdges;

public ref class vtkQuadricClustering : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkQuadricClustering *NewInstance ();
  vtkQuadricClustering^ NewInstance();


  // vtkQuadricClustering *SafeDownCast (vtkObject* o);
  static vtkQuadricClustering^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkQuadricClustering *New ();


  // void SetNumberOfXDivisions (int num);
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  void SetNumberOfXDivisions(int num);


  // void SetNumberOfYDivisions (int num);
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  void SetNumberOfYDivisions(int num);


  // void SetNumberOfZDivisions (int num);
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  void SetNumberOfZDivisions(int num);


  // int GetNumberOfXDivisions ();
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  int GetNumberOfXDivisions();


  // int GetNumberOfYDivisions ();
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  int GetNumberOfYDivisions();


  // int GetNumberOfZDivisions ();
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  int GetNumberOfZDivisions();


  // void SetNumberOfDivisions (int div[3]);this SetNumberOfDivisions div div div 
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  void SetNumberOfDivisions(array<int>^ div);


  // void SetNumberOfDivisions (int div0, int div1, int div2);
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  void SetNumberOfDivisions(int div0, int div1, int div2);


  // int *GetNumberOfDivisions ();
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  array<int>^ GetNumberOfDivisions();


  // void GetNumberOfDivisions (int div[3]);
/// <summary>
/// <para>Set/Get the number of divisions along each axis for the spatial bins. The number of spatial bins is NumberOfXDivisions*NumberOfYDivisions* NumberOfZDivisions.  The filter may choose to ignore large numbers of divisions if the input has few points and AutoAdjustNumberOfDivisions is enabled.</para>
/// </summary>
  void GetNumberOfDivisions(array<int>^ div);


  // void SetAutoAdjustNumberOfDivisions (int );
/// <summary>
/// <para>Enable automatic adjustment of number of divisions. If off, the number of divisions specified by the user is always used (as long as it is valid).</para>
/// </summary>
  void SetAutoAdjustNumberOfDivisions(int arg0);


  // int GetAutoAdjustNumberOfDivisions ();
/// <summary>
/// <para>Enable automatic adjustment of number of divisions. If off, the number of divisions specified by the user is always used (as long as it is valid).</para>
/// </summary>
  int GetAutoAdjustNumberOfDivisions();


  // void AutoAdjustNumberOfDivisionsOn ();
/// <summary>
/// <para>Enable automatic adjustment of number of divisions. If off, the number of divisions specified by the user is always used (as long as it is valid).</para>
/// </summary>
  void AutoAdjustNumberOfDivisionsOn();


  // void AutoAdjustNumberOfDivisionsOff ();
/// <summary>
/// <para>Enable automatic adjustment of number of divisions. If off, the number of divisions specified by the user is always used (as long as it is valid).</para>
/// </summary>
  void AutoAdjustNumberOfDivisionsOff();


  // void SetDivisionOrigin (double x, double y, double z);
/// <summary>
/// <para>This is an alternative way to set up the bins.  If you are trying to match boundaries between pieces, then you should use these methods rather than SetNumberOfDivisions. To use these methods, specify the origin and spacing of the spatial binning.</para>
/// </summary>
  void SetDivisionOrigin(double x, double y, double z);


  // void SetDivisionOrigin (double o[3]);this SetDivisionOrigin o o o 
/// <summary>
/// <para>This is an alternative way to set up the bins.  If you are trying to match boundaries between pieces, then you should use these methods rather than SetNumberOfDivisions. To use these methods, specify the origin and spacing of the spatial binning.</para>
/// </summary>
  void SetDivisionOrigin(array<double>^ o);


  // double  *GetDivisionOrigin ();
/// <summary>
/// <para>This is an alternative way to set up the bins.  If you are trying to match boundaries between pieces, then you should use these methods rather than SetNumberOfDivisions. To use these methods, specify the origin and spacing of the spatial binning.</para>
/// </summary>
  array<double>^ GetDivisionOrigin();


  // void SetDivisionSpacing (double x, double y, double z);
/// <summary>
/// <para>This is an alternative way to set up the bins.  If you are trying to match boundaries between pieces, then you should use these methods rather than SetNumberOfDivisions. To use these methods, specify the origin and spacing of the spatial binning.</para>
/// </summary>
  void SetDivisionSpacing(double x, double y, double z);


  // void SetDivisionSpacing (double s[3]);this SetDivisionSpacing s s s 
/// <summary>
/// <para>This is an alternative way to set up the bins.  If you are trying to match boundaries between pieces, then you should use these methods rather than SetNumberOfDivisions. To use these methods, specify the origin and spacing of the spatial binning.</para>
/// </summary>
  void SetDivisionSpacing(array<double>^ s);


  // double  *GetDivisionSpacing ();
/// <summary>
/// <para>This is an alternative way to set up the bins.  If you are trying to match boundaries between pieces, then you should use these methods rather than SetNumberOfDivisions. To use these methods, specify the origin and spacing of the spatial binning.</para>
/// </summary>
  array<double>^ GetDivisionSpacing();


  // void SetUseInputPoints (int );
/// <summary>
/// <para>Normally the point that minimizes the quadric error function is used as the output of the bin.  When this flag is on, the bin point is forced to be one of the points from the input (the one with the smallest error). This option does not work (i.e., input points cannot be used) when the append methods (StartAppend(), Append(), EndAppend()) are being called directly.</para>
/// </summary>
  void SetUseInputPoints(int arg0);


  // int GetUseInputPoints ();
/// <summary>
/// <para>Normally the point that minimizes the quadric error function is used as the output of the bin.  When this flag is on, the bin point is forced to be one of the points from the input (the one with the smallest error). This option does not work (i.e., input points cannot be used) when the append methods (StartAppend(), Append(), EndAppend()) are being called directly.</para>
/// </summary>
  int GetUseInputPoints();


  // void UseInputPointsOn ();
/// <summary>
/// <para>Normally the point that minimizes the quadric error function is used as the output of the bin.  When this flag is on, the bin point is forced to be one of the points from the input (the one with the smallest error). This option does not work (i.e., input points cannot be used) when the append methods (StartAppend(), Append(), EndAppend()) are being called directly.</para>
/// </summary>
  void UseInputPointsOn();


  // void UseInputPointsOff ();
/// <summary>
/// <para>Normally the point that minimizes the quadric error function is used as the output of the bin.  When this flag is on, the bin point is forced to be one of the points from the input (the one with the smallest error). This option does not work (i.e., input points cannot be used) when the append methods (StartAppend(), Append(), EndAppend()) are being called directly.</para>
/// </summary>
  void UseInputPointsOff();


  // void SetUseFeatureEdges (int );
/// <summary>
/// <para>By default, this flag is off.  When &quot;UseFeatureEdges&quot; is on, then quadrics are computed for boundary edges/feature edges.  They influence the quadrics (position of points), but not the mesh.  Which features to use can be controlled by the filter &quot;FeatureEdges&quot;.</para>
/// </summary>
  void SetUseFeatureEdges(int arg0);


  // int GetUseFeatureEdges ();
/// <summary>
/// <para>By default, this flag is off.  When &quot;UseFeatureEdges&quot; is on, then quadrics are computed for boundary edges/feature edges.  They influence the quadrics (position of points), but not the mesh.  Which features to use can be controlled by the filter &quot;FeatureEdges&quot;.</para>
/// </summary>
  int GetUseFeatureEdges();


  // void UseFeatureEdgesOn ();
/// <summary>
/// <para>By default, this flag is off.  When &quot;UseFeatureEdges&quot; is on, then quadrics are computed for boundary edges/feature edges.  They influence the quadrics (position of points), but not the mesh.  Which features to use can be controlled by the filter &quot;FeatureEdges&quot;.</para>
/// </summary>
  void UseFeatureEdgesOn();


  // void UseFeatureEdgesOff ();
/// <summary>
/// <para>By default, this flag is off.  When &quot;UseFeatureEdges&quot; is on, then quadrics are computed for boundary edges/feature edges.  They influence the quadrics (position of points), but not the mesh.  Which features to use can be controlled by the filter &quot;FeatureEdges&quot;.</para>
/// </summary>
  void UseFeatureEdgesOff();


  // vtkFeatureEdges *GetFeatureEdges ();return this FeatureEdges 
/// <summary>
/// <para>By default, this flag is off.  It only has an effect when &quot;UseFeatureEdges&quot; is also on.  When &quot;UseFeaturePoints&quot; is on, then quadrics are computed for boundary / feature points used in the boundary / feature edges.  They influence the quadrics (position of points), but not the mesh.</para>
/// </summary>
  vtkFeatureEdges^ GetFeatureEdges();


  // void SetUseFeaturePoints (int );
/// <summary>
/// <para>By default, this flag is off.  It only has an effect when &quot;UseFeatureEdges&quot; is also on.  When &quot;UseFeaturePoints&quot; is on, then quadrics are computed for boundary / feature points used in the boundary / feature edges.  They influence the quadrics (position of points), but not the mesh.</para>
/// </summary>
  void SetUseFeaturePoints(int arg0);


  // int GetUseFeaturePoints ();
/// <summary>
/// <para>By default, this flag is off.  It only has an effect when &quot;UseFeatureEdges&quot; is also on.  When &quot;UseFeaturePoints&quot; is on, then quadrics are computed for boundary / feature points used in the boundary / feature edges.  They influence the quadrics (position of points), but not the mesh.</para>
/// </summary>
  int GetUseFeaturePoints();


  // void UseFeaturePointsOn ();
/// <summary>
/// <para>By default, this flag is off.  It only has an effect when &quot;UseFeatureEdges&quot; is also on.  When &quot;UseFeaturePoints&quot; is on, then quadrics are computed for boundary / feature points used in the boundary / feature edges.  They influence the quadrics (position of points), but not the mesh.</para>
/// </summary>
  void UseFeaturePointsOn();


  // void UseFeaturePointsOff ();
/// <summary>
/// <para>By default, this flag is off.  It only has an effect when &quot;UseFeatureEdges&quot; is also on.  When &quot;UseFeaturePoints&quot; is on, then quadrics are computed for boundary / feature points used in the boundary / feature edges.  They influence the quadrics (position of points), but not the mesh.</para>
/// </summary>
  void UseFeaturePointsOff();


  // void SetFeaturePointsAngle (double );
/// <summary>
/// <para>Set/Get the angle to use in determining whether a point on a boundary / feature edge is a feature point.</para>
/// </summary>
  void SetFeaturePointsAngle(double arg0);


  // double GetFeaturePointsAngleMinValue ();
/// <summary>
/// <para>Set/Get the angle to use in determining whether a point on a boundary / feature edge is a feature point.</para>
/// </summary>
  double GetFeaturePointsAngleMinValue();


  // double GetFeaturePointsAngleMaxValue ();
/// <summary>
/// <para>Set/Get the angle to use in determining whether a point on a boundary / feature edge is a feature point.</para>
/// </summary>
  double GetFeaturePointsAngleMaxValue();


  // double GetFeaturePointsAngle ();
/// <summary>
/// <para>Set/Get the angle to use in determining whether a point on a boundary / feature edge is a feature point.</para>
/// </summary>
  double GetFeaturePointsAngle();


  // void SetUseInternalTriangles (int );
/// <summary>
/// <para>When this flag is on (and it is on by default), then triangles that are  completely contained in a bin are added to the bin quadrics.  When the the flag is off the filter operates faster, but the surface may not be as well behaved.</para>
/// </summary>
  void SetUseInternalTriangles(int arg0);


  // int GetUseInternalTriangles ();
/// <summary>
/// <para>When this flag is on (and it is on by default), then triangles that are  completely contained in a bin are added to the bin quadrics.  When the the flag is off the filter operates faster, but the surface may not be as well behaved.</para>
/// </summary>
  int GetUseInternalTriangles();


  // void UseInternalTrianglesOn ();
/// <summary>
/// <para>When this flag is on (and it is on by default), then triangles that are  completely contained in a bin are added to the bin quadrics.  When the the flag is off the filter operates faster, but the surface may not be as well behaved.</para>
/// </summary>
  void UseInternalTrianglesOn();


  // void UseInternalTrianglesOff ();
/// <summary>
/// <para>When this flag is on (and it is on by default), then triangles that are  completely contained in a bin are added to the bin quadrics.  When the the flag is off the filter operates faster, but the surface may not be as well behaved.</para>
/// </summary>
  void UseInternalTrianglesOff();


  // void StartAppend (double *bounds);
/// <summary>
/// <para>These methods provide an alternative way of executing the filter. PolyData can be added to the result in pieces (append). In this mode, the user must specify the bounds of the entire model as an argument to the &quot;StartAppend&quot; method.</para>
/// </summary>
  void StartAppend(array<double>^ bounds);


  // void StartAppend (double x0, double x1, double y0, double y1, double z0, double z1);double b b x0 b x1 b y0 b y1 b z0 b z1 this StartAppend b 
/// <summary>
/// <para>These methods provide an alternative way of executing the filter. PolyData can be added to the result in pieces (append). In this mode, the user must specify the bounds of the entire model as an argument to the &quot;StartAppend&quot; method.</para>
/// </summary>
  void StartAppend(double x0, double x1, double y0, double y1, double z0, double z1);


  // void Append (vtkPolyData *piece);
/// <summary>
/// <para>These methods provide an alternative way of executing the filter. PolyData can be added to the result in pieces (append). In this mode, the user must specify the bounds of the entire model as an argument to the &quot;StartAppend&quot; method.</para>
/// </summary>
  void Append(vtkPolyData^ piece);


  // void EndAppend ();
/// <summary>
/// <para>These methods provide an alternative way of executing the filter. PolyData can be added to the result in pieces (append). In this mode, the user must specify the bounds of the entire model as an argument to the &quot;StartAppend&quot; method.</para>
/// </summary>
  void EndAppend();


  // void SetCopyCellData (int );
/// <summary>
/// <para>This flag makes the filter copy cell data from input to output  (the best it can).  It uses input cells that trigger the addition of output cells (no averaging).  This is off by default, and does not work when append is being called explicitely (non-pipeline usage).</para>
/// </summary>
  void SetCopyCellData(int arg0);


  // int GetCopyCellData ();
/// <summary>
/// <para>This flag makes the filter copy cell data from input to output  (the best it can).  It uses input cells that trigger the addition of output cells (no averaging).  This is off by default, and does not work when append is being called explicitely (non-pipeline usage).</para>
/// </summary>
  int GetCopyCellData();


  // void CopyCellDataOn ();
/// <summary>
/// <para>This flag makes the filter copy cell data from input to output  (the best it can).  It uses input cells that trigger the addition of output cells (no averaging).  This is off by default, and does not work when append is being called explicitely (non-pipeline usage).</para>
/// </summary>
  void CopyCellDataOn();


  // void CopyCellDataOff ();
/// <summary>
/// <para>This flag makes the filter copy cell data from input to output  (the best it can).  It uses input cells that trigger the addition of output cells (no averaging).  This is off by default, and does not work when append is being called explicitely (non-pipeline usage).</para>
/// </summary>
  void CopyCellDataOff();


// Did not wrap:  vtkQuadricClustering ();


// Did not wrap:  ~vtkQuadricClustering ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkIdType HashPoint (double point[3]);


// Did not wrap:  void ComputeRepresentativePoint (double quadric[9], vtkIdType binId, double point[3]);


// Did not wrap:  void AddPolygons (vtkCellArray *polys, vtkPoints *points, int geometryFlag, vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void AddStrips (vtkCellArray *strips, vtkPoints *points, int geometryFlag, vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void AddTriangle (vtkIdType *binIds, double *pt0, double *pt1, double *pt2, int geometeryFlag, vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void AddEdges (vtkCellArray *edges, vtkPoints *points, int geometryFlag, vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void AddEdge (vtkIdType *binIds, double *pt0, double *pt1, int geometeryFlag, vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void AddVertices (vtkCellArray *verts, vtkPoints *points, int geometryFlag, vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void AddVertex (vtkIdType binId, double *pt, int geometryFlag, vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void InitializeQuadric (double quadric[9]);


// Did not wrap:  void AddQuadric (vtkIdType binId, double quadric[9]);


// Did not wrap:  void FindFeaturePoints (vtkCellArray *edges, vtkPoints *edgePts, double angle);


// Did not wrap:  void EndAppendUsingPoints (vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void EndAppendVertexGeometry (vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void AppendFeatureQuadrics (vtkPolyData *pd, vtkPolyData *output);


// Did not wrap:  vtkQuadricClustering (const vtkQuadricClustering &);


// Did not wrap:  void vtkQuadricClustering 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkQuadricClustering(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkQuadricClustering(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkQuadricClustering();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkQuadricClustering();


};

} // end vtkGraphics
