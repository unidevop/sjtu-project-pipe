#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDebugLeaks : public vtkObject
{

public:
// Did not wrap:  static vtkDebugLeaks *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDebugLeaks *NewInstance ();
  vtkDebugLeaks^ NewInstance();


  // vtkDebugLeaks *SafeDownCast (vtkObject* o);
  static vtkDebugLeaks^ SafeDownCast(vtkObject^ o);


  // static void ConstructClass (const char *classname);
/// <summary>
/// <para>Call this when creating a class of a given name.</para>
/// </summary>
  static void ConstructClass(System::String^ classname);


  // static void DestructClass (const char *classname);
/// <summary>
/// <para>Call this when deleting a class of a given name.</para>
/// </summary>
  static void DestructClass(System::String^ classname);


  // static int PrintCurrentLeaks ();
/// <summary>
/// <para>Print all the values in the table.  Returns non-zero if there were leaks.</para>
/// </summary>
  static int PrintCurrentLeaks();


  // static void PromptUserOn ();
/// <summary>
/// <para>@deprecated Turn prompt at exit on/off (this setting is deprecated  and will be ignored).</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  static void PromptUserOn();


  // static void PromptUserOff ();
/// <summary>
/// <para>@deprecated Turn prompt at exit on/off (this setting is deprecated  and will be ignored).</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  static void PromptUserOff();


  // static int GetExitError ();
/// <summary>
/// <para>Get/Set flag for exiting with an error when leaks are present. Default is on when testing and off otherwise.</para>
/// </summary>
  static int GetExitError();


  // static void SetExitError (int );
/// <summary>
/// <para>Get/Set flag for exiting with an error when leaks are present. Default is on when testing and off otherwise.</para>
/// </summary>
  static void SetExitError(int arg0);


// Did not wrap:  vtkDebugLeaks ();


// Did not wrap:  virtual ~vtkDebugLeaks ();


// Did not wrap:  static int DisplayMessageBox (const char *);


// Did not wrap:  static void ClassInitialize ();


// Did not wrap:  static void ClassFinalize ();


// Did not wrap:  vtkDebugLeaks (const vtkDebugLeaks &);


// Did not wrap:  void vtkDebugLeaks 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDebugLeaks(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDebugLeaks(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDebugLeaks();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDebugLeaks();


};

} // end vtkCommon
