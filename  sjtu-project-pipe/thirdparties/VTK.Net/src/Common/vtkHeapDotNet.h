#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkHeap : public vtkObject
{

public:
// Did not wrap:  static vtkHeap *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHeap *NewInstance ();
  vtkHeap^ NewInstance();


  // vtkHeap *SafeDownCast (vtkObject* o);
  static vtkHeap^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  void *AllocateMemory (size_t n);


// Did not wrap:  virtual void SetBlockSize (size_t );


// Did not wrap:  virtual size_t GetBlockSize ();return this BlockSize 


  // int GetNumberOfBlocks ();
/// <summary>
/// <para>Get the number of allocations thus far.</para>
/// </summary>
  int GetNumberOfBlocks();


  // int GetNumberOfAllocations ();
/// <summary>
/// <para>Get the number of allocations thus far.</para>
/// </summary>
  int GetNumberOfAllocations();


  // void Reset ();
/// <summary>
/// <para>This methods resets the current allocation location back to the beginning of the heap. This allows reuse of previously allocated memory which may be beneficial to performance in many cases.</para>
/// </summary>
  void Reset();


  // char *StringDup (const char *str);
/// <summary>
/// <para>Convenience method performs string duplication.</para>
/// </summary>
  System::String^ StringDup(System::String^ str);


// Did not wrap:  vtkHeap ();


// Did not wrap:  ~vtkHeap ();


// Did not wrap:  void Add (size_t blockSize);


// Did not wrap:  void CleanAll ();


// Did not wrap:  vtkHeapBlock *DeleteAndNext ();


// Did not wrap:  vtkHeap (const vtkHeap &);


// Did not wrap:  void vtkHeap 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHeap(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHeap(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHeap();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHeap();


};

} // end vtkCommon
