#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVoidArray : public vtkObject
{

public:
// Did not wrap:  static vtkVoidArray *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVoidArray *NewInstance ();
  vtkVoidArray^ NewInstance();


  // vtkVoidArray *SafeDownCast (vtkObject* o);
  static vtkVoidArray^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int Allocate (vtkIdType sz, vtkIdType ext);
/// <summary>
/// <para>Allocate memory for this array. Delete old storage only if necessary. Note that the parameter ext is no longer used.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // void Initialize ();
/// <summary>
/// <para>Release storage and reset array to initial state.</para>
/// </summary>
  void Initialize();


  // int GetDataType ();return VTK_VOID 
/// <summary>
/// <para>Return the size of the data contained in the array.</para>
/// </summary>
  int GetDataType();


  // int GetDataTypeSize ();return sizeof void 
/// <summary>
/// <para>Set the number of void* pointers held in the array.</para>
/// </summary>
  int GetDataTypeSize();


  // void SetNumberOfPointers (vtkIdType number);this Allocate number this NumberOfPointers number 
/// <summary>
/// <para>Get the number of void* pointers held in the array.</para>
/// </summary>
  void SetNumberOfPointers(int number);


  // vtkIdType GetNumberOfPointers ();return this NumberOfPointers 
/// <summary>
/// <para>Get the void* pointer at the ith location.</para>
/// </summary>
  int GetNumberOfPointers();


  // void *GetVoidPointer (vtkIdType id);return this Array id 
/// <summary>
/// <para>Set the void* pointer value at the ith location in the array.</para>
/// </summary>
  System::IntPtr GetVoidPointer(int id);


  // void SetVoidPointer (vtkIdType id, void *ptr);this Array id ptr 
/// <summary>
/// <para>Insert (memory allocation performed) the void* into the ith location in the array.</para>
/// </summary>
  void SetVoidPointer(int id, System::IntPtr ptr);


  // void InsertVoidPointer (vtkIdType i, void *ptr);
/// <summary>
/// <para>Insert (memory allocation performed) the void* into the ith location in the array.</para>
/// </summary>
  void InsertVoidPointer(int i, System::IntPtr ptr);


  // vtkIdType InsertNextVoidPointer (void *tuple);
/// <summary>
/// <para>Insert (memory allocation performed) the void* pointer at the  end of the array.</para>
/// </summary>
  int InsertNextVoidPointer(System::IntPtr tuple);


  // void Reset ();this NumberOfPointers 
/// <summary>
/// <para>Resize the array to just fit the inserted memory. Reclaims extra memory.</para>
/// </summary>
  void Reset();


  // void Squeeze ();this ResizeAndExtend this NumberOfPointers 
/// <summary>
/// <para>Get the address of a particular data index. Performs no checks to verify that the memory has been allocated etc.</para>
/// </summary>
  void Squeeze();


// Did not wrap:  void *GetPointer (vtkIdType id);return this Array id 


// Did not wrap:  void *WritePointer (vtkIdType id, vtkIdType number);


  // void DeepCopy (vtkVoidArray *va);
/// <summary>
/// <para>Deep copy of another void array.</para>
/// </summary>
  void DeepCopy(vtkVoidArray^ va);


// Did not wrap:  vtkVoidArray ();


// Did not wrap:  ~vtkVoidArray ();


// Did not wrap:  void *ResizeAndExtend (vtkIdType sz);


// Did not wrap:  vtkVoidArray (const vtkVoidArray &);


// Did not wrap:  void vtkVoidArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVoidArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVoidArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVoidArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVoidArray();


};

} // end vtkCommon
