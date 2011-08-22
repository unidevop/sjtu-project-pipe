#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCleanPolyData : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkCleanPolyData *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCleanPolyData *NewInstance ();
  vtkCleanPolyData^ NewInstance();


  // vtkCleanPolyData *SafeDownCast (vtkObject* o);
  static vtkCleanPolyData^ SafeDownCast(vtkObject^ o);


  // void SetToleranceIsAbsolute (int );
/// <summary>
/// <para>By default ToleranceIsAbsolute is false and Tolerance is a fraction of Bounding box diagonal, if true, AbsoluteTolerance is used when adding points to locator (merging)</para>
/// </summary>
  void SetToleranceIsAbsolute(int arg0);


  // void ToleranceIsAbsoluteOn ();
/// <summary>
/// <para>By default ToleranceIsAbsolute is false and Tolerance is a fraction of Bounding box diagonal, if true, AbsoluteTolerance is used when adding points to locator (merging)</para>
/// </summary>
  void ToleranceIsAbsoluteOn();


  // void ToleranceIsAbsoluteOff ();
/// <summary>
/// <para>By default ToleranceIsAbsolute is false and Tolerance is a fraction of Bounding box diagonal, if true, AbsoluteTolerance is used when adding points to locator (merging)</para>
/// </summary>
  void ToleranceIsAbsoluteOff();


  // int GetToleranceIsAbsolute ();
/// <summary>
/// <para>By default ToleranceIsAbsolute is false and Tolerance is a fraction of Bounding box diagonal, if true, AbsoluteTolerance is used when adding points to locator (merging)</para>
/// </summary>
  int GetToleranceIsAbsolute();


  // void SetTolerance (double );
/// <summary>
/// <para>Specify tolerance in terms of fraction of bounding box length.</para>
/// </summary>
  void SetTolerance(double arg0);


  // double GetToleranceMinValue ();
/// <summary>
/// <para>Specify tolerance in terms of fraction of bounding box length.</para>
/// </summary>
  double GetToleranceMinValue();


  // double GetToleranceMaxValue ();
/// <summary>
/// <para>Specify tolerance in terms of fraction of bounding box length.</para>
/// </summary>
  double GetToleranceMaxValue();


  // double GetTolerance ();
/// <summary>
/// <para>Specify tolerance in terms of fraction of bounding box length.</para>
/// </summary>
  double GetTolerance();


  // void SetAbsoluteTolerance (double );
/// <summary>
/// <para>Specify tolerance in absolute terms</para>
/// </summary>
  void SetAbsoluteTolerance(double arg0);


  // double GetAbsoluteToleranceMinValue ();
/// <summary>
/// <para>Specify tolerance in absolute terms</para>
/// </summary>
  double GetAbsoluteToleranceMinValue();


  // double GetAbsoluteToleranceMaxValue ();
/// <summary>
/// <para>Specify tolerance in absolute terms</para>
/// </summary>
  double GetAbsoluteToleranceMaxValue();


  // double GetAbsoluteTolerance ();
/// <summary>
/// <para>Specify tolerance in absolute terms</para>
/// </summary>
  double GetAbsoluteTolerance();


  // void SetConvertLinesToPoints (int );
/// <summary>
/// <para>Turn on/off conversion of degenerate lines to points</para>
/// </summary>
  void SetConvertLinesToPoints(int arg0);


  // void ConvertLinesToPointsOn ();
/// <summary>
/// <para>Turn on/off conversion of degenerate lines to points</para>
/// </summary>
  void ConvertLinesToPointsOn();


  // void ConvertLinesToPointsOff ();
/// <summary>
/// <para>Turn on/off conversion of degenerate lines to points</para>
/// </summary>
  void ConvertLinesToPointsOff();


  // int GetConvertLinesToPoints ();
/// <summary>
/// <para>Turn on/off conversion of degenerate lines to points</para>
/// </summary>
  int GetConvertLinesToPoints();


  // void SetConvertPolysToLines (int );
/// <summary>
/// <para>Turn on/off conversion of degenerate polys to lines</para>
/// </summary>
  void SetConvertPolysToLines(int arg0);


  // void ConvertPolysToLinesOn ();
/// <summary>
/// <para>Turn on/off conversion of degenerate polys to lines</para>
/// </summary>
  void ConvertPolysToLinesOn();


  // void ConvertPolysToLinesOff ();
/// <summary>
/// <para>Turn on/off conversion of degenerate polys to lines</para>
/// </summary>
  void ConvertPolysToLinesOff();


  // int GetConvertPolysToLines ();
/// <summary>
/// <para>Turn on/off conversion of degenerate polys to lines</para>
/// </summary>
  int GetConvertPolysToLines();


  // void SetConvertStripsToPolys (int );
/// <summary>
/// <para>Turn on/off conversion of degenerate strips to polys</para>
/// </summary>
  void SetConvertStripsToPolys(int arg0);


  // void ConvertStripsToPolysOn ();
/// <summary>
/// <para>Turn on/off conversion of degenerate strips to polys</para>
/// </summary>
  void ConvertStripsToPolysOn();


  // void ConvertStripsToPolysOff ();
/// <summary>
/// <para>Turn on/off conversion of degenerate strips to polys</para>
/// </summary>
  void ConvertStripsToPolysOff();


  // int GetConvertStripsToPolys ();
/// <summary>
/// <para>Turn on/off conversion of degenerate strips to polys</para>
/// </summary>
  int GetConvertStripsToPolys();


  // void SetPointMerging (int );
/// <summary>
/// <para>Set/Get a boolean value that controls whether point merging is performed. If on, a locator will be used, and points laying within  the appropriate tolerance may be merged. If off, points are never merged. By default, merging is on.</para>
/// </summary>
  void SetPointMerging(int arg0);


  // int GetPointMerging ();
/// <summary>
/// <para>Set/Get a boolean value that controls whether point merging is performed. If on, a locator will be used, and points laying within  the appropriate tolerance may be merged. If off, points are never merged. By default, merging is on.</para>
/// </summary>
  int GetPointMerging();


  // void PointMergingOn ();
/// <summary>
/// <para>Set/Get a boolean value that controls whether point merging is performed. If on, a locator will be used, and points laying within  the appropriate tolerance may be merged. If off, points are never merged. By default, merging is on.</para>
/// </summary>
  void PointMergingOn();


  // void PointMergingOff ();
/// <summary>
/// <para>Set/Get a boolean value that controls whether point merging is performed. If on, a locator will be used, and points laying within  the appropriate tolerance may be merged. If off, points are never merged. By default, merging is on.</para>
/// </summary>
  void PointMergingOff();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Set/Get a spatial locator for speeding the search process. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Set/Get a spatial locator for speeding the search process. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator (vtkPolyData *input);
/// <summary>
/// <para>Create default locator. Used to create one when none is specified.</para>
/// </summary>
  void CreateDefaultLocator(vtkPolyData^ input);


  // void ReleaseLocator (void );
/// <summary>
/// <para>Release locator</para>
/// </summary>
  void ReleaseLocator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the MTime of this object also considering the locator.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void OperateOnPoint (double in[3], double out[3]);
/// <summary>
/// <para>Perform operation on a point</para>
/// </summary>
  void OperateOnPoint(array<double>^ in, array<double>^ out);


  // virtual void OperateOnBounds (double in[6], double out[6]);
/// <summary>
/// <para>Perform operation on bounds</para>
/// </summary>
  void OperateOnBounds(array<double>^ in, array<double>^ out);


  // void SetPieceInvariant (int );
  void SetPieceInvariant(int arg0);


  // int GetPieceInvariant ();
  int GetPieceInvariant();


  // void PieceInvariantOn ();
  void PieceInvariantOn();


  // void PieceInvariantOff ();
  void PieceInvariantOff();


// Did not wrap:  vtkCleanPolyData ();


// Did not wrap:  ~vtkCleanPolyData ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkCleanPolyData (const vtkCleanPolyData &);


// Did not wrap:  void vtkCleanPolyData 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCleanPolyData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCleanPolyData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCleanPolyData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCleanPolyData();


};

} // end vtkGraphics
