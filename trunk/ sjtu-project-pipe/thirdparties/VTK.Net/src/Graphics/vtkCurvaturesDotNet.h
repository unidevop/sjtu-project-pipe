#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCurvatures : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCurvatures *NewInstance ();
  vtkCurvatures^ NewInstance();


  // vtkCurvatures *SafeDownCast (vtkObject* o);
  static vtkCurvatures^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCurvatures *New ();


  // void SetCurvatureType (int );
/// <summary>
/// <para>Set/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature, stored as DataArray &quot;Gauss_Curvature&quot; VTK_CURVATURE_MEAN : Mean curvature, stored as DataArray &quot;Mean_Curvature&quot;</para>
/// </summary>
  void SetCurvatureType(int arg0);


  // int GetCurvatureType ();
/// <summary>
/// <para>Set/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature, stored as DataArray &quot;Gauss_Curvature&quot; VTK_CURVATURE_MEAN : Mean curvature, stored as DataArray &quot;Mean_Curvature&quot;</para>
/// </summary>
  int GetCurvatureType();


  // void SetCurvatureTypeToGaussian ();this SetCurvatureType VTK_CURVATURE_GAUSS 
/// <summary>
/// <para>Set/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature, stored as DataArray &quot;Gauss_Curvature&quot; VTK_CURVATURE_MEAN : Mean curvature, stored as DataArray &quot;Mean_Curvature&quot;</para>
/// </summary>
  void SetCurvatureTypeToGaussian();


  // void SetCurvatureTypeToMean ();this SetCurvatureType VTK_CURVATURE_MEAN 
/// <summary>
/// <para>Set/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature, stored as DataArray &quot;Gauss_Curvature&quot; VTK_CURVATURE_MEAN : Mean curvature, stored as DataArray &quot;Mean_Curvature&quot;</para>
/// </summary>
  void SetCurvatureTypeToMean();


  // void SetCurvatureTypeToMaximum ();this SetCurvatureType VTK_CURVATURE_MAXIMUM 
/// <summary>
/// <para>Set/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature, stored as DataArray &quot;Gauss_Curvature&quot; VTK_CURVATURE_MEAN : Mean curvature, stored as DataArray &quot;Mean_Curvature&quot;</para>
/// </summary>
  void SetCurvatureTypeToMaximum();


  // void SetCurvatureTypeToMinimum ();this SetCurvatureType VTK_CURVATURE_MINIMUM 
/// <summary>
/// <para>Set/Get the flag which inverts the mean curvature calculation for meshes with inward pointing normals (default false)</para>
/// </summary>
  void SetCurvatureTypeToMinimum();


  // void SetInvertMeanCurvature (int );
/// <summary>
/// <para>Set/Get the flag which inverts the mean curvature calculation for meshes with inward pointing normals (default false)</para>
/// </summary>
  void SetInvertMeanCurvature(int arg0);


  // int GetInvertMeanCurvature ();
/// <summary>
/// <para>Set/Get the flag which inverts the mean curvature calculation for meshes with inward pointing normals (default false)</para>
/// </summary>
  int GetInvertMeanCurvature();


  // void InvertMeanCurvatureOn ();
/// <summary>
/// <para>Set/Get the flag which inverts the mean curvature calculation for meshes with inward pointing normals (default false)</para>
/// </summary>
  void InvertMeanCurvatureOn();


  // void InvertMeanCurvatureOff ();
/// <summary>
/// <para>Set/Get the flag which inverts the mean curvature calculation for meshes with inward pointing normals (default false)</para>
/// </summary>
  void InvertMeanCurvatureOff();


// Did not wrap:  vtkCurvatures ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void GetGaussCurvature (vtkPolyData *output);


// Did not wrap:  void GetMeanCurvature (vtkPolyData *output);


// Did not wrap:  void GetMaximumCurvature (vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  void GetMinimumCurvature (vtkPolyData *input, vtkPolyData *output);


// Did not wrap:  vtkCurvatures (const vtkCurvatures &);


// Did not wrap:  void vtkCurvatures 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCurvatures(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCurvatures(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCurvatures();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCurvatures();


};

} // end vtkGraphics
