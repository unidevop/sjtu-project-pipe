#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkFeatureEdges : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFeatureEdges *NewInstance ();
  vtkFeatureEdges^ NewInstance();


  // vtkFeatureEdges *SafeDownCast (vtkObject* o);
  static vtkFeatureEdges^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkFeatureEdges *New ();


  // void SetBoundaryEdges (int );
/// <summary>
/// <para>Turn on/off the extraction of boundary edges.</para>
/// </summary>
  void SetBoundaryEdges(int arg0);


  // int GetBoundaryEdges ();
/// <summary>
/// <para>Turn on/off the extraction of boundary edges.</para>
/// </summary>
  int GetBoundaryEdges();


  // void BoundaryEdgesOn ();
/// <summary>
/// <para>Turn on/off the extraction of boundary edges.</para>
/// </summary>
  void BoundaryEdgesOn();


  // void BoundaryEdgesOff ();
/// <summary>
/// <para>Turn on/off the extraction of boundary edges.</para>
/// </summary>
  void BoundaryEdgesOff();


  // void SetFeatureEdges (int );
/// <summary>
/// <para>Turn on/off the extraction of feature edges.</para>
/// </summary>
  void SetFeatureEdges(int arg0);


  // int GetFeatureEdges ();
/// <summary>
/// <para>Turn on/off the extraction of feature edges.</para>
/// </summary>
  int GetFeatureEdges();


  // void FeatureEdgesOn ();
/// <summary>
/// <para>Turn on/off the extraction of feature edges.</para>
/// </summary>
  void FeatureEdgesOn();


  // void FeatureEdgesOff ();
/// <summary>
/// <para>Turn on/off the extraction of feature edges.</para>
/// </summary>
  void FeatureEdgesOff();


  // void SetFeatureAngle (double );
/// <summary>
/// <para>Specify the feature angle for extracting feature edges.</para>
/// </summary>
  void SetFeatureAngle(double arg0);


  // double GetFeatureAngleMinValue ();
/// <summary>
/// <para>Specify the feature angle for extracting feature edges.</para>
/// </summary>
  double GetFeatureAngleMinValue();


  // double GetFeatureAngleMaxValue ();
/// <summary>
/// <para>Specify the feature angle for extracting feature edges.</para>
/// </summary>
  double GetFeatureAngleMaxValue();


  // double GetFeatureAngle ();
/// <summary>
/// <para>Specify the feature angle for extracting feature edges.</para>
/// </summary>
  double GetFeatureAngle();


  // void SetNonManifoldEdges (int );
/// <summary>
/// <para>Turn on/off the extraction of non-manifold edges.</para>
/// </summary>
  void SetNonManifoldEdges(int arg0);


  // int GetNonManifoldEdges ();
/// <summary>
/// <para>Turn on/off the extraction of non-manifold edges.</para>
/// </summary>
  int GetNonManifoldEdges();


  // void NonManifoldEdgesOn ();
/// <summary>
/// <para>Turn on/off the extraction of non-manifold edges.</para>
/// </summary>
  void NonManifoldEdgesOn();


  // void NonManifoldEdgesOff ();
/// <summary>
/// <para>Turn on/off the extraction of non-manifold edges.</para>
/// </summary>
  void NonManifoldEdgesOff();


  // void SetManifoldEdges (int );
/// <summary>
/// <para>Turn on/off the extraction of manifold edges.</para>
/// </summary>
  void SetManifoldEdges(int arg0);


  // int GetManifoldEdges ();
/// <summary>
/// <para>Turn on/off the extraction of manifold edges.</para>
/// </summary>
  int GetManifoldEdges();


  // void ManifoldEdgesOn ();
/// <summary>
/// <para>Turn on/off the extraction of manifold edges.</para>
/// </summary>
  void ManifoldEdgesOn();


  // void ManifoldEdgesOff ();
/// <summary>
/// <para>Turn on/off the extraction of manifold edges.</para>
/// </summary>
  void ManifoldEdgesOff();


  // void SetColoring (int );
/// <summary>
/// <para>Turn on/off the coloring of edges by type.</para>
/// </summary>
  void SetColoring(int arg0);


  // int GetColoring ();
/// <summary>
/// <para>Turn on/off the coloring of edges by type.</para>
/// </summary>
  int GetColoring();


  // void ColoringOn ();
/// <summary>
/// <para>Turn on/off the coloring of edges by type.</para>
/// </summary>
  void ColoringOn();


  // void ColoringOff ();
/// <summary>
/// <para>Turn on/off the coloring of edges by type.</para>
/// </summary>
  void ColoringOff();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified.</para>
/// </summary>
  void CreateDefaultLocator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return MTime also considering the locator.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkFeatureEdges ();


// Did not wrap:  ~vtkFeatureEdges ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkFeatureEdges (const vtkFeatureEdges &);


// Did not wrap:  void vtkFeatureEdges 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFeatureEdges(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFeatureEdges(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFeatureEdges();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFeatureEdges();


};

} // end vtkGraphics
