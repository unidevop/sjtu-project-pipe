#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkColorTransferFunction : public vtkScalarsToColors
{

public:
// Did not wrap:  static vtkColorTransferFunction *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkColorTransferFunction *NewInstance ();
  vtkColorTransferFunction^ NewInstance();


  // vtkColorTransferFunction *SafeDownCast (vtkObject* o);
  static vtkColorTransferFunction^ SafeDownCast(vtkObject^ o);


  // void DeepCopy (vtkColorTransferFunction *f);
  void DeepCopy(vtkColorTransferFunction^ f);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetSize ();return this NumberOfPoints 
/// <summary>
/// <para>How many points are there defining this function?</para>
/// </summary>
  int GetSize();


  // int AddRGBPoint (double x, double r, double g, double b);
/// <summary>
/// <para>Add/Remove a point to/from the function defined in RGB or HSV Return the index of the point (0 based), or -1 on error.</para>
/// </summary>
  int AddRGBPoint(double x, double r, double g, double b);


  // int AddHSVPoint (double x, double h, double s, double v);
/// <summary>
/// <para>Add/Remove a point to/from the function defined in RGB or HSV Return the index of the point (0 based), or -1 on error.</para>
/// </summary>
  int AddHSVPoint(double x, double h, double s, double v);


  // int RemovePoint (double x);
/// <summary>
/// <para>Add/Remove a point to/from the function defined in RGB or HSV Return the index of the point (0 based), or -1 on error.</para>
/// </summary>
  int RemovePoint(double x);


  // void AddRGBSegment (double x1, double r1, double g1, double b1, double x2, double r2, double g2, double b2);
/// <summary>
/// <para>Add two points to the function and remove all the points  between them</para>
/// </summary>
  void AddRGBSegment(double x1, double r1, double g1, double b1, double x2, double r2, double g2, double b2);


  // void AddHSVSegment (double x1, double h1, double s1, double v1, double x2, double h2, double s2, double v2);
/// <summary>
/// <para>Add two points to the function and remove all the points  between them</para>
/// </summary>
  void AddHSVSegment(double x1, double h1, double s1, double v1, double x2, double h2, double s2, double v2);


  // void RemoveAllPoints ();
/// <summary>
/// <para>Remove all points</para>
/// </summary>
  void RemoveAllPoints();


  // double *GetColor (double x);return vtkScalarsToColors GetColor x 
/// <summary>
/// <para>Returns an RGB color for the specified scalar value </para>
/// </summary>
  array<double>^ GetColor(double x);


  // void GetColor (double x, double rgb[3]);
/// <summary>
/// <para>Returns an RGB color for the specified scalar value </para>
/// </summary>
  void GetColor(double x, array<double>^ rgb);


  // double GetRedValue (double x);
/// <summary>
/// <para>Get the color components individually.</para>
/// </summary>
  double GetRedValue(double x);


  // double GetGreenValue (double x);
/// <summary>
/// <para>Get the color components individually.</para>
/// </summary>
  double GetGreenValue(double x);


  // double GetBlueValue (double x);
/// <summary>
/// <para>Get the color components individually.</para>
/// </summary>
  double GetBlueValue(double x);


// Did not wrap:  virtual unsigned char *MapValue (double v);


  // double  *GetRange ();
/// <summary>
/// <para>Returns min and max position of all function points.</para>
/// </summary>
  array<double>^ GetRange();


  // int AdjustRange (double range[2]);
/// <summary>
/// <para>Remove all points out of the new range, and make sure there is a point at each end of that range. Return 1 on success, 0 otherwise.</para>
/// </summary>
  int AdjustRange(array<double>^ range);


  // void GetTable (double x1, double x2, int n, double *table);
/// <summary>
/// <para>Fills in a table of n function values between x1 and x2</para>
/// </summary>
  void GetTable(double x1, double x2, int n, array<double>^ table);


  // void GetTable (double x1, double x2, int n, float *table);
/// <summary>
/// <para>Fills in a table of n function values between x1 and x2</para>
/// </summary>
  void GetTable(double x1, double x2, int n, array<float>^ table);


// Did not wrap:  const unsigned char *GetTable (double x1, double x2, int n);


  // void BuildFunctionFromTable (double x1, double x2, int size, double *table);
/// <summary>
/// <para>Construct a color transfer function from a table. Function range is is set to [x1, x2], each function size is set to size, and function  points are regularly spaced between x1 and x2. Parameter &quot;table&quot; is  assumed to be a block of memory of size [3*size]</para>
/// </summary>
  void BuildFunctionFromTable(double x1, double x2, int size, array<double>^ table);


  // void SetClamping (int );
/// <summary>
/// <para>Sets and gets the clamping value for this transfer function.</para>
/// </summary>
  void SetClamping(int arg0);


  // int GetClampingMinValue ();
/// <summary>
/// <para>Sets and gets the clamping value for this transfer function.</para>
/// </summary>
  int GetClampingMinValue();


  // int GetClampingMaxValue ();
/// <summary>
/// <para>Sets and gets the clamping value for this transfer function.</para>
/// </summary>
  int GetClampingMaxValue();


  // int GetClamping ();
/// <summary>
/// <para>Sets and gets the clamping value for this transfer function.</para>
/// </summary>
  int GetClamping();


  // void ClampingOn ();
/// <summary>
/// <para>Sets and gets the clamping value for this transfer function.</para>
/// </summary>
  void ClampingOn();


  // void ClampingOff ();
/// <summary>
/// <para>Sets and gets the clamping value for this transfer function.</para>
/// </summary>
  void ClampingOff();


  // void SetColorSpace (int );
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  void SetColorSpace(int arg0);


  // int GetColorSpaceMinValue ();
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  int GetColorSpaceMinValue();


  // int GetColorSpaceMaxValue ();
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  int GetColorSpaceMaxValue();


  // void SetColorSpaceToRGB ();this SetColorSpace VTK_CTF_RGB 
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  void SetColorSpaceToRGB();


  // void SetColorSpaceToHSV ();this SetColorSpace VTK_CTF_HSV 
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  void SetColorSpaceToHSV();


  // int GetColorSpace ();
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  int GetColorSpace();


  // void SetHSVWrap (int );
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  void SetHSVWrap(int arg0);


  // int GetHSVWrap ();
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  int GetHSVWrap();


  // void HSVWrapOn ();
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  void HSVWrapOn();


  // void HSVWrapOff ();
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  void HSVWrapOff();


  // void SetColorSpaceToHSVNoWrap ();
/// <summary>
/// <para>Set/Get the color space used for interpolation: RGB, or HSV. In HSV mode, if HSVWrap is on, it  will take the shortest path in Hue (going back through 0 if that is the shortest way around the hue circle) whereas if HSVWrap is off it will not go through 0 (in order the match the current functionality of vtkLookupTable)</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetColorSpaceToHSVNoWrap();


// Did not wrap:  double *GetDataPointer ();return this Function 


  // void FillFromDataPointer (int , double *);
/// <summary>
/// <para>Returns a list of all nodes Fills from a pointer to data stored in a similar list of nodes.</para>
/// </summary>
  void FillFromDataPointer(int arg0, array<double>^ arg1);


  // virtual void MapScalarsThroughTable2 (void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement);
/// <summary>
/// <para>map a set of scalars through the lookup table</para>
/// </summary>
  void MapScalarsThroughTable2(System::IntPtr input, array<unsigned char>^ output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement);


// Did not wrap:  vtkColorTransferFunction ();


// Did not wrap:  ~vtkColorTransferFunction ();


// Did not wrap:  virtual void SetRange (double , double );


// Did not wrap:  void SetRange (double rng[2]);this SetRange rng rng 


// Did not wrap:  vtkColorTransferFunction (const vtkColorTransferFunction &);


// Did not wrap:  void vtkColorTransferFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkColorTransferFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkColorTransferFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkColorTransferFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkColorTransferFunction();


};

} // end vtkFiltering
