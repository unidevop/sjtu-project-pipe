#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkUnsignedCharArray;

public ref class vtkScalarsToColors : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkScalarsToColors *NewInstance ();
  vtkScalarsToColors^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Build ();
/// <summary>
/// <para>Perform any processing required (if any) before processing  scalars.</para>
/// </summary>
  void Build();


// Did not wrap:  virtual double *GetRange () = 0;


  // virtual void SetRange (double min, double max) = 0;
/// <summary>
/// <para>Sets/Gets the range of scalars which will be mapped.</para>
/// </summary>
  void SetRange(double min, double max);


  // void SetRange (double rng[2]);this SetRange rng rng 
/// <summary>
/// <para>Map one value through the lookup table and return a color defined as a RGBA unsigned char tuple (4 bytes).</para>
/// </summary>
  void SetRange(array<double>^ rng);


// Did not wrap:  virtual unsigned char *MapValue (double v) = 0;


  // virtual void GetColor (double v, double rgb[3]) = 0;
/// <summary>
/// <para>Map one value through the lookup table and return the color as an RGB array of doubles between 0 and 1.</para>
/// </summary>
  void GetColor(double v, array<double>^ rgb);


  // double *GetColor (double v);this GetColor v this RGB return this RGB 
/// <summary>
/// <para>Map one value through the lookup table and return the alpha value (the opacity) as a double between 0 and 1.</para>
/// </summary>
  array<double>^ GetColor(double v);


  // virtual double GetOpacity (double );return 
/// <summary>
/// <para>Map one value through the lookup table and return the luminance 0.3*red + 0.59*green + 0.11*blue as a double between 0 and 1. Returns the luminance value for the specified scalar value.</para>
/// </summary>
  double GetOpacity(double arg0);


  // double GetLuminance (double x);double rgb this GetColor x rgb return static_cast double rgb rgb rgb 
/// <summary>
/// <para>Specify an additional opacity (alpha) value to blend with. Values != 1 modify the resulting color consistent with the requested form of the output. This is typically used by an actor in order to blend its opacity.</para>
/// </summary>
  double GetLuminance(double x);


  // void SetAlpha (double alpha);
/// <summary>
/// <para>Specify an additional opacity (alpha) value to blend with. Values != 1 modify the resulting color consistent with the requested form of the output. This is typically used by an actor in order to blend its opacity.</para>
/// </summary>
  void SetAlpha(double alpha);


  // double GetAlpha ();
/// <summary>
/// <para>Specify an additional opacity (alpha) value to blend with. Values != 1 modify the resulting color consistent with the requested form of the output. This is typically used by an actor in order to blend its opacity.</para>
/// </summary>
  double GetAlpha();


  // vtkUnsignedCharArray *MapScalars (vtkDataArray *scalars, int colorMode, int component);
/// <summary>
/// <para>An internal method maps a data array into a 4-component, unsigned char RGBA array. The color mode determines the behavior of mapping. If  VTK_COLOR_MODE_DEFAULT is set, then unsigned char data arrays are treated as colors (and converted to RGBA if necessary); otherwise,  the data is mapped through this instance of ScalarsToColors. The offset is used for data arrays with more than one component; it indicates  which component to use to do the blending. When the component argument is -1, then the this object uses its own selected technique to change a vector into a scalar to map.</para>
/// </summary>
  vtkUnsignedCharArray^ MapScalars(vtkDataArray^ scalars, int colorMode, int component);


  // void SetVectorMode (int );
/// <summary>
/// <para>Change mode that maps vectors by magnitude vs. component.</para>
/// </summary>
  void SetVectorMode(int arg0);


  // int GetVectorMode ();
/// <summary>
/// <para>Change mode that maps vectors by magnitude vs. component.</para>
/// </summary>
  int GetVectorMode();


  // void SetVectorModeToMagnitude ();
/// <summary>
/// <para>Change mode that maps vectors by magnitude vs. component.</para>
/// </summary>
  void SetVectorModeToMagnitude();


  // void SetVectorModeToComponent ();
/// <summary>
/// <para>Change mode that maps vectors by magnitude vs. component.</para>
/// </summary>
  void SetVectorModeToComponent();


  // void SetVectorComponent (int );
/// <summary>
/// <para>If the mapper does not select which component of a vector to map to colors, you can specify it here.</para>
/// </summary>
  void SetVectorComponent(int arg0);


  // int GetVectorComponent ();
/// <summary>
/// <para>If the mapper does not select which component of a vector to map to colors, you can specify it here.</para>
/// </summary>
  int GetVectorComponent();


  // void MapScalarsThroughTable (vtkDataArray *scalars, unsigned char *output, int outputFormat);
/// <summary>
/// <para>Map a set of scalars through the lookup table in a single operation.  The output format can be set to VTK_RGBA (4 components),  VTK_RGB (3 components), VTK_LUMINANCE (1 component, greyscale), or VTK_LUMINANCE_ALPHA (2 components) If not supplied, the output format defaults to RGBA.</para>
/// </summary>
  void MapScalarsThroughTable(vtkDataArray^ scalars, array<unsigned char>^ output, int outputFormat);


  // void MapScalarsThroughTable (vtkDataArray *scalars, unsigned char *output);this MapScalarsThroughTable scalars output VTK_RGBA 
/// <summary>
/// <para>An internal method typically not used in applications.</para>
/// </summary>
  void MapScalarsThroughTable(vtkDataArray^ scalars, array<unsigned char>^ output);


  // virtual void MapScalarsThroughTable2 (void *input, unsigned char *output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat) = 0;
/// <summary>
/// <para>An internal method typically not used in applications.</para>
/// </summary>
  void MapScalarsThroughTable2(System::IntPtr input, array<unsigned char>^ output, int inputDataType, int numberOfValues, int inputIncrement, int outputFormat);


  // virtual vtkUnsignedCharArray *ConvertUnsignedCharToRGBA (vtkUnsignedCharArray *colors, int numComp, int numTuples);
/// <summary>
/// <para>An internal method used to convert a color array to RGBA. The method instantiates a vtkUnsignedCharArray and returns it. The user is responsible for managing the memory.</para>
/// </summary>
  vtkUnsignedCharArray^ ConvertUnsignedCharToRGBA(vtkUnsignedCharArray^ colors, int numComp, int numTuples);


// Did not wrap:  vtkScalarsToColors ();


// Did not wrap:  ~vtkScalarsToColors ();


// Did not wrap:  vtkScalarsToColors (const vtkScalarsToColors &);


// Did not wrap:  void vtkScalarsToColors 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkScalarsToColors(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkScalarsToColors(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkScalarsToColors();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkScalarsToColors();


};

} // end vtkCommon
