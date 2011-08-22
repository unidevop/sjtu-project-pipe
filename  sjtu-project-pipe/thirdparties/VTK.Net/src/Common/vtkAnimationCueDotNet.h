#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkAnimationCue : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAnimationCue *NewInstance ();
  vtkAnimationCue^ NewInstance();


  // vtkAnimationCue *SafeDownCast (vtkObject* o);
  static vtkAnimationCue^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkAnimationCue *New ();


  // virtual void SetTimeMode (int mode);
/// <summary>
/// <para>Get/Set the time mode. In Normalized mode, the start and end  times of the cue are normalized [0,1] with respect to the start and  end times of the container scene. In Relative mode the start and end time of the cue are specified in offset seconds relative to the  start time of the container scene.</para>
/// </summary>
  void SetTimeMode(int mode);


  // int GetTimeMode ();
/// <summary>
/// <para>Get/Set the time mode. In Normalized mode, the start and end  times of the cue are normalized [0,1] with respect to the start and  end times of the container scene. In Relative mode the start and end time of the cue are specified in offset seconds relative to the  start time of the container scene.</para>
/// </summary>
  int GetTimeMode();


  // void SetTimeModeToRelative ();this SetTimeMode TIMEMODE_RELATIVE 
/// <summary>
/// <para>Get/Set the time mode. In Normalized mode, the start and end  times of the cue are normalized [0,1] with respect to the start and  end times of the container scene. In Relative mode the start and end time of the cue are specified in offset seconds relative to the  start time of the container scene.</para>
/// </summary>
  void SetTimeModeToRelative();


  // void SetTimeModeToNormalized ();this SetTimeMode TIMEMODE_NORMALIZED 
/// <summary>
/// <para>Get/Set the Start time for this cue. When the current time is &gt;= StartTime, the Cue is in ACTIVE state. if Current time i &lt; StartTime, the Cue is in UNINITIALIZED state. Whenever the cue enters the ACTIVE state from an INACTIVE state, it triggers the StartEvent. The Start time is in seconds relative to the start of the  container Scene (when in Relative time mode) or is normalized over the span of the container Scene (when in Normalized time mode).</para>
/// </summary>
  void SetTimeModeToNormalized();


  // void SetStartTime (double );
/// <summary>
/// <para>Get/Set the Start time for this cue. When the current time is &gt;= StartTime, the Cue is in ACTIVE state. if Current time i &lt; StartTime, the Cue is in UNINITIALIZED state. Whenever the cue enters the ACTIVE state from an INACTIVE state, it triggers the StartEvent. The Start time is in seconds relative to the start of the  container Scene (when in Relative time mode) or is normalized over the span of the container Scene (when in Normalized time mode).</para>
/// </summary>
  void SetStartTime(double arg0);


  // double GetStartTime ();
/// <summary>
/// <para>Get/Set the Start time for this cue. When the current time is &gt;= StartTime, the Cue is in ACTIVE state. if Current time i &lt; StartTime, the Cue is in UNINITIALIZED state. Whenever the cue enters the ACTIVE state from an INACTIVE state, it triggers the StartEvent. The Start time is in seconds relative to the start of the  container Scene (when in Relative time mode) or is normalized over the span of the container Scene (when in Normalized time mode).</para>
/// </summary>
  double GetStartTime();


  // void SetEndTime (double );
/// <summary>
/// <para>Get/Set the End time for this cue. When the current time is &gt; EndTime, the Cue is in INACTIVE state. Whenever the cue leaves an ACTIVE state to enter  INACTIVE state, the EndEvent is triggered. The End time is in seconds relative to the start of the  container Scene (when in Relative time mode) or is normalized over the span of the container Scene (when in Normalized time mode).</para>
/// </summary>
  void SetEndTime(double arg0);


  // double GetEndTime ();
/// <summary>
/// <para>Get/Set the End time for this cue. When the current time is &gt; EndTime, the Cue is in INACTIVE state. Whenever the cue leaves an ACTIVE state to enter  INACTIVE state, the EndEvent is triggered. The End time is in seconds relative to the start of the  container Scene (when in Relative time mode) or is normalized over the span of the container Scene (when in Normalized time mode).</para>
/// </summary>
  double GetEndTime();


  // virtual void Tick (double currenttime, double deltatime);
/// <summary>
/// <para>Indicates a tick or point in time in the animation. Triggers a Tick event if currenttime &gt;= StartTime and currenttime &lt;= EndTime. Whenever the state of the cue changes, either StartEvent or EndEvent is triggerred depending upon  whether the cue entered Active state or quit active state respectively. The current time is relative to the start of the container Scene  (when in Relative time mode) or is normalized over the span of the container Scene (when in Normalized time mode). deltatime is the time since last call to Tick. deltatime also can be in seconds relative to the start of the container Scene or normalized depending upon the cue's Time mode. For the first call to Tick after a call to Initialize(), the deltatime is 0;</para>
/// </summary>
  void Tick(double currenttime, double deltatime);


  // virtual void Initialize ();
/// <summary>
/// <para>Called when the playing of the scene begins. This will set the Cue to UNINITIALIZED state.</para>
/// </summary>
  void Initialize();


  // virtual void Finalize ();
/// <summary>
/// <para>Called when the scene reaches the end. If the cue state is ACTIVE when this method is called, this will trigger a EndAnimationCueEvent.</para>
/// </summary>
  void FinalizeWrap();


// Did not wrap:  vtkAnimationCue ();


// Did not wrap:  ~vtkAnimationCue ();


// Did not wrap:  virtual void StartCueInternal ();


// Did not wrap:  virtual void TickInternal (double currenttime, double deltatime);


// Did not wrap:  virtual void EndCueInternal ();


// Did not wrap:  vtkAnimationCue (const vtkAnimationCue &);


// Did not wrap:  void vtkAnimationCue 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAnimationCue(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAnimationCue(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAnimationCue();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAnimationCue();


};

} // end vtkCommon
