#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRuledSurfaceFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRuledSurfaceFilter *NewInstance ();
  vtkRuledSurfaceFilter^ NewInstance();


  // vtkRuledSurfaceFilter *SafeDownCast (vtkObject* o);
  static vtkRuledSurfaceFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRuledSurfaceFilter *New ();


  // void SetDistanceFactor (double );
/// <summary>
/// <para>Set/Get the factor that controls tearing of the surface.</para>
/// </summary>
  void SetDistanceFactor(double arg0);


  // double GetDistanceFactorMinValue ();
/// <summary>
/// <para>Set/Get the factor that controls tearing of the surface.</para>
/// </summary>
  double GetDistanceFactorMinValue();


  // double GetDistanceFactorMaxValue ();
/// <summary>
/// <para>Set/Get the factor that controls tearing of the surface.</para>
/// </summary>
  double GetDistanceFactorMaxValue();


  // double GetDistanceFactor ();
/// <summary>
/// <para>Set/Get the factor that controls tearing of the surface.</para>
/// </summary>
  double GetDistanceFactor();


  // void SetOnRatio (int );
/// <summary>
/// <para>Control the striping of the ruled surface. If OnRatio is greater  than 1, then every nth strip is turned on, beginning with the Offset strip.</para>
/// </summary>
  void SetOnRatio(int arg0);


  // int GetOnRatioMinValue ();
/// <summary>
/// <para>Control the striping of the ruled surface. If OnRatio is greater  than 1, then every nth strip is turned on, beginning with the Offset strip.</para>
/// </summary>
  int GetOnRatioMinValue();


  // int GetOnRatioMaxValue ();
/// <summary>
/// <para>Control the striping of the ruled surface. If OnRatio is greater  than 1, then every nth strip is turned on, beginning with the Offset strip.</para>
/// </summary>
  int GetOnRatioMaxValue();


  // int GetOnRatio ();
/// <summary>
/// <para>Control the striping of the ruled surface. If OnRatio is greater  than 1, then every nth strip is turned on, beginning with the Offset strip.</para>
/// </summary>
  int GetOnRatio();


  // void SetOffset (int );
/// <summary>
/// <para>Control the striping of the ruled surface. The offset sets the first stripe that is visible. Offset is generally used with OnRatio to create nifty striping effects.</para>
/// </summary>
  void SetOffset(int arg0);


  // int GetOffsetMinValue ();
/// <summary>
/// <para>Control the striping of the ruled surface. The offset sets the first stripe that is visible. Offset is generally used with OnRatio to create nifty striping effects.</para>
/// </summary>
  int GetOffsetMinValue();


  // int GetOffsetMaxValue ();
/// <summary>
/// <para>Control the striping of the ruled surface. The offset sets the first stripe that is visible. Offset is generally used with OnRatio to create nifty striping effects.</para>
/// </summary>
  int GetOffsetMaxValue();


  // int GetOffset ();
/// <summary>
/// <para>Control the striping of the ruled surface. The offset sets the first stripe that is visible. Offset is generally used with OnRatio to create nifty striping effects.</para>
/// </summary>
  int GetOffset();


  // void SetCloseSurface (int );
/// <summary>
/// <para>Indicate whether the surface is to be closed. If this boolean is on, then the first and last polyline are used to generate a stripe that closes the surface. (Note: to close the surface in the other direction, repeat the first point in the polyline as the last point in the polyline.)</para>
/// </summary>
  void SetCloseSurface(int arg0);


  // int GetCloseSurface ();
/// <summary>
/// <para>Indicate whether the surface is to be closed. If this boolean is on, then the first and last polyline are used to generate a stripe that closes the surface. (Note: to close the surface in the other direction, repeat the first point in the polyline as the last point in the polyline.)</para>
/// </summary>
  int GetCloseSurface();


  // void CloseSurfaceOn ();
/// <summary>
/// <para>Indicate whether the surface is to be closed. If this boolean is on, then the first and last polyline are used to generate a stripe that closes the surface. (Note: to close the surface in the other direction, repeat the first point in the polyline as the last point in the polyline.)</para>
/// </summary>
  void CloseSurfaceOn();


  // void CloseSurfaceOff ();
/// <summary>
/// <para>Indicate whether the surface is to be closed. If this boolean is on, then the first and last polyline are used to generate a stripe that closes the surface. (Note: to close the surface in the other direction, repeat the first point in the polyline as the last point in the polyline.)</para>
/// </summary>
  void CloseSurfaceOff();


  // void SetRuledMode (int );
/// <summary>
/// <para>Set the mode by which to create the ruled surface. (Dramatically different results are possible depending on the chosen mode.) The resample mode evenly resamples the polylines (based on length) and  generates triangle strips. The point walk mode uses the existing points and walks around the polyline using existing points.</para>
/// </summary>
  void SetRuledMode(int arg0);


  // int GetRuledModeMinValue ();
/// <summary>
/// <para>Set the mode by which to create the ruled surface. (Dramatically different results are possible depending on the chosen mode.) The resample mode evenly resamples the polylines (based on length) and  generates triangle strips. The point walk mode uses the existing points and walks around the polyline using existing points.</para>
/// </summary>
  int GetRuledModeMinValue();


  // int GetRuledModeMaxValue ();
/// <summary>
/// <para>Set the mode by which to create the ruled surface. (Dramatically different results are possible depending on the chosen mode.) The resample mode evenly resamples the polylines (based on length) and  generates triangle strips. The point walk mode uses the existing points and walks around the polyline using existing points.</para>
/// </summary>
  int GetRuledModeMaxValue();


  // int GetRuledMode ();
/// <summary>
/// <para>Set the mode by which to create the ruled surface. (Dramatically different results are possible depending on the chosen mode.) The resample mode evenly resamples the polylines (based on length) and  generates triangle strips. The point walk mode uses the existing points and walks around the polyline using existing points.</para>
/// </summary>
  int GetRuledMode();


  // void SetRuledModeToResample ();this SetRuledMode VTK_RULED_MODE_RESAMPLE 
/// <summary>
/// <para>Set the mode by which to create the ruled surface. (Dramatically different results are possible depending on the chosen mode.) The resample mode evenly resamples the polylines (based on length) and  generates triangle strips. The point walk mode uses the existing points and walks around the polyline using existing points.</para>
/// </summary>
  void SetRuledModeToResample();


  // void SetRuledModeToPointWalk ();this SetRuledMode VTK_RULED_MODE_POINT_WALK 
/// <summary>
/// <para>Set the mode by which to create the ruled surface. (Dramatically different results are possible depending on the chosen mode.) The resample mode evenly resamples the polylines (based on length) and  generates triangle strips. The point walk mode uses the existing points and walks around the polyline using existing points.</para>
/// </summary>
  void SetRuledModeToPointWalk();


  // const char *GetRuledModeAsString ();
/// <summary>
/// <para>Set the mode by which to create the ruled surface. (Dramatically different results are possible depending on the chosen mode.) The resample mode evenly resamples the polylines (based on length) and  generates triangle strips. The point walk mode uses the existing points and walks around the polyline using existing points.</para>
/// </summary>
  System::String^ GetRuledModeAsString();


  // void SetResolution (int , int );
/// <summary>
/// <para>If the ruled surface generation mode is RESAMPLE, then these parameters are used to determine the resample rate. Resolution[0] defines the resolution in the direction of the polylines; Resolution[1] defines the resolution across the polylines (i.e., direction orthogonal to Resolution[0]).</para>
/// </summary>
  void SetResolution(int arg0, int arg1);


  // void SetResolution (int  a[2]);
/// <summary>
/// <para>If the ruled surface generation mode is RESAMPLE, then these parameters are used to determine the resample rate. Resolution[0] defines the resolution in the direction of the polylines; Resolution[1] defines the resolution across the polylines (i.e., direction orthogonal to Resolution[0]).</para>
/// </summary>
  void SetResolution(array<int>^ a);


  // int  *GetResolution ();
/// <summary>
/// <para>If the ruled surface generation mode is RESAMPLE, then these parameters are used to determine the resample rate. Resolution[0] defines the resolution in the direction of the polylines; Resolution[1] defines the resolution across the polylines (i.e., direction orthogonal to Resolution[0]).</para>
/// </summary>
  array<int>^ GetResolution();


  // void SetPassLines (int );
/// <summary>
/// <para>Indicate whether the generating lines are to be passed to the output. By defualt lines are not passed to the output.</para>
/// </summary>
  void SetPassLines(int arg0);


  // int GetPassLines ();
/// <summary>
/// <para>Indicate whether the generating lines are to be passed to the output. By defualt lines are not passed to the output.</para>
/// </summary>
  int GetPassLines();


  // void PassLinesOn ();
/// <summary>
/// <para>Indicate whether the generating lines are to be passed to the output. By defualt lines are not passed to the output.</para>
/// </summary>
  void PassLinesOn();


  // void PassLinesOff ();
/// <summary>
/// <para>Indicate whether the generating lines are to be passed to the output. By defualt lines are not passed to the output.</para>
/// </summary>
  void PassLinesOff();


// Did not wrap:  vtkRuledSurfaceFilter ();


// Did not wrap:  ~vtkRuledSurfaceFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void Resample (vtkPolyData *output, vtkPolyData *input, vtkPoints *inPts, vtkPoints *newPts, int npts, vtkIdType *pts, int npts2, vtkIdType *pts2);


// Did not wrap:  void PointWalk (vtkPolyData *output, vtkPoints *inPts, int npts, vtkIdType *pts, int npts2, vtkIdType *pts2);


// Did not wrap:  vtkRuledSurfaceFilter (const vtkRuledSurfaceFilter &);


// Did not wrap:  void vtkRuledSurfaceFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRuledSurfaceFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRuledSurfaceFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRuledSurfaceFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRuledSurfaceFilter();


};

} // end vtkGraphics
