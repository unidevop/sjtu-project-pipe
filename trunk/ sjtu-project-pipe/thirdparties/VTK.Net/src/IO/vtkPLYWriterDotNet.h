#pragma once

// managed includes
#include "vtkPolyDataWriterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPLYWriter : public vtkPolyDataWriter
{

public:
// Did not wrap:  static vtkPLYWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPLYWriter *NewInstance ();
  vtkPLYWriter^ NewInstance();


  // vtkPLYWriter *SafeDownCast (vtkObject* o);
  static vtkPLYWriter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDataByteOrder (int );
/// <summary>
/// <para>If the file type is binary, then the user can specify which byte order to use (little versus big endian).</para>
/// </summary>
  void SetDataByteOrder(int arg0);


  // int GetDataByteOrderMinValue ();
/// <summary>
/// <para>If the file type is binary, then the user can specify which byte order to use (little versus big endian).</para>
/// </summary>
  int GetDataByteOrderMinValue();


  // int GetDataByteOrderMaxValue ();
/// <summary>
/// <para>If the file type is binary, then the user can specify which byte order to use (little versus big endian).</para>
/// </summary>
  int GetDataByteOrderMaxValue();


  // int GetDataByteOrder ();
/// <summary>
/// <para>If the file type is binary, then the user can specify which byte order to use (little versus big endian).</para>
/// </summary>
  int GetDataByteOrder();


  // void SetDataByteOrderToBigEndian ();this SetDataByteOrder VTK_BIG_ENDIAN 
/// <summary>
/// <para>If the file type is binary, then the user can specify which byte order to use (little versus big endian).</para>
/// </summary>
  void SetDataByteOrderToBigEndian();


  // void SetDataByteOrderToLittleEndian ();this SetDataByteOrder VTK_LITTLE_ENDIAN 
/// <summary>
/// <para>These methods enable the user to control how to add color into the PLY output file. The default behavior is as follows. The user provides the name of an array and a component number. If the type of the array is three components, unsigned char, then the data is written as three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties. If the type is not unsigned char, and a lookup table is provided, then the array/component are mapped through the table to generate three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties in the PLY file. The user can also set the ColorMode to specify a uniform color for the whole part (on a vertex colors, face colors, or both. (Note: vertex colors or cell colors may be written, depending on where the named array is found. If points and cells have the arrays with the same name, then both colors will be written.)</para>
/// </summary>
  void SetDataByteOrderToLittleEndian();


  // void SetColorMode (int );
/// <summary>
/// <para>These methods enable the user to control how to add color into the PLY output file. The default behavior is as follows. The user provides the name of an array and a component number. If the type of the array is three components, unsigned char, then the data is written as three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties. If the type is not unsigned char, and a lookup table is provided, then the array/component are mapped through the table to generate three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties in the PLY file. The user can also set the ColorMode to specify a uniform color for the whole part (on a vertex colors, face colors, or both. (Note: vertex colors or cell colors may be written, depending on where the named array is found. If points and cells have the arrays with the same name, then both colors will be written.)</para>
/// </summary>
  void SetColorMode(int arg0);


  // int GetColorMode ();
/// <summary>
/// <para>These methods enable the user to control how to add color into the PLY output file. The default behavior is as follows. The user provides the name of an array and a component number. If the type of the array is three components, unsigned char, then the data is written as three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties. If the type is not unsigned char, and a lookup table is provided, then the array/component are mapped through the table to generate three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties in the PLY file. The user can also set the ColorMode to specify a uniform color for the whole part (on a vertex colors, face colors, or both. (Note: vertex colors or cell colors may be written, depending on where the named array is found. If points and cells have the arrays with the same name, then both colors will be written.)</para>
/// </summary>
  int GetColorMode();


  // void SetColorModeToDefault ();this SetColorMode VTK_COLOR_MODE_DEFAULT 
/// <summary>
/// <para>These methods enable the user to control how to add color into the PLY output file. The default behavior is as follows. The user provides the name of an array and a component number. If the type of the array is three components, unsigned char, then the data is written as three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties. If the type is not unsigned char, and a lookup table is provided, then the array/component are mapped through the table to generate three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties in the PLY file. The user can also set the ColorMode to specify a uniform color for the whole part (on a vertex colors, face colors, or both. (Note: vertex colors or cell colors may be written, depending on where the named array is found. If points and cells have the arrays with the same name, then both colors will be written.)</para>
/// </summary>
  void SetColorModeToDefault();


  // void SetColorModeToUniformCellColor ();this SetColorMode VTK_COLOR_MODE_UNIFORM_CELL_COLOR 
/// <summary>
/// <para>These methods enable the user to control how to add color into the PLY output file. The default behavior is as follows. The user provides the name of an array and a component number. If the type of the array is three components, unsigned char, then the data is written as three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties. If the type is not unsigned char, and a lookup table is provided, then the array/component are mapped through the table to generate three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties in the PLY file. The user can also set the ColorMode to specify a uniform color for the whole part (on a vertex colors, face colors, or both. (Note: vertex colors or cell colors may be written, depending on where the named array is found. If points and cells have the arrays with the same name, then both colors will be written.)</para>
/// </summary>
  void SetColorModeToUniformCellColor();


  // void SetColorModeToUniformPointColor ();this SetColorMode VTK_COLOR_MODE_UNIFORM_POINT_COLOR 
/// <summary>
/// <para>These methods enable the user to control how to add color into the PLY output file. The default behavior is as follows. The user provides the name of an array and a component number. If the type of the array is three components, unsigned char, then the data is written as three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties. If the type is not unsigned char, and a lookup table is provided, then the array/component are mapped through the table to generate three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties in the PLY file. The user can also set the ColorMode to specify a uniform color for the whole part (on a vertex colors, face colors, or both. (Note: vertex colors or cell colors may be written, depending on where the named array is found. If points and cells have the arrays with the same name, then both colors will be written.)</para>
/// </summary>
  void SetColorModeToUniformPointColor();


  // void SetColorModeToUniformColor ();this SetColorMode VTK_COLOR_MODE_UNIFORM_COLOR 
/// <summary>
/// <para>These methods enable the user to control how to add color into the PLY output file. The default behavior is as follows. The user provides the name of an array and a component number. If the type of the array is three components, unsigned char, then the data is written as three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties. If the type is not unsigned char, and a lookup table is provided, then the array/component are mapped through the table to generate three separate &quot;red&quot;, &quot;green&quot; and &quot;blue&quot; properties in the PLY file. The user can also set the ColorMode to specify a uniform color for the whole part (on a vertex colors, face colors, or both. (Note: vertex colors or cell colors may be written, depending on where the named array is found. If points and cells have the arrays with the same name, then both colors will be written.)</para>
/// </summary>
  void SetColorModeToUniformColor();


  // void SetColorModeToOff ();this SetColorMode VTK_COLOR_MODE_OFF 
/// <summary>
/// <para>Specify the array name to use to color the data.</para>
/// </summary>
  void SetColorModeToOff();


  // void SetArrayName (char *);
/// <summary>
/// <para>Specify the array name to use to color the data.</para>
/// </summary>
  void SetArrayName(System::String^ arg0);


  // char *GetArrayName ();
/// <summary>
/// <para>Specify the array name to use to color the data.</para>
/// </summary>
  System::String^ GetArrayName();


  // void SetComponent (int );
/// <summary>
/// <para>Specify the array component to use to color the data.</para>
/// </summary>
  void SetComponent(int arg0);


  // int GetComponentMinValue ();
/// <summary>
/// <para>Specify the array component to use to color the data.</para>
/// </summary>
  int GetComponentMinValue();


  // int GetComponentMaxValue ();
/// <summary>
/// <para>Specify the array component to use to color the data.</para>
/// </summary>
  int GetComponentMaxValue();


  // int GetComponent ();
/// <summary>
/// <para>Specify the array component to use to color the data.</para>
/// </summary>
  int GetComponent();


  // virtual void SetLookupTable (vtkScalarsToColors *);
/// <summary>
/// <para>A lookup table can be specified in order to convert data arrays to RGBA colors.</para>
/// </summary>
  void SetLookupTable(vtkScalarsToColors^ arg0);


  // vtkScalarsToColors *GetLookupTable ();
/// <summary>
/// <para>A lookup table can be specified in order to convert data arrays to RGBA colors.</para>
/// </summary>
  vtkScalarsToColors^ GetLookupTable();


  // void SetColor (unsigned char , unsigned char , unsigned char );
/// <summary>
/// <para>Set the color to use when using a uniform color (either point or cells, or both). The color is specified as a triplet of three unsigned chars between (0,255). This only takes effect when the ColorMode is set to uniform point, uniform cell, or uniform color.</para>
/// </summary>
  void SetColor(unsigned char arg0, unsigned char arg1, unsigned char arg2);


  // void SetColor (unsigned char  a[3]);
/// <summary>
/// <para>Set the color to use when using a uniform color (either point or cells, or both). The color is specified as a triplet of three unsigned chars between (0,255). This only takes effect when the ColorMode is set to uniform point, uniform cell, or uniform color.</para>
/// </summary>
  void SetColor(array<unsigned char>^ a);


  // unsigned char  *GetColor ();
/// <summary>
/// <para>Set the color to use when using a uniform color (either point or cells, or both). The color is specified as a triplet of three unsigned chars between (0,255). This only takes effect when the ColorMode is set to uniform point, uniform cell, or uniform color.</para>
/// </summary>
  array<unsigned char>^ GetColor();


// Did not wrap:  vtkPLYWriter ();


// Did not wrap:  ~vtkPLYWriter ();


// Did not wrap:  void WriteData ();


// Did not wrap:  unsigned char *GetColors (vtkIdType num, vtkDataSetAttributes *dsa);


// Did not wrap:  vtkPLYWriter (const vtkPLYWriter &);


// Did not wrap:  void vtkPLYWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPLYWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPLYWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPLYWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPLYWriter();


};

} // end vtkIO
