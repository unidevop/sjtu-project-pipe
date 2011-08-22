#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericPointIterator : public vtkObject
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


  // vtkGenericPointIterator *NewInstance ();
/// <summary>
/// <para>Standard VTK construction and type macros.</para>
/// </summary>
  vtkGenericPointIterator^ NewInstance();


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


  // virtual void Next () = 0;
/// <summary>
/// <para>Move the iterator to the next position in the list. \pre not_off: !IsAtEnd()</para>
/// </summary>
  void Next();


// Did not wrap:  virtual double *GetPosition () = 0;


  // virtual void GetPosition (double x[3]) = 0;
/// <summary>
/// <para>Get the coordinates of the point at the current iterator position. \pre not_off: !IsAtEnd() \pre x_exists: x!=0</para>
/// </summary>
  void GetPosition(array<double>^ x);


  // virtual vtkIdType GetId () = 0;
/// <summary>
/// <para>Return the unique identifier for the point, could be non-contiguous. \pre not_off: !IsAtEnd()</para>
/// </summary>
  int GetId();


// Did not wrap:  vtkGenericPointIterator ();


// Did not wrap:  virtual ~vtkGenericPointIterator ();


// Did not wrap:  vtkGenericPointIterator (const vtkGenericPointIterator &);


// Did not wrap:  void vtkGenericPointIterator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericPointIterator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericPointIterator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericPointIterator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericPointIterator();


};

} // end vtkFiltering
