#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkTimerLog : public vtkObject
{

public:
// Did not wrap:  typedef long fd_mask static vtkTimerLog *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTimerLog *NewInstance ();
  vtkTimerLog^ NewInstance();


  // vtkTimerLog *SafeDownCast (vtkObject* o);
  static vtkTimerLog^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static void SetLogging (int v);vtkTimerLog Logging v 
/// <summary>
/// <para>This flag will turn loging of events off or on.   By default, logging is on.</para>
/// </summary>
  static void SetLogging(int v);


  // static int GetLogging ();return vtkTimerLog Logging 
/// <summary>
/// <para>This flag will turn loging of events off or on.   By default, logging is on.</para>
/// </summary>
  static int GetLogging();


  // static void LoggingOn ();vtkTimerLog SetLogging 
/// <summary>
/// <para>This flag will turn loging of events off or on.   By default, logging is on.</para>
/// </summary>
  static void LoggingOn();


  // static void LoggingOff ();vtkTimerLog SetLogging 
/// <summary>
/// <para>Set/Get the maximum number of entries allowed in the timer log</para>
/// </summary>
  static void LoggingOff();


  // static void SetMaxEntries (int a);
/// <summary>
/// <para>Set/Get the maximum number of entries allowed in the timer log</para>
/// </summary>
  static void SetMaxEntries(int a);


  // static int GetMaxEntries ();
/// <summary>
/// <para>Set/Get the maximum number of entries allowed in the timer log</para>
/// </summary>
  static int GetMaxEntries();


  // static void DumpLog (const char *filename);
/// <summary>
/// <para>Write the timing table out to a file.  Calculate some helpful statistics (deltas and  percentages) in the process.</para>
/// </summary>
  static void DumpLog(System::String^ filename);


  // static void MarkStartEvent (const char *EventString);
/// <summary>
/// <para>I want to time events, so I am creating this interface to mark events that have a start and an end.  These events can be, nested. The standard Dumplog ignores the indents.</para>
/// </summary>
  static void MarkStartEvent(System::String^ EventString);


  // static void MarkEndEvent (const char *EventString);
/// <summary>
/// <para>I want to time events, so I am creating this interface to mark events that have a start and an end.  These events can be, nested. The standard Dumplog ignores the indents.</para>
/// </summary>
  static void MarkEndEvent(System::String^ EventString);


  // static int GetNumberOfEvents ();
/// <summary>
/// <para>Programatic access to events.  Indexed from 0 to num-1.</para>
/// </summary>
  static int GetNumberOfEvents();


  // static int GetEventIndent (int i);
/// <summary>
/// <para>Programatic access to events.  Indexed from 0 to num-1.</para>
/// </summary>
  static int GetEventIndent(int i);


  // static double GetEventWallTime (int i);
/// <summary>
/// <para>Programatic access to events.  Indexed from 0 to num-1.</para>
/// </summary>
  static double GetEventWallTime(int i);


  // static const char *GetEventString (int i);
/// <summary>
/// <para>Programatic access to events.  Indexed from 0 to num-1.</para>
/// </summary>
  static System::String^ GetEventString(int i);


  // static void MarkEvent (const char *EventString);
/// <summary>
/// <para>Record a timing event and capture wall time and cpu ticks.</para>
/// </summary>
  static void MarkEvent(System::String^ EventString);


  // static void ResetLog ();
/// <summary>
/// <para>Clear the timing table.  walltime and cputime will also be set to zero when the first new event is recorded.</para>
/// </summary>
  static void ResetLog();


  // static void AllocateLog ();
/// <summary>
/// <para>Allocate timing table with MaxEntries elements.</para>
/// </summary>
  static void AllocateLog();


  // static void CleanupLog ();
/// <summary>
/// <para>Remove timer log.</para>
/// </summary>
  static void CleanupLog();


  // static double GetUniversalTime ();
/// <summary>
/// <para>Returns the elapsed number of seconds since January 1, 1970. This is also called Universal Coordinated Time.</para>
/// </summary>
  static double GetUniversalTime();


  // static double GetCPUTime ();
/// <summary>
/// <para>Returns the CPU time for this process On Win32 platforms this actually returns wall time.</para>
/// </summary>
  static double GetCPUTime();


  // void StartTimer ();
/// <summary>
/// <para>Set the StartTime to the current time. Used with GetElapsedTime().</para>
/// </summary>
  void StartTimer();


  // void StopTimer ();
/// <summary>
/// <para>Sets EndTime to the current time. Used with GetElapsedTime().</para>
/// </summary>
  void StopTimer();


  // double GetElapsedTime ();
/// <summary>
/// <para>Returns the difference between StartTime and EndTime as  a doubleing point value indicating the elapsed time in seconds.</para>
/// </summary>
  double GetElapsedTime();


  // static double GetCurrentTime ();
/// <summary>
/// <para>@deprecated Replaced by vtkTimerLog::GetUniversalTime() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  static double GetCurrentTime();


// Did not wrap:  vtkTimerLog ();this StartTime this EndTime 


// Did not wrap:  virtual ~vtkTimerLog ();


// Did not wrap:  static vtkTimerLogEntry *GetEvent (int i);


// Did not wrap:  vtkTimerLog (const vtkTimerLog &);


// Did not wrap:  void vtkTimerLog 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTimerLog(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTimerLog(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTimerLog();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTimerLog();


};

} // end vtkCommon
