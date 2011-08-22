#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMarchingCubes : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkImageMarchingCubes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMarchingCubes *NewInstance ();
  vtkImageMarchingCubes^ NewInstance();


  // vtkImageMarchingCubes *SafeDownCast (vtkObject* o);
  static vtkImageMarchingCubes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


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
/// <para>Because we delegate to vtkContourValues &amp; refer to vtkImplicitFunction</para>
/// </summary>
  unsigned long GetMTime();


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
/// <para>Set/Get the computation of gradients. Gradient computation is fairly expensive in both time and storage. Note that if ComputeNormals is on, gradients will have to be calculated, but will not be stored in the output dataset. If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void SetComputeGradients(int arg0);


  // int GetComputeGradients ();
/// <summary>
/// <para>Set/Get the computation of gradients. Gradient computation is fairly expensive in both time and storage. Note that if ComputeNormals is on, gradients will have to be calculated, but will not be stored in the output dataset. If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  int GetComputeGradients();


  // void ComputeGradientsOn ();
/// <summary>
/// <para>Set/Get the computation of gradients. Gradient computation is fairly expensive in both time and storage. Note that if ComputeNormals is on, gradients will have to be calculated, but will not be stored in the output dataset. If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void ComputeGradientsOn();


  // void ComputeGradientsOff ();
/// <summary>
/// <para>Set/Get the computation of gradients. Gradient computation is fairly expensive in both time and storage. Note that if ComputeNormals is on, gradients will have to be calculated, but will not be stored in the output dataset. If the output data will be processed by filters that modify topology or geometry, it may be wise to turn Normals and Gradients off.</para>
/// </summary>
  void ComputeGradientsOff();


  // int GetLocatorPoint (int cellX, int cellY, int edge);
  int GetLocatorPoint(int cellX, int cellY, int edge);


  // void AddLocatorPoint (int cellX, int cellY, int edge, int ptId);
  void AddLocatorPoint(int cellX, int cellY, int edge, int ptId);


  // void IncrementLocatorZ ();
  void IncrementLocatorZ();


  // void SetInputMemoryLimit (int );
/// <summary>
/// <para>The InputMemoryLimit determines the chunk size (the number of slices requested at each iteration).  The units of this limit is KiloBytes. For now, only the Z axis is split.</para>
/// </summary>
  void SetInputMemoryLimit(int arg0);


  // int GetInputMemoryLimit ();
/// <summary>
/// <para>The InputMemoryLimit determines the chunk size (the number of slices requested at each iteration).  The units of this limit is KiloBytes. For now, only the Z axis is split.</para>
/// </summary>
  int GetInputMemoryLimit();


// Did not wrap:  vtkImageMarchingCubes ();


// Did not wrap:  ~vtkImageMarchingCubes ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void March (vtkImageData *inData, int chunkMin, int chunkMax, int numContours, double *values);


// Did not wrap:  void InitializeLocator (int min0, int max0, int min1, int max1);


// Did not wrap:  void DeleteLocator ();


// Did not wrap:  int *GetLocatorPointer (int cellX, int cellY, int edge);


// Did not wrap:  vtkImageMarchingCubes (const vtkImageMarchingCubes &);


// Did not wrap:  void vtkImageMarchingCubes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMarchingCubes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMarchingCubes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMarchingCubes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMarchingCubes();


};

} // end vtkGraphics
