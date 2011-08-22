#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkIdList;

public ref class vtkPoints : public vtkObject
{

public:
// Did not wrap:  static vtkPoints *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPoints *NewInstance ();
  vtkPoints^ NewInstance();


  // vtkPoints *SafeDownCast (vtkObject* o);
  static vtkPoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int Allocate (const vtkIdType sz, const vtkIdType ext);
/// <summary>
/// <para>Allocate initial memory size.</para>
/// </summary>
  int Allocate(int sz, int ext);


  // virtual void Initialize ();
/// <summary>
/// <para>Return object to instantiated state.</para>
/// </summary>
  void Initialize();


  // virtual void SetData (vtkDataArray *);
/// <summary>
/// <para>Set/Get the underlying data array. This function must be implemented in a concrete subclass to check for consistency. (The tuple size must match the type of data. For example, 3-tuple data array can be assigned to a vector, normal, or points object, but not a tensor object, which has a  tuple dimension of 9. Scalars, on the other hand, can have tuple dimension  from 1-4, depending on the type of scalar.)</para>
/// </summary>
  void SetData(vtkDataArray^ arg0);


  // vtkDataArray *GetData ();return this Data 
/// <summary>
/// <para>Set/Get the underlying data array. This function must be implemented in a concrete subclass to check for consistency. (The tuple size must match the type of data. For example, 3-tuple data array can be assigned to a vector, normal, or points object, but not a tensor object, which has a  tuple dimension of 9. Scalars, on the other hand, can have tuple dimension  from 1-4, depending on the type of scalar.)</para>
/// </summary>
  vtkDataArray^ GetData();


  // virtual int GetDataType ();
/// <summary>
/// <para>Return the underlying data type. An integer indicating data type is  returned as specified in vtkSetGet.h.</para>
/// </summary>
  int GetDataType();


  // virtual void SetDataType (int dataType);
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataType(int dataType);


  // void SetDataTypeToBit ();this SetDataType VTK_BIT 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToBit();


  // void SetDataTypeToChar ();this SetDataType VTK_CHAR 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToChar();


  // void SetDataTypeToUnsignedChar ();this SetDataType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToUnsignedChar();


  // void SetDataTypeToShort ();this SetDataType VTK_SHORT 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToShort();


  // void SetDataTypeToUnsignedShort ();this SetDataType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToUnsignedShort();


  // void SetDataTypeToInt ();this SetDataType VTK_INT 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToInt();


  // void SetDataTypeToUnsignedInt ();this SetDataType VTK_UNSIGNED_INT 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToUnsignedInt();


  // void SetDataTypeToLong ();this SetDataType VTK_LONG 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToLong();


  // void SetDataTypeToUnsignedLong ();this SetDataType VTK_UNSIGNED_LONG 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToUnsignedLong();


  // void SetDataTypeToFloat ();this SetDataType VTK_FLOAT 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToFloat();


  // void SetDataTypeToDouble ();this SetDataType VTK_DOUBLE 
/// <summary>
/// <para>Specify the underlying data type of the object.</para>
/// </summary>
  void SetDataTypeToDouble();


  // void *GetVoidPointer (const int id);return this Data GetVoidPointer id 
/// <summary>
/// <para>Return a void pointer. For image pipeline interface and other  special pointer manipulation.</para>
/// </summary>
  System::IntPtr GetVoidPointer(int id);


  // virtual void Squeeze ();this Data Squeeze 
/// <summary>
/// <para>Reclaim any extra memory.</para>
/// </summary>
  void Squeeze();


  // virtual void Reset ();this Data Reset 
/// <summary>
/// <para>Make object look empty but do not delete memory.  </para>
/// </summary>
  void Reset();


  // virtual void DeepCopy (vtkPoints *ad);
/// <summary>
/// <para>Different ways to copy data. Shallow copy does reference count (i.e., assigns pointers and updates reference count); deep copy runs through entire data array assigning values.</para>
/// </summary>
  void DeepCopy(vtkPoints^ ad);


  // virtual void ShallowCopy (vtkPoints *ad);
/// <summary>
/// <para>Different ways to copy data. Shallow copy does reference count (i.e., assigns pointers and updates reference count); deep copy runs through entire data array assigning values.</para>
/// </summary>
  void ShallowCopy(vtkPoints^ ad);


  // unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the memory in kilobytes consumed by this attribute data.  Used to support streaming and reading/writing data. The value  returned is guaranteed to be greater than or equal to the  memory required to actually represent the data represented  by this object. The information returned is valid only after the pipeline has been updated.</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // vtkIdType GetNumberOfPoints ();return this Data GetNumberOfTuples 
/// <summary>
/// <para>Return number of points in array.</para>
/// </summary>
  int GetNumberOfPoints();


  // double *GetPoint (vtkIdType id);return this Data GetTuple id 
/// <summary>
/// <para>Return a pointer to a double point x[3] for a specific id.</para>
/// </summary>
  array<double>^ GetPoint(int id);


  // void GetPoint (vtkIdType id, double x[3]);this Data GetTuple id x 
/// <summary>
/// <para>Copy point components into user provided array v[3] for specified id.</para>
/// </summary>
  void GetPoint(int id, array<double>^ x);


  // void SetPoint (vtkIdType id, const float x[3]);this Data SetTuple id x 
/// <summary>
/// <para>Insert point into object. No range checking performed (fast!). Make sure you use SetNumberOfPoints() to allocate memory prior to using SetPoint().</para>
/// </summary>
  void SetPoint(int id, array<float>^ x);


  // void SetPoint (vtkIdType id, const double x[3]);this Data SetTuple id x 
/// <summary>
/// <para>Insert point into object. No range checking performed (fast!). Make sure you use SetNumberOfPoints() to allocate memory prior to using SetPoint().</para>
/// </summary>
  void SetPoint(int id, array<double>^ x);


  // void SetPoint (vtkIdType id, double x, double y, double z);
/// <summary>
/// <para>Insert point into object. No range checking performed (fast!). Make sure you use SetNumberOfPoints() to allocate memory prior to using SetPoint().</para>
/// </summary>
  void SetPoint(int id, double x, double y, double z);


  // void InsertPoint (vtkIdType id, const float x[3]);this Data InsertTuple id x 
/// <summary>
/// <para>Insert point into object. Range checking performed and memory allocated as necessary.</para>
/// </summary>
  void InsertPoint(int id, array<float>^ x);


  // void InsertPoint (vtkIdType id, const double x[3]);this Data InsertTuple id x 
/// <summary>
/// <para>Insert point into object. Range checking performed and memory allocated as necessary.</para>
/// </summary>
  void InsertPoint(int id, array<double>^ x);


  // void InsertPoint (vtkIdType id, double x, double y, double z);
/// <summary>
/// <para>Insert point into object. Range checking performed and memory allocated as necessary.</para>
/// </summary>
  void InsertPoint(int id, double x, double y, double z);


  // vtkIdType InsertNextPoint (const float x[3]);return this Data InsertNextTuple x 
/// <summary>
/// <para>Insert point into next available slot. Returns id of slot.</para>
/// </summary>
  int InsertNextPoint(array<float>^ x);


  // vtkIdType InsertNextPoint (const double x[3]);return this Data InsertNextTuple x 
/// <summary>
/// <para>Insert point into next available slot. Returns id of slot.</para>
/// </summary>
  int InsertNextPoint(array<double>^ x);


  // vtkIdType InsertNextPoint (double x, double y, double z);
/// <summary>
/// <para>Insert point into next available slot. Returns id of slot.</para>
/// </summary>
  int InsertNextPoint(double x, double y, double z);


  // void SetNumberOfPoints (vtkIdType number);
/// <summary>
/// <para>Specify the number of points for this object to hold. Does an allocation as well as setting the MaxId ivar. Used in conjunction with SetPoint() method for fast insertion.</para>
/// </summary>
  void SetNumberOfPoints(int number);


  // void GetPoints (vtkIdList *ptId, vtkPoints *fp);
/// <summary>
/// <para>Given a list of pt ids, return an array of points.</para>
/// </summary>
  void GetPoints(vtkIdList^ ptId, vtkPoints^ fp);


  // virtual void ComputeBounds ();
/// <summary>
/// <para>Determine (xmin,xmax, ymin,ymax, zmin,zmax) bounds of points.</para>
/// </summary>
  void ComputeBounds();


  // double *GetBounds ();
/// <summary>
/// <para>Return the bounds of the points.</para>
/// </summary>
  array<double>^ GetBounds();


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Return the bounds of the points.</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


// Did not wrap:  vtkPoints (int dataTypeVTK_FLOAT);


// Did not wrap:  ~vtkPoints ();


// Did not wrap:  vtkPoints (const vtkPoints &);


// Did not wrap:  void vtkPoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPoints();


};

} // end vtkCommon
