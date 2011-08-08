#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkFieldData : public vtkObject
{

public:
// Did not wrap:  static vtkFieldData *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFieldData *NewInstance ();
  vtkFieldData^ NewInstance();


  // vtkFieldData *SafeDownCast (vtkObject* o);
  static vtkFieldData^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize ();
/// <summary>
/// <para>Release all data but do not delete object. Also, clear the copy flags.</para>
/// </summary>
  void Initialize();


  // int Allocate (const vtkIdType sz, const vtkIdType ext);
/// <summary>
/// <para>Allocate data for each array. Note that ext is no longer used.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // void CopyStructure (vtkFieldData *);
/// <summary>
/// <para>Copy data array structure from a given field.  The same arrays will exist with the same types, but will contain nothing in the copy.</para>
/// </summary>
  void CopyStructure(vtkFieldData^ arg0);


  // void AllocateArrays (int num);
/// <summary>
/// <para>AllocateOfArrays actually sets the number of vtkDataArray pointers in the vtkFieldData object, not the number of used pointers (arrays). Adding more arrays will cause the object to dynamically adjust the number of pointers if it needs to extend. Although AllocateArrays can be used if the number of arrays which will be added is known, it can be omitted with a small computation cost.</para>
/// </summary>
  void AllocateArrays(int num);


  // int GetNumberOfArrays ();return this NumberOfActiveArrays 
/// <summary>
/// <para>Add an array to the array list. If an array with the same name already exists - then the added array will replace it.</para>
/// </summary>
  int GetNumberOfArrays();


  // int AddArray (vtkDataArray *array);
/// <summary>
/// <para>Add an array to the array list. If an array with the same name already exists - then the added array will replace it.</para>
/// </summary>
  int AddArray(vtkDataArray^ arg0);


  // virtual void RemoveArray (const char *name);int i this GetArray name i this RemoveArray i 
/// <summary>
/// <para>Return the ith array in the field. A NULL is returned if the index i is out of range.</para>
/// </summary>
  void RemoveArray(System::String^ name);


  // vtkDataArray *GetArray (int i);
/// <summary>
/// <para>Return the ith array in the field. A NULL is returned if the index i is out of range.</para>
/// </summary>
  vtkDataArray^ GetArray(int i);


  // vtkDataArray *GetArray (const char *arrayName, int &index);
/// <summary>
/// <para>Return the array with the name given. Returns NULL is array not found. Also returns index of array if found, -1 otherwise</para>
/// </summary>
  vtkDataArray^ GetArray(System::String^ arrayName, int% index);


  // vtkDataArray *GetArray (const char *arrayName);int i return this GetArray arrayName i 
/// <summary>
/// <para>Return 1 if an array with the given name could be found. 0 otherwise.</para>
/// </summary>
  vtkDataArray^ GetArray(System::String^ arrayName);


  // int HasArray (const char *name);int i vtkDataArray array this GetArray name i return array 
/// <summary>
/// <para>Get the name of ith array. Note that this is equivalent to: GetArray(i)-&gt;GetName() if ith array pointer is not NULL</para>
/// </summary>
  int HasArray(System::String^ name);


  // const char *GetArrayName (int i);vtkDataArray da this GetArray i return da da GetName 
/// <summary>
/// <para>Pass entire arrays of input data through to output. Obey the &quot;copy&quot; flags.</para>
/// </summary>
  System::String^ GetArrayName(int i);


  // virtual void PassData (vtkFieldData *fd);
/// <summary>
/// <para>Pass entire arrays of input data through to output. Obey the &quot;copy&quot; flags.</para>
/// </summary>
  void PassData(vtkFieldData^ fd);


  // void CopyFieldOn (const char *name);this CopyFieldOnOff name 
/// <summary>
/// <para>Turn on/off the copying of the field specified by name. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyFieldOn(System::String^ name);


  // void CopyFieldOff (const char *name);this CopyFieldOnOff name 
/// <summary>
/// <para>Turn on copying of all data. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyFieldOff(System::String^ name);


  // virtual void CopyAllOn ();
/// <summary>
/// <para>Turn on copying of all data. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyAllOn();


  // virtual void CopyAllOff ();
/// <summary>
/// <para>Turn off copying of all data. During the copying/passing, the following rules are followed for each array: 1. If the copy flag for an array is set (on or off), it is applied    This overrides rule 2. 2. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyAllOff();


  // virtual void DeepCopy (vtkFieldData *da);
/// <summary>
/// <para>Copy a field by creating new data arrays (i.e., duplicate storage).</para>
/// </summary>
  void DeepCopy(vtkFieldData^ da);


  // virtual void ShallowCopy (vtkFieldData *da);
/// <summary>
/// <para>Copy a field by reference counting the data arrays.</para>
/// </summary>
  void ShallowCopy(vtkFieldData^ da);


  // void Squeeze ();
/// <summary>
/// <para>Squeezes each data array in the field (Squeeze() reclaims unused memory.)</para>
/// </summary>
  void Squeeze();


  // void Reset ();
/// <summary>
/// <para>Resets each data array in the field (Reset() does not release memory but it makes the arrays look like they are empty.)</para>
/// </summary>
  void Reset();


  // virtual unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the memory in kilobytes consumed by this field data. Used to support streaming and reading/writing data. The value returned is guaranteed to be greater than or equal to the memory required to actually represent the data represented by this object.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Check object's components for modified times.</para>
/// </summary>
  unsigned long GetMTime();


  // void GetField (vtkIdList *ptId, vtkFieldData *f);
/// <summary>
/// <para>Get a field from a list of ids. Supplied field f should have same types and number of data arrays as this one (i.e., like CopyStructure() creates).  This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData).  This is because in those cases, the attribute data is stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  void GetField(vtkIdList^ ptId, vtkFieldData^ f);


  // int GetArrayContainingComponent (int i, int &arrayComp);
/// <summary>
/// <para>Return the array containing the ith component of the field. The return value is an integer number n 0&lt;=n&lt;this-&gt;NumberOfArrays. Also, an integer value is returned indicating the component in the array is returned. Method returns -1 if specified component is not in the field. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  int GetArrayContainingComponent(int i, int% arrayComp);


  // int GetNumberOfComponents ();
/// <summary>
/// <para>Get the number of components in the field. This is determined by adding up the components in each non-NULL array. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  int GetNumberOfComponents();


  // vtkIdType GetNumberOfTuples ();
/// <summary>
/// <para>Get the number of tuples in the field. Note: some fields have arrays with different numbers of tuples; this method returns the number of tuples in the first array. Mixed-length arrays may have to be treated specially. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  int GetNumberOfTuples();


  // void SetNumberOfTuples (const vtkIdType number);
/// <summary>
/// <para>Set the number of tuples for each data array in the field. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  void SetNumberOfTuples(int number);


// Did not wrap:  double *GetTuple (const vtkIdType i);


  // void GetTuple (const vtkIdType i, double *tuple);
/// <summary>
/// <para>Copy the ith tuple value into a user provided tuple array. Make sure that you've allocated enough space for the copy. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  void GetTuple(int i, array<double>^ tuple);


  // void SetTuple (const vtkIdType i, const double *tuple);
/// <summary>
/// <para>Set the tuple value at the ith location. Set operations mean that no range checking is performed, so they're faster. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  void SetTuple(int i, array<double>^ tuple);


  // void InsertTuple (const vtkIdType i, const double *tuple);
/// <summary>
/// <para>Insert the tuple value at the ith location. Range checking is performed and memory allocates as necessary. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  void InsertTuple(int i, array<double>^ tuple);


  // vtkIdType InsertNextTuple (const double *tuple);
/// <summary>
/// <para>Insert the tuple value at the end of the tuple matrix. Range checking is performed and memory is allocated as necessary. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  int InsertNextTuple(array<double>^ tuple);


  // double GetComponent (const vtkIdType i, const int j);
/// <summary>
/// <para>Get the component value at the ith tuple (or row) and jth component (or column). This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  double GetComponent(int i, int j);


  // void SetComponent (const vtkIdType i, const int j, const double c);
/// <summary>
/// <para>Set the component value at the ith tuple (or row) and jth component (or column).  Range checking is not performed, so set the object up properly before invoking. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  void SetComponent(int i, int j, double c);


  // void InsertComponent (const vtkIdType i, const int j, const double c);
/// <summary>
/// <para>Insert the component value at the ith tuple (or row) and jth component (or column).  Range checking is performed and memory allocated as necessary o hold data. This method should not be used if the instance is from a subclass of vtkFieldData (vtkPointData or vtkCellData). This is because in those cases, the attribute data is  stored with the other fields and will cause the method to behave in an unexpected way.</para>
/// </summary>
  void InsertComponent(int i, int j, double c);


// Did not wrap:  vtkFieldData ();


// Did not wrap:  ~vtkFieldData ();


// Did not wrap:  void SetArray (int i, vtkDataArray *array);


// Did not wrap:  virtual void RemoveArray (int index);


// Did not wrap:  virtual void InitializeFields ();


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFieldData(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFieldData(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFieldData();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFieldData();


};

} // end vtkFiltering
