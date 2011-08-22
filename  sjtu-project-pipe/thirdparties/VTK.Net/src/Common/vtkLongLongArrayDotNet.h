#pragma once

// managed includes
#include "vtkDataArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkLongLongArray : public vtkDataArray
{

public:
// Did not wrap:  static vtkLongLongArray *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLongLongArray *NewInstance ();
  vtkLongLongArray^ NewInstance();


  // vtkLongLongArray *SafeDownCast (vtkObject* o);
  static vtkLongLongArray^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataType ();return VTK_LONG_LONG 
/// <summary>
/// <para>Copy the tuple value into a user-provided array.</para>
/// </summary>
  int GetDataType();


  // void GetTupleValue (vtkIdType i, long long *tuple);this RealSuperclass GetTupleValue i tuple 
/// <summary>
/// <para>Set the tuple value at the ith location in the array.</para>
/// </summary>
  void GetTupleValue(int i, array<signed __int64>^ tuple);


  // void SetTupleValue (vtkIdType i, const long long *tuple);this RealSuperclass SetTupleValue i tuple 
/// <summary>
/// <para>Insert (memory allocation performed) the tuple into the ith location in the array.</para>
/// </summary>
  void SetTupleValue(int i, array<signed __int64>^ tuple);


  // void InsertTupleValue (vtkIdType i, const long long *tuple);this RealSuperclass InsertTupleValue i tuple 
/// <summary>
/// <para>Insert (memory allocation performed) the tuple onto the end of the array.</para>
/// </summary>
  void InsertTupleValue(int i, array<signed __int64>^ tuple);


  // vtkIdType InsertNextTupleValue (const long long *tuple);return this RealSuperclass InsertNextTupleValue tuple 
/// <summary>
/// <para>Get the data at a particular index.</para>
/// </summary>
  int InsertNextTupleValue(array<signed __int64>^ tuple);


  // long long GetValue (vtkIdType id);return this RealSuperclass GetValue id 
/// <summary>
/// <para>Set the data at a particular index. Does not do range checking. Make sure you use the method SetNumberOfValues() before inserting data.</para>
/// </summary>
  signed __int64 GetValue(int id);


  // void SetValue (vtkIdType id, long long value);this RealSuperclass SetValue id value 
/// <summary>
/// <para>Specify the number of values for this object to hold. Does an allocation as well as setting the MaxId ivar. Used in conjunction with SetValue() method for fast insertion.</para>
/// </summary>
  void SetValue(int id, signed __int64 value);


  // void SetNumberOfValues (vtkIdType number);this RealSuperclass SetNumberOfValues number 
/// <summary>
/// <para>Insert data at a specified position in the array.</para>
/// </summary>
  void SetNumberOfValues(int number);


  // void InsertValue (vtkIdType id, long long f);this RealSuperclass InsertValue id f 
/// <summary>
/// <para>Insert data at the end of the array. Return its location in the array.</para>
/// </summary>
  void InsertValue(int id, signed __int64 f);


  // vtkIdType InsertNextValue (long long f);return this RealSuperclass InsertNextValue f 
/// <summary>
/// <para>Get the address of a particular data index. Make sure data is allocated for the number of items requested. Set MaxId according to the number of data values requested.</para>
/// </summary>
  int InsertNextValue(signed __int64 f);


// Did not wrap:  long long *WritePointer (vtkIdType id, vtkIdType number);return this RealSuperclass WritePointer id number 


// Did not wrap:  long long *GetPointer (vtkIdType id);return this RealSuperclass GetPointer id 


  // void SetArray (long long *array, vtkIdType size, int save);this RealSuperclass SetArray array size save 
  void SetArray(array<signed __int64>^ arg0, int size, int save);


// Did not wrap:  vtkLongLongArray (vtkIdType numComp);


// Did not wrap:  ~vtkLongLongArray ();


// Did not wrap:  vtkLongLongArray (const vtkLongLongArray &);


// Did not wrap:  void vtkLongLongArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLongLongArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLongLongArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLongLongArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLongLongArray();


};

} // end vtkCommon
