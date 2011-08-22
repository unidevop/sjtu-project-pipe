#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkClipDataSet : public vtkUnstructuredGridAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkClipDataSet *NewInstance ();
  vtkClipDataSet^ NewInstance();


  // vtkClipDataSet *SafeDownCast (vtkObject* o);
  static vtkClipDataSet^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkClipDataSet *New ();


  // void SetValue (double );
/// <summary>
/// <para>Set the clipping value of the implicit function (if clipping with implicit function) or scalar value (if clipping with scalars). The default value is 0.0. </para>
/// </summary>
  void SetValue(double arg0);


  // double GetValue ();
/// <summary>
/// <para>Set the clipping value of the implicit function (if clipping with implicit function) or scalar value (if clipping with scalars). The default value is 0.0. </para>
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
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's been clipped away.</para>
/// </summary>
  void SetGenerateClippedOutput(int arg0);


  // int GetGenerateClippedOutput ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's been clipped away.</para>
/// </summary>
  int GetGenerateClippedOutput();


  // void GenerateClippedOutputOn ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's been clipped away.</para>
/// </summary>
  void GenerateClippedOutputOn();


  // void GenerateClippedOutputOff ();
/// <summary>
/// <para>Control whether a second output is generated. The second output contains the polygonal data that's been clipped away.</para>
/// </summary>
  void GenerateClippedOutputOff();


  // void SetMergeTolerance (double );
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate primitives. Note that only 3D cells actually use this instance variable.</para>
/// </summary>
  void SetMergeTolerance(double arg0);


  // double GetMergeToleranceMinValue ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate primitives. Note that only 3D cells actually use this instance variable.</para>
/// </summary>
  double GetMergeToleranceMinValue();


  // double GetMergeToleranceMaxValue ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate primitives. Note that only 3D cells actually use this instance variable.</para>
/// </summary>
  double GetMergeToleranceMaxValue();


  // double GetMergeTolerance ();
/// <summary>
/// <para>Set the tolerance for merging clip intersection points that are near the vertices of cells. This tolerance is used to prevent the generation of degenerate primitives. Note that only 3D cells actually use this instance variable.</para>
/// </summary>
  double GetMergeTolerance();


  // vtkUnstructuredGrid *GetClippedOutput ();
/// <summary>
/// <para>Return the Clipped output.</para>
/// </summary>
  vtkUnstructuredGrid^ GetClippedOutput();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Specify a spatial locator for merging points. By default, an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Specify a spatial locator for merging points. By default, an instance of vtkMergePoints is used.</para>
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


// Did not wrap:  vtkClipDataSet (vtkImplicitFunction *cfNULL);


// Did not wrap:  ~vtkClipDataSet ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void ClipVolume (vtkDataSet *input, vtkUnstructuredGrid *output);


// Did not wrap:  vtkClipDataSet (const vtkClipDataSet &);


// Did not wrap:  void vtkClipDataSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkClipDataSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkClipDataSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkClipDataSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkClipDataSet();


};

} // end vtkGraphics
