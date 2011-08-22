#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMarchingSquares : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkMarchingSquares *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMarchingSquares *NewInstance ();
  vtkMarchingSquares^ NewInstance();


  // vtkMarchingSquares *SafeDownCast (vtkObject* o);
  static vtkMarchingSquares^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetImageRange (int  [6]);
/// <summary>
/// <para>Set/Get the i-j-k index range which define a plane on which to generate  contour lines. Using this ivar it is possible to input a 3D volume directly and then generate contour lines on one of the i-j-k planes, or  a portion of a plane.</para>
/// </summary>
  void SetImageRange(array<int>^ arg0);


  // int  *GetImageRange ();
/// <summary>
/// <para>Set/Get the i-j-k index range which define a plane on which to generate  contour lines. Using this ivar it is possible to input a 3D volume directly and then generate contour lines on one of the i-j-k planes, or  a portion of a plane.</para>
/// </summary>
  array<int>^ GetImageRange();


  // void SetImageRange (int imin, int imax, int jmin, int jmax, int kmin, int kmax);
/// <summary>
/// <para>Set/Get the i-j-k index range which define a plane on which to generate  contour lines. Using this ivar it is possible to input a 3D volume directly and then generate contour lines on one of the i-j-k planes, or  a portion of a plane.</para>
/// </summary>
  void SetImageRange(int imin, int imax, int jmin, int jmax, int kmin, int kmax);


  // void SetValue (int i, double value);
/// <summary>
/// <para>Methods to set contour values</para>
/// </summary>
  void SetValue(int i, double value);


  // double GetValue (int i);
/// <summary>
/// <para>Methods to set contour values</para>
/// </summary>
  double GetValue(int i);


// Did not wrap:  double *GetValues ();


  // void GetValues (double *contourValues);
/// <summary>
/// <para>Methods to set contour values</para>
/// </summary>
  void GetValues(array<double>^ contourValues);


  // void SetNumberOfContours (int number);
/// <summary>
/// <para>Methods to set contour values</para>
/// </summary>
  void SetNumberOfContours(int number);


  // int GetNumberOfContours ();
/// <summary>
/// <para>Methods to set contour values</para>
/// </summary>
  int GetNumberOfContours();


  // void GenerateValues (int numContours, double range[2]);
/// <summary>
/// <para>Methods to set contour values</para>
/// </summary>
  void GenerateValues(int numContours, array<double>^ range);


  // void GenerateValues (int numContours, double rangeStart, double rangeEnd);
/// <summary>
/// <para>Methods to set contour values</para>
/// </summary>
  void GenerateValues(int numContours, double rangeStart, double rangeEnd);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Because we delegate to vtkContourValues</para>
/// </summary>
  unsigned long GetMTime();


  // void SetLocator (vtkPointLocator *locator);
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified.  The locator is used to merge coincident points.</para>
/// </summary>
  void CreateDefaultLocator();


// Did not wrap:  vtkMarchingSquares ();


// Did not wrap:  ~vtkMarchingSquares ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkMarchingSquares (const vtkMarchingSquares &);


// Did not wrap:  void vtkMarchingSquares 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMarchingSquares(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMarchingSquares(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMarchingSquares();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMarchingSquares();


};

} // end vtkGraphics
