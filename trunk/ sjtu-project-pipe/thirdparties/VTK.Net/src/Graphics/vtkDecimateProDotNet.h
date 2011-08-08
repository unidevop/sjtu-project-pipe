#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDecimatePro : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDecimatePro *NewInstance ();
  vtkDecimatePro^ NewInstance();


  // vtkDecimatePro *SafeDownCast (vtkObject* o);
  static vtkDecimatePro^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkDecimatePro *New ();


  // void SetTargetReduction (double );
/// <summary>
/// <para>Specify the desired reduction in the total number of polygons (e.g., if TargetReduction is set to 0.9, this filter will try to reduce the data set to 10% of its original size). Because of various constraints, this level of reduction may not be realized. If you want to guarantee a particular reduction, you must turn off PreserveTopology, turn on SplitEdges and BoundaryVertexDeletion, and set the MaximumError to VTK_DOUBLE_MAX (these ivars are initialized this way when the object is instantiated).</para>
/// </summary>
  void SetTargetReduction(double arg0);


  // double GetTargetReductionMinValue ();
/// <summary>
/// <para>Specify the desired reduction in the total number of polygons (e.g., if TargetReduction is set to 0.9, this filter will try to reduce the data set to 10% of its original size). Because of various constraints, this level of reduction may not be realized. If you want to guarantee a particular reduction, you must turn off PreserveTopology, turn on SplitEdges and BoundaryVertexDeletion, and set the MaximumError to VTK_DOUBLE_MAX (these ivars are initialized this way when the object is instantiated).</para>
/// </summary>
  double GetTargetReductionMinValue();


  // double GetTargetReductionMaxValue ();
/// <summary>
/// <para>Specify the desired reduction in the total number of polygons (e.g., if TargetReduction is set to 0.9, this filter will try to reduce the data set to 10% of its original size). Because of various constraints, this level of reduction may not be realized. If you want to guarantee a particular reduction, you must turn off PreserveTopology, turn on SplitEdges and BoundaryVertexDeletion, and set the MaximumError to VTK_DOUBLE_MAX (these ivars are initialized this way when the object is instantiated).</para>
/// </summary>
  double GetTargetReductionMaxValue();


  // double GetTargetReduction ();
/// <summary>
/// <para>Specify the desired reduction in the total number of polygons (e.g., if TargetReduction is set to 0.9, this filter will try to reduce the data set to 10% of its original size). Because of various constraints, this level of reduction may not be realized. If you want to guarantee a particular reduction, you must turn off PreserveTopology, turn on SplitEdges and BoundaryVertexDeletion, and set the MaximumError to VTK_DOUBLE_MAX (these ivars are initialized this way when the object is instantiated).</para>
/// </summary>
  double GetTargetReduction();


  // void SetPreserveTopology (int );
/// <summary>
/// <para>Turn on/off whether to preserve the topology of the original mesh. If on, mesh splitting and hole elimination will not occur. This may limit the maximum reduction that may be achieved.</para>
/// </summary>
  void SetPreserveTopology(int arg0);


  // int GetPreserveTopology ();
/// <summary>
/// <para>Turn on/off whether to preserve the topology of the original mesh. If on, mesh splitting and hole elimination will not occur. This may limit the maximum reduction that may be achieved.</para>
/// </summary>
  int GetPreserveTopology();


  // void PreserveTopologyOn ();
/// <summary>
/// <para>Turn on/off whether to preserve the topology of the original mesh. If on, mesh splitting and hole elimination will not occur. This may limit the maximum reduction that may be achieved.</para>
/// </summary>
  void PreserveTopologyOn();


  // void PreserveTopologyOff ();
/// <summary>
/// <para>Turn on/off whether to preserve the topology of the original mesh. If on, mesh splitting and hole elimination will not occur. This may limit the maximum reduction that may be achieved.</para>
/// </summary>
  void PreserveTopologyOff();


  // void SetFeatureAngle (double );
/// <summary>
/// <para>Specify the mesh feature angle. This angle is used to define what an edge is (i.e., if the surface normal between two adjacent triangles is &gt;= FeatureAngle, an edge exists).</para>
/// </summary>
  void SetFeatureAngle(double arg0);


  // double GetFeatureAngleMinValue ();
/// <summary>
/// <para>Specify the mesh feature angle. This angle is used to define what an edge is (i.e., if the surface normal between two adjacent triangles is &gt;= FeatureAngle, an edge exists).</para>
/// </summary>
  double GetFeatureAngleMinValue();


  // double GetFeatureAngleMaxValue ();
/// <summary>
/// <para>Specify the mesh feature angle. This angle is used to define what an edge is (i.e., if the surface normal between two adjacent triangles is &gt;= FeatureAngle, an edge exists).</para>
/// </summary>
  double GetFeatureAngleMaxValue();


  // double GetFeatureAngle ();
/// <summary>
/// <para>Specify the mesh feature angle. This angle is used to define what an edge is (i.e., if the surface normal between two adjacent triangles is &gt;= FeatureAngle, an edge exists).</para>
/// </summary>
  double GetFeatureAngle();


  // void SetSplitting (int );
/// <summary>
/// <para>Turn on/off the splitting of the mesh at corners, along edges, at non-manifold points, or anywhere else a split is required. Turning  splitting off will better preserve the original topology of the mesh, but you may not obtain the requested reduction.</para>
/// </summary>
  void SetSplitting(int arg0);


  // int GetSplitting ();
/// <summary>
/// <para>Turn on/off the splitting of the mesh at corners, along edges, at non-manifold points, or anywhere else a split is required. Turning  splitting off will better preserve the original topology of the mesh, but you may not obtain the requested reduction.</para>
/// </summary>
  int GetSplitting();


  // void SplittingOn ();
/// <summary>
/// <para>Turn on/off the splitting of the mesh at corners, along edges, at non-manifold points, or anywhere else a split is required. Turning  splitting off will better preserve the original topology of the mesh, but you may not obtain the requested reduction.</para>
/// </summary>
  void SplittingOn();


  // void SplittingOff ();
/// <summary>
/// <para>Turn on/off the splitting of the mesh at corners, along edges, at non-manifold points, or anywhere else a split is required. Turning  splitting off will better preserve the original topology of the mesh, but you may not obtain the requested reduction.</para>
/// </summary>
  void SplittingOff();


  // void SetSplitAngle (double );
/// <summary>
/// <para>Specify the mesh split angle. This angle is used to control the splitting of the mesh. A split line exists when the surface normals between two edge connected triangles are &gt;= SplitAngle.</para>
/// </summary>
  void SetSplitAngle(double arg0);


  // double GetSplitAngleMinValue ();
/// <summary>
/// <para>Specify the mesh split angle. This angle is used to control the splitting of the mesh. A split line exists when the surface normals between two edge connected triangles are &gt;= SplitAngle.</para>
/// </summary>
  double GetSplitAngleMinValue();


  // double GetSplitAngleMaxValue ();
/// <summary>
/// <para>Specify the mesh split angle. This angle is used to control the splitting of the mesh. A split line exists when the surface normals between two edge connected triangles are &gt;= SplitAngle.</para>
/// </summary>
  double GetSplitAngleMaxValue();


  // double GetSplitAngle ();
/// <summary>
/// <para>Specify the mesh split angle. This angle is used to control the splitting of the mesh. A split line exists when the surface normals between two edge connected triangles are &gt;= SplitAngle.</para>
/// </summary>
  double GetSplitAngle();


  // void SetPreSplitMesh (int );
/// <summary>
/// <para>In some cases you may wish to split the mesh prior to algorithm execution. This separates the mesh into semi-planar patches, which are disconnected from each other. This can give superior results in some cases. If the ivar PreSplitMesh ivar is enabled, the mesh is split with the specified SplitAngle. Otherwise mesh splitting is deferred as long as possible.</para>
/// </summary>
  void SetPreSplitMesh(int arg0);


  // int GetPreSplitMesh ();
/// <summary>
/// <para>In some cases you may wish to split the mesh prior to algorithm execution. This separates the mesh into semi-planar patches, which are disconnected from each other. This can give superior results in some cases. If the ivar PreSplitMesh ivar is enabled, the mesh is split with the specified SplitAngle. Otherwise mesh splitting is deferred as long as possible.</para>
/// </summary>
  int GetPreSplitMesh();


  // void PreSplitMeshOn ();
/// <summary>
/// <para>In some cases you may wish to split the mesh prior to algorithm execution. This separates the mesh into semi-planar patches, which are disconnected from each other. This can give superior results in some cases. If the ivar PreSplitMesh ivar is enabled, the mesh is split with the specified SplitAngle. Otherwise mesh splitting is deferred as long as possible.</para>
/// </summary>
  void PreSplitMeshOn();


  // void PreSplitMeshOff ();
/// <summary>
/// <para>In some cases you may wish to split the mesh prior to algorithm execution. This separates the mesh into semi-planar patches, which are disconnected from each other. This can give superior results in some cases. If the ivar PreSplitMesh ivar is enabled, the mesh is split with the specified SplitAngle. Otherwise mesh splitting is deferred as long as possible.</para>
/// </summary>
  void PreSplitMeshOff();


  // void SetMaximumError (double );
/// <summary>
/// <para>Set the largest decimation error that is allowed during the decimation process. This may limit the maximum reduction that may be achieved. The maximum error is specified as a fraction of the maximum length of the input data bounding box.</para>
/// </summary>
  void SetMaximumError(double arg0);


  // double GetMaximumErrorMinValue ();
/// <summary>
/// <para>Set the largest decimation error that is allowed during the decimation process. This may limit the maximum reduction that may be achieved. The maximum error is specified as a fraction of the maximum length of the input data bounding box.</para>
/// </summary>
  double GetMaximumErrorMinValue();


  // double GetMaximumErrorMaxValue ();
/// <summary>
/// <para>Set the largest decimation error that is allowed during the decimation process. This may limit the maximum reduction that may be achieved. The maximum error is specified as a fraction of the maximum length of the input data bounding box.</para>
/// </summary>
  double GetMaximumErrorMaxValue();


  // double GetMaximumError ();
/// <summary>
/// <para>Set the largest decimation error that is allowed during the decimation process. This may limit the maximum reduction that may be achieved. The maximum error is specified as a fraction of the maximum length of the input data bounding box.</para>
/// </summary>
  double GetMaximumError();


  // void SetAccumulateError (int );
/// <summary>
/// <para>The computed error can either be computed directly from the mesh or the error may be accumulated as the mesh is modified. If the error is accumulated, then it represents a global error bounds, and the ivar MaximumError becomes a global bounds on mesh error. Accumulating the error requires extra memory proportional to the number of vertices in the mesh. If AccumulateError is off, then the error is not accumulated.</para>
/// </summary>
  void SetAccumulateError(int arg0);


  // int GetAccumulateError ();
/// <summary>
/// <para>The computed error can either be computed directly from the mesh or the error may be accumulated as the mesh is modified. If the error is accumulated, then it represents a global error bounds, and the ivar MaximumError becomes a global bounds on mesh error. Accumulating the error requires extra memory proportional to the number of vertices in the mesh. If AccumulateError is off, then the error is not accumulated.</para>
/// </summary>
  int GetAccumulateError();


  // void AccumulateErrorOn ();
/// <summary>
/// <para>The computed error can either be computed directly from the mesh or the error may be accumulated as the mesh is modified. If the error is accumulated, then it represents a global error bounds, and the ivar MaximumError becomes a global bounds on mesh error. Accumulating the error requires extra memory proportional to the number of vertices in the mesh. If AccumulateError is off, then the error is not accumulated.</para>
/// </summary>
  void AccumulateErrorOn();


  // void AccumulateErrorOff ();
/// <summary>
/// <para>The computed error can either be computed directly from the mesh or the error may be accumulated as the mesh is modified. If the error is accumulated, then it represents a global error bounds, and the ivar MaximumError becomes a global bounds on mesh error. Accumulating the error requires extra memory proportional to the number of vertices in the mesh. If AccumulateError is off, then the error is not accumulated.</para>
/// </summary>
  void AccumulateErrorOff();


  // void SetErrorIsAbsolute (int );
/// <summary>
/// <para>The MaximumError is normally defined as a fraction of the dataset bounding diagonal. By setting ErrorIsAbsolute to 1, the error is instead defined as that specified by AbsoluteError. By default ErrorIsAbsolute=0.</para>
/// </summary>
  void SetErrorIsAbsolute(int arg0);


  // int GetErrorIsAbsolute ();
/// <summary>
/// <para>The MaximumError is normally defined as a fraction of the dataset bounding diagonal. By setting ErrorIsAbsolute to 1, the error is instead defined as that specified by AbsoluteError. By default ErrorIsAbsolute=0.</para>
/// </summary>
  int GetErrorIsAbsolute();


  // void SetAbsoluteError (double );
/// <summary>
/// <para>Same as MaximumError, but to be used when ErrorIsAbsolute is 1</para>
/// </summary>
  void SetAbsoluteError(double arg0);


  // double GetAbsoluteErrorMinValue ();
/// <summary>
/// <para>Same as MaximumError, but to be used when ErrorIsAbsolute is 1</para>
/// </summary>
  double GetAbsoluteErrorMinValue();


  // double GetAbsoluteErrorMaxValue ();
/// <summary>
/// <para>Same as MaximumError, but to be used when ErrorIsAbsolute is 1</para>
/// </summary>
  double GetAbsoluteErrorMaxValue();


  // double GetAbsoluteError ();
/// <summary>
/// <para>Same as MaximumError, but to be used when ErrorIsAbsolute is 1</para>
/// </summary>
  double GetAbsoluteError();


  // void SetBoundaryVertexDeletion (int );
/// <summary>
/// <para>Turn on/off the deletion of vertices on the boundary of a mesh. This may limit the maximum reduction that may be achieved.</para>
/// </summary>
  void SetBoundaryVertexDeletion(int arg0);


  // int GetBoundaryVertexDeletion ();
/// <summary>
/// <para>Turn on/off the deletion of vertices on the boundary of a mesh. This may limit the maximum reduction that may be achieved.</para>
/// </summary>
  int GetBoundaryVertexDeletion();


  // void BoundaryVertexDeletionOn ();
/// <summary>
/// <para>Turn on/off the deletion of vertices on the boundary of a mesh. This may limit the maximum reduction that may be achieved.</para>
/// </summary>
  void BoundaryVertexDeletionOn();


  // void BoundaryVertexDeletionOff ();
/// <summary>
/// <para>Turn on/off the deletion of vertices on the boundary of a mesh. This may limit the maximum reduction that may be achieved.</para>
/// </summary>
  void BoundaryVertexDeletionOff();


  // void SetDegree (int );
/// <summary>
/// <para>If the number of triangles connected to a vertex exceeds &quot;Degree&quot;, then the vertex will be split. (NOTE: the complexity of the triangulation algorithm is proportional to Degree^2. Setting degree small can improve the performance of the algorithm.)</para>
/// </summary>
  void SetDegree(int arg0);


  // int GetDegreeMinValue ();
/// <summary>
/// <para>If the number of triangles connected to a vertex exceeds &quot;Degree&quot;, then the vertex will be split. (NOTE: the complexity of the triangulation algorithm is proportional to Degree^2. Setting degree small can improve the performance of the algorithm.)</para>
/// </summary>
  int GetDegreeMinValue();


  // int GetDegreeMaxValue ();
/// <summary>
/// <para>If the number of triangles connected to a vertex exceeds &quot;Degree&quot;, then the vertex will be split. (NOTE: the complexity of the triangulation algorithm is proportional to Degree^2. Setting degree small can improve the performance of the algorithm.)</para>
/// </summary>
  int GetDegreeMaxValue();


  // int GetDegree ();
/// <summary>
/// <para>If the number of triangles connected to a vertex exceeds &quot;Degree&quot;, then the vertex will be split. (NOTE: the complexity of the triangulation algorithm is proportional to Degree^2. Setting degree small can improve the performance of the algorithm.)</para>
/// </summary>
  int GetDegree();


  // void SetInflectionPointRatio (double );
/// <summary>
/// <para>Specify the inflection point ratio. An inflection point occurs when the ratio of reduction error between two iterations is greater than or equal to the InflectionPointRatio.</para>
/// </summary>
  void SetInflectionPointRatio(double arg0);


  // double GetInflectionPointRatioMinValue ();
/// <summary>
/// <para>Specify the inflection point ratio. An inflection point occurs when the ratio of reduction error between two iterations is greater than or equal to the InflectionPointRatio.</para>
/// </summary>
  double GetInflectionPointRatioMinValue();


  // double GetInflectionPointRatioMaxValue ();
/// <summary>
/// <para>Specify the inflection point ratio. An inflection point occurs when the ratio of reduction error between two iterations is greater than or equal to the InflectionPointRatio.</para>
/// </summary>
  double GetInflectionPointRatioMaxValue();


  // double GetInflectionPointRatio ();
/// <summary>
/// <para>Specify the inflection point ratio. An inflection point occurs when the ratio of reduction error between two iterations is greater than or equal to the InflectionPointRatio.</para>
/// </summary>
  double GetInflectionPointRatio();


  // vtkIdType GetNumberOfInflectionPoints ();
/// <summary>
/// <para>Get the number of inflection points. Only returns a valid value after the filter has executed.  The values in the list are mesh reduction values at each inflection point. Note: the first inflection point always occurs right before non-planar triangles are decimated (i.e., as the error becomes non-zero).</para>
/// </summary>
  int GetNumberOfInflectionPoints();


  // void GetInflectionPoints (double *inflectionPoints);
/// <summary>
/// <para>Get a list of inflection points. These are double values 0 &lt; r &lt;= 1.0  corresponding to reduction level, and there are a total of NumberOfInflectionPoints() values. You must provide an array (of the correct size) into which the inflection points are written.</para>
/// </summary>
  void GetInflectionPoints(array<double>^ inflectionPoints);


// Did not wrap:  double *GetInflectionPoints ();


// Did not wrap:  vtkDecimatePro ();


// Did not wrap:  ~vtkDecimatePro ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void SplitMesh ();


// Did not wrap:  int EvaluateVertex (vtkIdType ptId, unsigned short numTris, vtkIdType *tris, vtkIdType fedges[2]);


// Did not wrap:  vtkIdType FindSplit (int type, vtkIdType fedges[2], vtkIdType &pt1, vtkIdType &pt2, vtkIdList *CollapseTris);


// Did not wrap:  int IsValidSplit (int index);


// Did not wrap:  void SplitLoop (vtkIdType fedges[2], vtkIdType &n1, vtkIdType *l1, vtkIdType &n2, vtkIdType *l2);


// Did not wrap:  void SplitVertex (vtkIdType ptId, int type, unsigned short numTris, vtkIdType *tris, int insert);


// Did not wrap:  int CollapseEdge (int type, vtkIdType ptId, vtkIdType collapseId, vtkIdType pt1, vtkIdType pt2, vtkIdList *CollapseTris);


// Did not wrap:  void DistributeError (double error);


// Did not wrap:  void InitializeQueue (vtkIdType numPts);


// Did not wrap:  void DeleteQueue ();


// Did not wrap:  void Insert (vtkIdType id, double error);


// Did not wrap:  int Pop (double &error);


// Did not wrap:  double DeleteId (vtkIdType id);


// Did not wrap:  void Reset ();


// Did not wrap:  vtkDecimatePro (const vtkDecimatePro &);


// Did not wrap:  void vtkDecimatePro 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDecimatePro(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDecimatePro(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDecimatePro();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDecimatePro();


};

} // end vtkGraphics
