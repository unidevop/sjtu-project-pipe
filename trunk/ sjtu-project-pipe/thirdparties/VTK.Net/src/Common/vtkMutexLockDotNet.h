#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkMutexLock : public vtkObject
{

public:
// Did not wrap:  static vtkMutexLock *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMutexLock *NewInstance ();
  vtkMutexLock^ NewInstance();


  // vtkMutexLock *SafeDownCast (vtkObject* o);
  static vtkMutexLock^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Lock (void );
/// <summary>
/// <para>Lock the vtkMutexLock</para>
/// </summary>
  void Lock();


  // void Unlock (void );
/// <summary>
/// <para>Unlock the vtkMutexLock</para>
/// </summary>
  void Unlock();


// Did not wrap:  vtkMutexLock ();


// Did not wrap:  vtkMutexLock (const vtkMutexLock &);


// Did not wrap:  void vtkMutexLock 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMutexLock(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMutexLock(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMutexLock();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMutexLock();


};

} // end vtkCommon
