#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkLandmarkTransform;

public ref class vtkIterativeClosestPointTransform : public vtkLinearTransform
{

public:
// Did not wrap:  static vtkIterativeClosestPointTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkIterativeClosestPointTransform *NewInstance ();
  vtkIterativeClosestPointTransform^ NewInstance();


  // vtkIterativeClosestPointTransform *SafeDownCast (vtkObject* o);
  static vtkIterativeClosestPointTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetSource (vtkDataSet *source);
/// <summary>
/// <para>Specify the source and target data sets.</para>
/// </summary>
  void SetSource(vtkDataSet^ source);


  // void SetTarget (vtkDataSet *target);
/// <summary>
/// <para>Specify the source and target data sets.</para>
/// </summary>
  void SetTarget(vtkDataSet^ target);


  // vtkDataSet *GetSource ();
/// <summary>
/// <para>Specify the source and target data sets.</para>
/// </summary>
  vtkDataSet^ GetSource();


  // vtkDataSet *GetTarget ();
/// <summary>
/// <para>Specify the source and target data sets.</para>
/// </summary>
  vtkDataSet^ GetTarget();


  // void SetLocator (vtkCellLocator *locator);
/// <summary>
/// <para>Set/Get a spatial locator for speeding up the search process.  An instance of vtkCellLocator is used by default.</para>
/// </summary>
  void SetLocator(vtkCellLocator^ locator);


  // vtkCellLocator *GetLocator ();
/// <summary>
/// <para>Set/Get a spatial locator for speeding up the search process.  An instance of vtkCellLocator is used by default.</para>
/// </summary>
  vtkCellLocator^ GetLocator();


  // void SetMaximumNumberOfIterations (int );
/// <summary>
/// <para>Set/Get the  maximum number of iterations</para>
/// </summary>
  void SetMaximumNumberOfIterations(int arg0);


  // int GetMaximumNumberOfIterations ();
/// <summary>
/// <para>Set/Get the  maximum number of iterations</para>
/// </summary>
  int GetMaximumNumberOfIterations();


  // int GetNumberOfIterations ();
/// <summary>
/// <para>Get the number of iterations since the last update</para>
/// </summary>
  int GetNumberOfIterations();


  // void SetCheckMeanDistance (int );
/// <summary>
/// <para>Force the algorithm to check the mean distance between two iteration.</para>
/// </summary>
  void SetCheckMeanDistance(int arg0);


  // int GetCheckMeanDistance ();
/// <summary>
/// <para>Force the algorithm to check the mean distance between two iteration.</para>
/// </summary>
  int GetCheckMeanDistance();


  // void CheckMeanDistanceOn ();
/// <summary>
/// <para>Force the algorithm to check the mean distance between two iteration.</para>
/// </summary>
  void CheckMeanDistanceOn();


  // void CheckMeanDistanceOff ();
/// <summary>
/// <para>Force the algorithm to check the mean distance between two iteration.</para>
/// </summary>
  void CheckMeanDistanceOff();


  // void SetMeanDistanceMode (int );
/// <summary>
/// <para>Specify the mean distance mode. This mode expresses how the mean  distance is computed. The RMS mode is the square root of the average of the sum of squares of the closest point distances. The Absolute Value mode is the mean of the sum of absolute values of the closest point distances.</para>
/// </summary>
  void SetMeanDistanceMode(int arg0);


  // int GetMeanDistanceModeMinValue ();
/// <summary>
/// <para>Specify the mean distance mode. This mode expresses how the mean  distance is computed. The RMS mode is the square root of the average of the sum of squares of the closest point distances. The Absolute Value mode is the mean of the sum of absolute values of the closest point distances.</para>
/// </summary>
  int GetMeanDistanceModeMinValue();


  // int GetMeanDistanceModeMaxValue ();
/// <summary>
/// <para>Specify the mean distance mode. This mode expresses how the mean  distance is computed. The RMS mode is the square root of the average of the sum of squares of the closest point distances. The Absolute Value mode is the mean of the sum of absolute values of the closest point distances.</para>
/// </summary>
  int GetMeanDistanceModeMaxValue();


  // int GetMeanDistanceMode ();
/// <summary>
/// <para>Specify the mean distance mode. This mode expresses how the mean  distance is computed. The RMS mode is the square root of the average of the sum of squares of the closest point distances. The Absolute Value mode is the mean of the sum of absolute values of the closest point distances.</para>
/// </summary>
  int GetMeanDistanceMode();


  // void SetMeanDistanceModeToRMS ();this SetMeanDistanceMode VTK_ICP_MODE_RMS 
/// <summary>
/// <para>Specify the mean distance mode. This mode expresses how the mean  distance is computed. The RMS mode is the square root of the average of the sum of squares of the closest point distances. The Absolute Value mode is the mean of the sum of absolute values of the closest point distances.</para>
/// </summary>
  void SetMeanDistanceModeToRMS();


  // void SetMeanDistanceModeToAbsoluteValue ();this SetMeanDistanceMode VTK_ICP_MODE_AV 
/// <summary>
/// <para>Specify the mean distance mode. This mode expresses how the mean  distance is computed. The RMS mode is the square root of the average of the sum of squares of the closest point distances. The Absolute Value mode is the mean of the sum of absolute values of the closest point distances.</para>
/// </summary>
  void SetMeanDistanceModeToAbsoluteValue();


  // const char *GetMeanDistanceModeAsString ();
/// <summary>
/// <para>Specify the mean distance mode. This mode expresses how the mean  distance is computed. The RMS mode is the square root of the average of the sum of squares of the closest point distances. The Absolute Value mode is the mean of the sum of absolute values of the closest point distances.</para>
/// </summary>
  System::String^ GetMeanDistanceModeAsString();


  // void SetMaximumMeanDistance (double );
/// <summary>
/// <para>Set/Get the maximum mean distance between two iteration. If the mean distance is lower than this, the convergence stops.</para>
/// </summary>
  void SetMaximumMeanDistance(double arg0);


  // double GetMaximumMeanDistance ();
/// <summary>
/// <para>Set/Get the maximum mean distance between two iteration. If the mean distance is lower than this, the convergence stops.</para>
/// </summary>
  double GetMaximumMeanDistance();


  // double GetMeanDistance ();
/// <summary>
/// <para>Get the mean distance between the last two iterations.</para>
/// </summary>
  double GetMeanDistance();


  // void SetMaximumNumberOfLandmarks (int );
/// <summary>
/// <para>Set/Get the maximum number of landmarks sampled in your dataset. If your dataset is dense, then you will typically not need all the  points to compute the ICP transform. </para>
/// </summary>
  void SetMaximumNumberOfLandmarks(int arg0);


  // int GetMaximumNumberOfLandmarks ();
/// <summary>
/// <para>Set/Get the maximum number of landmarks sampled in your dataset. If your dataset is dense, then you will typically not need all the  points to compute the ICP transform. </para>
/// </summary>
  int GetMaximumNumberOfLandmarks();


  // void SetStartByMatchingCentroids (int );
/// <summary>
/// <para>Starts the process by translating source centroid to target centroid.</para>
/// </summary>
  void SetStartByMatchingCentroids(int arg0);


  // int GetStartByMatchingCentroids ();
/// <summary>
/// <para>Starts the process by translating source centroid to target centroid.</para>
/// </summary>
  int GetStartByMatchingCentroids();


  // void StartByMatchingCentroidsOn ();
/// <summary>
/// <para>Starts the process by translating source centroid to target centroid.</para>
/// </summary>
  void StartByMatchingCentroidsOn();


  // void StartByMatchingCentroidsOff ();
/// <summary>
/// <para>Starts the process by translating source centroid to target centroid.</para>
/// </summary>
  void StartByMatchingCentroidsOff();


  // vtkLandmarkTransform *GetLandmarkTransform ();
/// <summary>
/// <para>Get the internal landmark transform. Use it to constrain the number of degrees of freedom of the solution (i.e. rigid body, similarity, etc.).</para>
/// </summary>
  vtkLandmarkTransform^ GetLandmarkTransform();


  // void Inverse ();
/// <summary>
/// <para>Invert the transformation.  This is done by switching the source and target.</para>
/// </summary>
  void Inverse();


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make another transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


// Did not wrap:  void ReleaseSource (void );


// Did not wrap:  void ReleaseTarget (void );


// Did not wrap:  void ReleaseLocator (void );


// Did not wrap:  void CreateDefaultLocator (void );


// Did not wrap:  unsigned long GetMTime ();


// Did not wrap:  vtkIterativeClosestPointTransform ();


// Did not wrap:  ~vtkIterativeClosestPointTransform ();


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *transform);


// Did not wrap:  vtkIterativeClosestPointTransform (const vtkIterativeClosestPointTransform &);


// Did not wrap:  void vtkIterativeClosestPointTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkIterativeClosestPointTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkIterativeClosestPointTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkIterativeClosestPointTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkIterativeClosestPointTransform();


};

} // end vtkHybrid
