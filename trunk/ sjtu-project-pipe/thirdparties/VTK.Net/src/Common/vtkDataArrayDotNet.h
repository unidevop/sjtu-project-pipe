#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDoubleArray;
ref class vtkIdList;
ref class vtkLookupTable;

public ref class vtkDataArray : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataArray *NewInstance ();
  vtkDataArray^ NewInstance();


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
/// <para>Return the size of the underlying data type.  For a bit, 0 is returned.</para>
/// </summary>
  int GetDataTypeSize();


  // static unsigned long GetDataTypeSize (int type);
/// <summary>
/// <para>Return the size of the underlying data type.  For a bit, 0 is returned.</para>
/// </summary>
  static unsigned long GetDataTypeSize(int type);


  // void SetNumberOfComponents (int );
/// <summary>
/// <para>Set/Get the dimension (n) of the components. Must be &gt;= 1. Make sure that this is set before allocation.</para>
/// </summary>
  void SetNumberOfComponents(int arg0);


  // int GetNumberOfComponentsMinValue ();
/// <summary>
/// <para>Set/Get the dimension (n) of the components. Must be &gt;= 1. Make sure that this is set before allocation.</para>
/// </summary>
  int GetNumberOfComponentsMinValue();


  // int GetNumberOfComponentsMaxValue ();
/// <summary>
/// <para>Set/Get the dimension (n) of the components. Must be &gt;= 1. Make sure that this is set before allocation.</para>
/// </summary>
  int GetNumberOfComponentsMaxValue();


  // int GetNumberOfComponents ();return this NumberOfComponents 
/// <summary>
/// <para>Set/Get the dimension (n) of the components. Must be &gt;= 1. Make sure that this is set before allocation.</para>
/// </summary>
  int GetNumberOfComponents();


  // virtual void SetNumberOfTuples (vtkIdType number) = 0;
/// <summary>
/// <para>Set the number of tuples (a component group) in the array. Note that  this may allocate space depending on the number of components.</para>
/// </summary>
  void SetNumberOfTuples(int number);


  // vtkIdType GetNumberOfTuples ();return this MaxId this NumberOfComponents 
/// <summary>
/// <para>Get the data tuple at ith location. Return it as a pointer to an array. Note: this method is not thread-safe, and the pointer is only valid as long as another method invocation to a vtk object is not performed.</para>
/// </summary>
  int GetNumberOfTuples();


// Did not wrap:  virtual double *GetTuple (vtkIdType i) = 0;


  // virtual void GetTuple (vtkIdType i, double *tuple) = 0;
/// <summary>
/// <para>Get the data tuple at ith location by filling in a user-provided array, Make sure that your array is large enough to hold the NumberOfComponents amount of data being returned.</para>
/// </summary>
  void GetTuple(int i, array<double>^ tuple);


  // double GetTuple1 (vtkIdType i);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  double GetTuple1(int i);


  // double *GetTuple2 (vtkIdType i);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  array<double>^ GetTuple2(int i);


  // double *GetTuple3 (vtkIdType i);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  array<double>^ GetTuple3(int i);


  // double *GetTuple4 (vtkIdType i);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  array<double>^ GetTuple4(int i);


  // double *GetTuple9 (vtkIdType i);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  array<double>^ GetTuple9(int i);


  // void GetTuples (vtkIdList *ptIds, vtkDataArray *output);
/// <summary>
/// <para>Given a list of point ids, return an array of tuples. You must insure that the output array has been previously  allocated with enough space to hold the data.</para>
/// </summary>
  void GetTuples(vtkIdList^ ptIds, vtkDataArray^ output);


  // void GetTuples (vtkIdType p1, vtkIdType p2, vtkDataArray *output);
/// <summary>
/// <para>Get the tuples for the range of points ids specified  (i.e., p1-&gt;p2 inclusive). You must insure that the output array has  been previously allocated with enough space to hold the data.</para>
/// </summary>
  void GetTuples(int p1, int p2, vtkDataArray^ output);


  // virtual void SetTuple (vtkIdType i, const float *tuple) = 0;
/// <summary>
/// <para>Set the data tuple at ith location. Note that range checking or memory allocation is not performed; use this method in conjunction with SetNumberOfTuples() to allocate space.</para>
/// </summary>
  void SetTuple(int i, array<float>^ tuple);


  // virtual void SetTuple (vtkIdType i, const double *tuple) = 0;
/// <summary>
/// <para>Set the data tuple at ith location. Note that range checking or memory allocation is not performed; use this method in conjunction with SetNumberOfTuples() to allocate space.</para>
/// </summary>
  void SetTuple(int i, array<double>^ tuple);


  // void SetTuple1 (vtkIdType i, double value);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void SetTuple1(int i, double value);


  // void SetTuple2 (vtkIdType i, double val0, double val1);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void SetTuple2(int i, double val0, double val1);


  // void SetTuple3 (vtkIdType i, double val0, double val1, double val2);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void SetTuple3(int i, double val0, double val1, double val2);


  // void SetTuple4 (vtkIdType i, double val0, double val1, double val2, double val3);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void SetTuple4(int i, double val0, double val1, double val2, double val3);


  // void SetTuple9 (vtkIdType i, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. GetTuple() and SetTuple() which return/take arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void SetTuple9(int i, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8);


  // virtual void InsertTuple (vtkIdType i, const float *tuple) = 0;
/// <summary>
/// <para>Insert the data tuple at ith location. Note that memory allocation is performed as necessary to hold the data.</para>
/// </summary>
  void InsertTuple(int i, array<float>^ tuple);


  // virtual void InsertTuple (vtkIdType i, const double *tuple) = 0;
/// <summary>
/// <para>Insert the data tuple at ith location. Note that memory allocation is performed as necessary to hold the data.</para>
/// </summary>
  void InsertTuple(int i, array<double>^ tuple);


  // void InsertTuple1 (vtkIdType i, double value);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertTuple1(int i, double value);


  // void InsertTuple2 (vtkIdType i, double val0, double val1);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertTuple2(int i, double val0, double val1);


  // void InsertTuple3 (vtkIdType i, double val0, double val1, double val2);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertTuple3(int i, double val0, double val1, double val2);


  // void InsertTuple4 (vtkIdType i, double val0, double val1, double val2, double val3);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertTuple4(int i, double val0, double val1, double val2, double val3);


  // void InsertTuple9 (vtkIdType i, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertTuple9(int i, double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8);


  // virtual vtkIdType InsertNextTuple (const float *tuple) = 0;
/// <summary>
/// <para>Insert the data tuple at the end of the array and return the location at which the data was inserted. Memory is allocated as necessary to hold the data.</para>
/// </summary>
  int InsertNextTuple(array<float>^ tuple);


  // virtual vtkIdType InsertNextTuple (const double *tuple) = 0;
/// <summary>
/// <para>Insert the data tuple at the end of the array and return the location at which the data was inserted. Memory is allocated as necessary to hold the data.</para>
/// </summary>
  int InsertNextTuple(array<double>^ tuple);


  // void InsertNextTuple1 (double value);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertNextTuple1(double value);


  // void InsertNextTuple2 (double val0, double val1);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertNextTuple2(double val0, double val1);


  // void InsertNextTuple3 (double val0, double val1, double val2);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertNextTuple3(double val0, double val1, double val2);


  // void InsertNextTuple4 (double val0, double val1, double val2, double val3);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertNextTuple4(double val0, double val1, double val2, double val3);


  // void InsertNextTuple9 (double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8);
/// <summary>
/// <para>These methods are included as convenience for the wrappers. InsertTuple() which takes arrays can not be  used from wrapped languages. These methods can be used instead.</para>
/// </summary>
  void InsertNextTuple9(double val0, double val1, double val2, double val3, double val4, double val5, double val6, double val7, double val8);


  // virtual double GetComponent (vtkIdType i, int j);
/// <summary>
/// <para>Return the data component at the ith tuple and jth component location. Note that i is less than NumberOfTuples and j is less than  NumberOfComponents.</para>
/// </summary>
  double GetComponent(int i, int j);


  // virtual void SetComponent (vtkIdType i, int j, double c);
/// <summary>
/// <para>Set the data component at the ith tuple and jth component location. Note that i is less than NumberOfTuples and j is less than  NumberOfComponents. Make sure enough memory has been allocated  (use SetNumberOfTuples() and SetNumberOfComponents()).</para>
/// </summary>
  void SetComponent(int i, int j, double c);


  // virtual void InsertComponent (vtkIdType i, int j, double c);
/// <summary>
/// <para>Insert the data component at ith tuple and jth component location.  Note that memory allocation is performed as necessary to hold the data.</para>
/// </summary>
  void InsertComponent(int i, int j, double c);


  // virtual void GetData (vtkIdType tupleMin, vtkIdType tupleMax, int compMin, int compMax, vtkDoubleArray *data);
/// <summary>
/// <para>Get the data as a double array in the range (tupleMin,tupleMax) and (compMin, compMax). The resulting double array consists of all data in the tuple range specified and only the component range specified. This process typically requires casting the data from native form into doubleing point values. This method is provided as a convenience for data exchange, and is not very fast.</para>
/// </summary>
  void GetData(int tupleMin, int tupleMax, int compMin, int compMax, vtkDoubleArray^ data);


  // virtual void DeepCopy (vtkDataArray *da);
/// <summary>
/// <para>Deep copy of data. Copies data from different data arrays even if they are different types (using doubleing-point exchange).</para>
/// </summary>
  void DeepCopy(vtkDataArray^ da);


  // virtual void FillComponent (int j, double c);
/// <summary>
/// <para>Fill a component of a data array with a specified value. This method sets the specified component to specified value for all tuples in the data array.  This methods can be used to initialize or reinitialize a single component of a multi-component array.</para>
/// </summary>
  void FillComponent(int j, double c);


  // virtual void CopyComponent (int j, vtkDataArray *from, int fromComponent);
/// <summary>
/// <para>Copy a component from one data array into a component on this data array. This method copies the specified component (&quot;fromComponent&quot;) from the specified data array (&quot;from&quot;) to the specified component (&quot;j&quot;) over all the tuples in this data array.  This method can be used to extract a component (column) from one data array and paste that data into a component on this data array.</para>
/// </summary>
  void CopyComponent(int j, vtkDataArray^ from, int fromComponent);


  // virtual void *WriteVoidPointer (vtkIdType id, vtkIdType number) = 0;
/// <summary>
/// <para>Get the address of a particular data index. Make sure data is allocated for the number of items requested. Set MaxId according to the number of data values requested.</para>
/// </summary>
  System::IntPtr WriteVoidPointer(int id, int number);


  // virtual void *GetVoidPointer (vtkIdType id) = 0;
/// <summary>
/// <para>Return a void pointer. For image pipeline interface and other  special pointer manipulation.</para>
/// </summary>
  System::IntPtr GetVoidPointer(int id);


  // virtual void Squeeze () = 0;
/// <summary>
/// <para>Free any unnecessary memory.</para>
/// </summary>
  void Squeeze();


  // virtual int Resize (vtkIdType numTuples) = 0;
/// <summary>
/// <para>Resize the array while conserving the data.  Returns 1 if resizing succeeded and 0 otherwise.</para>
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


  // virtual void ExportToVoidPointer (void *);
/// <summary>
/// <para>Return the memory in kilobytes consumed by this data array. Used to support streaming and reading/writing data. The value returned is guaranteed to be greater than or equal to the memory required to actually represent the data represented by this object. The  information returned is valid only after the pipeline has  been updated.</para>
/// </summary>
  void ExportToVoidPointer(System::IntPtr arg0);


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the memory in kilobytes consumed by this data array. Used to support streaming and reading/writing data. The value returned is guaranteed to be greater than or equal to the memory required to actually represent the data represented by this object. The  information returned is valid only after the pipeline has  been updated.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // void CreateDefaultLookupTable ();
/// <summary>
/// <para>Create default lookup table. Generally used to create one when none is available.</para>
/// </summary>
  void CreateDefaultLookupTable();


  // void SetLookupTable (vtkLookupTable *lut);
/// <summary>
/// <para>Set/get the lookup table associated with this scalar data, if any.</para>
/// </summary>
  void SetLookupTable(vtkLookupTable^ lut);


  // vtkLookupTable *GetLookupTable ();
/// <summary>
/// <para>Set/get the lookup table associated with this scalar data, if any.</para>
/// </summary>
  vtkLookupTable^ GetLookupTable();


  // void SetName (char *);
/// <summary>
/// <para>Set/get array's name</para>
/// </summary>
  void SetName(System::String^ arg0);


  // char *GetName ();
/// <summary>
/// <para>Set/get array's name</para>
/// </summary>
  System::String^ GetName();


  // void GetRange (double range[2], int comp);this ComputeRange comp memcpy range this Range sizeof double 
/// <summary>
/// <para>Return the range of the array values for the given component.  Range is copied into the array provided. If comp is equal to -1, it returns the range of the magnitude (if the number of components is equal to 1 it still returns the range of component 0).</para>
/// </summary>
  void GetRange(array<double>^ range, int comp);


  // double *GetRange (int comp);this ComputeRange comp return this Range 
  array<double>^ GetRange(int comp);


  // virtual void ComputeRange (int comp);
  void ComputeRange(int comp);


  // double *GetRange ();this ComputeRange return this Range 
/// <summary>
/// <para>Return the range of the array values for the 0th component.  Range is copied into the array provided.</para>
/// </summary>
  array<double>^ GetRange();


  // void GetRange (double range[2]);this GetRange range 
/// <summary>
/// <para>These methods return the Min and Max possible range of the native data type. For example if a vtkScalars consists of unsigned char data these will return (0,255). </para>
/// </summary>
  void GetRange(array<double>^ range);


  // void GetDataTypeRange (double range[2]);
/// <summary>
/// <para>These methods return the Min and Max possible range of the native data type. For example if a vtkScalars consists of unsigned char data these will return (0,255). </para>
/// </summary>
  void GetDataTypeRange(array<double>^ range);


  // double GetDataTypeMin ();
/// <summary>
/// <para>These methods return the Min and Max possible range of the native data type. For example if a vtkScalars consists of unsigned char data these will return (0,255). </para>
/// </summary>
  double GetDataTypeMin();


  // double GetDataTypeMax ();
/// <summary>
/// <para>These methods return the Min and Max possible range of the native data type. For example if a vtkScalars consists of unsigned char data these will return (0,255). </para>
/// </summary>
  double GetDataTypeMax();


  // static void GetDataTypeRange (int type, double range[2]);
/// <summary>
/// <para>These methods return the Min and Max possible range of the native data type. For example if a vtkScalars consists of unsigned char data these will return (0,255). </para>
/// </summary>
  static void GetDataTypeRange(int type, array<double>^ range);


  // static double GetDataTypeMin (int type);
/// <summary>
/// <para>These methods return the Min and Max possible range of the native data type. For example if a vtkScalars consists of unsigned char data these will return (0,255). </para>
/// </summary>
  static double GetDataTypeMin(int type);


  // static double GetDataTypeMax (int type);
/// <summary>
/// <para>These methods return the Min and Max possible range of the native data type. For example if a vtkScalars consists of unsigned char data these will return (0,255). </para>
/// </summary>
  static double GetDataTypeMax(int type);


  // virtual double GetMaxNorm ();
/// <summary>
/// <para>Return the maximum norm for the tuples. Note that the max. is computed everytime GetMaxNorm is called.</para>
/// </summary>
  double GetMaxNorm();


  // static vtkDataArray *CreateDataArray (int dataType);
/// <summary>
/// <para>Creates an array for dataType where dataType is one of VTK_BIT, VTK_CHAR, VTK_SIGNED_CHAR, VTK_UNSIGNED_CHAR, VTK_SHORT, VTK_UNSIGNED_SHORT, VTK_INT, VTK_UNSIGNED_INT, VTK_LONG, VTK_UNSIGNED_LONG, VTK_DOUBLE, VTK_DOUBLE, VTK_ID_TYPE. Note that the data array returned has be deleted by the user.</para>
/// </summary>
  static vtkDataArray^ CreateDataArray(int dataType);


// Did not wrap:  vtkDataArray (vtkIdType numComp);


// Did not wrap:  ~vtkDataArray ();


// Did not wrap:  double *GetTupleN (vtkIdType i, int n);


// Did not wrap:  vtkDataArray (const vtkDataArray &);


// Did not wrap:  void vtkDataArray 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataArray(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataArray(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataArray();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataArray();


};

} // end vtkCommon
