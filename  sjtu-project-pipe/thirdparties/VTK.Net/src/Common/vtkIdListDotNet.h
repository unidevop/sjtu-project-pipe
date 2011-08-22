#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkIdList : public vtkObject
{

public:
// Did not wrap:  static vtkIdList *New ();


  // void Initialize ();
  void Initialize();


  // int Allocate (const int sz, const int strategy);
  int Allocate(int sz, int strategy);


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkIdList *NewInstance ();
  vtkIdList^ NewInstance();


  // vtkIdList *SafeDownCast (vtkObject* o);
  static vtkIdList^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkIdType GetNumberOfIds ();return this NumberOfIds 
/// <summary>
/// <para>Return the number of id's in the list.</para>
/// </summary>
  int GetNumberOfIds();


  // vtkIdType GetId (const int i);return this Ids i 
/// <summary>
/// <para>Return the id at location i.</para>
/// </summary>
  int GetId(int i);


  // void SetNumberOfIds (const vtkIdType number);
/// <summary>
/// <para>Specify the number of ids for this object to hold. Does an allocation as well as setting the number of ids.</para>
/// </summary>
  void SetNumberOfIds(int number);


  // void SetId (const vtkIdType i, const vtkIdType id);this Ids i id 
/// <summary>
/// <para>Set the id at location i. Doesn't do range checking so it's a bit faster than InsertId. Make sure you use SetNumberOfIds() to allocate memory prior to using SetId().</para>
/// </summary>
  void SetId(int i, int id);


  // void InsertId (const vtkIdType i, const vtkIdType id);
/// <summary>
/// <para>Set the id at location i. Does range checking and allocates memory as necessary.</para>
/// </summary>
  void InsertId(int i, int id);


  // vtkIdType InsertNextId (const vtkIdType id);
/// <summary>
/// <para>Add the id specified to the end of the list. Range checking is performed.</para>
/// </summary>
  int InsertNextId(int id);


  // vtkIdType InsertUniqueId (const vtkIdType id);
/// <summary>
/// <para>If id is not already in list, insert it and return location in list. Otherwise return just location in list.</para>
/// </summary>
  int InsertUniqueId(int id);


// Did not wrap:  vtkIdType *GetPointer (const vtkIdType i);return this Ids i 


// Did not wrap:  vtkIdType *WritePointer (const vtkIdType i, const vtkIdType number);


  // void Reset ();this NumberOfIds 
/// <summary>
/// <para>Reset to an empty state.</para>
/// </summary>
  void Reset();


  // void Squeeze ();this Resize this NumberOfIds 
/// <summary>
/// <para>Free any unused memory.</para>
/// </summary>
  void Squeeze();


  // void DeepCopy (vtkIdList *ids);
/// <summary>
/// <para>Copy an id list by explicitly copying the internal array.</para>
/// </summary>
  void DeepCopy(vtkIdList^ ids);


  // void DeleteId (vtkIdType id);
/// <summary>
/// <para>Delete specified id from list. Will remove all occurrences of id in list.</para>
/// </summary>
  void DeleteId(int id);


  // vtkIdType IsId (vtkIdType id);
/// <summary>
/// <para>Return -1 if id specified is not contained in the list; otherwise return the position in the list.</para>
/// </summary>
  int IsId(int id);


// Did not wrap:  void IntersectWith (vtkIdList &otherIds);


// Did not wrap:  vtkIdList ();


// Did not wrap:  ~vtkIdList ();


// Did not wrap:  vtkIdType *Resize (const vtkIdType sz);


// Did not wrap:  vtkIdList (const vtkIdList &);


// Did not wrap:  void vtkIdList 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkIdList(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkIdList(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkIdList();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkIdList();


};

} // end vtkCommon
