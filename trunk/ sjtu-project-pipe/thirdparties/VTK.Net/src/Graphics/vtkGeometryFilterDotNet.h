#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGeometryFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkGeometryFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGeometryFilter *NewInstance ();
  vtkGeometryFilter^ NewInstance();


  // vtkGeometryFilter *SafeDownCast (vtkObject* o);
  static vtkGeometryFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPointClipping (int );
/// <summary>
/// <para>Turn on/off selection of geometry by point id.</para>
/// </summary>
  void SetPointClipping(int arg0);


  // int GetPointClipping ();
/// <summary>
/// <para>Turn on/off selection of geometry by point id.</para>
/// </summary>
  int GetPointClipping();


  // void PointClippingOn ();
/// <summary>
/// <para>Turn on/off selection of geometry by point id.</para>
/// </summary>
  void PointClippingOn();


  // void PointClippingOff ();
/// <summary>
/// <para>Turn on/off selection of geometry by point id.</para>
/// </summary>
  void PointClippingOff();


  // void SetCellClipping (int );
/// <summary>
/// <para>Turn on/off selection of geometry by cell id.</para>
/// </summary>
  void SetCellClipping(int arg0);


  // int GetCellClipping ();
/// <summary>
/// <para>Turn on/off selection of geometry by cell id.</para>
/// </summary>
  int GetCellClipping();


  // void CellClippingOn ();
/// <summary>
/// <para>Turn on/off selection of geometry by cell id.</para>
/// </summary>
  void CellClippingOn();


  // void CellClippingOff ();
/// <summary>
/// <para>Turn on/off selection of geometry by cell id.</para>
/// </summary>
  void CellClippingOff();


  // void SetExtentClipping (int );
/// <summary>
/// <para>Turn on/off selection of geometry via bounding box.</para>
/// </summary>
  void SetExtentClipping(int arg0);


  // int GetExtentClipping ();
/// <summary>
/// <para>Turn on/off selection of geometry via bounding box.</para>
/// </summary>
  int GetExtentClipping();


  // void ExtentClippingOn ();
/// <summary>
/// <para>Turn on/off selection of geometry via bounding box.</para>
/// </summary>
  void ExtentClippingOn();


  // void ExtentClippingOff ();
/// <summary>
/// <para>Turn on/off selection of geometry via bounding box.</para>
/// </summary>
  void ExtentClippingOff();


  // void SetPointMinimum (vtkIdType );
/// <summary>
/// <para>Specify the minimum point id for point id selection.</para>
/// </summary>
  void SetPointMinimum(int arg0);


  // vtkIdType GetPointMinimumMinValue ();
/// <summary>
/// <para>Specify the minimum point id for point id selection.</para>
/// </summary>
  int GetPointMinimumMinValue();


  // vtkIdType GetPointMinimumMaxValue ();
/// <summary>
/// <para>Specify the minimum point id for point id selection.</para>
/// </summary>
  int GetPointMinimumMaxValue();


  // vtkIdType GetPointMinimum ();
/// <summary>
/// <para>Specify the minimum point id for point id selection.</para>
/// </summary>
  int GetPointMinimum();


  // void SetPointMaximum (vtkIdType );
/// <summary>
/// <para>Specify the maximum point id for point id selection.</para>
/// </summary>
  void SetPointMaximum(int arg0);


  // vtkIdType GetPointMaximumMinValue ();
/// <summary>
/// <para>Specify the maximum point id for point id selection.</para>
/// </summary>
  int GetPointMaximumMinValue();


  // vtkIdType GetPointMaximumMaxValue ();
/// <summary>
/// <para>Specify the maximum point id for point id selection.</para>
/// </summary>
  int GetPointMaximumMaxValue();


  // vtkIdType GetPointMaximum ();
/// <summary>
/// <para>Specify the maximum point id for point id selection.</para>
/// </summary>
  int GetPointMaximum();


  // void SetCellMinimum (vtkIdType );
/// <summary>
/// <para>Specify the minimum cell id for point id selection.</para>
/// </summary>
  void SetCellMinimum(int arg0);


  // vtkIdType GetCellMinimumMinValue ();
/// <summary>
/// <para>Specify the minimum cell id for point id selection.</para>
/// </summary>
  int GetCellMinimumMinValue();


  // vtkIdType GetCellMinimumMaxValue ();
/// <summary>
/// <para>Specify the minimum cell id for point id selection.</para>
/// </summary>
  int GetCellMinimumMaxValue();


  // vtkIdType GetCellMinimum ();
/// <summary>
/// <para>Specify the minimum cell id for point id selection.</para>
/// </summary>
  int GetCellMinimum();


  // void SetCellMaximum (vtkIdType );
/// <summary>
/// <para>Specify the maximum cell id for point id selection.</para>
/// </summary>
  void SetCellMaximum(int arg0);


  // vtkIdType GetCellMaximumMinValue ();
/// <summary>
/// <para>Specify the maximum cell id for point id selection.</para>
/// </summary>
  int GetCellMaximumMinValue();


  // vtkIdType GetCellMaximumMaxValue ();
/// <summary>
/// <para>Specify the maximum cell id for point id selection.</para>
/// </summary>
  int GetCellMaximumMaxValue();


  // vtkIdType GetCellMaximum ();
/// <summary>
/// <para>Specify the maximum cell id for point id selection.</para>
/// </summary>
  int GetCellMaximum();


  // void SetExtent (double xMin, double xMax, double yMin, double yMax, double zMin, double zMax);
/// <summary>
/// <para>Specify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip data.</para>
/// </summary>
  void SetExtent(double xMin, double xMax, double yMin, double yMax, double zMin, double zMax);


  // void SetExtent (double extent[6]);
/// <summary>
/// <para>Set / get a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip data.</para>
/// </summary>
  void SetExtent(array<double>^ extent);


  // double *GetExtent ();return this Extent 
/// <summary>
/// <para>Set / get a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip data.</para>
/// </summary>
  array<double>^ GetExtent();


  // void SetMerging (int );
/// <summary>
/// <para>Turn on/off merging of coincident points. Note that is merging is on, points with different point attributes (e.g., normals) are merged, which may cause rendering artifacts.</para>
/// </summary>
  void SetMerging(int arg0);


  // int GetMerging ();
/// <summary>
/// <para>Turn on/off merging of coincident points. Note that is merging is on, points with different point attributes (e.g., normals) are merged, which may cause rendering artifacts.</para>
/// </summary>
  int GetMerging();


  // void MergingOn ();
/// <summary>
/// <para>Turn on/off merging of coincident points. Note that is merging is on, points with different point attributes (e.g., normals) are merged, which may cause rendering artifacts.</para>
/// </summary>
  void MergingOn();


  // void MergingOff ();
/// <summary>
/// <para>Turn on/off merging of coincident points. Note that is merging is on, points with different point attributes (e.g., normals) are merged, which may cause rendering artifacts.</para>
/// </summary>
  void MergingOff();


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
/// <para>Return the MTime also considering the locator.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkGeometryFilter ();


// Did not wrap:  ~vtkGeometryFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void PolyDataExecute (vtkDataSet *, vtkPolyData *, vtkInformation *);


// Did not wrap:  void UnstructuredGridExecute (vtkDataSet *, vtkPolyData *, vtkInformation *);


// Did not wrap:  void StructuredGridExecute (vtkDataSet *, vtkPolyData *, vtkInformation *);


// Did not wrap:  int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkGeometryFilter (const vtkGeometryFilter &);


// Did not wrap:  void vtkGeometryFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGeometryFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGeometryFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGeometryFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGeometryFilter();


};

} // end vtkGraphics
