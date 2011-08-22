#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVoxelModeller : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVoxelModeller *NewInstance ();
  vtkVoxelModeller^ NewInstance();


  // vtkVoxelModeller *SafeDownCast (vtkObject* o);
  static vtkVoxelModeller^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkVoxelModeller *New ();


  // double ComputeModelBounds (double origin[3], double ar[3]);
/// <summary>
/// <para>Compute the ModelBounds based on the input geometry.</para>
/// </summary>
  double ComputeModelBounds(array<double>^ origin, array<double>^ ar);


  // void SetSampleDimensions (int i, int j, int k);
/// <summary>
/// <para>Set the i-j-k dimensions on which to sample the distance function.</para>
/// </summary>
  void SetSampleDimensions(int i, int j, int k);


  // void SetSampleDimensions (int dim[3]);
/// <summary>
/// <para>Set the i-j-k dimensions on which to sample the distance function.</para>
/// </summary>
  void SetSampleDimensions(array<int>^ dim);


  // int  *GetSampleDimensions ();
/// <summary>
/// <para>Set the i-j-k dimensions on which to sample the distance function.</para>
/// </summary>
  array<int>^ GetSampleDimensions();


  // void SetMaximumDistance (double );
/// <summary>
/// <para>Specify distance away from surface of input geometry to sample. Smaller values make large increases in performance.</para>
/// </summary>
  void SetMaximumDistance(double arg0);


  // double GetMaximumDistanceMinValue ();
/// <summary>
/// <para>Specify distance away from surface of input geometry to sample. Smaller values make large increases in performance.</para>
/// </summary>
  double GetMaximumDistanceMinValue();


  // double GetMaximumDistanceMaxValue ();
/// <summary>
/// <para>Specify distance away from surface of input geometry to sample. Smaller values make large increases in performance.</para>
/// </summary>
  double GetMaximumDistanceMaxValue();


  // double GetMaximumDistance ();
/// <summary>
/// <para>Specify distance away from surface of input geometry to sample. Smaller values make large increases in performance.</para>
/// </summary>
  double GetMaximumDistance();


  // void SetModelBounds (double bounds[6]);
/// <summary>
/// <para>Specify the position in space to perform the voxelization.</para>
/// </summary>
  void SetModelBounds(array<double>^ bounds);


  // void SetModelBounds (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
/// <summary>
/// <para>Specify the position in space to perform the voxelization.</para>
/// </summary>
  void SetModelBounds(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // double  *GetModelBounds ();
/// <summary>
/// <para>Specify the position in space to perform the voxelization.</para>
/// </summary>
  array<double>^ GetModelBounds();


// Did not wrap:  vtkVoxelModeller ();


// Did not wrap:  ~vtkVoxelModeller ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkVoxelModeller (const vtkVoxelModeller &);


// Did not wrap:  void vtkVoxelModeller 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVoxelModeller(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVoxelModeller(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVoxelModeller();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVoxelModeller();


};

} // end vtkImaging
