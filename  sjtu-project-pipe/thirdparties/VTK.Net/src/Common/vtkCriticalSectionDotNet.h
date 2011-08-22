#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkCriticalSection : public vtkObject
{

public:
// Did not wrap:  static vtkCriticalSection *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCriticalSection *NewInstance ();
  vtkCriticalSection^ NewInstance();


  // vtkCriticalSection *SafeDownCast (vtkObject* o);
  static vtkCriticalSection^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Lock (void );
/// <summary>
/// <para>Lock the vtkCriticalSection</para>
/// </summary>
  void Lock();


  // void Unlock (void );
/// <summary>
/// <para>Unlock the vtkCriticalSection</para>
/// </summary>
  void Unlock();


// Did not wrap:  vtkCriticalSection ();


// Did not wrap:  vtkCriticalSection (const vtkCriticalSection &);


// Did not wrap:  void vtkCriticalSection 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCriticalSection(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCriticalSection(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCriticalSection();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCriticalSection();


};

} // end vtkCommon
