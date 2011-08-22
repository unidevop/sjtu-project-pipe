#pragma once

// managed includes
#include "vtkDataArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkIntArray : public vtkDataArray
{

public:
// Did not wrap:  static vtkIntArray *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkIntArray *NewInstance ();
  vtkIntArray^ NewInstance();


  // vtkIntArray *SafeDownCast (vtkObject* o);
  static vtkIntArray^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataType ();return VTK_INT 
/// <summary>
/// <para>Copy the tuple value into a user-provided array.</para>
/// </summary>
  int GetDataType();


  // void GetTupleValue (vtkIdType i, int *tuple);this RealSuperclass GetTupleValue i tuple 
/// <summary>
/// <para>Set the tuple value at the ith location in the array.</para>
/// </summary>
  void GetTupleValue(int i, array<int>^ tuple);


  // void SetTupleValue (vtkIdType i, const int *tuple);this RealSuperclass SetTupleValue i tuple 
/// <summary>
/// <para>Insert (memory allocation performed) the tuple into the ith location in the array.</para>
/// </summary>
  void SetTupleValue(int i, array<int>^ arg1);


  // void InsertTupleValue (vtkIdType i, const int *tuple);this RealSuperclass InsertTupleValue i tuple 
/// <summary>
/// <para>Insert (memory allocation performed) the tuple onto the end of the array.</para>
/// </summary>
  void InsertTupleValue(int i, array<int>^ arg1);


  // vtkIdType InsertNextTupleValue (const int *tuple);return this RealSuperclass InsertNextTupleValue tuple 
/// <summary>
/// <para>Get the data at a particular index.</para>
/// </summary>
  int InsertNextTupleValue(array<int>^ arg0);


  // int GetValue (vtkIdType id);return this RealSuperclass GetValue id 
/// <summary>
/// <para>Set the data at a particular index. Does not do range checking. Make sure you use the method SetNumberOfValues() before inserting data.</para>
/// </summary>
  int GetValue(int id);


  // void SetValue (vtkIdType id, int value);this RealSuperclass SetValue id value 
/// <summary>
/// <para>Specify the number of values for this object to hold. Does an allocation as well as setting the MaxId ivar. Used in conjunction with SetValue() method for fast insertion.</para>
/// </summary>
  void SetValue(int id, int value);


  // void SetNumberOfValues (vtkIdType number);this RealSuperclass SetNumberOfValues number 
/// <summary>
/// <para>Insert data at a specified position in the array.</para>
/// </summary>
  void SetNumberOfValues(int number);


  // void InsertValue (vtkIdType id, int f);this RealSuperclass InsertValue id f 
/// <summary>
/// <para>Insert data at the end of the array. Return its location in the array.</para>
/// </summary>
  void InsertValue(int id, int f);


  // vtkIdType InsertNextValue (int f);return this RealSuperclass InsertNextValue f 
/// <summary>
/// <para>Get the address of a particular data index. Make sure data is allocated for the number of items requested. Set MaxId according to the number of data values requested.</para>
/// </summary>
  int InsertNextValue(int f);


// Did not wrap:  int *WritePointer (vtkIdType id, vtkIdType number);return this RealSuperclass WritePointer id number 


// Did not wrap:  int *GetPointer (vtkIdType id);return this RealSuperclass GetPointer id 


  // void SetArray (int *array, vtkIdType size, int save);this RealSuperclass SetArray array size save 
  void SetArray(array<int>^ arg0, int size, int save);


// Did not wrap:  vtkIntArray (vtkIdType numComp);


// Did not wrap:  ~vtkIntArray ();


// Did not wrap:  vtkIntArray (const vtkIntArray &);


// Did not wrap:  void vtkIntArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkIntArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkIntArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkIntArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkIntArray();


};

} // end vtkCommon
