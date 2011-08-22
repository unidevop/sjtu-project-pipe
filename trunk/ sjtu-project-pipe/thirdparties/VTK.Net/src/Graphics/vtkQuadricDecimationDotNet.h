#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkQuadricDecimation : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkQuadricDecimation *NewInstance ();
  vtkQuadricDecimation^ NewInstance();


  // vtkQuadricDecimation *SafeDownCast (vtkObject* o);
  static vtkQuadricDecimation^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkQuadricDecimation *New ();


  // void SetTargetReduction (double );
/// <summary>
/// <para>Set/Get the desired reduction (expressed as a fraction of the original number of triangles). The actual reduction may be less depending on triangulation and topological constraints.</para>
/// </summary>
  void SetTargetReduction(double arg0);


  // double GetTargetReductionMinValue ();
/// <summary>
/// <para>Set/Get the desired reduction (expressed as a fraction of the original number of triangles). The actual reduction may be less depending on triangulation and topological constraints.</para>
/// </summary>
  double GetTargetReductionMinValue();


  // double GetTargetReductionMaxValue ();
/// <summary>
/// <para>Set/Get the desired reduction (expressed as a fraction of the original number of triangles). The actual reduction may be less depending on triangulation and topological constraints.</para>
/// </summary>
  double GetTargetReductionMaxValue();


  // double GetTargetReduction ();
/// <summary>
/// <para>Set/Get the desired reduction (expressed as a fraction of the original number of triangles). The actual reduction may be less depending on triangulation and topological constraints.</para>
/// </summary>
  double GetTargetReduction();


  // void SetAttributeErrorMetric (int );
/// <summary>
/// <para>Decide whether to include data attributes in the error metric. If off, then only geometric error is used to control the decimation. By default the attribute errors are off.</para>
/// </summary>
  void SetAttributeErrorMetric(int arg0);


  // int GetAttributeErrorMetric ();
/// <summary>
/// <para>Decide whether to include data attributes in the error metric. If off, then only geometric error is used to control the decimation. By default the attribute errors are off.</para>
/// </summary>
  int GetAttributeErrorMetric();


  // void AttributeErrorMetricOn ();
/// <summary>
/// <para>Decide whether to include data attributes in the error metric. If off, then only geometric error is used to control the decimation. By default the attribute errors are off.</para>
/// </summary>
  void AttributeErrorMetricOn();


  // void AttributeErrorMetricOff ();
/// <summary>
/// <para>Decide whether to include data attributes in the error metric. If off, then only geometric error is used to control the decimation. By default the attribute errors are off.</para>
/// </summary>
  void AttributeErrorMetricOff();


  // void SetScalarsAttribute (int );
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void SetScalarsAttribute(int arg0);


  // int GetScalarsAttribute ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  int GetScalarsAttribute();


  // void ScalarsAttributeOn ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void ScalarsAttributeOn();


  // void ScalarsAttributeOff ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void ScalarsAttributeOff();


  // void SetVectorsAttribute (int );
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void SetVectorsAttribute(int arg0);


  // int GetVectorsAttribute ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  int GetVectorsAttribute();


  // void VectorsAttributeOn ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void VectorsAttributeOn();


  // void VectorsAttributeOff ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void VectorsAttributeOff();


  // void SetNormalsAttribute (int );
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void SetNormalsAttribute(int arg0);


  // int GetNormalsAttribute ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  int GetNormalsAttribute();


  // void NormalsAttributeOn ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void NormalsAttributeOn();


  // void NormalsAttributeOff ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void NormalsAttributeOff();


  // void SetTCoordsAttribute (int );
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void SetTCoordsAttribute(int arg0);


  // int GetTCoordsAttribute ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  int GetTCoordsAttribute();


  // void TCoordsAttributeOn ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void TCoordsAttributeOn();


  // void TCoordsAttributeOff ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void TCoordsAttributeOff();


  // void SetTensorsAttribute (int );
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void SetTensorsAttribute(int arg0);


  // int GetTensorsAttribute ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  int GetTensorsAttribute();


  // void TensorsAttributeOn ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void TensorsAttributeOn();


  // void TensorsAttributeOff ();
/// <summary>
/// <para>If attribute errors are to be included in the metric (i.e., AttributeErrorMetric is on), then the following flags control which attributes are to be included in the error calculation. By default all of these are on.</para>
/// </summary>
  void TensorsAttributeOff();


  // void SetScalarsWeight (double );
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  void SetScalarsWeight(double arg0);


  // void SetVectorsWeight (double );
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  void SetVectorsWeight(double arg0);


  // void SetNormalsWeight (double );
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  void SetNormalsWeight(double arg0);


  // void SetTCoordsWeight (double );
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  void SetTCoordsWeight(double arg0);


  // void SetTensorsWeight (double );
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  void SetTensorsWeight(double arg0);


  // double GetScalarsWeight ();
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  double GetScalarsWeight();


  // double GetVectorsWeight ();
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  double GetVectorsWeight();


  // double GetNormalsWeight ();
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  double GetNormalsWeight();


  // double GetTCoordsWeight ();
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  double GetTCoordsWeight();


  // double GetTensorsWeight ();
/// <summary>
/// <para>Set/Get the scaling weight contribution of the attribute. These values are used to weight the contribution of the attributes towards the error metric.</para>
/// </summary>
  double GetTensorsWeight();


  // double GetActualReduction ();
/// <summary>
/// <para>Get the actual reduction. This value is only valid after the filter has executed.</para>
/// </summary>
  double GetActualReduction();


// Did not wrap:  vtkQuadricDecimation ();


// Did not wrap:  ~vtkQuadricDecimation ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int CollapseEdge (vtkIdType pt0Id, vtkIdType pt1Id);


// Did not wrap:  void InitializeQuadrics (vtkIdType numPts);


// Did not wrap:  void AddBoundaryConstraints (void );


// Did not wrap:  void ComputeQuadric (vtkIdType pointId);


// Did not wrap:  void AddQuadric (vtkIdType oldPtId, vtkIdType newPtId);


// Did not wrap:  double ComputeCost (vtkIdType edgeId, double *x);


// Did not wrap:  double ComputeCost2 (vtkIdType edgeId, double *x);


// Did not wrap:  void FindAffectedEdges (vtkIdType p1Id, vtkIdType p2Id, vtkIdList *edges);


// Did not wrap:  vtkIdType GetEdgeCellId (vtkIdType p1Id, vtkIdType p2Id);


// Did not wrap:  int IsGoodPlacement (vtkIdType pt0Id, vtkIdType pt1Id, const double *x);


// Did not wrap:  int TrianglePlaneCheck (const double t0[3], const double t1[3], const double t2[3], const double *x);


// Did not wrap:  void ComputeNumberOfComponents (void );


// Did not wrap:  void UpdateEdgeData (vtkIdType ptoId, vtkIdType pt1Id);


// Did not wrap:  void SetPointAttributeArray (vtkIdType ptId, const double *x);


// Did not wrap:  void GetPointAttributeArray (vtkIdType ptId, double *x);


// Did not wrap:  void GetAttributeComponents ();


// Did not wrap:  vtkQuadricDecimation (const vtkQuadricDecimation &);


// Did not wrap:  void vtkQuadricDecimation 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkQuadricDecimation(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkQuadricDecimation(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkQuadricDecimation();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkQuadricDecimation();


};

} // end vtkGraphics
