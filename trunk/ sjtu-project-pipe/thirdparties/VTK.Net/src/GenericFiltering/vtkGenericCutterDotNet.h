#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericCutter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericCutter *NewInstance ();
  vtkGenericCutter^ NewInstance();


  // vtkGenericCutter *SafeDownCast (vtkObject* o);
  static vtkGenericCutter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGenericCutter *New ();


  // void SetValue (int i, double value);
/// <summary>
/// <para>Set a particular contour value at contour number i. The index i ranges  between 0&lt;=i&lt;NumberOfContours.</para>
/// </summary>
  void SetValue(int i, double value);


  // double GetValue (int i);
/// <summary>
/// <para>Get the ith contour value.</para>
/// </summary>
  double GetValue(int i);


// Did not wrap:  double *GetValues ();


  // void GetValues (double *contourValues);
/// <summary>
/// <para>Fill a supplied list with contour values. There will be GetNumberOfContours() values in the list. Make sure you allocate enough memory to hold the list.</para>
/// </summary>
  void GetValues(array<double>^ contourValues);


  // void SetNumberOfContours (int number);
/// <summary>
/// <para>Set the number of contours to place into the list. You only really need to use this method to reduce list size. The method SetValue() will automatically increase list size as needed.</para>
/// </summary>
  void SetNumberOfContours(int number);


  // int GetNumberOfContours ();
/// <summary>
/// <para>Get the number of contours in the list of contour values.</para>
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


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override GetMTime because we delegate to vtkContourValues and refer to vtkImplicitFunction.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void SetCutFunction (vtkImplicitFunction *);
  void SetCutFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetCutFunction ();
  vtkImplicitFunction^ GetCutFunction();


  // void SetGenerateCutScalars (int );
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be interpolated from the implicit function values, and not the input scalar data.</para>
/// </summary>
  void SetGenerateCutScalars(int arg0);


  // int GetGenerateCutScalars ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be interpolated from the implicit function values, and not the input scalar data.</para>
/// </summary>
  int GetGenerateCutScalars();


  // void GenerateCutScalarsOn ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be interpolated from the implicit function values, and not the input scalar data.</para>
/// </summary>
  void GenerateCutScalarsOn();


  // void GenerateCutScalarsOff ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be interpolated from the implicit function values, and not the input scalar data.</para>
/// </summary>
  void GenerateCutScalarsOff();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Specify a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Specify a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified. The  locator is used to merge coincident points.</para>
/// </summary>
  void CreateDefaultLocator();


// Did not wrap:  vtkGenericCutter (vtkImplicitFunction *cfNULL);


// Did not wrap:  ~vtkGenericCutter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkGenericCutter (const vtkGenericCutter &);


// Did not wrap:  void vtkGenericCutter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericCutter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericCutter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericCutter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericCutter();


};

} // end vtkGenericFiltering
