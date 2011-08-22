#pragma once

// managed includes
#include "vtkObjectBaseDotNet.h"
#include "vtkDotNetCommand.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkObject : public vtkObjectBase
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkObject *NewInstance ();
  vtkObject^ NewInstance();


  // vtkObject *SafeDownCast (vtkObject* o);
  static vtkObject^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkObject *New ();


// Did not wrap:  void *new size_t tSize 


// Did not wrap:  void delete void p 


  // virtual void DebugOn ();
/// <summary>
/// <para>Turn debugging output on.</para>
/// </summary>
  void DebugOn();


  // virtual void DebugOff ();
/// <summary>
/// <para>Turn debugging output off.</para>
/// </summary>
  void DebugOff();


  // unsigned char GetDebug ();
/// <summary>
/// <para>Get the value of the debug flag.</para>
/// </summary>
  unsigned char GetDebug();


  // void SetDebug (unsigned char debugFlag);
/// <summary>
/// <para>Set the value of the debug flag. A non-zero value turns debugging on.</para>
/// </summary>
  void SetDebug(unsigned char debugFlag);


  // static void BreakOnError ();
/// <summary>
/// <para>This method is called when vtkErrorMacro executes. It allows  the debugger to break on error.</para>
/// </summary>
  static void BreakOnError();


  // virtual void Modified ();
/// <summary>
/// <para>Update the modification time for this object. Many filters rely on the modification time to determine if they need to recompute their data. The modification time is a unique monotonically increasing unsigned long integer.</para>
/// </summary>
  void Modified();


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>Return this object's modified time.</para>
/// </summary>
  unsigned long GetMTime();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static void SetGlobalWarningDisplay (int val);
/// <summary>
/// <para>This is a global flag that controls whether any debug, warning or error messages are displayed.</para>
/// </summary>
  static void SetGlobalWarningDisplay(int val);


  // static void GlobalWarningDisplayOn ();vtkObject SetGlobalWarningDisplay 
/// <summary>
/// <para>This is a global flag that controls whether any debug, warning or error messages are displayed.</para>
/// </summary>
  static void GlobalWarningDisplayOn();


  // static void GlobalWarningDisplayOff ();vtkObject SetGlobalWarningDisplay 
/// <summary>
/// <para>This is a global flag that controls whether any debug, warning or error messages are displayed.</para>
/// </summary>
  static void GlobalWarningDisplayOff();


  // static int GetGlobalWarningDisplay ();
/// <summary>
/// <para>This is a global flag that controls whether any debug, warning or error messages are displayed.</para>
/// </summary>
  static int GetGlobalWarningDisplay();


  // void RemoveObserver (unsigned long tag);
/// <summary>
/// <para>Allow people to add/remove/invoke observers (callbacks) to any VTK object.  This is an implementation of the subject/observer design pattern. An observer is added by specifying an event to respond to and a vtkCommand to execute. It returns an unsigned long tag which can be used later to remove the event or retrieve the command. When events are invoked, the observers are called in the order they were added. If a priority value is specified, then the higher  priority commands are called first. A command may set an abort flag to stop processing of the event. (See vtkCommand.h for more information.)</para>
/// </summary>
  void RemoveObserver(unsigned long tag);


  // void RemoveObservers (unsigned long event);
/// <summary>
/// <para>Allow people to add/remove/invoke observers (callbacks) to any VTK object.  This is an implementation of the subject/observer design pattern. An observer is added by specifying an event to respond to and a vtkCommand to execute. It returns an unsigned long tag which can be used later to remove the event or retrieve the command. When events are invoked, the observers are called in the order they were added. If a priority value is specified, then the higher  priority commands are called first. A command may set an abort flag to stop processing of the event. (See vtkCommand.h for more information.)</para>
/// </summary>
  void RemoveObservers(unsigned long event);


  // void RemoveObservers (const char *event);
/// <summary>
/// <para>Allow people to add/remove/invoke observers (callbacks) to any VTK object.  This is an implementation of the subject/observer design pattern. An observer is added by specifying an event to respond to and a vtkCommand to execute. It returns an unsigned long tag which can be used later to remove the event or retrieve the command. When events are invoked, the observers are called in the order they were added. If a priority value is specified, then the higher  priority commands are called first. A command may set an abort flag to stop processing of the event. (See vtkCommand.h for more information.)</para>
/// </summary>
  void RemoveObservers(System::String^ event);


  // int HasObserver (unsigned long event);
/// <summary>
/// <para>Allow people to add/remove/invoke observers (callbacks) to any VTK object.  This is an implementation of the subject/observer design pattern. An observer is added by specifying an event to respond to and a vtkCommand to execute. It returns an unsigned long tag which can be used later to remove the event or retrieve the command. When events are invoked, the observers are called in the order they were added. If a priority value is specified, then the higher  priority commands are called first. A command may set an abort flag to stop processing of the event. (See vtkCommand.h for more information.)</para>
/// </summary>
  int HasObserver(unsigned long event);


  // int HasObserver (const char *event);
/// <summary>
/// <para>Allow people to add/remove/invoke observers (callbacks) to any VTK object.  This is an implementation of the subject/observer design pattern. An observer is added by specifying an event to respond to and a vtkCommand to execute. It returns an unsigned long tag which can be used later to remove the event or retrieve the command. When events are invoked, the observers are called in the order they were added. If a priority value is specified, then the higher  priority commands are called first. A command may set an abort flag to stop processing of the event. (See vtkCommand.h for more information.)</para>
/// </summary>
  int HasObserver(System::String^ event);


  // int InvokeEvent (unsigned long event);return this InvokeEvent event NULL 
  int InvokeEvent(unsigned long event);


  // int InvokeEvent (const char *event);return this InvokeEvent event NULL 
  int InvokeEvent(System::String^ event);


// Did not wrap:  vtkObject ();


// Did not wrap:  virtual ~vtkObject ();


// Did not wrap:  virtual void RegisterInternal (vtkObjectBase *, int check);


// Did not wrap:  virtual void UnRegisterInternal (vtkObjectBase *, int check);


// Did not wrap:  vtkObject (const vtkObject &);


// Did not wrap:  void vtkObject 


/// <summary>
/// Add an observer to this class.
/// </summary>
/// <param name="eid">The event id from the VTK enum EventId</param>
/// <remarks>
/// The wrapper creates a vtkDotNetCommand to save a pointer to the vtkDotNetCallback.
/// The vtkDotNetCommand receives events and forwards them to the callback.
/// </remarks>
  unsigned long AddObserver(unsigned long eid,	vtkDotNetCallback^ delegateCallback);


/// <summary>
/// Add an observer to this class.
/// </summary>
/// <param name="eid">The event id from the VTK enum EventId</param>
/// <param name="data">When registering an observer, the data member can store
/// any managed object, and it will be passed to the vtkDotNetCallback
/// when it is called.</param>
/// <remarks>
/// The wrapper creates a vtkDotNetCommand to save a pointer to the vtkDotNetCallback.
/// The vtkDotNetCommand receives events and forwards them to the callback.
/// </remarks>
  unsigned long AddObserver(unsigned long eid,	vtkDotNetCallback^ delegateCallback, Object^ data);


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkObject(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkObject(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkObject();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkObject();


};

} // end vtkCommon
