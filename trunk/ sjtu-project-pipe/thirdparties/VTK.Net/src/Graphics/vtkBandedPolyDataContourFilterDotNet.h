#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkBandedPolyDataContourFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBandedPolyDataContourFilter *NewInstance ();
  vtkBandedPolyDataContourFilter^ NewInstance();


  // vtkBandedPolyDataContourFilter *SafeDownCast (vtkObject* o);
  static vtkBandedPolyDataContourFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkBandedPolyDataContourFilter *New ();


  // void SetValue (int i, double value);
/// <summary>
/// <para>Methods to set / get contour values. A single value at a time can be set with SetValue(). Multiple contour values can be set with GenerateValues(). Note that GenerateValues() generates n values inclusive of the start and end range values.</para>
/// </summary>
  void SetValue(int i, double value);


  // double GetValue (int i);
/// <summary>
/// <para>Methods to set / get contour values. A single value at a time can be set with SetValue(). Multiple contour values can be set with GenerateValues(). Note that GenerateValues() generates n values inclusive of the start and end range values.</para>
/// </summary>
  double GetValue(int i);


// Did not wrap:  double *GetValues ();


  // void GetValues (double *contourValues);
/// <summary>
/// <para>Methods to set / get contour values. A single value at a time can be set with SetValue(). Multiple contour values can be set with GenerateValues(). Note that GenerateValues() generates n values inclusive of the start and end range values.</para>
/// </summary>
  void GetValues(array<double>^ contourValues);


  // void SetNumberOfContours (int number);
/// <summary>
/// <para>Methods to set / get contour values. A single value at a time can be set with SetValue(). Multiple contour values can be set with GenerateValues(). Note that GenerateValues() generates n values inclusive of the start and end range values.</para>
/// </summary>
  void SetNumberOfContours(int number);


  // int GetNumberOfContours ();
/// <summary>
/// <para>Methods to set / get contour values. A single value at a time can be set with SetValue(). Multiple contour values can be set with GenerateValues(). Note that GenerateValues() generates n values inclusive of the start and end range values.</para>
/// </summary>
  int GetNumberOfContours();


  // void GenerateValues (int numContours, double range[2]);
/// <summary>
/// <para>Methods to set / get contour values. A single value at a time can be set with SetValue(). Multiple contour values can be set with GenerateValues(). Note that GenerateValues() generates n values inclusive of the start and end range values.</para>
/// </summary>
  void GenerateValues(int numContours, array<double>^ range);


  // void GenerateValues (int numContours, double rangeStart, double rangeEnd);
/// <summary>
/// <para>Methods to set / get contour values. A single value at a time can be set with SetValue(). Multiple contour values can be set with GenerateValues(). Note that GenerateValues() generates n values inclusive of the start and end range values.</para>
/// </summary>
  void GenerateValues(int numContours, double rangeStart, double rangeEnd);


  // void SetClipping (int );
/// <summary>
/// <para>Indicate whether to clip outside the range specified by the user. (The range is contour value[0] to contour value[numContours-1].) Clipping means all cells outside of the range specified are not sent to the output.</para>
/// </summary>
  void SetClipping(int arg0);


  // int GetClipping ();
/// <summary>
/// <para>Indicate whether to clip outside the range specified by the user. (The range is contour value[0] to contour value[numContours-1].) Clipping means all cells outside of the range specified are not sent to the output.</para>
/// </summary>
  int GetClipping();


  // void ClippingOn ();
/// <summary>
/// <para>Indicate whether to clip outside the range specified by the user. (The range is contour value[0] to contour value[numContours-1].) Clipping means all cells outside of the range specified are not sent to the output.</para>
/// </summary>
  void ClippingOn();


  // void ClippingOff ();
/// <summary>
/// <para>Indicate whether to clip outside the range specified by the user. (The range is contour value[0] to contour value[numContours-1].) Clipping means all cells outside of the range specified are not sent to the output.</para>
/// </summary>
  void ClippingOff();


  // void SetScalarMode (int );
/// <summary>
/// <para>Control whether the cell scalars are output as an integer index or a scalar value. If an index, the index refers to the bands produced by the clipping range. If a value, then a scalar value which is a  value between clip values is used.</para>
/// </summary>
  void SetScalarMode(int arg0);


  // int GetScalarModeMinValue ();
/// <summary>
/// <para>Control whether the cell scalars are output as an integer index or a scalar value. If an index, the index refers to the bands produced by the clipping range. If a value, then a scalar value which is a  value between clip values is used.</para>
/// </summary>
  int GetScalarModeMinValue();


  // int GetScalarModeMaxValue ();
/// <summary>
/// <para>Control whether the cell scalars are output as an integer index or a scalar value. If an index, the index refers to the bands produced by the clipping range. If a value, then a scalar value which is a  value between clip values is used.</para>
/// </summary>
  int GetScalarModeMaxValue();


  // int GetScalarMode ();
/// <summary>
/// <para>Control whether the cell scalars are output as an integer index or a scalar value. If an index, the index refers to the bands produced by the clipping range. If a value, then a scalar value which is a  value between clip values is used.</para>
/// </summary>
  int GetScalarMode();


  // void SetScalarModeToIndex ();this SetScalarMode VTK_SCALAR_MODE_INDEX 
/// <summary>
/// <para>Control whether the cell scalars are output as an integer index or a scalar value. If an index, the index refers to the bands produced by the clipping range. If a value, then a scalar value which is a  value between clip values is used.</para>
/// </summary>
  void SetScalarModeToIndex();


  // void SetScalarModeToValue ();this SetScalarMode VTK_SCALAR_MODE_VALUE 
/// <summary>
/// <para>Turn on/off a flag to control whether contour edges are generated. Contour edges are the edges between bands. If enabled, they are  generated from polygons/triangle strips and placed into the second output (the ContourEdgesOutput).</para>
/// </summary>
  void SetScalarModeToValue();


  // void SetGenerateContourEdges (int );
/// <summary>
/// <para>Turn on/off a flag to control whether contour edges are generated. Contour edges are the edges between bands. If enabled, they are  generated from polygons/triangle strips and placed into the second output (the ContourEdgesOutput).</para>
/// </summary>
  void SetGenerateContourEdges(int arg0);


  // int GetGenerateContourEdges ();
/// <summary>
/// <para>Turn on/off a flag to control whether contour edges are generated. Contour edges are the edges between bands. If enabled, they are  generated from polygons/triangle strips and placed into the second output (the ContourEdgesOutput).</para>
/// </summary>
  int GetGenerateContourEdges();


  // void GenerateContourEdgesOn ();
/// <summary>
/// <para>Turn on/off a flag to control whether contour edges are generated. Contour edges are the edges between bands. If enabled, they are  generated from polygons/triangle strips and placed into the second output (the ContourEdgesOutput).</para>
/// </summary>
  void GenerateContourEdgesOn();


  // void GenerateContourEdgesOff ();
/// <summary>
/// <para>Turn on/off a flag to control whether contour edges are generated. Contour edges are the edges between bands. If enabled, they are  generated from polygons/triangle strips and placed into the second output (the ContourEdgesOutput).</para>
/// </summary>
  void GenerateContourEdgesOff();


  // vtkPolyData *GetContourEdgesOutput ();
/// <summary>
/// <para>Get the second output which contains the edges dividing the contour  bands. This output is empty unless GenerateContourEdges is enabled.</para>
/// </summary>
  vtkPolyData^ GetContourEdgesOutput();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Overload GetMTime because we delegate to vtkContourValues so its modified time must be taken into account.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkBandedPolyDataContourFilter ();


// Did not wrap:  ~vtkBandedPolyDataContourFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int ComputeScalarIndex (double );


// Did not wrap:  int IsContourValue (double val);


// Did not wrap:  int ClipEdge (int v1, int v2, vtkPoints *pts, vtkDataArray *inScalars, vtkDoubleArray *outScalars, vtkPointData *inPD, vtkPointData *outPD);


// Did not wrap:  int InsertCell (vtkCellArray *cells, int npts, vtkIdType *pts, int cellId, double s, vtkFloatArray *newS);


// Did not wrap:  vtkBandedPolyDataContourFilter (const vtkBandedPolyDataContourFilter &);


// Did not wrap:  void vtkBandedPolyDataContourFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBandedPolyDataContourFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBandedPolyDataContourFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBandedPolyDataContourFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBandedPolyDataContourFilter();


};

} // end vtkGraphics
