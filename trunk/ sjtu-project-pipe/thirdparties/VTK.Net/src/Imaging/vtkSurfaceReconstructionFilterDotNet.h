#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSurfaceReconstructionFilter : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSurfaceReconstructionFilter *NewInstance ();
  vtkSurfaceReconstructionFilter^ NewInstance();


  // vtkSurfaceReconstructionFilter *SafeDownCast (vtkObject* o);
  static vtkSurfaceReconstructionFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSurfaceReconstructionFilter *New ();


  // int GetNeighborhoodSize ();
/// <summary>
/// <para>Specify the number of neighbors each point has, used for estimating the local surface orientation.  The default value of 20 should be OK for most applications, higher values can be specified if the spread of points is uneven. Values as low as 10 may yield adequate results for some surfaces. Higher values cause the algorithm to take longer. Higher values will cause errors on sharp boundaries.</para>
/// </summary>
  int GetNeighborhoodSize();


  // void SetNeighborhoodSize (int );
/// <summary>
/// <para>Specify the number of neighbors each point has, used for estimating the local surface orientation.  The default value of 20 should be OK for most applications, higher values can be specified if the spread of points is uneven. Values as low as 10 may yield adequate results for some surfaces. Higher values cause the algorithm to take longer. Higher values will cause errors on sharp boundaries.</para>
/// </summary>
  void SetNeighborhoodSize(int arg0);


  // double GetSampleSpacing ();
/// <summary>
/// <para>Specify the spacing of the 3D sampling grid. If not set, a reasonable guess will be made.</para>
/// </summary>
  double GetSampleSpacing();


  // void SetSampleSpacing (double );
/// <summary>
/// <para>Specify the spacing of the 3D sampling grid. If not set, a reasonable guess will be made.</para>
/// </summary>
  void SetSampleSpacing(double arg0);


// Did not wrap:  vtkSurfaceReconstructionFilter ();


// Did not wrap:  ~vtkSurfaceReconstructionFilter ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkSurfaceReconstructionFilter (const vtkSurfaceReconstructionFilter &);


// Did not wrap:  void vtkSurfaceReconstructionFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSurfaceReconstructionFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSurfaceReconstructionFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSurfaceReconstructionFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSurfaceReconstructionFilter();


};

} // end vtkImaging
