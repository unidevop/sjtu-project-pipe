#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkWindowedSincPolyDataFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWindowedSincPolyDataFilter *NewInstance ();
  vtkWindowedSincPolyDataFilter^ NewInstance();


  // vtkWindowedSincPolyDataFilter *SafeDownCast (vtkObject* o);
  static vtkWindowedSincPolyDataFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkWindowedSincPolyDataFilter *New ();


  // void SetNumberOfIterations (int );
/// <summary>
/// <para>Specify the number of iterations (or degree of the polynomial approximating the windowed sinc function).</para>
/// </summary>
  void SetNumberOfIterations(int arg0);


  // int GetNumberOfIterationsMinValue ();
/// <summary>
/// <para>Specify the number of iterations (or degree of the polynomial approximating the windowed sinc function).</para>
/// </summary>
  int GetNumberOfIterationsMinValue();


  // int GetNumberOfIterationsMaxValue ();
/// <summary>
/// <para>Specify the number of iterations (or degree of the polynomial approximating the windowed sinc function).</para>
/// </summary>
  int GetNumberOfIterationsMaxValue();


  // int GetNumberOfIterations ();
/// <summary>
/// <para>Specify the number of iterations (or degree of the polynomial approximating the windowed sinc function).</para>
/// </summary>
  int GetNumberOfIterations();


  // void SetPassBand (double );
/// <summary>
/// <para>Set the passband value for the windowed sinc filter</para>
/// </summary>
  void SetPassBand(double arg0);


  // double GetPassBandMinValue ();
/// <summary>
/// <para>Set the passband value for the windowed sinc filter</para>
/// </summary>
  double GetPassBandMinValue();


  // double GetPassBandMaxValue ();
/// <summary>
/// <para>Set the passband value for the windowed sinc filter</para>
/// </summary>
  double GetPassBandMaxValue();


  // double GetPassBand ();
/// <summary>
/// <para>Set the passband value for the windowed sinc filter</para>
/// </summary>
  double GetPassBand();


  // void SetNormalizeCoordinates (int );
/// <summary>
/// <para>Turn on/off coordinate normalization.  The positions can be translated and scaled such that they fit within a [-1, 1] prior to the smoothing computation. The default is off.  The numerical stability of the solution can be improved by turning normalization on.  If normalization is on, the coordinates will be rescaled to the original coordinate system after smoothing has completed.</para>
/// </summary>
  void SetNormalizeCoordinates(int arg0);


  // int GetNormalizeCoordinates ();
/// <summary>
/// <para>Turn on/off coordinate normalization.  The positions can be translated and scaled such that they fit within a [-1, 1] prior to the smoothing computation. The default is off.  The numerical stability of the solution can be improved by turning normalization on.  If normalization is on, the coordinates will be rescaled to the original coordinate system after smoothing has completed.</para>
/// </summary>
  int GetNormalizeCoordinates();


  // void NormalizeCoordinatesOn ();
/// <summary>
/// <para>Turn on/off coordinate normalization.  The positions can be translated and scaled such that they fit within a [-1, 1] prior to the smoothing computation. The default is off.  The numerical stability of the solution can be improved by turning normalization on.  If normalization is on, the coordinates will be rescaled to the original coordinate system after smoothing has completed.</para>
/// </summary>
  void NormalizeCoordinatesOn();


  // void NormalizeCoordinatesOff ();
/// <summary>
/// <para>Turn on/off coordinate normalization.  The positions can be translated and scaled such that they fit within a [-1, 1] prior to the smoothing computation. The default is off.  The numerical stability of the solution can be improved by turning normalization on.  If normalization is on, the coordinates will be rescaled to the original coordinate system after smoothing has completed.</para>
/// </summary>
  void NormalizeCoordinatesOff();


  // void SetFeatureEdgeSmoothing (int );
/// <summary>
/// <para>Turn on/off smoothing along sharp interior edges.</para>
/// </summary>
  void SetFeatureEdgeSmoothing(int arg0);


  // int GetFeatureEdgeSmoothing ();
/// <summary>
/// <para>Turn on/off smoothing along sharp interior edges.</para>
/// </summary>
  int GetFeatureEdgeSmoothing();


  // void FeatureEdgeSmoothingOn ();
/// <summary>
/// <para>Turn on/off smoothing along sharp interior edges.</para>
/// </summary>
  void FeatureEdgeSmoothingOn();


  // void FeatureEdgeSmoothingOff ();
/// <summary>
/// <para>Turn on/off smoothing along sharp interior edges.</para>
/// </summary>
  void FeatureEdgeSmoothingOff();


  // void SetFeatureAngle (double );
/// <summary>
/// <para>Specify the feature angle for sharp edge identification.</para>
/// </summary>
  void SetFeatureAngle(double arg0);


  // double GetFeatureAngleMinValue ();
/// <summary>
/// <para>Specify the feature angle for sharp edge identification.</para>
/// </summary>
  double GetFeatureAngleMinValue();


  // double GetFeatureAngleMaxValue ();
/// <summary>
/// <para>Specify the feature angle for sharp edge identification.</para>
/// </summary>
  double GetFeatureAngleMaxValue();


  // double GetFeatureAngle ();
/// <summary>
/// <para>Specify the feature angle for sharp edge identification.</para>
/// </summary>
  double GetFeatureAngle();


  // void SetEdgeAngle (double );
/// <summary>
/// <para>Specify the edge angle to control smoothing along edges (either interior or boundary).</para>
/// </summary>
  void SetEdgeAngle(double arg0);


  // double GetEdgeAngleMinValue ();
/// <summary>
/// <para>Specify the edge angle to control smoothing along edges (either interior or boundary).</para>
/// </summary>
  double GetEdgeAngleMinValue();


  // double GetEdgeAngleMaxValue ();
/// <summary>
/// <para>Specify the edge angle to control smoothing along edges (either interior or boundary).</para>
/// </summary>
  double GetEdgeAngleMaxValue();


  // double GetEdgeAngle ();
/// <summary>
/// <para>Specify the edge angle to control smoothing along edges (either interior or boundary).</para>
/// </summary>
  double GetEdgeAngle();


  // void SetBoundarySmoothing (int );
/// <summary>
/// <para>Turn on/off the smoothing of vertices on the boundary of the mesh.</para>
/// </summary>
  void SetBoundarySmoothing(int arg0);


  // int GetBoundarySmoothing ();
/// <summary>
/// <para>Turn on/off the smoothing of vertices on the boundary of the mesh.</para>
/// </summary>
  int GetBoundarySmoothing();


  // void BoundarySmoothingOn ();
/// <summary>
/// <para>Turn on/off the smoothing of vertices on the boundary of the mesh.</para>
/// </summary>
  void BoundarySmoothingOn();


  // void BoundarySmoothingOff ();
/// <summary>
/// <para>Turn on/off the smoothing of vertices on the boundary of the mesh.</para>
/// </summary>
  void BoundarySmoothingOff();


  // void SetNonManifoldSmoothing (int );
/// <summary>
/// <para>Smooth non-manifold vertices.</para>
/// </summary>
  void SetNonManifoldSmoothing(int arg0);


  // int GetNonManifoldSmoothing ();
/// <summary>
/// <para>Smooth non-manifold vertices.</para>
/// </summary>
  int GetNonManifoldSmoothing();


  // void NonManifoldSmoothingOn ();
/// <summary>
/// <para>Smooth non-manifold vertices.</para>
/// </summary>
  void NonManifoldSmoothingOn();


  // void NonManifoldSmoothingOff ();
/// <summary>
/// <para>Smooth non-manifold vertices.</para>
/// </summary>
  void NonManifoldSmoothingOff();


  // void SetGenerateErrorScalars (int );
/// <summary>
/// <para>Turn on/off the generation of scalar distance values.</para>
/// </summary>
  void SetGenerateErrorScalars(int arg0);


  // int GetGenerateErrorScalars ();
/// <summary>
/// <para>Turn on/off the generation of scalar distance values.</para>
/// </summary>
  int GetGenerateErrorScalars();


  // void GenerateErrorScalarsOn ();
/// <summary>
/// <para>Turn on/off the generation of scalar distance values.</para>
/// </summary>
  void GenerateErrorScalarsOn();


  // void GenerateErrorScalarsOff ();
/// <summary>
/// <para>Turn on/off the generation of scalar distance values.</para>
/// </summary>
  void GenerateErrorScalarsOff();


  // void SetGenerateErrorVectors (int );
/// <summary>
/// <para>Turn on/off the generation of error vectors.</para>
/// </summary>
  void SetGenerateErrorVectors(int arg0);


  // int GetGenerateErrorVectors ();
/// <summary>
/// <para>Turn on/off the generation of error vectors.</para>
/// </summary>
  int GetGenerateErrorVectors();


  // void GenerateErrorVectorsOn ();
/// <summary>
/// <para>Turn on/off the generation of error vectors.</para>
/// </summary>
  void GenerateErrorVectorsOn();


  // void GenerateErrorVectorsOff ();
/// <summary>
/// <para>Turn on/off the generation of error vectors.</para>
/// </summary>
  void GenerateErrorVectorsOff();


// Did not wrap:  vtkWindowedSincPolyDataFilter ();


// Did not wrap:  ~vtkWindowedSincPolyDataFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkWindowedSincPolyDataFilter (const vtkWindowedSincPolyDataFilter &);


// Did not wrap:  void vtkWindowedSincPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWindowedSincPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWindowedSincPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWindowedSincPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWindowedSincPolyDataFilter();


};

} // end vtkGraphics
