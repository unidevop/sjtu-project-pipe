#pragma once

// managed includes
#include "vtkAbstractArrayDotNet.h"
#include "vtkAbstractArrayDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkIdList;
ref class vtkIdTypeArray;
ref class vtkObject;

public ref class vtkStringArray : public vtkAbstractArray
{

public:
// Did not wrap:  static vtkStringArray *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStringArray *NewInstance ();
  vtkStringArray^ NewInstance();


  // vtkStringArray *SafeDownCast (vtkObject* o);
  static vtkStringArray^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetDataType ();return VTK_STRING 
  int GetDataType();


// Did not wrap:  bool IsNumeric ();return false 


  // void Initialize ();
/// <summary>
/// <para>Release storage and reset array to initial state.</para>
/// </summary>
  void Initialize();


  // int GetDataTypeSize ();
/// <summary>
/// <para>Return the size of the data type.  WARNING: This may not mean what you expect with strings.  It will return sizeof(vtkstd::string) and not take into account the data included in any particular string.</para>
/// </summary>
  int GetDataTypeSize();


  // void Squeeze ();this ResizeAndExtend this MaxId 
/// <summary>
/// <para>Resize the array while conserving the data.</para>
/// </summary>
  void Squeeze();


  // int Resize (vtkIdType numTuples);
/// <summary>
/// <para>Resize the array while conserving the data.</para>
/// </summary>
  int Resize(int numTuples);


  // void GetValues (vtkIdList *ptIds, vtkAbstractArray *output);
/// <summary>
/// <para>Given a list of indices, return an array of values.  You must insure that the output array has been previously allocated with enough space to hold the data and that the types match sufficiently to allow conversion (if necessary).</para>
/// </summary>
  void GetValues(vtkIdList^ ptIds, vtkAbstractArray^ output);


  // void GetValues (vtkIdType p1, vtkIdType p2, vtkAbstractArray *output);
/// <summary>
/// <para>Get the values for the range of indices specified (i.e., p1-&gt;p2 inclusive). You must insure that the output array has been previously allocated with enough space to hold the data and that the type of the output array is compatible with the type of this array.</para>
/// </summary>
  void GetValues(int p1, int p2, vtkAbstractArray^ output);


  // void CopyValue (int toIndex, int fromIndex, vtkAbstractArray *sourceArray);
/// <summary>
/// <para>Copy a value from a given source array into this array.</para>
/// </summary>
  void CopyValue(int toIndex, int fromIndex, vtkAbstractArray^ sourceArray);


  // int Allocate (vtkIdType sz, vtkIdType ext);
/// <summary>
/// <para>Allocate memory for this array. Delete old storage only if necessary. Note that ext is no longer used.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // vtkStdString &GetValue (vtkIdType id);
/// <summary>
/// <para>Get the data at a particular index.</para>
/// </summary>
  System::String^ GetValue(int id);


  // void SetValue (vtkIdType id, const char *value);
/// <summary>
/// <para>Set the data at a particular index. Does not do range checking. Make sure you use the method SetNumberOfValues() before inserting data.</para>
/// </summary>
  void SetValue(int id, System::String^ value);


  // void SetNumberOfValues (vtkIdType number);
/// <summary>
/// <para>Specify the number of values for this object to hold. Does an allocation as well as setting the MaxId ivar. Used in conjunction with SetValue() method for fast insertion.</para>
/// </summary>
  void SetNumberOfValues(int number);


  // int GetNumberOfValues ();return this MaxId 
  int GetNumberOfValues();


  // int GetNumberOfElementComponents ();return 
  int GetNumberOfElementComponents();


  // int GetElementComponentSize ();return static_cast int sizeof vtkStdString value_type 
/// <summary>
/// <para>Insert data at a specified position in the array.</para>
/// </summary>
  int GetElementComponentSize();


  // void InsertValue (vtkIdType id, const char *val);
/// <summary>
/// <para>Insert data at a specified position in the array.</para>
/// </summary>
  void InsertValue(int id, System::String^ val);


  // vtkIdType InsertNextValue (const char *f);
/// <summary>
/// <para>Insert data at the end of the array. Return its location in the array.</para>
/// </summary>
  int InsertNextValue(System::String^ f);


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the memory in kilobytes consumed by this data array. Used to support streaming and reading/writing data. The value returned is guaranteed to be greater than or equal to the memory required to actually represent the data represented by this object. The  information returned is valid only after the pipeline has  been updated.</para>
/// <para>This function takes into account the size of the contents of the strings as well as the string containers themselves.</para>
/// </summary>
  unsigned long GetActualMemorySize();


// Did not wrap:  void ConvertToContiguous (vtkDataArray *Data, vtkIdTypeArray *Offsets);


  // void ConvertFromContiguous (vtkDataArray *Data, vtkIdTypeArray *Offsets);
  void ConvertFromContiguous(vtkDataArray^ Data, vtkIdTypeArray^ Offsets);


// Did not wrap:  vtkStringArray (vtkIdType numComp);


// Did not wrap:  ~vtkStringArray ();


// Did not wrap:  vtkStdString *ResizeAndExtend (vtkIdType sz);


// Did not wrap:  vtkStringArray (const vtkStringArray &);


// Did not wrap:  void vtkStringArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStringArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStringArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStringArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStringArray();


};

} // end vtkCommon
