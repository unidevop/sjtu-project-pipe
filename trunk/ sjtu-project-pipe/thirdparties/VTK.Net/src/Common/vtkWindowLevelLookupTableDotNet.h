#pragma once

// managed includes
#include "vtkLookupTableDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkWindowLevelLookupTable : public vtkLookupTable
{

public:
// Did not wrap:  static vtkWindowLevelLookupTable *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWindowLevelLookupTable *NewInstance ();
  vtkWindowLevelLookupTable^ NewInstance();


  // vtkWindowLevelLookupTable *SafeDownCast (vtkObject* o);
  static vtkWindowLevelLookupTable^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Build ();
/// <summary>
/// <para>Generate lookup table as a linear ramp between MinimumTableValue and MaximumTableValue.</para>
/// </summary>
  void Build();


  // void SetWindow (double window);if window e window e this Window window this SetTableRange this Level this Window this Level this Window 
/// <summary>
/// <para>Set the window for the lookup table.  The window is the difference between TableRange[0] and TableRange[1].</para>
/// </summary>
  void SetWindow(double window);


  // double GetWindow ();
/// <summary>
/// <para>Set the window for the lookup table.  The window is the difference between TableRange[0] and TableRange[1].</para>
/// </summary>
  double GetWindow();


  // void SetLevel (double level);this Level level this SetTableRange this Level this Window this Level this Window 
/// <summary>
/// <para>Set the Level for the lookup table.  The level is the average of TableRange[0] and TableRange[1].</para>
/// </summary>
  void SetLevel(double level);


  // double GetLevel ();
/// <summary>
/// <para>Set the Level for the lookup table.  The level is the average of TableRange[0] and TableRange[1].</para>
/// </summary>
  double GetLevel();


  // void SetInverseVideo (int iv);
/// <summary>
/// <para>Set inverse video on or off.  You can achieve the same effect by switching the MinimumTableValue and the MaximumTableValue.</para>
/// </summary>
  void SetInverseVideo(int iv);


  // int GetInverseVideo ();
/// <summary>
/// <para>Set inverse video on or off.  You can achieve the same effect by switching the MinimumTableValue and the MaximumTableValue.</para>
/// </summary>
  int GetInverseVideo();


  // void InverseVideoOn ();
/// <summary>
/// <para>Set inverse video on or off.  You can achieve the same effect by switching the MinimumTableValue and the MaximumTableValue.</para>
/// </summary>
  void InverseVideoOn();


  // void InverseVideoOff ();
/// <summary>
/// <para>Set inverse video on or off.  You can achieve the same effect by switching the MinimumTableValue and the MaximumTableValue.</para>
/// </summary>
  void InverseVideoOff();


  // void SetMinimumTableValue (double , double , double , double );
/// <summary>
/// <para>Set the minimum table value.  All lookup table entries below the start of the ramp will be set to this color.  After you change this value, you must re-build the lookup table.</para>
/// </summary>
  void SetMinimumTableValue(double arg0, double arg1, double arg2, double arg3);


  // void SetMinimumTableValue (double  a[4]);
/// <summary>
/// <para>Set the minimum table value.  All lookup table entries below the start of the ramp will be set to this color.  After you change this value, you must re-build the lookup table.</para>
/// </summary>
  void SetMinimumTableValue(array<double>^ a);


  // double  *GetMinimumTableValue ();
/// <summary>
/// <para>Set the minimum table value.  All lookup table entries below the start of the ramp will be set to this color.  After you change this value, you must re-build the lookup table.</para>
/// </summary>
  array<double>^ GetMinimumTableValue();


  // void SetMaximumTableValue (double , double , double , double );
/// <summary>
/// <para>Set the maximum table value. All lookup table entries above the end of the ramp will be set to this color.  After you change this value, you must re-build the lookup table.</para>
/// </summary>
  void SetMaximumTableValue(double arg0, double arg1, double arg2, double arg3);


  // void SetMaximumTableValue (double  a[4]);
/// <summary>
/// <para>Set the maximum table value. All lookup table entries above the end of the ramp will be set to this color.  After you change this value, you must re-build the lookup table.</para>
/// </summary>
  void SetMaximumTableValue(array<double>^ a);


  // double  *GetMaximumTableValue ();
/// <summary>
/// <para>Set the maximum table value. All lookup table entries above the end of the ramp will be set to this color.  After you change this value, you must re-build the lookup table.</para>
/// </summary>
  array<double>^ GetMaximumTableValue();


  // void SetMinimumColor (int r, int g, int b, int a);
/// <summary>
/// <para>@deprecated For backwards compatibility: specify the color using  integers in the range [0,255].  </para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetMinimumColor(int r, int g, int b, int a);


  // void SetMinimumColor (const unsigned char rgba[4]);
/// <summary>
/// <para>@deprecated For backwards compatibility: specify the color using  integers in the range [0,255].  </para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetMinimumColor(array<unsigned char>^ rgba);


  // void GetMinimumColor (unsigned char rgba[4]);
/// <summary>
/// <para>@deprecated For backwards compatibility: specify the color using  integers in the range [0,255].  </para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void GetMinimumColor(array<unsigned char>^ rgba);


// Did not wrap:  unsigned char *GetMinimumColor ();


  // void SetMaximumColor (int r, int g, int b, int a);
/// <summary>
/// <para>@deprecated For backwards compatibility: specify the color using  integers in the range [0,255].  </para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetMaximumColor(int r, int g, int b, int a);


  // void SetMaximumColor (const unsigned char rgba[4]);
/// <summary>
/// <para>@deprecated For backwards compatibility: specify the color using  integers in the range [0,255].  </para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetMaximumColor(array<unsigned char>^ rgba);


  // void GetMaximumColor (unsigned char rgba[4]);
/// <summary>
/// <para>@deprecated For backwards compatibility: specify the color using  integers in the range [0,255].  </para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void GetMaximumColor(array<unsigned char>^ rgba);


// Did not wrap:  unsigned char *GetMaximumColor ();


// Did not wrap:  vtkWindowLevelLookupTable (int sze, int ext);


// Did not wrap:  ~vtkWindowLevelLookupTable ();


// Did not wrap:  vtkWindowLevelLookupTable (const vtkWindowLevelLookupTable &);


// Did not wrap:  void vtkWindowLevelLookupTable 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWindowLevelLookupTable(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWindowLevelLookupTable(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWindowLevelLookupTable();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWindowLevelLookupTable();


};

} // end vtkCommon
