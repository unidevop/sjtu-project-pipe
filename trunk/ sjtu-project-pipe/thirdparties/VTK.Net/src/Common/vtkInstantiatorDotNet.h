#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInstantiator : public vtkObject
{

public:
// Did not wrap:  static vtkInstantiator *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInstantiator *NewInstance ();
  vtkInstantiator^ NewInstance();


  // vtkInstantiator *SafeDownCast (vtkObject* o);
  static vtkInstantiator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static vtkObject *CreateInstance (const char *className);
/// <summary>
/// <para>Create an instance of the class whose name is given.  If creation fails, a NULL pointer is returned.</para>
/// </summary>
  static vtkObject^ CreateInstance(System::String^ className);


// Did not wrap:  vtkInstantiator ();


// Did not wrap:  ~vtkInstantiator ();


// Did not wrap:  static void ClassInitialize ();


// Did not wrap:  static void ClassFinalize ();


// Did not wrap:  vtkInstantiator (const vtkInstantiator &);


// Did not wrap:  void vtkInstantiator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInstantiator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInstantiator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInstantiator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInstantiator();


};

} // end vtkCommon
