#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProjectedTerrainPath : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
/// <summary>
/// <para>Standard methids for printing and determining type information.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Standard methids for printing and determining type information.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkProjectedTerrainPath *NewInstance ();
/// <summary>
/// <para>Standard methids for printing and determining type information.</para>
/// </summary>
  vtkProjectedTerrainPath^ NewInstance();


  // vtkProjectedTerrainPath *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard methids for printing and determining type information.</para>
/// </summary>
  static vtkProjectedTerrainPath^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkProjectedTerrainPath *New ();


  // void SetSource (vtkImageData *source);
/// <summary>
/// <para>Specify the second input (the terrain) onto which the polyline(s) should be projected.</para>
/// </summary>
  void SetSource(vtkImageData^ source);


  // vtkImageData *GetSource ();
/// <summary>
/// <para>Specify the second input (the terrain) onto which the polyline(s) should be projected.</para>
/// </summary>
  vtkImageData^ GetSource();


  // void SetProjectionMode (int );
/// <summary>
/// <para>Determine how to control the projection process. Simple projection just projects the original polyline points. Non-occluded projection insures that the polyline does not intersect the terrain surface. Hug projection is similar to non-occulded projection except that produces a path that is nearly parallel to the terrain (within the user specified height tolerance).</para>
/// </summary>
  void SetProjectionMode(int arg0);


  // int GetProjectionModeMinValue ();
/// <summary>
/// <para>Determine how to control the projection process. Simple projection just projects the original polyline points. Non-occluded projection insures that the polyline does not intersect the terrain surface. Hug projection is similar to non-occulded projection except that produces a path that is nearly parallel to the terrain (within the user specified height tolerance).</para>
/// </summary>
  int GetProjectionModeMinValue();


  // int GetProjectionModeMaxValue ();
/// <summary>
/// <para>Determine how to control the projection process. Simple projection just projects the original polyline points. Non-occluded projection insures that the polyline does not intersect the terrain surface. Hug projection is similar to non-occulded projection except that produces a path that is nearly parallel to the terrain (within the user specified height tolerance).</para>
/// </summary>
  int GetProjectionModeMaxValue();


  // int GetProjectionMode ();
/// <summary>
/// <para>Determine how to control the projection process. Simple projection just projects the original polyline points. Non-occluded projection insures that the polyline does not intersect the terrain surface. Hug projection is similar to non-occulded projection except that produces a path that is nearly parallel to the terrain (within the user specified height tolerance).</para>
/// </summary>
  int GetProjectionMode();


  // void SetProjectionModeToSimple ();this SetProjectionMode SIMPLE_PROJECTION 
/// <summary>
/// <para>Determine how to control the projection process. Simple projection just projects the original polyline points. Non-occluded projection insures that the polyline does not intersect the terrain surface. Hug projection is similar to non-occulded projection except that produces a path that is nearly parallel to the terrain (within the user specified height tolerance).</para>
/// </summary>
  void SetProjectionModeToSimple();


  // void SetProjectionModeToNonOccluded ();this SetProjectionMode NONOCCLUDED_PROJECTION 
/// <summary>
/// <para>Determine how to control the projection process. Simple projection just projects the original polyline points. Non-occluded projection insures that the polyline does not intersect the terrain surface. Hug projection is similar to non-occulded projection except that produces a path that is nearly parallel to the terrain (within the user specified height tolerance).</para>
/// </summary>
  void SetProjectionModeToNonOccluded();


  // void SetProjectionModeToHug ();this SetProjectionMode HUG_PROJECTION 
/// <summary>
/// <para>This is the height above (or below) the terrain that the projected path should be. Positive values indicate distances above the terrain; negative values indicate distances below the terrain. </para>
/// </summary>
  void SetProjectionModeToHug();


  // void SetHeightOffset (double );
/// <summary>
/// <para>This is the height above (or below) the terrain that the projected path should be. Positive values indicate distances above the terrain; negative values indicate distances below the terrain. </para>
/// </summary>
  void SetHeightOffset(double arg0);


  // double GetHeightOffset ();
/// <summary>
/// <para>This is the height above (or below) the terrain that the projected path should be. Positive values indicate distances above the terrain; negative values indicate distances below the terrain. </para>
/// </summary>
  double GetHeightOffset();


  // void SetHeightTolerance (double );
/// <summary>
/// <para>This is the allowable variation in the altitude of the path with respect to the variation in the terrain. It only comes into play if the hug projection mode is enabled.</para>
/// </summary>
  void SetHeightTolerance(double arg0);


  // double GetHeightToleranceMinValue ();
/// <summary>
/// <para>This is the allowable variation in the altitude of the path with respect to the variation in the terrain. It only comes into play if the hug projection mode is enabled.</para>
/// </summary>
  double GetHeightToleranceMinValue();


  // double GetHeightToleranceMaxValue ();
/// <summary>
/// <para>This is the allowable variation in the altitude of the path with respect to the variation in the terrain. It only comes into play if the hug projection mode is enabled.</para>
/// </summary>
  double GetHeightToleranceMaxValue();


  // double GetHeightTolerance ();
/// <summary>
/// <para>This is the allowable variation in the altitude of the path with respect to the variation in the terrain. It only comes into play if the hug projection mode is enabled.</para>
/// </summary>
  double GetHeightTolerance();


  // void SetMaximumNumberOfLines (vtkIdType );
/// <summary>
/// <para>This instance variable can be used to limit the total number of line segments created during subdivision. Note that the number of input line segments will be the minimum number that cab be output.</para>
/// </summary>
  void SetMaximumNumberOfLines(int arg0);


  // vtkIdType GetMaximumNumberOfLinesMinValue ();
/// <summary>
/// <para>This instance variable can be used to limit the total number of line segments created during subdivision. Note that the number of input line segments will be the minimum number that cab be output.</para>
/// </summary>
  int GetMaximumNumberOfLinesMinValue();


  // vtkIdType GetMaximumNumberOfLinesMaxValue ();
/// <summary>
/// <para>This instance variable can be used to limit the total number of line segments created during subdivision. Note that the number of input line segments will be the minimum number that cab be output.</para>
/// </summary>
  int GetMaximumNumberOfLinesMaxValue();


  // vtkIdType GetMaximumNumberOfLines ();
/// <summary>
/// <para>This instance variable can be used to limit the total number of line segments created during subdivision. Note that the number of input line segments will be the minimum number that cab be output.</para>
/// </summary>
  int GetMaximumNumberOfLines();


// Did not wrap:  vtkProjectedTerrainPath ();


// Did not wrap:  ~vtkProjectedTerrainPath ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void GetImageIndex (double x[3], double loc[2], int ij[2]);


// Did not wrap:  double GetHeight (double loc[2], int ij[2]);


// Did not wrap:  void ComputeError (vtkIdType edgeId);


// Did not wrap:  void RemoveOcclusions ();


// Did not wrap:  void HugTerrain ();


// Did not wrap:  void SplitEdge (vtkIdType eId, double t);


// Did not wrap:  vtkProjectedTerrainPath (const vtkProjectedTerrainPath &);


// Did not wrap:  void vtkProjectedTerrainPath 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProjectedTerrainPath(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProjectedTerrainPath(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProjectedTerrainPath();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProjectedTerrainPath();


};

} // end vtkHybrid
