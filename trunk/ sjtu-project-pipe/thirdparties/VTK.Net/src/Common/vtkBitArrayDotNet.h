#pragma once

// managed includes
#include "vtkDataArrayDotNet.h"
#include "vtkDataArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkBitArray : public vtkDataArray
{

public:
// Did not wrap:  static vtkBitArray *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBitArray *NewInstance ();
  vtkBitArray^ NewInstance();


  // vtkBitArray *SafeDownCast (vtkObject* o);
  static vtkBitArray^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int Allocate (vtkIdType sz, vtkIdType ext);
/// <summary>
/// <para>Allocate memory for this array. Delete old storage only if necessary. Note that ext is no longer used.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // void Initialize ();
/// <summary>
/// <para>Release storage and reset array to initial state.</para>
/// </summary>
  void Initialize();


  // int GetDataType ();return VTK_BIT 
  int GetDataType();


  // int GetDataTypeSize ();return 
/// <summary>
/// <para>Set the number of n-tuples in the array.</para>
/// </summary>
  int GetDataTypeSize();


  // void SetNumberOfTuples (vtkIdType number);
/// <summary>
/// <para>Set the number of n-tuples in the array.</para>
/// </summary>
  void SetNumberOfTuples(int number);


// Did not wrap:  double *GetTuple (vtkIdType i);


  // void GetTuple (vtkIdType i, double *tuple);
/// <summary>
/// <para>Copy the tuple value into a user-provided array.</para>
/// </summary>
  void GetTuple(int i, array<double>^ tuple);


  // void SetTuple (vtkIdType i, const float *tuple);
/// <summary>
/// <para>Set the tuple value at the ith location in the array.</para>
/// </summary>
  void SetTuple(int i, array<float>^ tuple);


  // void SetTuple (vtkIdType i, const double *tuple);
/// <summary>
/// <para>Set the tuple value at the ith location in the array.</para>
/// </summary>
  void SetTuple(int i, array<double>^ tuple);


  // void InsertTuple (vtkIdType i, const float *tuple);
/// <summary>
/// <para>Insert (memory allocation performed) the tuple into the ith location in the array.</para>
/// </summary>
  void InsertTuple(int i, array<float>^ tuple);


  // void InsertTuple (vtkIdType i, const double *tuple);
/// <summary>
/// <para>Insert (memory allocation performed) the tuple into the ith location in the array.</para>
/// </summary>
  void InsertTuple(int i, array<double>^ tuple);


  // vtkIdType InsertNextTuple (const float *tuple);
/// <summary>
/// <para>Insert (memory allocation performed) the tuple onto the end of the array.</para>
/// </summary>
  int InsertNextTuple(array<float>^ tuple);


  // vtkIdType InsertNextTuple (const double *tuple);
/// <summary>
/// <para>Insert (memory allocation performed) the tuple onto the end of the array.</para>
/// </summary>
  int InsertNextTuple(array<double>^ tuple);


  // void SetComponent (vtkIdType i, int j, double c);
/// <summary>
/// <para>Set the data component at the ith tuple and jth component location. Note that i is less then NumberOfTuples and j is less then  NumberOfComponents. Make sure enough memory has been allocated (use  SetNumberOfTuples() and  SetNumberOfComponents()).</para>
/// </summary>
  void SetComponent(int i, int j, double c);


  // void Squeeze ();
/// <summary>
/// <para>Free any unneeded memory.</para>
/// </summary>
  void Squeeze();


  // virtual int Resize (vtkIdType numTuples);
/// <summary>
/// <para>Resize the array while conserving the data.</para>
/// </summary>
  int Resize(int numTuples);


  // int GetValue (vtkIdType id);
/// <summary>
/// <para>Get the data at a particular index.</para>
/// </summary>
  int GetValue(int id);


  // void SetNumberOfValues (vtkIdType number);
/// <summary>
/// <para>Fast method based setting of values without memory checks. First use SetNumberOfValues then use SetValue to actually set them. Specify the number of values for this object to hold. Does an allocation as well as setting the MaxId ivar. Used in conjunction with SetValue() method for fast insertion.</para>
/// </summary>
  void SetNumberOfValues(int number);


  // void SetValue (vtkIdType id, int value);
/// <summary>
/// <para>Set the data at a particular index. Does not do range checking. Make sure you use the method SetNumberOfValues() before inserting data.</para>
/// </summary>
  void SetValue(int id, int value);


  // void InsertValue (vtkIdType id, int i);
/// <summary>
/// <para>Insets values and checks to make sure there is enough memory</para>
/// </summary>
  void InsertValue(int id, int i);


  // vtkIdType InsertNextValue (int i);
/// <summary>
/// <para>Insets values and checks to make sure there is enough memory</para>
/// </summary>
  int InsertNextValue(int i);


  // virtual void InsertComponent (vtkIdType i, int j, double c);
/// <summary>
/// <para>Insert the data component at ith tuple and jth component location.  Note that memory allocation is performed as necessary to hold the data.</para>
/// </summary>
  void InsertComponent(int i, int j, double c);


// Did not wrap:  unsigned char *GetPointer (vtkIdType id);return this Array id 


// Did not wrap:  unsigned char *WritePointer (vtkIdType id, vtkIdType number);


  // void *WriteVoidPointer (vtkIdType id, vtkIdType number);return this WritePointer id number 
/// <summary>
/// <para>Get the address of a particular data index. Make sure data is allocated for the number of items requested. Set MaxId according to the number of data values requested.</para>
/// </summary>
  System::IntPtr WriteVoidPointer(int id, int number);


  // void *GetVoidPointer (vtkIdType id);return void this GetPointer id 
/// <summary>
/// <para>Get the address of a particular data index. Make sure data is allocated for the number of items requested. Set MaxId according to the number of data values requested.</para>
/// </summary>
  System::IntPtr GetVoidPointer(int id);


  // void DeepCopy (vtkDataArray *da);
/// <summary>
/// <para>Deep copy of another bit array.</para>
/// </summary>
  void DeepCopy(vtkDataArray^ da);


  // void SetArray (unsigned char *array, vtkIdType size, int save);
/// <summary>
/// <para>This method lets the user specify data to be held by the array.  The  array argument is a pointer to the data.  size is the size of  the array supplied by the user.  Set save to 1 to keep the class from deleting the array when it cleans up or reallocates memory. The class uses the actual array provided; it does not copy the data  from the suppled array.</para>
/// </summary>
  void SetArray(array<unsigned char>^ arg0, int size, int save);


  // void SetVoidArray (void *array, vtkIdType size, int save);this SetArray unsigned char array size save 
/// <summary>
/// <para>This method lets the user specify data to be held by the array.  The  array argument is a pointer to the data.  size is the size of  the array supplied by the user.  Set save to 1 to keep the class from deleting the array when it cleans up or reallocates memory. The class uses the actual array provided; it does not copy the data  from the suppled array.</para>
/// </summary>
  void SetVoidArray(System::IntPtr arg0, int size, int save);


// Did not wrap:  vtkBitArray (vtkIdType numComp);


// Did not wrap:  ~vtkBitArray ();


// Did not wrap:  unsigned char *ResizeAndExtend (vtkIdType sz);


// Did not wrap:  void DeepCopy (vtkDataArray &da);this vtkDataArray DeepCopy da 


// Did not wrap:  vtkBitArray (const vtkBitArray &);


// Did not wrap:  void vtkBitArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBitArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBitArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBitArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBitArray();


};

} // end vtkCommon
