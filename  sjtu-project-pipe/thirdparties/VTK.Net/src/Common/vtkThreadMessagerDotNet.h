#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkThreadMessager : public vtkObject
{

public:
// Did not wrap:  static vtkThreadMessager *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkThreadMessager *NewInstance ();
  vtkThreadMessager^ NewInstance();


  // vtkThreadMessager *SafeDownCast (vtkObject* o);
  static vtkThreadMessager^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void WaitForMessage ();
/// <summary>
/// <para>Wait (block, non-busy) until another thread sends a message.</para>
/// </summary>
  void WaitForMessage();


  // void SendWakeMessage ();
/// <summary>
/// <para>Send a message to all threads who are waiting via WaitForMessage().</para>
/// </summary>
  void SendWakeMessage();


  // void EnableWaitForReceiver ();
/// <summary>
/// <para>pthreads only. If the wait is enabled, the thread who is to call WaitForMessage() will block until a receiver thread is ready to receive.</para>
/// </summary>
  void EnableWaitForReceiver();


  // void DisableWaitForReceiver ();
/// <summary>
/// <para>pthreads only. If the wait is enabled, the thread who is to call WaitForMessage() will block until a receiver thread is ready to receive.</para>
/// </summary>
  void DisableWaitForReceiver();


  // void WaitForReceiver ();
/// <summary>
/// <para>pthreads only. If wait is enable, this will block until one thread is ready to receive a message.</para>
/// </summary>
  void WaitForReceiver();


  // void SendMessage ();
/// <summary>
/// <para>@deprecated Replaced by vtkThreadMessager::SendWakeMessage() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SendMessage();


// Did not wrap:  vtkThreadMessager ();


// Did not wrap:  ~vtkThreadMessager ();


// Did not wrap:  vtkThreadMessager (const vtkThreadMessager &);


// Did not wrap:  void vtkThreadMessager 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkThreadMessager(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkThreadMessager(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkThreadMessager();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkThreadMessager();


};

} // end vtkCommon
