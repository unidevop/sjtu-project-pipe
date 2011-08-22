#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkContourFilter : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkContourFilter *NewInstance ();
  vtkContourFilter^ NewInstance();


  // vtkContourFilter *SafeDownCast (vtkObject* o);
  static vtkContourFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkContourFilter *New ();


  // void SetValue (int i, double value);
/// <summary>
/// <para>Methods to set / get contour values.</para>
/// </summary>
  void SetValue(int i, double value);


  // double GetValue (int i);
/// <summary>
/// <para>Methods to set / get contour values.</para>
/// </summary>
  double GetValue(int i);


// Did not wrap:  double *GetValues ();


  // void GetValues (double *contourValues);
/// <summary>
/// <para>Methods to set / get contour values.</para>
/// </summary>
  void GetValues(array<double>^ contourValues);


  // void SetNumberOfContours (int number);
/// <summary>
/// <para>Methods to set / get contour values.</para>
/// </summary>
  void SetNumberOfContours(int number);


  // int GetNumberOfContours ();
/// <summary>
/// <para>Methods to set / get contour values.</para>
/// </summary>
  int GetNumberOfContours();


  // void GenerateValues (int numContours, double range[2]);
/// <summary>
/// <para>Methods to set / get contour values.</para>
/// </summary>
  void GenerateValues(int numContours, array<double>^ range);


  // void GenerateValues (int numContours, double rangeStart, double rangeEnd);
/// <summary>
/// <para>Methods to set / get contour values.</para>
/// </summary>
  void GenerateValues(int numContours, double rangeStart, double rangeEnd);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Modified GetMTime Because we delegate to vtkContourValues</para>
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


  // void SetUseScalarTree (int );
/// <summary>
/// <para>Enable the use of a scalar tree to accelerate contour extraction.</para>
/// </summary>
  void SetUseScalarTree(int arg0);


  // int GetUseScalarTree ();
/// <summary>
/// <para>Enable the use of a scalar tree to accelerate contour extraction.</para>
/// </summary>
  int GetUseScalarTree();


  // void UseScalarTreeOn ();
/// <summary>
/// <para>Enable the use of a scalar tree to accelerate contour extraction.</para>
/// </summary>
  void UseScalarTreeOn();


  // void UseScalarTreeOff ();
/// <summary>
/// <para>Enable the use of a scalar tree to accelerate contour extraction.</para>
/// </summary>
  void UseScalarTreeOff();


  // virtual void SetScalarTree (vtkScalarTree *);
/// <summary>
/// <para>Enable the use of a scalar tree to accelerate contour extraction.</para>
/// </summary>
  void SetScalarTree(vtkScalarTree^ arg0);


  // vtkScalarTree *GetScalarTree ();
/// <summary>
/// <para>Enable the use of a scalar tree to accelerate contour extraction.</para>
/// </summary>
  vtkScalarTree^ GetScalarTree();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified. The locator is used to merge coincident points.</para>
/// </summary>
  void CreateDefaultLocator();


  // void SetArrayComponent (int );
/// <summary>
/// <para>Set/get which component of the scalar array to contour on; defaults to 0. Currently this feature only works if the input is a vtkImageData.</para>
/// </summary>
  void SetArrayComponent(int arg0);


  // int GetArrayComponent ();
/// <summary>
/// <para>Set/get which component of the scalar array to contour on; defaults to 0. Currently this feature only works if the input is a vtkImageData.</para>
/// </summary>
  int GetArrayComponent();


// Did not wrap:  vtkContourFilter ();


// Did not wrap:  ~vtkContourFilter ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkContourFilter (const vtkContourFilter &);


// Did not wrap:  void vtkContourFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkContourFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkContourFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkContourFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkContourFilter();


};

} // end vtkGraphics
