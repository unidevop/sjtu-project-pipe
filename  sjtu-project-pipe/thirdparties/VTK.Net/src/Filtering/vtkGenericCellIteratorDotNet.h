#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkGenericAdaptorCell;

public ref class vtkGenericCellIterator : public vtkObject
{

public:
  // const char *GetClassName ();
/// <summary>
/// <para>Standard VTK construction and type macros.</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Standard VTK construction and type macros.</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkGenericCellIterator *NewInstance ();
/// <summary>
/// <para>Standard VTK construction and type macros.</para>
/// </summary>
  vtkGenericCellIterator^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Begin () = 0;
/// <summary>
/// <para>Move iterator to first position if any (loop initialization).</para>
/// </summary>
  void Begin();


  // virtual int IsAtEnd () = 0;
/// <summary>
/// <para>Is the iterator at the end of traversal?</para>
/// </summary>
  int IsAtEnd();


  // virtual vtkGenericAdaptorCell *NewCell () = 0;
/// <summary>
/// <para>Create an empty cell. The user is responsible for deleting it. \post result_exists: result!=0</para>
/// </summary>
  vtkGenericAdaptorCell^ NewCell();


  // virtual void GetCell (vtkGenericAdaptorCell *c) = 0;
/// <summary>
/// <para>Get the cell at current position. The cell should be instantiated with the NewCell() method. \pre not_at_end: !IsAtEnd() \pre c_exists: c!=0 THREAD SAFE</para>
/// </summary>
  void GetCell(vtkGenericAdaptorCell^ c);


  // virtual vtkGenericAdaptorCell *GetCell () = 0;
/// <summary>
/// <para>Get the cell at the current traversal position. NOT THREAD SAFE \pre not_at_end: !IsAtEnd() \post result_exits: result!=0</para>
/// </summary>
  vtkGenericAdaptorCell^ GetCell();


  // virtual void Next () = 0;
/// <summary>
/// <para>Move the iterator to the next position in the list. \pre not_at_end: !IsAtEnd()</para>
/// </summary>
  void Next();


// Did not wrap:  vtkGenericCellIterator ();


// Did not wrap:  virtual ~vtkGenericCellIterator ();


// Did not wrap:  vtkGenericCellIterator (const vtkGenericCellIterator &);


// Did not wrap:  void vtkGenericCellIterator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericCellIterator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericCellIterator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericCellIterator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericCellIterator();


};

} // end vtkFiltering
