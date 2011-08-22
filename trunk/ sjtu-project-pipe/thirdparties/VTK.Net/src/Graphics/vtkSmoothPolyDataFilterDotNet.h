#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSmoothPolyDataFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSmoothPolyDataFilter *NewInstance ();
  vtkSmoothPolyDataFilter^ NewInstance();


  // vtkSmoothPolyDataFilter *SafeDownCast (vtkObject* o);
  static vtkSmoothPolyDataFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSmoothPolyDataFilter *New ();


  // void SetConvergence (double );
/// <summary>
/// <para>Specify a convergence criterion for the iteration process. Smaller numbers result in more smoothing iterations.</para>
/// </summary>
  void SetConvergence(double arg0);


  // double GetConvergenceMinValue ();
/// <summary>
/// <para>Specify a convergence criterion for the iteration process. Smaller numbers result in more smoothing iterations.</para>
/// </summary>
  double GetConvergenceMinValue();


  // double GetConvergenceMaxValue ();
/// <summary>
/// <para>Specify a convergence criterion for the iteration process. Smaller numbers result in more smoothing iterations.</para>
/// </summary>
  double GetConvergenceMaxValue();


  // double GetConvergence ();
/// <summary>
/// <para>Specify a convergence criterion for the iteration process. Smaller numbers result in more smoothing iterations.</para>
/// </summary>
  double GetConvergence();


  // void SetNumberOfIterations (int );
/// <summary>
/// <para>Specify the number of iterations for Laplacian smoothing,</para>
/// </summary>
  void SetNumberOfIterations(int arg0);


  // int GetNumberOfIterationsMinValue ();
/// <summary>
/// <para>Specify the number of iterations for Laplacian smoothing,</para>
/// </summary>
  int GetNumberOfIterationsMinValue();


  // int GetNumberOfIterationsMaxValue ();
/// <summary>
/// <para>Specify the number of iterations for Laplacian smoothing,</para>
/// </summary>
  int GetNumberOfIterationsMaxValue();


  // int GetNumberOfIterations ();
/// <summary>
/// <para>Specify the number of iterations for Laplacian smoothing,</para>
/// </summary>
  int GetNumberOfIterations();


  // void SetRelaxationFactor (double );
/// <summary>
/// <para>Specify the relaxation factor for Laplacian smoothing. As in all iterative methods, the stability of the process is sensitive to this parameter. In general, small relaxation factors and large numbers of iterations are more stable than larger relaxation factors and smaller numbers of iterations.</para>
/// </summary>
  void SetRelaxationFactor(double arg0);


  // double GetRelaxationFactor ();
/// <summary>
/// <para>Specify the relaxation factor for Laplacian smoothing. As in all iterative methods, the stability of the process is sensitive to this parameter. In general, small relaxation factors and large numbers of iterations are more stable than larger relaxation factors and smaller numbers of iterations.</para>
/// </summary>
  double GetRelaxationFactor();


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


  // void SetSource (vtkPolyData *source);
/// <summary>
/// <para>Specify the source object which is used to constrain smoothing. The  source defines a surface that the input (as it is smoothed) is  constrained to lie upon.</para>
/// </summary>
  void SetSource(vtkPolyData^ source);


  // vtkPolyData *GetSource ();
/// <summary>
/// <para>Specify the source object which is used to constrain smoothing. The  source defines a surface that the input (as it is smoothed) is  constrained to lie upon.</para>
/// </summary>
  vtkPolyData^ GetSource();


// Did not wrap:  vtkSmoothPolyDataFilter ();


// Did not wrap:  ~vtkSmoothPolyDataFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkSmoothPolyDataFilter (const vtkSmoothPolyDataFilter &);


// Did not wrap:  void vtkSmoothPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSmoothPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSmoothPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSmoothPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSmoothPolyDataFilter();


};

} // end vtkGraphics
