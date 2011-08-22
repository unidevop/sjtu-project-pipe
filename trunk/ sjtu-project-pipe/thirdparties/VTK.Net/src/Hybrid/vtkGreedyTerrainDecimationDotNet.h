#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGreedyTerrainDecimation : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGreedyTerrainDecimation *NewInstance ();
  vtkGreedyTerrainDecimation^ NewInstance();


  // vtkGreedyTerrainDecimation *SafeDownCast (vtkObject* o);
  static vtkGreedyTerrainDecimation^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGreedyTerrainDecimation *New ();


  // void SetErrorMeasure (int );
/// <summary>
/// <para>Specify how to terminate the algorithm: either as an absolute number of triangles, a relative number of triangles (normalized by the full resolution mesh), an absolute error (in the height field), or relative error (normalized by the length of the diagonal of the image).</para>
/// </summary>
  void SetErrorMeasure(int arg0);


  // int GetErrorMeasureMinValue ();
/// <summary>
/// <para>Specify how to terminate the algorithm: either as an absolute number of triangles, a relative number of triangles (normalized by the full resolution mesh), an absolute error (in the height field), or relative error (normalized by the length of the diagonal of the image).</para>
/// </summary>
  int GetErrorMeasureMinValue();


  // int GetErrorMeasureMaxValue ();
/// <summary>
/// <para>Specify how to terminate the algorithm: either as an absolute number of triangles, a relative number of triangles (normalized by the full resolution mesh), an absolute error (in the height field), or relative error (normalized by the length of the diagonal of the image).</para>
/// </summary>
  int GetErrorMeasureMaxValue();


  // int GetErrorMeasure ();
/// <summary>
/// <para>Specify how to terminate the algorithm: either as an absolute number of triangles, a relative number of triangles (normalized by the full resolution mesh), an absolute error (in the height field), or relative error (normalized by the length of the diagonal of the image).</para>
/// </summary>
  int GetErrorMeasure();


  // void SetErrorMeasureToNumberOfTriangles ();this SetErrorMeasure VTK_ERROR_NUMBER_OF_TRIANGLES 
/// <summary>
/// <para>Specify how to terminate the algorithm: either as an absolute number of triangles, a relative number of triangles (normalized by the full resolution mesh), an absolute error (in the height field), or relative error (normalized by the length of the diagonal of the image).</para>
/// </summary>
  void SetErrorMeasureToNumberOfTriangles();


  // void SetErrorMeasureToSpecifiedReduction ();this SetErrorMeasure VTK_ERROR_SPECIFIED_REDUCTION 
/// <summary>
/// <para>Specify how to terminate the algorithm: either as an absolute number of triangles, a relative number of triangles (normalized by the full resolution mesh), an absolute error (in the height field), or relative error (normalized by the length of the diagonal of the image).</para>
/// </summary>
  void SetErrorMeasureToSpecifiedReduction();


  // void SetErrorMeasureToAbsoluteError ();this SetErrorMeasure VTK_ERROR_ABSOLUTE 
/// <summary>
/// <para>Specify how to terminate the algorithm: either as an absolute number of triangles, a relative number of triangles (normalized by the full resolution mesh), an absolute error (in the height field), or relative error (normalized by the length of the diagonal of the image).</para>
/// </summary>
  void SetErrorMeasureToAbsoluteError();


  // void SetErrorMeasureToRelativeError ();this SetErrorMeasure VTK_ERROR_RELATIVE 
/// <summary>
/// <para>Specify the number of triangles to produce on output. (It is a good idea to make sure this is less than a tessellated mesh at full resolution.) You need to set this value only when the error measure is set to NumberOfTriangles.</para>
/// </summary>
  void SetErrorMeasureToRelativeError();


  // void SetNumberOfTriangles (vtkIdType );
/// <summary>
/// <para>Specify the number of triangles to produce on output. (It is a good idea to make sure this is less than a tessellated mesh at full resolution.) You need to set this value only when the error measure is set to NumberOfTriangles.</para>
/// </summary>
  void SetNumberOfTriangles(int arg0);


  // vtkIdType GetNumberOfTrianglesMinValue ();
/// <summary>
/// <para>Specify the number of triangles to produce on output. (It is a good idea to make sure this is less than a tessellated mesh at full resolution.) You need to set this value only when the error measure is set to NumberOfTriangles.</para>
/// </summary>
  int GetNumberOfTrianglesMinValue();


  // vtkIdType GetNumberOfTrianglesMaxValue ();
/// <summary>
/// <para>Specify the number of triangles to produce on output. (It is a good idea to make sure this is less than a tessellated mesh at full resolution.) You need to set this value only when the error measure is set to NumberOfTriangles.</para>
/// </summary>
  int GetNumberOfTrianglesMaxValue();


  // vtkIdType GetNumberOfTriangles ();
/// <summary>
/// <para>Specify the number of triangles to produce on output. (It is a good idea to make sure this is less than a tessellated mesh at full resolution.) You need to set this value only when the error measure is set to NumberOfTriangles.</para>
/// </summary>
  int GetNumberOfTriangles();


  // void SetReduction (double );
/// <summary>
/// <para>Specify the reduction of the mesh (represented as a fraction).  Note that a value of 0.10 means a 10% reduction.  You need to set this value only when the error measure is set to SpecifiedReduction.</para>
/// </summary>
  void SetReduction(double arg0);


  // double GetReductionMinValue ();
/// <summary>
/// <para>Specify the reduction of the mesh (represented as a fraction).  Note that a value of 0.10 means a 10% reduction.  You need to set this value only when the error measure is set to SpecifiedReduction.</para>
/// </summary>
  double GetReductionMinValue();


  // double GetReductionMaxValue ();
/// <summary>
/// <para>Specify the reduction of the mesh (represented as a fraction).  Note that a value of 0.10 means a 10% reduction.  You need to set this value only when the error measure is set to SpecifiedReduction.</para>
/// </summary>
  double GetReductionMaxValue();


  // double GetReduction ();
/// <summary>
/// <para>Specify the reduction of the mesh (represented as a fraction).  Note that a value of 0.10 means a 10% reduction.  You need to set this value only when the error measure is set to SpecifiedReduction.</para>
/// </summary>
  double GetReduction();


  // void SetAbsoluteError (double );
/// <summary>
/// <para>Specify the absolute error of the mesh; that is, the error in height between the decimated mesh and the original height field.  You need to set this value only when the error measure is set to AbsoluteError.</para>
/// </summary>
  void SetAbsoluteError(double arg0);


  // double GetAbsoluteErrorMinValue ();
/// <summary>
/// <para>Specify the absolute error of the mesh; that is, the error in height between the decimated mesh and the original height field.  You need to set this value only when the error measure is set to AbsoluteError.</para>
/// </summary>
  double GetAbsoluteErrorMinValue();


  // double GetAbsoluteErrorMaxValue ();
/// <summary>
/// <para>Specify the absolute error of the mesh; that is, the error in height between the decimated mesh and the original height field.  You need to set this value only when the error measure is set to AbsoluteError.</para>
/// </summary>
  double GetAbsoluteErrorMaxValue();


  // double GetAbsoluteError ();
/// <summary>
/// <para>Specify the absolute error of the mesh; that is, the error in height between the decimated mesh and the original height field.  You need to set this value only when the error measure is set to AbsoluteError.</para>
/// </summary>
  double GetAbsoluteError();


  // void SetRelativeError (double );
/// <summary>
/// <para>Specify the relative error of the mesh; that is, the error in height between the decimated mesh and the original height field normalized by the diagonal of the image.  You need to set this value only when the error measure is set to RelativeError.</para>
/// </summary>
  void SetRelativeError(double arg0);


  // double GetRelativeErrorMinValue ();
/// <summary>
/// <para>Specify the relative error of the mesh; that is, the error in height between the decimated mesh and the original height field normalized by the diagonal of the image.  You need to set this value only when the error measure is set to RelativeError.</para>
/// </summary>
  double GetRelativeErrorMinValue();


  // double GetRelativeErrorMaxValue ();
/// <summary>
/// <para>Specify the relative error of the mesh; that is, the error in height between the decimated mesh and the original height field normalized by the diagonal of the image.  You need to set this value only when the error measure is set to RelativeError.</para>
/// </summary>
  double GetRelativeErrorMaxValue();


  // double GetRelativeError ();
/// <summary>
/// <para>Specify the relative error of the mesh; that is, the error in height between the decimated mesh and the original height field normalized by the diagonal of the image.  You need to set this value only when the error measure is set to RelativeError.</para>
/// </summary>
  double GetRelativeError();


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


  // void SetComputeNormals (int );
/// <summary>
/// <para>Compute normals based on the input image. Off by default.</para>
/// </summary>
  void SetComputeNormals(int arg0);


  // int GetComputeNormals ();
/// <summary>
/// <para>Compute normals based on the input image. Off by default.</para>
/// </summary>
  int GetComputeNormals();


  // void ComputeNormalsOn ();
/// <summary>
/// <para>Compute normals based on the input image. Off by default.</para>
/// </summary>
  void ComputeNormalsOn();


  // void ComputeNormalsOff ();
/// <summary>
/// <para>Compute normals based on the input image. Off by default.</para>
/// </summary>
  void ComputeNormalsOff();


// Did not wrap:  vtkGreedyTerrainDecimation ();


// Did not wrap:  ~vtkGreedyTerrainDecimation ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void ComputePointNormal (int i, int j, float n[3]);


// Did not wrap:  void EstimateOutputSize (const vtkIdType numInputPts, vtkIdType &numPts, vtkIdType &numTris);


// Did not wrap:  virtual int SatisfiesErrorMeasure (double error);


// Did not wrap:  void InsertBoundaryVertices ();


// Did not wrap:  vtkIdType AddPointToTriangulation (vtkIdType inputPtId);


// Did not wrap:  vtkIdType InsertNextPoint (vtkIdType inputPtId, double x[3]);


// Did not wrap:  double *GetPoint (vtkIdType id);


// Did not wrap:  void GetPoint (vtkIdType id, double x[3]);


// Did not wrap:  void GetTerrainPoint (int i, int j, double x[3]);


// Did not wrap:  void ComputeImageCoordinates (vtkIdType inputPtId, int ij[2]);


// Did not wrap:  int InCircle (double x[3], double x1[3], double x2[3], double x3[3]);


// Did not wrap:  vtkIdType FindTriangle (double x[3], vtkIdType ptIds[3], vtkIdType tri, double tol, vtkIdType nei[3], vtkIdList *neighbors, int &status);


// Did not wrap:  void CheckEdge (vtkIdType ptId, double x[3], vtkIdType p1, vtkIdType p2, vtkIdType tri);


// Did not wrap:  void UpdateTriangles (vtkIdType meshPtId);


// Did not wrap:  void UpdateTriangle (vtkIdType triId, vtkIdType p1, vtkIdType p2, vtkIdType p3);


// Did not wrap:  void UpdateTriangle (vtkIdType triId, int ij1[2], int ij2[2], int ij3[2], double h[4]);


// Did not wrap:  int CharacterizeTriangle (int ij1[2], int ij2[2], int ij[3], int &min, int &max, int &midL, int &midR, int &mid, int mid2[2], double h[3], double &hMin, double &hMax, double &hL, double &hR);


// Did not wrap:  vtkGreedyTerrainDecimation (const vtkGreedyTerrainDecimation &);


// Did not wrap:  void vtkGreedyTerrainDecimation 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGreedyTerrainDecimation(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGreedyTerrainDecimation(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGreedyTerrainDecimation();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGreedyTerrainDecimation();


};

} // end vtkHybrid
