#pragma once

// managed includes
#include "vtkDataArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkCharArray : public vtkDataArray
{

public:
// Did not wrap:  static vtkCharArray *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCharArray *NewInstance ();
  vtkCharArray^ NewInstance();


  // vtkCharArray *SafeDownCast (vtkObject* o);
  static vtkCharArray^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataType ();return VTK_CHAR 
/// <summary>
/// <para>Copy the tuple value into a user-provided array.</para>
/// </summary>
  int GetDataType();


  // void GetTupleValue (vtkIdType i, char *tuple);this RealSuperclass GetTupleValue i tuple 
/// <summary>
/// <para>Set the tuple value at the ith location in the array.</para>
/// </summary>
  void GetTupleValue(int i, System::String^ tuple);


  // void SetTupleValue (vtkIdType i, const char *tuple);this RealSuperclass SetTupleValue i tuple 
/// <summary>
/// <para>Insert (memory allocation performed) the tuple into the ith location in the array.</para>
/// </summary>
  void SetTupleValue(int i, System::String^ tuple);


  // void InsertTupleValue (vtkIdType i, const char *tuple);this RealSuperclass InsertTupleValue i tuple 
/// <summary>
/// <para>Insert (memory allocation performed) the tuple onto the end of the array.</para>
/// </summary>
  void InsertTupleValue(int i, System::String^ tuple);


  // vtkIdType InsertNextTupleValue (const char *tuple);return this RealSuperclass InsertNextTupleValue tuple 
/// <summary>
/// <para>Get the data at a particular index.</para>
/// </summary>
  int InsertNextTupleValue(System::String^ tuple);


  // char GetValue (vtkIdType id);return this RealSuperclass GetValue id 
/// <summary>
/// <para>Set the data at a particular index. Does not do range checking. Make sure you use the method SetNumberOfValues() before inserting data.</para>
/// </summary>
  char GetValue(int id);


  // void SetValue (vtkIdType id, char value);this RealSuperclass SetValue id value 
/// <summary>
/// <para>Specify the number of values for this object to hold. Does an allocation as well as setting the MaxId ivar. Used in conjunction with SetValue() method for fast insertion.</para>
/// </summary>
  void SetValue(int id, char value);


  // void SetNumberOfValues (vtkIdType number);this RealSuperclass SetNumberOfValues number 
/// <summary>
/// <para>Insert data at a specified position in the array.</para>
/// </summary>
  void SetNumberOfValues(int number);


  // void InsertValue (vtkIdType id, char f);this RealSuperclass InsertValue id f 
/// <summary>
/// <para>Insert data at the end of the array. Return its location in the array.</para>
/// </summary>
  void InsertValue(int id, char f);


  // vtkIdType InsertNextValue (char f);return this RealSuperclass InsertNextValue f 
/// <summary>
/// <para>Get the address of a particular data index. Make sure data is allocated for the number of items requested. Set MaxId according to the number of data values requested.</para>
/// </summary>
  int InsertNextValue(char f);


  // char *WritePointer (vtkIdType id, vtkIdType number);return this RealSuperclass WritePointer id number 
/// <summary>
/// <para>Get the address of a particular data index. Performs no checks to verify that the memory has been allocated etc.</para>
/// </summary>
  System::String^ WritePointer(int id, int number);


  // char *GetPointer (vtkIdType id);return this RealSuperclass GetPointer id 
/// <summary>
/// <para>This method lets the user specify data to be held by the array.  The array argument is a pointer to the data.  size is the size of the array supplied by the user.  Set save to 1 to keep the class from deleting the array when it cleans up or reallocates memory. The class uses the actual array provided; it does not copy the data from the suppled array.</para>
/// </summary>
  System::String^ GetPointer(int id);


  // void SetArray (char *array, vtkIdType size, int save);this RealSuperclass SetArray array size save 
  void SetArray(System::String^ arg0, int size, int save);


// Did not wrap:  vtkCharArray (vtkIdType numComp);


// Did not wrap:  ~vtkCharArray ();


// Did not wrap:  vtkCharArray (const vtkCharArray &);


// Did not wrap:  void vtkCharArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCharArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCharArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCharArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCharArray();


};

} // end vtkCommon
