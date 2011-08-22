#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPriorityQueue : public vtkObject
{

public:
// Did not wrap:  static vtkPriorityQueue *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPriorityQueue *NewInstance ();
  vtkPriorityQueue^ NewInstance();


  // vtkPriorityQueue *SafeDownCast (vtkObject* o);
  static vtkPriorityQueue^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Allocate (const vtkIdType sz, const vtkIdType ext);
/// <summary>
/// <para>Allocate initial space for priority queue.</para>
/// </summary>
  void Allocate(int sz, int ext);


  // void Insert (double priority, vtkIdType id);
/// <summary>
/// <para>Insert id with priority specified. The id is generally an index like a point id or cell id.</para>
/// </summary>
  void Insert(double priority, int id);


  // vtkIdType Pop (vtkIdType location);
/// <summary>
/// <para>Same as above but simplified for easier wrapping into interpreted languages.</para>
/// </summary>
  int Pop(int location);


  // vtkIdType Peek (vtkIdType location);
/// <summary>
/// <para>Peek into the queue without actually removing anything. Returns the id.</para>
/// </summary>
  int Peek(int location);


  // double DeleteId (vtkIdType id);
/// <summary>
/// <para>Delete entry in queue with specified id. Returns priority value associated with that id; or VTK_DOUBLE_MAX if not in queue.</para>
/// </summary>
  double DeleteId(int id);


  // double GetPriority (vtkIdType id);
/// <summary>
/// <para>Get the priority of an entry in the queue with specified id. Returns priority value of that id or VTK_DOUBLE_MAX if not in queue.</para>
/// </summary>
  double GetPriority(int id);


  // vtkIdType GetNumberOfItems ();return this MaxId 
/// <summary>
/// <para>Return the number of items in this queue.</para>
/// </summary>
  int GetNumberOfItems();


  // void Reset ();
/// <summary>
/// <para>Empty the queue but without releasing memory. This avoids the overhead of memory allocation/deletion.</para>
/// </summary>
  void Reset();


// Did not wrap:  vtkPriorityQueue ();


// Did not wrap:  ~vtkPriorityQueue ();


// Did not wrap:  Item *Resize (const vtkIdType sz);


// Did not wrap:  vtkPriorityQueue (const vtkPriorityQueue &);


// Did not wrap:  void vtkPriorityQueue 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPriorityQueue(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPriorityQueue(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPriorityQueue();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPriorityQueue();


};

} // end vtkCommon
