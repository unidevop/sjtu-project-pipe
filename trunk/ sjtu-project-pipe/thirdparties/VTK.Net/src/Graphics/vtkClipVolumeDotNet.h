#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkClipVolume : public vtkUnstructuredGridAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkClipVolume *NewInstance ();
  vtkClipVolume^ NewInstance();


  // vtkClipVolume *SafeDownCast (vtkObject* o);
  static vtkClipVolume^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkClipVolume *New ();


  // void SetValue (double );
/// <summary>
/// <para>Set the clipping value of the implicit function (if clipping with implicit function) or scalar value (if clipping with scalars). The default value is 0.0.</para>
/// </summary>
  void SetValue(double arg0);


  // double GetValue ();
/// <summary>
/// <para>Set the clipping value of the implicit function (if clipping with implicit function) or scalar value (if clipping with scalars). The default value is 0.0.</para>
/// </summary>
  double GetValue();


  // void SetInsideOut (int );
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, a vertex is considered inside the implicit function if its value is greater than the Value ivar. When InsideOutside is turned on, a vertex is considered inside the implicit function if its implicit function value is less than or equal to the Value ivar.  InsideOut is off by default.</para>
/// </summary>
  void SetInsideOut(int arg0);


  // int GetInsideOut ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, a vertex is considered inside the implicit function if its value is greater than the Value ivar. When InsideOutside is turned on, a vertex is considered inside the implicit function if its implicit function value is less than or equal to the Value ivar.  InsideOut is off by default.</para>
/// </summary>
  int GetInsideOut();


  // void InsideOutOn ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, a vertex is considered inside the implicit function if its value is greater than the Value ivar. When InsideOutside is turned on, a vertex is considered inside the implicit function if its implicit function value is less than or equal to the Value ivar.  InsideOut is off by default.</para>
/// </summary>
  void InsideOutOn();


  // void InsideOutOff ();
/// <summary>
/// <para>Set/Get the InsideOut flag. When off, a vertex is considered inside the implicit function if its value is greater than the Value ivar. When InsideOutside is turned on, a vertex is considered inside the implicit function if its implicit function value is less than or equal to the Value ivar.  InsideOut is off by default.</para>
/// </summary>
  void InsideOutOff();


  // virtual void SetClipFunction (vtkImplicitFunction *);
  void SetClipFunction(vtkImplicitFunction^ arg0);


  // vtkImplicitFunction *GetClipFunction ();
  vtkImplicitFunction^ GetClipFunction();


  // void SetGenerateClipScalars (int );
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be  interpolated from the implicit function values, and not the  input scalar data. If you enable this flag but do not provide an implicit function an error will be reported.</para>
/// </summary>
  void SetGenerateClipScalars(int arg0);


  // int GetGenerateClipScalars ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be  interpolated from the implicit function values, and not the  input scalar data. If you enable this flag but do not provide an implicit function an error will be reported.</para>
/// </summary>
  int GetGenerateClipScalars();


  // void GenerateClipScalarsOn ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be  interpolated from the implicit function values, and not the  input scalar data. If you enable this flag but do not provide an implicit function an error will be reported.</para>
/// </summary>
  void GenerateClipScalarsOn();


  // void GenerateClipScalarsOff ();
/// <summary>
/// <para>If this flag is enabled, then the output scalar values will be  interpolated from the implicit function values, and not the  input scalar data. If you enable this flag but do not provide an implicit function an error will be reported.</para>
/// </summary>
  void GenerateClipScalarsOff();


  // void SetGenerateClippedOutput (int );
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the unstructured grid that's been clipped away.</para>
/// </summary>
  void SetGenerateClippedOutput(int arg0);


  // int GetGenerateClippedOutput ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the unstructured grid that's been clipped away.</para>
/// </summary>
  int GetGenerateClippedOutput();


  // void GenerateClippedOutputOn ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the unstructured grid that's been clipped away.</para>
/// </summary>
  void GenerateClippedOutputOn();


  // void GenerateClippedOutputOff ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the unstructured grid that's been clipped away.</para>
/// </summary>
  void GenerateClippedOutputOff();


  // vtkUnstructuredGrid *GetClippedOutput ();
/// <summary>
/// <para>Return the clipped output.</para>
/// </summary>
  vtkUnstructuredGrid^ GetClippedOutput();


  // void SetMixed3DCellGeneration (int );
/// <summary>
/// <para>Control whether the filter produces a mix of 3D cell types on output, or whether the output cells are all tetrahedra. By default, a mixed set of cells (e.g., tetrahedra and wedges) is produced. (Note: mixed type generation is faster and less overall data is generated.)</para>
/// </summary>
  void SetMixed3DCellGeneration(int arg0);


  // int GetMixed3DCellGeneration ();
/// <summary>
/// <para>Control whether the filter produces a mix of 3D cell types on output, or whether the output cells are all tetrahedra. By default, a mixed set of cells (e.g., tetrahedra and wedges) is produced. (Note: mixed type generation is faster and less overall data is generated.)</para>
/// </summary>
  int GetMixed3DCellGeneration();


  // void Mixed3DCellGenerationOn ();
/// <summary>
/// <para>Control whether the filter produces a mix of 3D cell types on output, or whether the output cells are all tetrahedra. By default, a mixed set of cells (e.g., tetrahedra and wedges) is produced. (Note: mixed type generation is faster and less overall data is generated.)</para>
/// </summary>
  void Mixed3DCellGenerationOn();


  // void Mixed3DCellGenerationOff ();
/// <summary>
/// <para>Control whether the filter produces a mix of 3D cell types on output, or whether the output cells are all tetrahedra. By default, a mixed set of cells (e.g., tetrahedra and wedges) is produced. (Note: mixed type generation is faster and less overall data is generated.)</para>
/// </summary>
  void Mixed3DCellGenerationOff();


  // void SetMergeTolerance (double );
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the corners of voxels. This tolerance is used to prevent the generation of degenerate tetrahedra.</para>
/// </summary>
  void SetMergeTolerance(double arg0);


  // double GetMergeToleranceMinValue ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the corners of voxels. This tolerance is used to prevent the generation of degenerate tetrahedra.</para>
/// </summary>
  double GetMergeToleranceMinValue();


  // double GetMergeToleranceMaxValue ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the corners of voxels. This tolerance is used to prevent the generation of degenerate tetrahedra.</para>
/// </summary>
  double GetMergeToleranceMaxValue();


  // double GetMergeTolerance ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the corners of voxels. This tolerance is used to prevent the generation of degenerate tetrahedra.</para>
/// </summary>
  double GetMergeTolerance();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Set / Get a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Set / Get a spatial locator for merging points. By default,  an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified. The  locator is used to merge coincident points.</para>
/// </summary>
  void CreateDefaultLocator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the mtime also considering the locator and clip function.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkClipVolume (vtkImplicitFunction *cfNULL);


// Did not wrap:  ~vtkClipVolume ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void ClipTets (double value, vtkTetra *clipTetra, vtkDataArray *clipScalars, vtkDataArray *cellScalars, vtkIdList *tetraIds, vtkPoints *tetraPts, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD, vtkCellData *clippedCD, int insideOut);


// Did not wrap:  void ClipVoxel (double value, vtkDataArray *cellScalars, int flip, double origin[3], double spacing[3], vtkIdList *cellIds, vtkPoints *cellPts, vtkPointData *inPD, vtkPointData *outPD, vtkCellData *inCD, vtkIdType cellId, vtkCellData *outCD, vtkCellData *clippedCD);


// Did not wrap:  vtkClipVolume (const vtkClipVolume &);


// Did not wrap:  void vtkClipVolume 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkClipVolume(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkClipVolume(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkClipVolume();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkClipVolume();


};

} // end vtkGraphics
