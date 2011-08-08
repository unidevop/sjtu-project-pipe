#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObjectBase;

public ref class vtkGarbageCollector : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGarbageCollector *NewInstance ();
  vtkGarbageCollector^ NewInstance();


  // vtkGarbageCollector *SafeDownCast (vtkObject* o);
  static vtkGarbageCollector^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkGarbageCollector *New ();


  // static void Collect ();
/// <summary>
/// <para>Collect immediately using any objects whose collection was previously deferred as a root for the reference graph walk. Strongly connected components in the reference graph are identified.  Those with a net reference count of zero are deleted.  When a component is deleted it may remove references to other components that are not part of the same reference loop but are held by objects in the original component.  These removed references are handled as any other and their corresponding checks may be deferred.  This method keeps collecting until no deferred collection checks remain.</para>
/// </summary>
  static void Collect();


  // static void Collect (vtkObjectBase *root);
/// <summary>
/// <para>Collect immediately using the given object as the root for a reference graph walk.  Strongly connected components in the reference graph are identified.  Those with a net reference count of zero are deleted.  When a component is deleted it may remove references to other components that are not part of the same reference loop but are held by objects in the original component. These removed references are handled as any other and their corresponding checks may be deferred.  This method does continue collecting in this case.</para>
/// </summary>
  static void Collect(vtkObjectBase^ root);


  // static void DeferredCollectionPush ();
/// <summary>
/// <para>Push/Pop whether to do deferred collection.  Whenever the total number of pushes exceeds the total number of pops collection will be deferred.  Code can call the Collect method directly to force collection.</para>
/// </summary>
  static void DeferredCollectionPush();


  // static void DeferredCollectionPop ();
/// <summary>
/// <para>Push/Pop whether to do deferred collection.  Whenever the total number of pushes exceeds the total number of pops collection will be deferred.  Code can call the Collect method directly to force collection.</para>
/// </summary>
  static void DeferredCollectionPop();


  // static void SetGlobalDebugFlag (int flag);
/// <summary>
/// <para>Set/Get global garbage collection debugging flag.  When set to 1, all garbage collection checks will produce debugging information.</para>
/// </summary>
  static void SetGlobalDebugFlag(int flag);


  // static int GetGlobalDebugFlag ();
/// <summary>
/// <para>Set/Get global garbage collection debugging flag.  When set to 1, all garbage collection checks will produce debugging information.</para>
/// </summary>
  static int GetGlobalDebugFlag();


// Did not wrap:  vtkGarbageCollector ();


// Did not wrap:  ~vtkGarbageCollector ();


// Did not wrap:  static int GiveReference (vtkObjectBase *obj);


// Did not wrap:  static int TakeReference (vtkObjectBase *obj);


// Did not wrap:  static void ClassInitialize ();


// Did not wrap:  static void ClassFinalize ();


// Did not wrap:  virtual void Report (vtkObjectBase *obj, void *ptr, const char *desc);


// Did not wrap:  void vtkGarbageCollectorReportInternal (vtkGarbageCollector *, vtkObjectBase *, void *, const char *);


// Did not wrap:  vtkGarbageCollector (const vtkGarbageCollector &);


// Did not wrap:  void vtkGarbageCollector 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGarbageCollector(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGarbageCollector(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGarbageCollector();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGarbageCollector();


};

} // end vtkCommon
