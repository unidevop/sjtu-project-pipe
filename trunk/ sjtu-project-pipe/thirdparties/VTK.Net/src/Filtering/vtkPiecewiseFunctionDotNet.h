#pragma once

// managed includes
#include "vtkDataObjectDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPiecewiseFunction : public vtkDataObject
{

public:
// Did not wrap:  static vtkPiecewiseFunction *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPiecewiseFunction *NewInstance ();
  vtkPiecewiseFunction^ NewInstance();


  // vtkPiecewiseFunction *SafeDownCast (vtkObject* o);
  static vtkPiecewiseFunction^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Initialize ();
  void Initialize();


  // void DeepCopy (vtkDataObject *f);
  void DeepCopy(vtkDataObject^ f);


  // void ShallowCopy (vtkDataObject *f);
  void ShallowCopy(vtkDataObject^ f);


  // int GetDataObjectType ();return VTK_PIECEWISE_FUNCTION 
/// <summary>
/// <para>Return what type of dataset this is.</para>
/// </summary>
  int GetDataObjectType();


  // int GetSize ();
/// <summary>
/// <para>Get the number of points used to specify the function</para>
/// </summary>
  int GetSize();


  // int AddPoint (double x, double val);
/// <summary>
/// <para>Add/Remove points to/from the function. If a duplicate point is added then the function value is changed at that location. Return the index of the point (0 based), or -1 on error.</para>
/// </summary>
  int AddPoint(double x, double val);


  // int RemovePoint (double x);
/// <summary>
/// <para>Add/Remove points to/from the function. If a duplicate point is added then the function value is changed at that location. Return the index of the point (0 based), or -1 on error.</para>
/// </summary>
  int RemovePoint(double x);


  // void RemoveAllPoints ();
/// <summary>
/// <para>Removes all points from the function. </para>
/// </summary>
  void RemoveAllPoints();


  // void AddSegment (double x1, double val1, double x2, double val2);
/// <summary>
/// <para>Add a line segment to the function. All points defined between the two points specified are removed from the function.</para>
/// </summary>
  void AddSegment(double x1, double val1, double x2, double val2);


  // double GetValue (double x);
/// <summary>
/// <para>Returns the value of the function at the specified location using the specified interpolation. Returns zero if the specified location is outside the min and max points of the function.</para>
/// </summary>
  double GetValue(double x);


// Did not wrap:  double *GetDataPointer ();return this Function 


  // void FillFromDataPointer (int , double *);
/// <summary>
/// <para>Returns a pointer to the data stored in the table. Fills from a pointer to data stored in a similar table.</para>
/// </summary>
  void FillFromDataPointer(int arg0, array<double>^ arg1);


  // double *GetRange ();
/// <summary>
/// <para>Returns the min and max point locations of the function.</para>
/// </summary>
  array<double>^ GetRange();


  // int AdjustRange (double range[2]);
/// <summary>
/// <para>Remove all points out of the new range, and make sure there is a point at each end of that range. Return 1 on success, 0 otherwise.</para>
/// </summary>
  int AdjustRange(array<double>^ range);


  // void GetTable (double x1, double x2, int size, float *table, int stride);
/// <summary>
/// <para>Fills in an array of function values evaluated at regular intervals. Parameter &quot;stride&quot; is used to step through the output &quot;table&quot;. It is used by vtkColorTransferFunction to fill in an rgb table using three separate piecewise functions and three separate calls to GetTable().</para>
/// </summary>
  void GetTable(double x1, double x2, int size, array<float>^ table, int stride);


  // void GetTable (double x1, double x2, int size, double *table, int stride);
/// <summary>
/// <para>Fills in an array of function values evaluated at regular intervals. Parameter &quot;stride&quot; is used to step through the output &quot;table&quot;. It is used by vtkColorTransferFunction to fill in an rgb table using three separate piecewise functions and three separate calls to GetTable().</para>
/// </summary>
  void GetTable(double x1, double x2, int size, array<double>^ table, int stride);


  // void BuildFunctionFromTable (double x1, double x2, int size, double *table, int stride);
/// <summary>
/// <para>Constructs a piecewise function from a table.  Function range is is set to [x1, x2], function size is set to size, and function points are regularly spaced between x1 and x2.  Parameter &quot;stride&quot; is is step through the input table.  It is used by vtkColorTransferFunction to construct 3 piecewise functions from an rgb table.</para>
/// </summary>
  void BuildFunctionFromTable(double x1, double x2, int size, array<double>^ table, int stride);


  // void SetClamping (int );
/// <summary>
/// <para>When zero range clamping is Off, GetValue() returns 0.0 when a value is requested outside of the points specified. When zero range clamping is On, GetValue() returns the value at the value at the lowest point for a request below all points  specified and returns the value at the highest point for a request  above all points specified. On is the default.</para>
/// </summary>
  void SetClamping(int arg0);


  // int GetClamping ();
/// <summary>
/// <para>When zero range clamping is Off, GetValue() returns 0.0 when a value is requested outside of the points specified. When zero range clamping is On, GetValue() returns the value at the value at the lowest point for a request below all points  specified and returns the value at the highest point for a request  above all points specified. On is the default.</para>
/// </summary>
  int GetClamping();


  // void ClampingOn ();
/// <summary>
/// <para>When zero range clamping is Off, GetValue() returns 0.0 when a value is requested outside of the points specified. When zero range clamping is On, GetValue() returns the value at the value at the lowest point for a request below all points  specified and returns the value at the highest point for a request  above all points specified. On is the default.</para>
/// </summary>
  void ClampingOn();


  // void ClampingOff ();
/// <summary>
/// <para>When zero range clamping is Off, GetValue() returns 0.0 when a value is requested outside of the points specified. When zero range clamping is On, GetValue() returns the value at the value at the lowest point for a request below all points  specified and returns the value at the highest point for a request  above all points specified. On is the default.</para>
/// </summary>
  void ClampingOff();


  // const char *GetType ();
/// <summary>
/// <para>Return the type of function: Function Types:    0 : Constant        (No change in slope between end points)    1 : NonDecreasing   (Always increasing or zero slope)    2 : NonIncreasing   (Always decreasing or zero slope)    3 : Varied          (Contains both decreasing and increasing slopes)</para>
/// </summary>
  System::String^ GetType();


  // double GetFirstNonZeroValue ();
/// <summary>
/// <para>Returns the first point location which precedes a non-zero segment of the function. Note that the value at this point may be zero.</para>
/// </summary>
  double GetFirstNonZeroValue();


// Did not wrap:  vtkPiecewiseFunction ();


// Did not wrap:  ~vtkPiecewiseFunction ();


// Did not wrap:  void IncreaseArraySize ();


// Did not wrap:  int InsertPoint (double x, double val);


// Did not wrap:  void MovePoints (int index, int down);


// Did not wrap:  vtkPiecewiseFunction (const vtkPiecewiseFunction &);


// Did not wrap:  void vtkPiecewiseFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPiecewiseFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPiecewiseFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPiecewiseFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPiecewiseFunction();


};

} // end vtkFiltering
