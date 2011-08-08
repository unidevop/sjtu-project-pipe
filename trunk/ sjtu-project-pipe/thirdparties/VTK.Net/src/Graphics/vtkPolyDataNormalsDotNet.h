#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPolyDataNormals : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataNormals *NewInstance ();
  vtkPolyDataNormals^ NewInstance();


  // vtkPolyDataNormals *SafeDownCast (vtkObject* o);
  static vtkPolyDataNormals^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPolyDataNormals *New ();


  // void SetFeatureAngle (double );
/// <summary>
/// <para>Specify the angle that defines a sharp edge. If the difference in angle across neighboring polygons is greater than this value, the shared edge is considered &quot;sharp&quot;.</para>
/// </summary>
  void SetFeatureAngle(double arg0);


  // double GetFeatureAngleMinValue ();
/// <summary>
/// <para>Specify the angle that defines a sharp edge. If the difference in angle across neighboring polygons is greater than this value, the shared edge is considered &quot;sharp&quot;.</para>
/// </summary>
  double GetFeatureAngleMinValue();


  // double GetFeatureAngleMaxValue ();
/// <summary>
/// <para>Specify the angle that defines a sharp edge. If the difference in angle across neighboring polygons is greater than this value, the shared edge is considered &quot;sharp&quot;.</para>
/// </summary>
  double GetFeatureAngleMaxValue();


  // double GetFeatureAngle ();
/// <summary>
/// <para>Specify the angle that defines a sharp edge. If the difference in angle across neighboring polygons is greater than this value, the shared edge is considered &quot;sharp&quot;.</para>
/// </summary>
  double GetFeatureAngle();


  // void SetSplitting (int );
/// <summary>
/// <para>Turn on/off the splitting of sharp edges.</para>
/// </summary>
  void SetSplitting(int arg0);


  // int GetSplitting ();
/// <summary>
/// <para>Turn on/off the splitting of sharp edges.</para>
/// </summary>
  int GetSplitting();


  // void SplittingOn ();
/// <summary>
/// <para>Turn on/off the splitting of sharp edges.</para>
/// </summary>
  void SplittingOn();


  // void SplittingOff ();
/// <summary>
/// <para>Turn on/off the splitting of sharp edges.</para>
/// </summary>
  void SplittingOff();


  // void SetConsistency (int );
/// <summary>
/// <para>Turn on/off the enforcement of consistent polygon ordering.</para>
/// </summary>
  void SetConsistency(int arg0);


  // int GetConsistency ();
/// <summary>
/// <para>Turn on/off the enforcement of consistent polygon ordering.</para>
/// </summary>
  int GetConsistency();


  // void ConsistencyOn ();
/// <summary>
/// <para>Turn on/off the enforcement of consistent polygon ordering.</para>
/// </summary>
  void ConsistencyOn();


  // void ConsistencyOff ();
/// <summary>
/// <para>Turn on/off the enforcement of consistent polygon ordering.</para>
/// </summary>
  void ConsistencyOff();


  // void SetAutoOrientNormals (int );
/// <summary>
/// <para>Turn on/off the automatic determination of correct normal orientation. NOTE: This assumes a completely closed surface (i.e. no boundary edges) and no non-manifold edges. If these constraints do not hold, all bets are off. This option adds some computational complexity, and is useful if you don't want to have to inspect the rendered image to determine whether to turn on the  FlipNormals flag. However, this flag can work with the FlipNormals  flag, and if both are set, all the normals in the output will  point &quot;inward&quot;.</para>
/// </summary>
  void SetAutoOrientNormals(int arg0);


  // int GetAutoOrientNormals ();
/// <summary>
/// <para>Turn on/off the automatic determination of correct normal orientation. NOTE: This assumes a completely closed surface (i.e. no boundary edges) and no non-manifold edges. If these constraints do not hold, all bets are off. This option adds some computational complexity, and is useful if you don't want to have to inspect the rendered image to determine whether to turn on the  FlipNormals flag. However, this flag can work with the FlipNormals  flag, and if both are set, all the normals in the output will  point &quot;inward&quot;.</para>
/// </summary>
  int GetAutoOrientNormals();


  // void AutoOrientNormalsOn ();
/// <summary>
/// <para>Turn on/off the automatic determination of correct normal orientation. NOTE: This assumes a completely closed surface (i.e. no boundary edges) and no non-manifold edges. If these constraints do not hold, all bets are off. This option adds some computational complexity, and is useful if you don't want to have to inspect the rendered image to determine whether to turn on the  FlipNormals flag. However, this flag can work with the FlipNormals  flag, and if both are set, all the normals in the output will  point &quot;inward&quot;.</para>
/// </summary>
  void AutoOrientNormalsOn();


  // void AutoOrientNormalsOff ();
/// <summary>
/// <para>Turn on/off the automatic determination of correct normal orientation. NOTE: This assumes a completely closed surface (i.e. no boundary edges) and no non-manifold edges. If these constraints do not hold, all bets are off. This option adds some computational complexity, and is useful if you don't want to have to inspect the rendered image to determine whether to turn on the  FlipNormals flag. However, this flag can work with the FlipNormals  flag, and if both are set, all the normals in the output will  point &quot;inward&quot;.</para>
/// </summary>
  void AutoOrientNormalsOff();


  // void SetComputePointNormals (int );
/// <summary>
/// <para>Turn on/off the computation of point normals.</para>
/// </summary>
  void SetComputePointNormals(int arg0);


  // int GetComputePointNormals ();
/// <summary>
/// <para>Turn on/off the computation of point normals.</para>
/// </summary>
  int GetComputePointNormals();


  // void ComputePointNormalsOn ();
/// <summary>
/// <para>Turn on/off the computation of point normals.</para>
/// </summary>
  void ComputePointNormalsOn();


  // void ComputePointNormalsOff ();
/// <summary>
/// <para>Turn on/off the computation of point normals.</para>
/// </summary>
  void ComputePointNormalsOff();


  // void SetComputeCellNormals (int );
/// <summary>
/// <para>Turn on/off the computation of cell normals.</para>
/// </summary>
  void SetComputeCellNormals(int arg0);


  // int GetComputeCellNormals ();
/// <summary>
/// <para>Turn on/off the computation of cell normals.</para>
/// </summary>
  int GetComputeCellNormals();


  // void ComputeCellNormalsOn ();
/// <summary>
/// <para>Turn on/off the computation of cell normals.</para>
/// </summary>
  void ComputeCellNormalsOn();


  // void ComputeCellNormalsOff ();
/// <summary>
/// <para>Turn on/off the computation of cell normals.</para>
/// </summary>
  void ComputeCellNormalsOff();


  // void SetFlipNormals (int );
/// <summary>
/// <para>Turn on/off the global flipping of normal orientation. Flipping reverves the meaning of front and back for Frontface and Backface culling in vtkProperty.  Flipping modifies both the normal direction and the order of a cell's points.</para>
/// </summary>
  void SetFlipNormals(int arg0);


  // int GetFlipNormals ();
/// <summary>
/// <para>Turn on/off the global flipping of normal orientation. Flipping reverves the meaning of front and back for Frontface and Backface culling in vtkProperty.  Flipping modifies both the normal direction and the order of a cell's points.</para>
/// </summary>
  int GetFlipNormals();


  // void FlipNormalsOn ();
/// <summary>
/// <para>Turn on/off the global flipping of normal orientation. Flipping reverves the meaning of front and back for Frontface and Backface culling in vtkProperty.  Flipping modifies both the normal direction and the order of a cell's points.</para>
/// </summary>
  void FlipNormalsOn();


  // void FlipNormalsOff ();
/// <summary>
/// <para>Turn on/off the global flipping of normal orientation. Flipping reverves the meaning of front and back for Frontface and Backface culling in vtkProperty.  Flipping modifies both the normal direction and the order of a cell's points.</para>
/// </summary>
  void FlipNormalsOff();


  // void SetNonManifoldTraversal (int );
/// <summary>
/// <para>Turn on/off traversal across non-manifold edges. This will prevent problems where the consistency of polygonal ordering is corrupted due to topological loops.</para>
/// </summary>
  void SetNonManifoldTraversal(int arg0);


  // int GetNonManifoldTraversal ();
/// <summary>
/// <para>Turn on/off traversal across non-manifold edges. This will prevent problems where the consistency of polygonal ordering is corrupted due to topological loops.</para>
/// </summary>
  int GetNonManifoldTraversal();


  // void NonManifoldTraversalOn ();
/// <summary>
/// <para>Turn on/off traversal across non-manifold edges. This will prevent problems where the consistency of polygonal ordering is corrupted due to topological loops.</para>
/// </summary>
  void NonManifoldTraversalOn();


  // void NonManifoldTraversalOff ();
/// <summary>
/// <para>Turn on/off traversal across non-manifold edges. This will prevent problems where the consistency of polygonal ordering is corrupted due to topological loops.</para>
/// </summary>
  void NonManifoldTraversalOff();


// Did not wrap:  vtkPolyDataNormals ();


// Did not wrap:  ~vtkPolyDataNormals ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void TraverseAndOrder (void );


// Did not wrap:  void MarkAndSplit (vtkIdType ptId);


// Did not wrap:  vtkPolyDataNormals (const vtkPolyDataNormals &);


// Did not wrap:  void vtkPolyDataNormals 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataNormals(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataNormals(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataNormals();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataNormals();


};

} // end vtkGraphics
