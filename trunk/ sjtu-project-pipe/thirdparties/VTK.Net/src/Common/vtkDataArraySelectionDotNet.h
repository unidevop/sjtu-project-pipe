#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataArraySelection : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataArraySelection *NewInstance ();
  vtkDataArraySelection^ NewInstance();


  // vtkDataArraySelection *SafeDownCast (vtkObject* o);
  static vtkDataArraySelection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkDataArraySelection *New ();


  // void EnableArray (const char *name);
/// <summary>
/// <para>Enable the array with the given name.  Creates a new entry if none exists.</para>
/// </summary>
  void EnableArray(System::String^ name);


  // void DisableArray (const char *name);
/// <summary>
/// <para>Disable the array with the given name.  Creates a new entry if none exists.</para>
/// </summary>
  void DisableArray(System::String^ name);


  // int ArrayIsEnabled (const char *name);
/// <summary>
/// <para>Return whether the array with the given name is enabled.  If there is no entry, the array is assumed to be disabled.</para>
/// </summary>
  int ArrayIsEnabled(System::String^ name);


  // int ArrayExists (const char *name);
/// <summary>
/// <para>Return whether the array with the given name exists.</para>
/// </summary>
  int ArrayExists(System::String^ name);


  // void EnableAllArrays ();
/// <summary>
/// <para>Enable all arrays that currently have an entry.</para>
/// </summary>
  void EnableAllArrays();


  // void DisableAllArrays ();
/// <summary>
/// <para>Disable all arrays that currently have an entry.</para>
/// </summary>
  void DisableAllArrays();


  // int GetNumberOfArrays ();
/// <summary>
/// <para>Get the number of arrays that currently have an entry.</para>
/// </summary>
  int GetNumberOfArrays();


  // int GetNumberOfArraysEnabled ();
/// <summary>
/// <para>Get the number of arrays that are enabled.</para>
/// </summary>
  int GetNumberOfArraysEnabled();


  // const char *GetArrayName (int index);
/// <summary>
/// <para>Get the name of the array entry at the given index.</para>
/// </summary>
  System::String^ GetArrayName(int index);


  // int GetArrayIndex (const char *name);
/// <summary>
/// <para>Get an index of the array containing name within the enabled arrays</para>
/// </summary>
  int GetArrayIndex(System::String^ name);


  // int GetEnabledArrayIndex (const char *name);
/// <summary>
/// <para>Get the index of an array with the given name among those that are enabled.  Returns -1 if the array is not enabled.</para>
/// </summary>
  int GetEnabledArrayIndex(System::String^ name);


  // int GetArraySetting (int index);
/// <summary>
/// <para>Get whether the array at the given index is enabled.</para>
/// </summary>
  int GetArraySetting(int index);


  // void RemoveAllArrays ();
/// <summary>
/// <para>Remove all array entries.</para>
/// </summary>
  void RemoveAllArrays();


  // void CopySelections (vtkDataArraySelection *selections);
/// <summary>
/// <para>Copy the selections from the given vtkDataArraySelection instance.</para>
/// </summary>
  void CopySelections(vtkDataArraySelection^ selections);


// Did not wrap:  vtkDataArraySelection ();


// Did not wrap:  ~vtkDataArraySelection ();


// Did not wrap:  vtkDataArraySelection (const vtkDataArraySelection &);


// Did not wrap:  void vtkDataArraySelection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataArraySelection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataArraySelection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataArraySelection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataArraySelection();


};

} // end vtkCommon
