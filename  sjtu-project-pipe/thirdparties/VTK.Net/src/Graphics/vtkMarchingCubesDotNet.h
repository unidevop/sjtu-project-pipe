#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMarchingCubes : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkMarchingCubes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMarchingCubes *NewInstance ();
  vtkMarchingCubes^ NewInstance();


  // vtkMarchingCubes *SafeDownCast (vtkObject* o);
  static vtkMarchingCubes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetValue (int i, double value);
  void SetValue(int i, double value);


  // double GetValue (int i);
  double GetValue(int i);


// Did not wrap:  double *GetValues ();


  // void GetValues (double *contourValues);
  void GetValues(array<double>^ contourValues);


  // void SetNumberOfContours (int number);
  void SetNumberOfContours(int number);


  // int GetNumberOfContours ();
  int GetNumberOfContours();


  // void GenerateValues (int numContours, double range[2]);
  void GenerateValues(int numContours, array<double>^ range);


  // void GenerateValues (int numContours, double rangeStart, double rangeEnd);
  void GenerateValues(int numContours, double rangeStart, double rangeEnd);


  // unsigned long GetMTime ();
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


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Overide the default locator.  Useful for changing the number of bins for performance or specifying a more aggressive locator.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Overide the default locator.  Useful for changing the number of bins for performance or specifying a more aggressive locator.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified. The locator is used to merge coincident points.</para>
/// </summary>
  void CreateDefaultLocator();


// Did not wrap:  vtkMarchingCubes ();


// Did not wrap:  ~vtkMarchingCubes ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkMarchingCubes (const vtkMarchingCubes &);


// Did not wrap:  void vtkMarchingCubes 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMarchingCubes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMarchingCubes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMarchingCubes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMarchingCubes();


};

} // end vtkGraphics
