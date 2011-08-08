#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;

public ref class vtkCompositeDataIterator : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCompositeDataIterator *NewInstance ();
  vtkCompositeDataIterator^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void InitTraversal ();this GoToFirstItem 
/// <summary>
/// <para>Move the iterator to the beginning of the collection.</para>
/// </summary>
  void InitTraversal();


  // virtual void GoToFirstItem () = 0;
/// <summary>
/// <para>Move the iterator to the beginning of the collection.</para>
/// </summary>
  void GoToFirstItem();


  // virtual void GoToNextItem () = 0;
/// <summary>
/// <para>Move the iterator to the next item in the collection.</para>
/// </summary>
  void GoToNextItem();


  // virtual int IsDoneWithTraversal () = 0;
/// <summary>
/// <para>Test whether the iterator is currently pointing to a valid item. Returns 1 for yes, 0 for no.</para>
/// </summary>
  int IsDoneWithTraversal();


  // virtual vtkDataObject *GetCurrentDataObject () = 0;
/// <summary>
/// <para>Get the current item. Valid only when IsDoneWithTraversal() returns 1.</para>
/// </summary>
  vtkDataObject^ GetCurrentDataObject();


// Did not wrap:  vtkCompositeDataIterator ();


// Did not wrap:  virtual ~vtkCompositeDataIterator ();


// Did not wrap:  vtkCompositeDataIterator (const vtkCompositeDataIterator &);


// Did not wrap:  void vtkCompositeDataIterator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCompositeDataIterator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCompositeDataIterator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCompositeDataIterator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCompositeDataIterator();


};

} // end vtkFiltering
