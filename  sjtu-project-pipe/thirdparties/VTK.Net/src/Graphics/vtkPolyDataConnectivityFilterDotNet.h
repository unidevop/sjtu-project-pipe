#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkPolyDataConnectivityFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataConnectivityFilter *NewInstance ();
  vtkPolyDataConnectivityFilter^ NewInstance();


  // vtkPolyDataConnectivityFilter *SafeDownCast (vtkObject* o);
  static vtkPolyDataConnectivityFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkPolyDataConnectivityFilter *New ();


  // void SetScalarConnectivity (int );
/// <summary>
/// <para>Turn on/off connectivity based on scalar value. If on, cells are connected only if they share points AND one of the cells scalar values falls in the scalar range specified.</para>
/// </summary>
  void SetScalarConnectivity(int arg0);


  // int GetScalarConnectivity ();
/// <summary>
/// <para>Turn on/off connectivity based on scalar value. If on, cells are connected only if they share points AND one of the cells scalar values falls in the scalar range specified.</para>
/// </summary>
  int GetScalarConnectivity();


  // void ScalarConnectivityOn ();
/// <summary>
/// <para>Turn on/off connectivity based on scalar value. If on, cells are connected only if they share points AND one of the cells scalar values falls in the scalar range specified.</para>
/// </summary>
  void ScalarConnectivityOn();


  // void ScalarConnectivityOff ();
/// <summary>
/// <para>Turn on/off connectivity based on scalar value. If on, cells are connected only if they share points AND one of the cells scalar values falls in the scalar range specified.</para>
/// </summary>
  void ScalarConnectivityOff();


  // void SetScalarRange (double , double );
/// <summary>
/// <para>Set the scalar range to use to extract cells based on scalar connectivity.</para>
/// </summary>
  void SetScalarRange(double arg0, double arg1);


  // void SetScalarRange (double  a[2]);
/// <summary>
/// <para>Set the scalar range to use to extract cells based on scalar connectivity.</para>
/// </summary>
  void SetScalarRange(array<double>^ a);


  // double  *GetScalarRange ();
/// <summary>
/// <para>Set the scalar range to use to extract cells based on scalar connectivity.</para>
/// </summary>
  array<double>^ GetScalarRange();


  // void SetExtractionMode (int );
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  void SetExtractionMode(int arg0);


  // int GetExtractionModeMinValue ();
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  int GetExtractionModeMinValue();


  // int GetExtractionModeMaxValue ();
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  int GetExtractionModeMaxValue();


  // int GetExtractionMode ();
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  int GetExtractionMode();


  // void SetExtractionModeToPointSeededRegions ();this SetExtractionMode VTK_EXTRACT_POINT_SEEDED_REGIONS 
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  void SetExtractionModeToPointSeededRegions();


  // void SetExtractionModeToCellSeededRegions ();this SetExtractionMode VTK_EXTRACT_CELL_SEEDED_REGIONS 
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  void SetExtractionModeToCellSeededRegions();


  // void SetExtractionModeToLargestRegion ();this SetExtractionMode VTK_EXTRACT_LARGEST_REGION 
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  void SetExtractionModeToLargestRegion();


  // void SetExtractionModeToSpecifiedRegions ();this SetExtractionMode VTK_EXTRACT_SPECIFIED_REGIONS 
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  void SetExtractionModeToSpecifiedRegions();


  // void SetExtractionModeToClosestPointRegion ();this SetExtractionMode VTK_EXTRACT_CLOSEST_POINT_REGION 
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  void SetExtractionModeToClosestPointRegion();


  // void SetExtractionModeToAllRegions ();this SetExtractionMode VTK_EXTRACT_ALL_REGIONS 
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  void SetExtractionModeToAllRegions();


  // const char *GetExtractionModeAsString ();
/// <summary>
/// <para>Control the extraction of connected surfaces.</para>
/// </summary>
  System::String^ GetExtractionModeAsString();


  // void InitializeSeedList ();
/// <summary>
/// <para>Initialize list of point ids/cell ids used to seed regions.</para>
/// </summary>
  void InitializeSeedList();


  // void AddSeed (int id);
/// <summary>
/// <para>Add a seed id (point or cell id). Note: ids are 0-offset.</para>
/// </summary>
  void AddSeed(int id);


  // void DeleteSeed (int id);
/// <summary>
/// <para>Delete a seed id (point or cell id). Note: ids are 0-offset.</para>
/// </summary>
  void DeleteSeed(int id);


  // void InitializeSpecifiedRegionList ();
/// <summary>
/// <para>Initialize list of region ids to extract.</para>
/// </summary>
  void InitializeSpecifiedRegionList();


  // void AddSpecifiedRegion (int id);
/// <summary>
/// <para>Add a region id to extract. Note: ids are 0-offset.</para>
/// </summary>
  void AddSpecifiedRegion(int id);


  // void DeleteSpecifiedRegion (int id);
/// <summary>
/// <para>Delete a region id to extract. Note: ids are 0-offset.</para>
/// </summary>
  void DeleteSpecifiedRegion(int id);


  // void SetClosestPoint (double , double , double );
/// <summary>
/// <para>Use to specify x-y-z point coordinates when extracting the region  closest to a specified point.</para>
/// </summary>
  void SetClosestPoint(double arg0, double arg1, double arg2);


  // void SetClosestPoint (double  a[3]);
/// <summary>
/// <para>Use to specify x-y-z point coordinates when extracting the region  closest to a specified point.</para>
/// </summary>
  void SetClosestPoint(array<double>^ a);


  // double  *GetClosestPoint ();
/// <summary>
/// <para>Use to specify x-y-z point coordinates when extracting the region  closest to a specified point.</para>
/// </summary>
  array<double>^ GetClosestPoint();


  // int GetNumberOfExtractedRegions ();
/// <summary>
/// <para>Obtain the number of connected regions.</para>
/// </summary>
  int GetNumberOfExtractedRegions();


  // void SetColorRegions (int );
/// <summary>
/// <para>Turn on/off the coloring of connected regions.</para>
/// </summary>
  void SetColorRegions(int arg0);


  // int GetColorRegions ();
/// <summary>
/// <para>Turn on/off the coloring of connected regions.</para>
/// </summary>
  int GetColorRegions();


  // void ColorRegionsOn ();
/// <summary>
/// <para>Turn on/off the coloring of connected regions.</para>
/// </summary>
  void ColorRegionsOn();


  // void ColorRegionsOff ();
/// <summary>
/// <para>Turn on/off the coloring of connected regions.</para>
/// </summary>
  void ColorRegionsOff();


// Did not wrap:  vtkPolyDataConnectivityFilter ();


// Did not wrap:  ~vtkPolyDataConnectivityFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void TraverseAndMark ();


// Did not wrap:  vtkPolyDataConnectivityFilter (const vtkPolyDataConnectivityFilter &);


// Did not wrap:  void vtkPolyDataConnectivityFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataConnectivityFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataConnectivityFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataConnectivityFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataConnectivityFilter();


};

} // end vtkGraphics
