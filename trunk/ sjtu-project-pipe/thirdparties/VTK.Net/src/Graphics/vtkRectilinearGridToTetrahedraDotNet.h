#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRectilinearGridToTetrahedra : public vtkUnstructuredGridAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRectilinearGridToTetrahedra *NewInstance ();
  vtkRectilinearGridToTetrahedra^ NewInstance();


  // vtkRectilinearGridToTetrahedra *SafeDownCast (vtkObject* o);
  static vtkRectilinearGridToTetrahedra^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRectilinearGridToTetrahedra *New ();


  // void SetTetraPerCellTo5 ();SetTetraPerCell VTK_VOXEL_TO_5_TET 
/// <summary>
/// <para>Set the method to divide each cell (voxel) in the RectilinearGrid into tetrahedra.</para>
/// </summary>
  void SetTetraPerCellTo5();


  // void SetTetraPerCellTo6 ();SetTetraPerCell VTK_VOXEL_TO_6_TET 
/// <summary>
/// <para>Set the method to divide each cell (voxel) in the RectilinearGrid into tetrahedra.</para>
/// </summary>
  void SetTetraPerCellTo6();


  // void SetTetraPerCellTo12 ();SetTetraPerCell VTK_VOXEL_TO_12_TET 
/// <summary>
/// <para>Set the method to divide each cell (voxel) in the RectilinearGrid into tetrahedra.</para>
/// </summary>
  void SetTetraPerCellTo12();


  // void SetTetraPerCellTo5And12 ();SetTetraPerCell VTK_VOXEL_TO_5_AND_12_TET 
/// <summary>
/// <para>Set the method to divide each cell (voxel) in the RectilinearGrid into tetrahedra.</para>
/// </summary>
  void SetTetraPerCellTo5And12();


  // void SetTetraPerCell (int );
/// <summary>
/// <para>Set the method to divide each cell (voxel) in the RectilinearGrid into tetrahedra.</para>
/// </summary>
  void SetTetraPerCell(int arg0);


  // int GetTetraPerCell ();
/// <summary>
/// <para>Set the method to divide each cell (voxel) in the RectilinearGrid into tetrahedra.</para>
/// </summary>
  int GetTetraPerCell();


  // void SetRememberVoxelId (int );
/// <summary>
/// <para>Should the tetrahedra have scalar data indicating which Voxel they came from in the vtkRectilinearGrid?</para>
/// </summary>
  void SetRememberVoxelId(int arg0);


  // int GetRememberVoxelId ();
/// <summary>
/// <para>Should the tetrahedra have scalar data indicating which Voxel they came from in the vtkRectilinearGrid?</para>
/// </summary>
  int GetRememberVoxelId();


  // void RememberVoxelIdOn ();
/// <summary>
/// <para>Should the tetrahedra have scalar data indicating which Voxel they came from in the vtkRectilinearGrid?</para>
/// </summary>
  void RememberVoxelIdOn();


  // void RememberVoxelIdOff ();
/// <summary>
/// <para>Should the tetrahedra have scalar data indicating which Voxel they came from in the vtkRectilinearGrid?</para>
/// </summary>
  void RememberVoxelIdOff();


  // void SetInput (const double Extent[3], const double Spacing[3], const double tol);
/// <summary>
/// <para>This function for convenience for creating a Rectilinear Grid If Spacing does not fit evenly into extent, the last cell will have a different width (or height or depth). If Extent[i]/Spacing[i] is within tol of an integer, then assume the programmer meant an integer for direction i.</para>
/// </summary>
  void SetInput(array<double>^ Extent, array<double>^ Spacing, double tol);


  // void SetInput (const double ExtentX, const double ExtentY, const double ExtentZ, const double SpacingX, const double SpacingY, const double SpacingZ, const double tol);
/// <summary>
/// <para>This version of the function for the wrappers</para>
/// </summary>
  void SetInput(double ExtentX, double ExtentY, double ExtentZ, double SpacingX, double SpacingY, double SpacingZ, double tol);


// Did not wrap:  vtkRectilinearGridToTetrahedra ();


// Did not wrap:  ~vtkRectilinearGridToTetrahedra ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkRectilinearGridToTetrahedra (const vtkRectilinearGridToTetrahedra &);


// Did not wrap:  void vtkRectilinearGridToTetrahedra 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRectilinearGridToTetrahedra(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRectilinearGridToTetrahedra(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRectilinearGridToTetrahedra();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRectilinearGridToTetrahedra();


};

} // end vtkGraphics
