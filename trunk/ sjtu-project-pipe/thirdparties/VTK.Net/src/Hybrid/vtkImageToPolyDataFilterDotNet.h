#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageToPolyDataFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageToPolyDataFilter *NewInstance ();
  vtkImageToPolyDataFilter^ NewInstance();


  // vtkImageToPolyDataFilter *SafeDownCast (vtkObject* o);
  static vtkImageToPolyDataFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkImageToPolyDataFilter *New ();


  // void SetOutputStyle (int );
/// <summary>
/// <para>Specify how to create the output. Pixelize means converting the image to quad polygons with a constant color per quad. Polygonalize means merging colors together into polygonal regions, and then smoothing the regions (if smoothing is turned on). RunLength means creating quad polygons that may encompass several pixels on a scan line. The default behavior is Polygonalize.</para>
/// </summary>
  void SetOutputStyle(int arg0);


  // int GetOutputStyleMinValue ();
/// <summary>
/// <para>Specify how to create the output. Pixelize means converting the image to quad polygons with a constant color per quad. Polygonalize means merging colors together into polygonal regions, and then smoothing the regions (if smoothing is turned on). RunLength means creating quad polygons that may encompass several pixels on a scan line. The default behavior is Polygonalize.</para>
/// </summary>
  int GetOutputStyleMinValue();


  // int GetOutputStyleMaxValue ();
/// <summary>
/// <para>Specify how to create the output. Pixelize means converting the image to quad polygons with a constant color per quad. Polygonalize means merging colors together into polygonal regions, and then smoothing the regions (if smoothing is turned on). RunLength means creating quad polygons that may encompass several pixels on a scan line. The default behavior is Polygonalize.</para>
/// </summary>
  int GetOutputStyleMaxValue();


  // int GetOutputStyle ();
/// <summary>
/// <para>Specify how to create the output. Pixelize means converting the image to quad polygons with a constant color per quad. Polygonalize means merging colors together into polygonal regions, and then smoothing the regions (if smoothing is turned on). RunLength means creating quad polygons that may encompass several pixels on a scan line. The default behavior is Polygonalize.</para>
/// </summary>
  int GetOutputStyle();


  // void SetOutputStyleToPixelize ();this SetOutputStyle VTK_STYLE_PIXELIZE 
/// <summary>
/// <para>Specify how to create the output. Pixelize means converting the image to quad polygons with a constant color per quad. Polygonalize means merging colors together into polygonal regions, and then smoothing the regions (if smoothing is turned on). RunLength means creating quad polygons that may encompass several pixels on a scan line. The default behavior is Polygonalize.</para>
/// </summary>
  void SetOutputStyleToPixelize();


  // void SetOutputStyleToPolygonalize ();this SetOutputStyle VTK_STYLE_POLYGONALIZE 
/// <summary>
/// <para>Specify how to create the output. Pixelize means converting the image to quad polygons with a constant color per quad. Polygonalize means merging colors together into polygonal regions, and then smoothing the regions (if smoothing is turned on). RunLength means creating quad polygons that may encompass several pixels on a scan line. The default behavior is Polygonalize.</para>
/// </summary>
  void SetOutputStyleToPolygonalize();


  // void SetOutputStyleToRunLength ();this SetOutputStyle VTK_STYLE_RUN_LENGTH 
/// <summary>
/// <para>Specify how to create the output. Pixelize means converting the image to quad polygons with a constant color per quad. Polygonalize means merging colors together into polygonal regions, and then smoothing the regions (if smoothing is turned on). RunLength means creating quad polygons that may encompass several pixels on a scan line. The default behavior is Polygonalize.</para>
/// </summary>
  void SetOutputStyleToRunLength();


  // void SetColorMode (int );
/// <summary>
/// <para>Specify how to quantize color.</para>
/// </summary>
  void SetColorMode(int arg0);


  // int GetColorModeMinValue ();
/// <summary>
/// <para>Specify how to quantize color.</para>
/// </summary>
  int GetColorModeMinValue();


  // int GetColorModeMaxValue ();
/// <summary>
/// <para>Specify how to quantize color.</para>
/// </summary>
  int GetColorModeMaxValue();


  // int GetColorMode ();
/// <summary>
/// <para>Specify how to quantize color.</para>
/// </summary>
  int GetColorMode();


  // void SetColorModeToLUT ();this SetColorMode VTK_COLOR_MODE_LUT 
/// <summary>
/// <para>Specify how to quantize color.</para>
/// </summary>
  void SetColorModeToLUT();


  // void SetColorModeToLinear256 ();this SetColorMode VTK_COLOR_MODE_LINEAR_256 
/// <summary>
/// <para>Specify how to quantize color.</para>
/// </summary>
  void SetColorModeToLinear256();


  // virtual void SetLookupTable (vtkScalarsToColors *);
/// <summary>
/// <para>Set/Get the vtkLookupTable to use. The lookup table is used when the color mode is set to LUT and a single component scalar is input.</para>
/// </summary>
  void SetLookupTable(vtkScalarsToColors^ arg0);


  // vtkScalarsToColors *GetLookupTable ();
/// <summary>
/// <para>Set/Get the vtkLookupTable to use. The lookup table is used when the color mode is set to LUT and a single component scalar is input.</para>
/// </summary>
  vtkScalarsToColors^ GetLookupTable();


  // void SetSmoothing (int );
/// <summary>
/// <para>If the output style is set to polygonalize, then you can control whether to smooth boundaries.</para>
/// </summary>
  void SetSmoothing(int arg0);


  // int GetSmoothing ();
/// <summary>
/// <para>If the output style is set to polygonalize, then you can control whether to smooth boundaries.</para>
/// </summary>
  int GetSmoothing();


  // void SmoothingOn ();
/// <summary>
/// <para>If the output style is set to polygonalize, then you can control whether to smooth boundaries.</para>
/// </summary>
  void SmoothingOn();


  // void SmoothingOff ();
/// <summary>
/// <para>If the output style is set to polygonalize, then you can control whether to smooth boundaries.</para>
/// </summary>
  void SmoothingOff();


  // void SetNumberOfSmoothingIterations (int );
/// <summary>
/// <para>Specify the number of smoothing iterations to smooth polygons. (Only in effect if output style is Polygonalize and smoothing is on.)</para>
/// </summary>
  void SetNumberOfSmoothingIterations(int arg0);


  // int GetNumberOfSmoothingIterationsMinValue ();
/// <summary>
/// <para>Specify the number of smoothing iterations to smooth polygons. (Only in effect if output style is Polygonalize and smoothing is on.)</para>
/// </summary>
  int GetNumberOfSmoothingIterationsMinValue();


  // int GetNumberOfSmoothingIterationsMaxValue ();
/// <summary>
/// <para>Specify the number of smoothing iterations to smooth polygons. (Only in effect if output style is Polygonalize and smoothing is on.)</para>
/// </summary>
  int GetNumberOfSmoothingIterationsMaxValue();


  // int GetNumberOfSmoothingIterations ();
/// <summary>
/// <para>Specify the number of smoothing iterations to smooth polygons. (Only in effect if output style is Polygonalize and smoothing is on.)</para>
/// </summary>
  int GetNumberOfSmoothingIterations();


  // void SetDecimation (int );
/// <summary>
/// <para>Turn on/off whether the final polygons should be decimated. whether to smooth boundaries.</para>
/// </summary>
  void SetDecimation(int arg0);


  // int GetDecimation ();
/// <summary>
/// <para>Turn on/off whether the final polygons should be decimated. whether to smooth boundaries.</para>
/// </summary>
  int GetDecimation();


  // void DecimationOn ();
/// <summary>
/// <para>Turn on/off whether the final polygons should be decimated. whether to smooth boundaries.</para>
/// </summary>
  void DecimationOn();


  // void DecimationOff ();
/// <summary>
/// <para>Turn on/off whether the final polygons should be decimated. whether to smooth boundaries.</para>
/// </summary>
  void DecimationOff();


  // void SetDecimationError (double );
/// <summary>
/// <para>Specify the error to use for decimation (if decimation is on). The error is an absolute number--the image spacing and dimensions are used to create points so the error should be consistent with the image size.</para>
/// </summary>
  void SetDecimationError(double arg0);


  // double GetDecimationErrorMinValue ();
/// <summary>
/// <para>Specify the error to use for decimation (if decimation is on). The error is an absolute number--the image spacing and dimensions are used to create points so the error should be consistent with the image size.</para>
/// </summary>
  double GetDecimationErrorMinValue();


  // double GetDecimationErrorMaxValue ();
/// <summary>
/// <para>Specify the error to use for decimation (if decimation is on). The error is an absolute number--the image spacing and dimensions are used to create points so the error should be consistent with the image size.</para>
/// </summary>
  double GetDecimationErrorMaxValue();


  // double GetDecimationError ();
/// <summary>
/// <para>Specify the error to use for decimation (if decimation is on). The error is an absolute number--the image spacing and dimensions are used to create points so the error should be consistent with the image size.</para>
/// </summary>
  double GetDecimationError();


  // void SetError (int );
/// <summary>
/// <para>Specify the error value between two colors where the colors are  considered the same. Only use this if the color mode uses the default 256 table.</para>
/// </summary>
  void SetError(int arg0);


  // int GetErrorMinValue ();
/// <summary>
/// <para>Specify the error value between two colors where the colors are  considered the same. Only use this if the color mode uses the default 256 table.</para>
/// </summary>
  int GetErrorMinValue();


  // int GetErrorMaxValue ();
/// <summary>
/// <para>Specify the error value between two colors where the colors are  considered the same. Only use this if the color mode uses the default 256 table.</para>
/// </summary>
  int GetErrorMaxValue();


  // int GetError ();
/// <summary>
/// <para>Specify the error value between two colors where the colors are  considered the same. Only use this if the color mode uses the default 256 table.</para>
/// </summary>
  int GetError();


  // void SetSubImageSize (int );
/// <summary>
/// <para>Specify the size (n by n pixels) of the largest region to  polygonalize. When the OutputStyle is set to VTK_STYLE_POLYGONALIZE, large amounts of memory are used. In order to process large images, the image is broken into pieces that are at most Size pixels in width and height.</para>
/// </summary>
  void SetSubImageSize(int arg0);


  // int GetSubImageSizeMinValue ();
/// <summary>
/// <para>Specify the size (n by n pixels) of the largest region to  polygonalize. When the OutputStyle is set to VTK_STYLE_POLYGONALIZE, large amounts of memory are used. In order to process large images, the image is broken into pieces that are at most Size pixels in width and height.</para>
/// </summary>
  int GetSubImageSizeMinValue();


  // int GetSubImageSizeMaxValue ();
/// <summary>
/// <para>Specify the size (n by n pixels) of the largest region to  polygonalize. When the OutputStyle is set to VTK_STYLE_POLYGONALIZE, large amounts of memory are used. In order to process large images, the image is broken into pieces that are at most Size pixels in width and height.</para>
/// </summary>
  int GetSubImageSizeMaxValue();


  // int GetSubImageSize ();
/// <summary>
/// <para>Specify the size (n by n pixels) of the largest region to  polygonalize. When the OutputStyle is set to VTK_STYLE_POLYGONALIZE, large amounts of memory are used. In order to process large images, the image is broken into pieces that are at most Size pixels in width and height.</para>
/// </summary>
  int GetSubImageSize();


// Did not wrap:  vtkImageToPolyDataFilter ();


// Did not wrap:  ~vtkImageToPolyDataFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual void PixelizeImage (vtkUnsignedCharArray *pixels, int dims[3], double origin[3], double spacing[3], vtkPolyData *output);


// Did not wrap:  virtual void PolygonalizeImage (vtkUnsignedCharArray *pixels, int dims[3], double origin[3], double spacing[3], vtkPolyData *output);


// Did not wrap:  virtual void RunLengthImage (vtkUnsignedCharArray *pixels, int dims[3], double origin[3], double spacing[3], vtkPolyData *output);


// Did not wrap:  void BuildTable (unsigned char *inPixels);


// Did not wrap:  vtkUnsignedCharArray *QuantizeImage (vtkDataArray *inScalars, int numComp, int type, int dims[3], int ext[4]);


// Did not wrap:  int ProcessImage (vtkUnsignedCharArray *pixels, int dims[2]);


// Did not wrap:  int BuildEdges (vtkUnsignedCharArray *pixels, int dims[3], double origin[3], double spacing[3], vtkUnsignedCharArray *pointDescr, vtkPolyData *edges);


// Did not wrap:  void BuildPolygons (vtkUnsignedCharArray *pointDescr, vtkPolyData *edges, int numPolys, vtkUnsignedCharArray *polyColors);


// Did not wrap:  void SmoothEdges (vtkUnsignedCharArray *pointDescr, vtkPolyData *edges);


// Did not wrap:  void DecimateEdges (vtkPolyData *edges, vtkUnsignedCharArray *pointDescr, double tol2);


// Did not wrap:  void GeneratePolygons (vtkPolyData *edges, int numPolys, vtkPolyData *output, vtkUnsignedCharArray *polyColors, vtkUnsignedCharArray *pointDescr);


// Did not wrap:  int GetNeighbors (unsigned char *ptr, int &i, int &j, int dims[3], unsigned char *neighbors[4], int mode);


// Did not wrap:  void GetIJ (int id, int &i, int &j, int dims[3]);


// Did not wrap:  unsigned char *GetColor (unsigned char *rgb);


// Did not wrap:  int IsSameColor (unsigned char *p1, unsigned char *p2);


// Did not wrap:  vtkImageToPolyDataFilter (const vtkImageToPolyDataFilter &);


// Did not wrap:  void vtkImageToPolyDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageToPolyDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageToPolyDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageToPolyDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageToPolyDataFilter();


};

} // end vtkHybrid
