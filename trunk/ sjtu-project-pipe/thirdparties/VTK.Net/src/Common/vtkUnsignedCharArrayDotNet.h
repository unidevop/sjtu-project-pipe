#pragma once

// managed includes
#include "vtkDataArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkUnsignedCharArray : public vtkDataArray
{

public:
// Did not wrap:  static vtkUnsignedCharArray *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnsignedCharArray *NewInstance ();
  vtkUnsignedCharArray^ NewInstance();


  // vtkUnsignedCharArray *SafeDownCast (vtkObject* o);
  static vtkUnsignedCharArray^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataType ();return VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Copy the tuple value into a user-provided array.</para>
/// </summary>
  int GetDataType();


  // void GetTupleValue (vtkIdType i, unsigned char *tuple);this RealSuperclass GetTupleValue i tuple 
/// <summary>
/// <para>Set the tuple value at the ith location in the array.</para>
/// </summary>
  void GetTupleValue(int i, array<unsigned char>^ tuple);


  // void SetTupleValue (vtkIdType i, const unsigned char *tuple);this RealSuperclass SetTupleValue i tuple 
/// <summary>
/// <para>Insert (memory allocation performed) the tuple into the ith location in the array.</para>
/// </summary>
  void SetTupleValue(int i, array<unsigned char>^ tuple);


  // void InsertTupleValue (vtkIdType i, const unsigned char *tuple);this RealSuperclass InsertTupleValue i tuple 
/// <summary>
/// <para>Insert (memory allocation performed) the tuple onto the end of the array.</para>
/// </summary>
  void InsertTupleValue(int i, array<unsigned char>^ tuple);


  // vtkIdType InsertNextTupleValue (const unsigned char *tuple);return this RealSuperclass InsertNextTupleValue tuple 
/// <summary>
/// <para>Get the data at a particular index.</para>
/// </summary>
  int InsertNextTupleValue(array<unsigned char>^ tuple);


  // unsigned char GetValue (vtkIdType id);return this RealSuperclass GetValue id 
/// <summary>
/// <para>Set the data at a particular index. Does not do range checking. Make sure you use the method SetNumberOfValues() before inserting data.</para>
/// </summary>
  unsigned char GetValue(int id);


  // void SetValue (vtkIdType id, unsigned char value);this RealSuperclass SetValue id value 
/// <summary>
/// <para>Specify the number of values for this object to hold. Does an allocation as well as setting the MaxId ivar. Used in conjunction with SetValue() method for fast insertion.</para>
/// </summary>
  void SetValue(int id, unsigned char value);


  // void SetNumberOfValues (vtkIdType number);this RealSuperclass SetNumberOfValues number 
/// <summary>
/// <para>Insert data at a specified position in the array.</para>
/// </summary>
  void SetNumberOfValues(int number);


  // void InsertValue (vtkIdType id, unsigned char f);this RealSuperclass InsertValue id f 
/// <summary>
/// <para>Insert data at the end of the array. Return its location in the array.</para>
/// </summary>
  void InsertValue(int id, unsigned char f);


  // vtkIdType InsertNextValue (unsigned char f);return this RealSuperclass InsertNextValue f 
/// <summary>
/// <para>Get the address of a particular data index. Make sure data is allocated for the number of items requested. Set MaxId according to the number of data values requested.</para>
/// </summary>
  int InsertNextValue(unsigned char f);


// Did not wrap:  unsigned char *WritePointer (vtkIdType id, vtkIdType number);return this RealSuperclass WritePointer id number 


// Did not wrap:  unsigned char *GetPointer (vtkIdType id);return this RealSuperclass GetPointer id 


  // void SetArray (unsigned char *array, vtkIdType size, int save);this RealSuperclass SetArray array size save 
  void SetArray(array<unsigned char>^ arg0, int size, int save);


// Did not wrap:  vtkUnsignedCharArray (vtkIdType numComp);


// Did not wrap:  ~vtkUnsignedCharArray ();


// Did not wrap:  vtkUnsignedCharArray (const vtkUnsignedCharArray &);


// Did not wrap:  void vtkUnsignedCharArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnsignedCharArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnsignedCharArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnsignedCharArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnsignedCharArray();


};

} // end vtkCommon
