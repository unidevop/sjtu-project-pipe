#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericDataSetTessellator : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkGenericDataSetTessellator *New ();


  // const char *GetClassName ();
/// <summary>
/// <para>Standard VTK methods.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Standard VTK methods.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkGenericDataSetTessellator *NewInstance ();
/// <summary>
/// <para>Standard VTK methods.</para>
/// </summary>
  vtkGenericDataSetTessellator^ NewInstance();


  // vtkGenericDataSetTessellator *SafeDownCast (vtkObject* o);
/// <summary>
/// <para>Standard VTK methods.</para>
/// </summary>
  static vtkGenericDataSetTessellator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetKeepCellIds (int );
  void SetKeepCellIds(int arg0);


  // int GetKeepCellIds ();
  int GetKeepCellIds();


  // void KeepCellIdsOn ();
  void KeepCellIdsOn();


  // void KeepCellIdsOff ();
  void KeepCellIdsOff();


  // void SetMerging (int );
/// <summary>
/// <para>Turn on/off merging of coincident points. Note that is merging is on, points with different point attributes (e.g., normals) are merged, which may cause rendering artifacts.</para>
/// </summary>
  void SetMerging(int arg0);


  // int GetMerging ();
/// <summary>
/// <para>Turn on/off merging of coincident points. Note that is merging is on, points with different point attributes (e.g., normals) are merged, which may cause rendering artifacts.</para>
/// </summary>
  int GetMerging();


  // void MergingOn ();
/// <summary>
/// <para>Turn on/off merging of coincident points. Note that is merging is on, points with different point attributes (e.g., normals) are merged, which may cause rendering artifacts.</para>
/// </summary>
  void MergingOn();


  // void MergingOff ();
/// <summary>
/// <para>Turn on/off merging of coincident points. Note that is merging is on, points with different point attributes (e.g., normals) are merged, which may cause rendering artifacts.</para>
/// </summary>
  void MergingOff();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified.</para>
/// </summary>
  void CreateDefaultLocator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the locator.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkGenericDataSetTessellator ();


// Did not wrap:  ~vtkGenericDataSetTessellator ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkGenericDataSetTessellator (const vtkGenericDataSetTessellator &);


// Did not wrap:  void vtkGenericDataSetTessellator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericDataSetTessellator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericDataSetTessellator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericDataSetTessellator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericDataSetTessellator();


};

} // end vtkGenericFiltering
