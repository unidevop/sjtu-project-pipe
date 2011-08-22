#pragma once

// managed includes
#include "vtkScalarsToColorsDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;
ref class vtkUnsignedCharArray;

public ref class vtkLookupTable : public vtkScalarsToColors
{

public:
// Did not wrap:  static vtkLookupTable *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLookupTable *NewInstance ();
  vtkLookupTable^ NewInstance();


  // vtkLookupTable *SafeDownCast (vtkObject* o);
  static vtkLookupTable^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int Allocate (int sz, int ext);
/// <summary>
/// <para>Allocate a color table of specified size.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // virtual void Build ();
/// <summary>
/// <para>Generate lookup table from hue, saturation, value, alpha min/max values.  Table is built from linear ramp of each value.</para>
/// </summary>
  void Build();


  // virtual void ForceBuild ();
/// <summary>
/// <para>Force the lookup table to regenerate from hue, saturation, value, and alpha min/max values.  Table is built from a linear ramp of each value.  ForceBuild() is useful if a lookup table has been defined manually (using SetTableValue) and then an application decides to rebuild the lookup table using the implicit process.</para>
/// </summary>
  void ForceBuild();


  // void SetRamp (int );
/// <summary>
/// <para>Set the shape of the table ramp to either linear or S-curve. The default is S-curve, which tails off gradually at either end.   The equation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2, while the equation for the linear ramp is simply y = x.  For an S-curve greyscale ramp, you should set NumberOfTableValues to 402  (which is 256*pi/2) to provide room for the tails of the ramp. The equation for the SQRT is y = sqrt(x).  </para>
/// </summary>
  void SetRamp(int arg0);


  // void SetRampToLinear ();this SetRamp VTK_RAMP_LINEAR 
/// <summary>
/// <para>Set the shape of the table ramp to either linear or S-curve. The default is S-curve, which tails off gradually at either end.   The equation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2, while the equation for the linear ramp is simply y = x.  For an S-curve greyscale ramp, you should set NumberOfTableValues to 402  (which is 256*pi/2) to provide room for the tails of the ramp. The equation for the SQRT is y = sqrt(x).  </para>
/// </summary>
  void SetRampToLinear();


  // void SetRampToSCurve ();this SetRamp VTK_RAMP_SCURVE 
/// <summary>
/// <para>Set the shape of the table ramp to either linear or S-curve. The default is S-curve, which tails off gradually at either end.   The equation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2, while the equation for the linear ramp is simply y = x.  For an S-curve greyscale ramp, you should set NumberOfTableValues to 402  (which is 256*pi/2) to provide room for the tails of the ramp. The equation for the SQRT is y = sqrt(x).  </para>
/// </summary>
  void SetRampToSCurve();


  // void SetRampToSQRT ();this SetRamp VTK_RAMP_SQRT 
/// <summary>
/// <para>Set the shape of the table ramp to either linear or S-curve. The default is S-curve, which tails off gradually at either end.   The equation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2, while the equation for the linear ramp is simply y = x.  For an S-curve greyscale ramp, you should set NumberOfTableValues to 402  (which is 256*pi/2) to provide room for the tails of the ramp. The equation for the SQRT is y = sqrt(x).  </para>
/// </summary>
  void SetRampToSQRT();


  // int GetRamp ();
/// <summary>
/// <para>Set the shape of the table ramp to either linear or S-curve. The default is S-curve, which tails off gradually at either end.   The equation used for the S-curve is y = (sin((x - 1/2)*pi) + 1)/2, while the equation for the linear ramp is simply y = x.  For an S-curve greyscale ramp, you should set NumberOfTableValues to 402  (which is 256*pi/2) to provide room for the tails of the ramp. The equation for the SQRT is y = sqrt(x).  </para>
/// </summary>
  int GetRamp();


  // void SetScale (int scale);
/// <summary>
/// <para>Set the type of scale to use, linear or logarithmic.  The default is linear.  If the scale is logarithmic, then the TableRange must not cross the value zero.</para>
/// </summary>
  void SetScale(int scale);


  // void SetScaleToLinear ();this SetScale VTK_SCALE_LINEAR 
/// <summary>
/// <para>Set the type of scale to use, linear or logarithmic.  The default is linear.  If the scale is logarithmic, then the TableRange must not cross the value zero.</para>
/// </summary>
  void SetScaleToLinear();


  // void SetScaleToLog10 ();this SetScale VTK_SCALE_LOG10 
/// <summary>
/// <para>Set the type of scale to use, linear or logarithmic.  The default is linear.  If the scale is logarithmic, then the TableRange must not cross the value zero.</para>
/// </summary>
  void SetScaleToLog10();


  // int GetScale ();
/// <summary>
/// <para>Set the type of scale to use, linear or logarithmic.  The default is linear.  If the scale is logarithmic, then the TableRange must not cross the value zero.</para>
/// </summary>
  int GetScale();


  // void SetTableRange (double r[2]);
/// <summary>
/// <para>Set/Get the minimum/maximum scalar values for scalar mapping. Scalar values less than minimum range value are clamped to minimum range value. Scalar values greater than maximum range value are clamped to maximum range value.</para>
/// </summary>
  void SetTableRange(array<double>^ r);


  // virtual void SetTableRange (double min, double max);
/// <summary>
/// <para>Set/Get the minimum/maximum scalar values for scalar mapping. Scalar values less than minimum range value are clamped to minimum range value. Scalar values greater than maximum range value are clamped to maximum range value.</para>
/// </summary>
  void SetTableRange(double min, double max);


  // double  *GetTableRange ();
/// <summary>
/// <para>Set/Get the minimum/maximum scalar values for scalar mapping. Scalar values less than minimum range value are clamped to minimum range value. Scalar values greater than maximum range value are clamped to maximum range value.</para>
/// </summary>
  array<double>^ GetTableRange();


  // void SetHueRange (double , double );
/// <summary>
/// <para>Set the range in hue (using automatic generation). Hue ranges  between [0,1].</para>
/// </summary>
  void SetHueRange(double arg0, double arg1);


  // void SetHueRange (double  a[2]);
/// <summary>
/// <para>Set the range in hue (using automatic generation). Hue ranges  between [0,1].</para>
/// </summary>
  void SetHueRange(array<double>^ a);


  // double  *GetHueRange ();
/// <summary>
/// <para>Set the range in hue (using automatic generation). Hue ranges  between [0,1].</para>
/// </summary>
  array<double>^ GetHueRange();


  // void SetSaturationRange (double , double );
/// <summary>
/// <para>Set the range in saturation (using automatic generation). Saturation  ranges between [0,1].</para>
/// </summary>
  void SetSaturationRange(double arg0, double arg1);


  // void SetSaturationRange (double  a[2]);
/// <summary>
/// <para>Set the range in saturation (using automatic generation). Saturation  ranges between [0,1].</para>
/// </summary>
  void SetSaturationRange(array<double>^ a);


  // double  *GetSaturationRange ();
/// <summary>
/// <para>Set the range in saturation (using automatic generation). Saturation  ranges between [0,1].</para>
/// </summary>
  array<double>^ GetSaturationRange();


  // void SetValueRange (double , double );
/// <summary>
/// <para>Set the range in value (using automatic generation). Value ranges  between [0,1].</para>
/// </summary>
  void SetValueRange(double arg0, double arg1);


  // void SetValueRange (double  a[2]);
/// <summary>
/// <para>Set the range in value (using automatic generation). Value ranges  between [0,1].</para>
/// </summary>
  void SetValueRange(array<double>^ a);


  // double  *GetValueRange ();
/// <summary>
/// <para>Set the range in value (using automatic generation). Value ranges  between [0,1].</para>
/// </summary>
  array<double>^ GetValueRange();


  // void SetAlphaRange (double , double );
/// <summary>
/// <para>Set the range in alpha (using automatic generation). Alpha ranges from  [0,1].</para>
/// </summary>
  void SetAlphaRange(double arg0, double arg1);


  // void SetAlphaRange (double  a[2]);
/// <summary>
/// <para>Set the range in alpha (using automatic generation). Alpha ranges from  [0,1].</para>
/// </summary>
  void SetAlphaRange(array<double>^ a);


  // double  *GetAlphaRange ();
/// <summary>
/// <para>Set the range in alpha (using automatic generation). Alpha ranges from  [0,1].</para>
/// </summary>
  array<double>^ GetAlphaRange();


// Did not wrap:  unsigned char *MapValue (double v);


  // void GetColor (double x, double rgb[3]);
/// <summary>
/// <para>Map one value through the lookup table and return the color as an RGB array of doubles between 0 and 1.</para>
/// </summary>
  void GetColor(double x, array<double>^ rgb);


  // double GetOpacity (double v);
/// <summary>
/// <para>Map one value through the lookup table and return the alpha value (the opacity) as a double between 0 and 1.</para>
/// </summary>
  double GetOpacity(double v);


  // virtual vtkIdType GetIndex (double v);
/// <summary>
/// <para>Return the table index associated with a particular value.</para>
/// </summary>
  int GetIndex(double v);


  // void SetNumberOfTableValues (vtkIdType number);
/// <summary>
/// <para>Specify the number of values (i.e., colors) in the lookup table.</para>
/// </summary>
  void SetNumberOfTableValues(int number);


  // vtkIdType GetNumberOfTableValues ();return this NumberOfColors 
/// <summary>
/// <para>Specify the number of values (i.e., colors) in the lookup table.</para>
/// </summary>
  int GetNumberOfTableValues();


  // void SetTableValue (vtkIdType indx, double rgba[4]);
/// <summary>
/// <para>Directly load color into lookup table. Use [0,1] double values for color component specification. Make sure that you've either used the Build() method or used SetNumberOfTableValues() prior to using this method.</para>
/// </summary>
  void SetTableValue(int indx, array<double>^ rgba);


  // void SetTableValue (vtkIdType indx, double r, double g, double b, double a);
/// <summary>
/// <para>Directly load color into lookup table. Use [0,1] double values for color  component specification.</para>
/// </summary>
  void SetTableValue(int indx, double r, double g, double b, double a);


  // double *GetTableValue (vtkIdType id);
/// <summary>
/// <para>Return a rgba color value for the given index into the lookup table. Color components are expressed as [0,1] double values.</para>
/// </summary>
  array<double>^ GetTableValue(int id);


  // void GetTableValue (vtkIdType id, double rgba[4]);
/// <summary>
/// <para>Return a rgba color value for the given index into the lookup table. Color components are expressed as [0,1] double values.</para>
/// </summary>
  void GetTableValue(int id, array<double>^ rgba);


// Did not wrap:  unsigned char *GetPointer (const vtkIdType id);return this Table GetPointer id 


// Did not wrap:  unsigned char *WritePointer (const vtkIdType id, const int number);


// Did not wrap:  double *GetRange ();return this GetTableRange 


  // void SetRange (double min, double max);this SetTableRange min max 
/// <summary>
/// <para>Sets/Gets the range of scalars which will be mapped.  This is a duplicate of Get/SetTableRange.</para>
/// </summary>
  void SetRange(double min, double max);


  // void SetRange (double rng[2]);this SetRange rng rng 
/// <summary>
/// <para>Sets/Gets the range of scalars which will be mapped.  This is a duplicate of Get/SetTableRange.</para>
/// </summary>
  void SetRange(array<double>^ rng);


  // void SetNumberOfColors (vtkIdType );
/// <summary>
/// <para>Set the number of colors in the lookup table.  Use SetNumberOfTableValues() instead, it can be used both before and after the table has been built whereas SetNumberOfColors() has no effect after the table has been built.</para>
/// </summary>
  void SetNumberOfColors(int arg0);


  // vtkIdType GetNumberOfColorsMinValue ();
/// <summary>
/// <para>Set the number of colors in the lookup table.  Use SetNumberOfTableValues() instead, it can be used both before and after the table has been built whereas SetNumberOfColors() has no effect after the table has been built.</para>
/// </summary>
  int GetNumberOfColorsMinValue();


  // vtkIdType GetNumberOfColorsMaxValue ();
/// <summary>
/// <para>Set the number of colors in the lookup table.  Use SetNumberOfTableValues() instead, it can be used both before and after the table has been built whereas SetNumberOfColors() has no effect after the table has been built.</para>
/// </summary>
  int GetNumberOfColorsMaxValue();


  // vtkIdType GetNumberOfColors ();
/// <summary>
/// <para>Set the number of colors in the lookup table.  Use SetNumberOfTableValues() instead, it can be used both before and after the table has been built whereas SetNumberOfColors() has no effect after the table has been built.</para>
/// </summary>
  int GetNumberOfColors();


  // void SetTable (vtkUnsignedCharArray *);
/// <summary>
/// <para>Set/Get the internal table array that is used to map the scalars to colors.  The table array is an unsigned char array with 4 components representing RGBA.</para>
/// </summary>
  void SetTable(vtkUnsignedCharArray^ arg0);


  // vtkUnsignedCharArray *GetTable ();
/// <summary>
/// <para>Set/Get the internal table array that is used to map the scalars to colors.  The table array is an unsigned char array with 4 components representing RGBA.</para>
/// </summary>
  vtkUnsignedCharArray^ GetTable();


  // void MapScalarsThroughTable2 (void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement);
/// <summary>
/// <para>map a set of scalars through the lookup table</para>
/// </summary>
  void MapScalarsThroughTable2(System::IntPtr input, array<unsigned char>^ output, int inputDataType, int numberOfValues, int inputIncrement, int outputIncrement);


  // void DeepCopy (vtkLookupTable *lut);
/// <summary>
/// <para>Copy the contents from another LookupTable</para>
/// </summary>
  void DeepCopy(vtkLookupTable^ lut);


// Did not wrap:  vtkLookupTable (int sze, int ext);


// Did not wrap:  ~vtkLookupTable ();


// Did not wrap:  vtkLookupTable (const vtkLookupTable &);


// Did not wrap:  void vtkLookupTable 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLookupTable(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLookupTable(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLookupTable();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLookupTable();


};

} // end vtkCommon
