#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkContourValues : public vtkObject
{

public:
// Did not wrap:  static vtkContourValues *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkContourValues *NewInstance ();
  vtkContourValues^ NewInstance();


  // vtkContourValues *SafeDownCast (vtkObject* o);
  static vtkContourValues^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetValue (int i, double value);
/// <summary>
/// <para>Set the ith contour value.</para>
/// </summary>
  void SetValue(int i, double value);


  // double GetValue (int i);
/// <summary>
/// <para>Get the ith contour value. The return value will be clamped if the index i is out of range.</para>
/// </summary>
  double GetValue(int i);


// Did not wrap:  double *GetValues ();


  // void GetValues (double *contourValues);
/// <summary>
/// <para>Fill a supplied list with contour values. Make sure you've allocated memory of size GetNumberOfContours().</para>
/// </summary>
  void GetValues(array<double>^ contourValues);


  // void SetNumberOfContours (const int number);
/// <summary>
/// <para>Set the number of contours to place into the list. You only really need to use this method to reduce list size. The method SetValue() will automatically increase list size as needed.</para>
/// </summary>
  void SetNumberOfContours(int number);


  // int GetNumberOfContours ();
/// <summary>
/// <para>Return the number of contours in the</para>
/// </summary>
  int GetNumberOfContours();


  // void GenerateValues (int numContours, double range[2]);
/// <summary>
/// <para>Generate numContours equally spaced contour values between specified range. Contour values will include min/max range values.</para>
/// </summary>
  void GenerateValues(int numContours, array<double>^ range);


  // void GenerateValues (int numContours, double rangeStart, double rangeEnd);
/// <summary>
/// <para>Generate numContours equally spaced contour values between specified range. Contour values will include min/max range values.</para>
/// </summary>
  void GenerateValues(int numContours, double rangeStart, double rangeEnd);


// Did not wrap:  vtkContourValues ();


// Did not wrap:  ~vtkContourValues ();


// Did not wrap:  vtkContourValues (const vtkContourValues &);


// Did not wrap:  void vtkContourValues 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkContourValues(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkContourValues(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkContourValues();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkContourValues();


};

} // end vtkCommon
