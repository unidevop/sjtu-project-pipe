#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGridSynchronizedTemplates3D : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkGridSynchronizedTemplates3D *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGridSynchronizedTemplates3D *NewInstance ();
  vtkGridSynchronizedTemplates3D^ NewInstance();


  // vtkGridSynchronizedTemplates3D *SafeDownCast (vtkObject* o);
  static vtkGridSynchronizedTemplates3D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned long GetMTime ();
/// <summary>
/// <para>Because we delegate to vtkContourValues</para>
/// </summary>
  unsigned long GetMTime();


  // void SetComputeNormals (int );
/// <summary>
/// <para>Set/Get the computation of normals. Normal computation is fairly expensive in both time and storage. If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void SetComputeNormals(int arg0);


  // int GetComputeNormals ();
/// <summary>
/// <para>Set/Get the computation of normals. Normal computation is fairly expensive in both time and storage. If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  int GetComputeNormals();


  // void ComputeNormalsOn ();
/// <summary>
/// <para>Set/Get the computation of normals. Normal computation is fairly expensive in both time and storage. If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void ComputeNormalsOn();


  // void ComputeNormalsOff ();
/// <summary>
/// <para>Set/Get the computation of normals. Normal computation is fairly expensive in both time and storage. If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void ComputeNormalsOff();


  // void SetComputeGradients (int );
/// <summary>
/// <para>Set/Get the computation of gradients. Gradient computation is fairly expensive in both time and storage. Note that if ComputeNormals is on, gradients will have to be calculated, but will not be stored in the output dataset.  If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void SetComputeGradients(int arg0);


  // int GetComputeGradients ();
/// <summary>
/// <para>Set/Get the computation of gradients. Gradient computation is fairly expensive in both time and storage. Note that if ComputeNormals is on, gradients will have to be calculated, but will not be stored in the output dataset.  If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  int GetComputeGradients();


  // void ComputeGradientsOn ();
/// <summary>
/// <para>Set/Get the computation of gradients. Gradient computation is fairly expensive in both time and storage. Note that if ComputeNormals is on, gradients will have to be calculated, but will not be stored in the output dataset.  If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void ComputeGradientsOn();


  // void ComputeGradientsOff ();
/// <summary>
/// <para>Set/Get the computation of gradients. Gradient computation is fairly expensive in both time and storage. Note that if ComputeNormals is on, gradients will have to be calculated, but will not be stored in the output dataset.  If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void ComputeGradientsOff();


  // void SetComputeScalars (int );
/// <summary>
/// <para>Set/Get the computation of scalars.</para>
/// </summary>
  void SetComputeScalars(int arg0);


  // int GetComputeScalars ();
/// <summary>
/// <para>Set/Get the computation of scalars.</para>
/// </summary>
  int GetComputeScalars();


  // void ComputeScalarsOn ();
/// <summary>
/// <para>Set/Get the computation of scalars.</para>
/// </summary>
  void ComputeScalarsOn();


  // void ComputeScalarsOff ();
/// <summary>
/// <para>Set/Get the computation of scalars.</para>
/// </summary>
  void ComputeScalarsOff();


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
/// <para>Needed by templated functions.</para>
/// </summary>
  void GenerateValues(int numContours, double rangeStart, double rangeEnd);


  // int *GetExecuteExtent ();return this ExecuteExtent 
/// <summary>
/// <para>Needed by templated functions.</para>
/// </summary>
  array<int>^ GetExecuteExtent();


// Did not wrap:  void ThreadedExecute (int *exExt, int threadId, vtkStructuredGrid *input, vtkInformationVector *inVec, vtkInformation *outInfo);


  // void SetInputMemoryLimit (long limit);
/// <summary>
/// <para>This filter will initiate streaming so that no piece requested from the input will be larger than this value (KiloBytes).</para>
/// </summary>
  void SetInputMemoryLimit(long limit);


// Did not wrap:  vtkGridSynchronizedTemplates3D ();


// Did not wrap:  ~vtkGridSynchronizedTemplates3D ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkGridSynchronizedTemplates3D (const vtkGridSynchronizedTemplates3D &);


// Did not wrap:  void vtkGridSynchronizedTemplates3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGridSynchronizedTemplates3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGridSynchronizedTemplates3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGridSynchronizedTemplates3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGridSynchronizedTemplates3D();


};

} // end vtkGraphics
