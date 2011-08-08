#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSynchronizedTemplates2D : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkSynchronizedTemplates2D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSynchronizedTemplates2D *NewInstance ();
  vtkSynchronizedTemplates2D^ NewInstance();


  // vtkSynchronizedTemplates2D *SafeDownCast (vtkObject* o);
  static vtkSynchronizedTemplates2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Because we delegate to vtkContourValues</para>
/// </summary>
  unsigned long GetMTime();


  // void SetValue (int i, double value);this ContourValues SetValue i value 
/// <summary>
/// <para>Get the ith contour value.</para>
/// </summary>
  void SetValue(int i, double value);


  // double GetValue (int i);return this ContourValues GetValue i 
/// <summary>
/// <para>Get a pointer to an array of contour values. There will be GetNumberOfContours() values in the list.</para>
/// </summary>
  double GetValue(int i);


// Did not wrap:  double *GetValues ();return this ContourValues GetValues 


  // void GetValues (double *contourValues);this ContourValues GetValues contourValues 
/// <summary>
/// <para>Set the number of contours to place into the list. You only really need to use this method to reduce list size. The method SetValue() will automatically increase list size as needed.</para>
/// </summary>
  void GetValues(array<double>^ contourValues);


  // void SetNumberOfContours (int number);this ContourValues SetNumberOfContours number 
/// <summary>
/// <para>Get the number of contours in the list of contour values.</para>
/// </summary>
  void SetNumberOfContours(int number);


  // int GetNumberOfContours ();return this ContourValues GetNumberOfContours 
/// <summary>
/// <para>Generate numContours equally spaced contour values between specified range. Contour values will include min/max range values.</para>
/// </summary>
  int GetNumberOfContours();


  // void GenerateValues (int numContours, double range[2]);this ContourValues GenerateValues numContours range 
/// <summary>
/// <para>Generate numContours equally spaced contour values between specified range. Contour values will include min/max range values.</para>
/// </summary>
  void GenerateValues(int numContours, array<double>^ range);


  // void GenerateValues (int numContours, double rangeStart, double rangeEnd);this ContourValues GenerateValues numContours rangeStart rangeEnd 
/// <summary>
/// <para>Option to set the point scalars of the output.  The scalars will be the  iso value of course.  By default this flag is on.</para>
/// </summary>
  void GenerateValues(int numContours, double rangeStart, double rangeEnd);


  // void SetComputeScalars (int );
/// <summary>
/// <para>Option to set the point scalars of the output.  The scalars will be the  iso value of course.  By default this flag is on.</para>
/// </summary>
  void SetComputeScalars(int arg0);


  // int GetComputeScalars ();
/// <summary>
/// <para>Option to set the point scalars of the output.  The scalars will be the  iso value of course.  By default this flag is on.</para>
/// </summary>
  int GetComputeScalars();


  // void ComputeScalarsOn ();
/// <summary>
/// <para>Option to set the point scalars of the output.  The scalars will be the  iso value of course.  By default this flag is on.</para>
/// </summary>
  void ComputeScalarsOn();


  // void ComputeScalarsOff ();
/// <summary>
/// <para>Option to set the point scalars of the output.  The scalars will be the  iso value of course.  By default this flag is on.</para>
/// </summary>
  void ComputeScalarsOff();


  // void SetArrayComponent (int );
/// <summary>
/// <para>Set/get which component of the scalar array to contour on; defaults to 0.</para>
/// </summary>
  void SetArrayComponent(int arg0);


  // int GetArrayComponent ();
/// <summary>
/// <para>Set/get which component of the scalar array to contour on; defaults to 0.</para>
/// </summary>
  int GetArrayComponent();


// Did not wrap:  vtkSynchronizedTemplates2D ();


// Did not wrap:  ~vtkSynchronizedTemplates2D ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkSynchronizedTemplates2D (const vtkSynchronizedTemplates2D &);


// Did not wrap:  void vtkSynchronizedTemplates2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSynchronizedTemplates2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSynchronizedTemplates2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSynchronizedTemplates2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSynchronizedTemplates2D();


};

} // end vtkGraphics
