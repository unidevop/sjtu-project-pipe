#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageDataGeometryFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageDataGeometryFilter *NewInstance ();
  vtkImageDataGeometryFilter^ NewInstance();


  // vtkImageDataGeometryFilter *SafeDownCast (vtkObject* o);
  static vtkImageDataGeometryFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImageDataGeometryFilter *New ();


  // void SetExtent (int extent[6]);
/// <summary>
/// <para>Set / get the extent (imin,imax, jmin,jmax, kmin,kmax) indices.</para>
/// </summary>
  void SetExtent(array<int>^ extent);


  // void SetExtent (int iMin, int iMax, int jMin, int jMax, int kMin, int kMax);
/// <summary>
/// <para>Set / get the extent (imin,imax, jmin,jmax, kmin,kmax) indices.</para>
/// </summary>
  void SetExtent(int iMin, int iMax, int jMin, int jMax, int kMin, int kMax);


// Did not wrap:  int *GetExtent ();return this Extent 


  // void SetThresholdCells (int );
/// <summary>
/// <para>Set ThresholdCells to true if you wish to skip any voxel/pixels which have scalar values less than the specified threshold. Currently this functionality is only implemented for 2D imagedata</para>
/// </summary>
  void SetThresholdCells(int arg0);


  // int GetThresholdCells ();
/// <summary>
/// <para>Set ThresholdCells to true if you wish to skip any voxel/pixels which have scalar values less than the specified threshold. Currently this functionality is only implemented for 2D imagedata</para>
/// </summary>
  int GetThresholdCells();


  // void ThresholdCellsOn ();
/// <summary>
/// <para>Set ThresholdCells to true if you wish to skip any voxel/pixels which have scalar values less than the specified threshold. Currently this functionality is only implemented for 2D imagedata</para>
/// </summary>
  void ThresholdCellsOn();


  // void ThresholdCellsOff ();
/// <summary>
/// <para>Set ThresholdCells to true if you wish to skip any voxel/pixels which have scalar values less than the specified threshold. Currently this functionality is only implemented for 2D imagedata</para>
/// </summary>
  void ThresholdCellsOff();


  // void SetThresholdValue (double );
/// <summary>
/// <para>Set ThresholdValue to the scalar value by which to threshhold cells when extracting geometry when ThresholdCells is true. Cells with scalar values greater than the threshold will be output.</para>
/// </summary>
  void SetThresholdValue(double arg0);


  // double GetThresholdValue ();
/// <summary>
/// <para>Set ThresholdValue to the scalar value by which to threshhold cells when extracting geometry when ThresholdCells is true. Cells with scalar values greater than the threshold will be output.</para>
/// </summary>
  double GetThresholdValue();


  // void ThresholdValueOn ();
/// <summary>
/// <para>Set ThresholdValue to the scalar value by which to threshhold cells when extracting geometry when ThresholdCells is true. Cells with scalar values greater than the threshold will be output.</para>
/// </summary>
  void ThresholdValueOn();


  // void ThresholdValueOff ();
/// <summary>
/// <para>Set ThresholdValue to the scalar value by which to threshhold cells when extracting geometry when ThresholdCells is true. Cells with scalar values greater than the threshold will be output.</para>
/// </summary>
  void ThresholdValueOff();


  // void SetOutputTriangles (int );
/// <summary>
/// <para>Set OutputTriangles to true if you wish to generate triangles instead of quads when extracting cells from 2D imagedata Currently this functionality is only implemented for 2D imagedata</para>
/// </summary>
  void SetOutputTriangles(int arg0);


  // int GetOutputTriangles ();
/// <summary>
/// <para>Set OutputTriangles to true if you wish to generate triangles instead of quads when extracting cells from 2D imagedata Currently this functionality is only implemented for 2D imagedata</para>
/// </summary>
  int GetOutputTriangles();


  // void OutputTrianglesOn ();
/// <summary>
/// <para>Set OutputTriangles to true if you wish to generate triangles instead of quads when extracting cells from 2D imagedata Currently this functionality is only implemented for 2D imagedata</para>
/// </summary>
  void OutputTrianglesOn();


  // void OutputTrianglesOff ();
/// <summary>
/// <para>Set OutputTriangles to true if you wish to generate triangles instead of quads when extracting cells from 2D imagedata Currently this functionality is only implemented for 2D imagedata</para>
/// </summary>
  void OutputTrianglesOff();


// Did not wrap:  vtkImageDataGeometryFilter ();


// Did not wrap:  ~vtkImageDataGeometryFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkImageDataGeometryFilter (const vtkImageDataGeometryFilter &);


// Did not wrap:  void vtkImageDataGeometryFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageDataGeometryFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageDataGeometryFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageDataGeometryFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageDataGeometryFilter();


};

} // end vtkGraphics
