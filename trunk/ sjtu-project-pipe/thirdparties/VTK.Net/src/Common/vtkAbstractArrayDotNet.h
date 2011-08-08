#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkIdList;
ref class vtkIdTypeArray;

public ref class vtkAbstractArray : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAbstractArray *NewInstance ();
  vtkAbstractArray^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int Allocate (vtkIdType sz, vtkIdType ext) = 0;
/// <summary>
/// <para>Allocate memory for this array. Delete old storage only if necessary. Note that ext is no longer used.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // virtual void Initialize () = 0;
/// <summary>
/// <para>Release storage and reset array to initial state.</para>
/// </summary>
  void Initialize();


  // virtual int GetDataType () = 0;
/// <summary>
/// <para>Return the underlying data type. An integer indicating data type is  returned as specified in vtkSetGet.h.</para>
/// </summary>
  int GetDataType();


  // virtual int GetDataTypeSize () = 0;
/// <summary>
/// <para>Return the size of the underlying data type.  For a bit, 0 is returned.  XXX FIXME How will this method behave for variably-sized objects?</para>
/// </summary>
  int GetDataTypeSize();


  // static unsigned long GetDataTypeSize (int type);
/// <summary>
/// <para>Return the size of the underlying data type.  For a bit, 0 is returned.  XXX FIXME How will this method behave for variably-sized objects?</para>
/// </summary>
  static unsigned long GetDataTypeSize(int type);


  // virtual void GetValues (vtkIdList *indices, vtkAbstractArray *output) = 0;
/// <summary>
/// <para>Given a list of indices, return an array of values.  The caller must ensure that enough room has been allocated within the output array to hold the data and that the data types match well enough to allow any necessary conversions.</para>
/// </summary>
  void GetValues(vtkIdList^ indices, vtkAbstractArray^ output);


  // virtual void GetValues (vtkIdType p1, vtkIdType p2, vtkAbstractArray *output) = 0;
/// <summary>
/// <para>Get the values for the range of indices specified (i.e., p1-&gt;p2 inclusive). You must insure that the output array has been previously allocated with enough space to hold the data and that the type of the output array is compatible with the type of this array.</para>
/// </summary>
  void GetValues(int p1, int p2, vtkAbstractArray^ output);


  // virtual int GetNumberOfElementComponents () = 0;
/// <summary>
/// <para>Return the number of components in a single element of the array. For vtkDataArray and its subclasses, this is the number of components in a tuple.  Arrays with variable-length elements (such as vtkStringArray and vtkCellArray) should return 0.</para>
/// </summary>
  int GetNumberOfElementComponents();


  // virtual int GetElementComponentSize () = 0;
/// <summary>
/// <para>Return the size, in bytes, of the lowest-level element of an array.  For vtkDataArray and subclasses this is the size of the data type.  For vtkStringArray, this is sizeof(vtkStdString::value_type), which winds up being sizeof(char).  </para>
/// </summary>
  int GetElementComponentSize();


  // virtual void *GetVoidPointer (vtkIdType id) = 0;
/// <summary>
/// <para>Return a void pointer. For image pipeline interface and other  special pointer manipulation.</para>
/// </summary>
  System::IntPtr GetVoidPointer(int id);


  // virtual void DeepCopy (vtkAbstractArray *da) = 0;
/// <summary>
/// <para>Deep copy of data. Implementation left to subclasses, which should support as many type conversions as possible given the data type.</para>
/// </summary>
  void DeepCopy(vtkAbstractArray^ da);


  // virtual void CopyValue (int toIndex, int fromIndex, vtkAbstractArray *sourceArray) = 0;
/// <summary>
/// <para>Copy an element from one array into an element on this array.  </para>
/// </summary>
  void CopyValue(int toIndex, int fromIndex, vtkAbstractArray^ sourceArray);


  // virtual void Squeeze () = 0;
/// <summary>
/// <para>Resize object to just fit data requirement. Reclaims extra memory.</para>
/// </summary>
  void Squeeze();


  // virtual int Resize (vtkIdType numTuples) = 0;
/// <summary>
/// <para>Resize the array while conserving the data.</para>
/// </summary>
  int Resize(int numTuples);


  // void Reset ();this MaxId 
/// <summary>
/// <para>Return the size of the data.</para>
/// </summary>
  void Reset();


  // vtkIdType GetSize ();return this Size 
/// <summary>
/// <para>What is the maximum id currently in the array.</para>
/// </summary>
  int GetSize();


  // vtkIdType GetMaxId ();return this MaxId 
/// <summary>
/// <para>This method lets the user specify data to be held by the array.  The  array argument is a pointer to the data.  size is the size of  the array supplied by the user.  Set save to 1 to keep the class from deleting the array when it cleans up or reallocates memory. The class uses the actual array provided; it does not copy the data  from the supplied array.</para>
/// </summary>
  int GetMaxId();


  // virtual void SetVoidArray (void *, vtkIdType , int );
/// <summary>
/// <para>This method lets the user specify data to be held by the array.  The  array argument is a pointer to the data.  size is the size of  the array supplied by the user.  Set save to 1 to keep the class from deleting the array when it cleans up or reallocates memory. The class uses the actual array provided; it does not copy the data  from the supplied array.</para>
/// </summary>
  void SetVoidArray(System::IntPtr arg0, int arg1, int arg2);


  // virtual unsigned long GetActualMemorySize () = 0;
/// <summary>
/// <para>Return the memory in kilobytes consumed by this data array. Used to support streaming and reading/writing data. The value returned is guaranteed to be greater than or equal to the memory required to actually represent the data represented by this object. The  information returned is valid only after the pipeline has  been updated.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // void SetName (const char *name);
/// <summary>
/// <para>Set/get array's name</para>
/// </summary>
  void SetName(System::String^ name);


  // const char *GetName ();
/// <summary>
/// <para>Set/get array's name</para>
/// </summary>
  System::String^ GetName();


  // virtual const char *GetDataTypeAsString (void );return vtkImageScalarTypeNameMacro this GetDataType 
/// <summary>
/// <para>This method is here to make backward compatibility easier.  It must return true if and only if an array contains numeric data.</para>
/// </summary>
  System::String^ GetDataTypeAsString();


// Did not wrap:  virtual bool IsNumeric () = 0;


// Did not wrap:  virtual void ConvertToContiguous (vtkDataArray *Data, vtkIdTypeArray *Offsets) = 0;


  // virtual void ConvertFromContiguous (vtkDataArray *Data, vtkIdTypeArray *Offsets) = 0;
/// <summary>
/// <para>This is the inverse of ConvertToContiguous(), above.  </para>
/// </summary>
  void ConvertFromContiguous(vtkDataArray^ Data, vtkIdTypeArray^ Offsets);


// Did not wrap:  vtkAbstractArray (vtkIdType numComp);


// Did not wrap:  ~vtkAbstractArray ();


// Did not wrap:  vtkAbstractArray (const vtkAbstractArray &);


// Did not wrap:  void vtkAbstractArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAbstractArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAbstractArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAbstractArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAbstractArray();


};

} // end vtkCommon
