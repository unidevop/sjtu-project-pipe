#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDynamicLoader : public vtkObject
{

public:
// Did not wrap:  static vtkDynamicLoader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDynamicLoader *NewInstance ();
  vtkDynamicLoader^ NewInstance();


  // vtkDynamicLoader *SafeDownCast (vtkObject* o);
  static vtkDynamicLoader^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static void *GetSymbolAddress (vtkLibHandle , const char *);


  // static const char *LibPrefix ();
/// <summary>
/// <para>Return the library prefix for the given architecture</para>
/// </summary>
  static System::String^ LibPrefix();


  // static const char *LibExtension ();
/// <summary>
/// <para>Return the library extension for the given architecture</para>
/// </summary>
  static System::String^ LibExtension();


  // static const char *LastError ();
/// <summary>
/// <para>Return the last error produced from a calls made on this class.</para>
/// </summary>
  static System::String^ LastError();


// Did not wrap:  vtkDynamicLoader ();


// Did not wrap:  ~vtkDynamicLoader ();


// Did not wrap:  vtkDynamicLoader (const vtkDynamicLoader &);


// Did not wrap:  void vtkDynamicLoader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDynamicLoader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDynamicLoader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDynamicLoader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDynamicLoader();


};

} // end vtkCommon
