#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSortDataArray : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSortDataArray *NewInstance ();
  vtkSortDataArray^ NewInstance();


  // vtkSortDataArray *SafeDownCast (vtkObject* o);
  static vtkSortDataArray^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkSortDataArray *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static void Sort (vtkIdList *keys);
/// <summary>
/// <para>Sorts the given array.</para>
/// </summary>
  static void Sort(vtkIdList^ keys);


  // static void Sort (vtkDataArray *keys);
/// <summary>
/// <para>Sorts the given array.</para>
/// </summary>
  static void Sort(vtkDataArray^ keys);


  // static void Sort (vtkIdList *keys, vtkIdList *values);
/// <summary>
/// <para>Sorts the given key/value pairs based on the keys.  A pair is given as the entries at a given index of each of the arrays.  Obviously, the two arrays must be of equal size.</para>
/// </summary>
  static void Sort(vtkIdList^ keys, vtkIdList^ values);


  // static void Sort (vtkIdList *keys, vtkDataArray *values);
/// <summary>
/// <para>Sorts the given key/value pairs based on the keys.  A pair is given as the entries at a given index of each of the arrays.  Obviously, the two arrays must be of equal size.</para>
/// </summary>
  static void Sort(vtkIdList^ keys, vtkDataArray^ values);


  // static void Sort (vtkDataArray *keys, vtkIdList *values);
/// <summary>
/// <para>Sorts the given key/value pairs based on the keys.  A pair is given as the entries at a given index of each of the arrays.  Obviously, the two arrays must be of equal size.</para>
/// </summary>
  static void Sort(vtkDataArray^ keys, vtkIdList^ values);


  // static void Sort (vtkDataArray *keys, vtkDataArray *values);
/// <summary>
/// <para>Sorts the given key/value pairs based on the keys.  A pair is given as the entries at a given index of each of the arrays.  Obviously, the two arrays must be of equal size.</para>
/// </summary>
  static void Sort(vtkDataArray^ keys, vtkDataArray^ values);


// Did not wrap:  vtkSortDataArray ();


// Did not wrap:  virtual ~vtkSortDataArray ();


// Did not wrap:  vtkSortDataArray (const vtkSortDataArray &);


// Did not wrap:  void vtkSortDataArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSortDataArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSortDataArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSortDataArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSortDataArray();


};

} // end vtkGraphics
