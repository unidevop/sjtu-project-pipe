#pragma once

// managed includes
#include "vtkAnimationCueDotNet.h"
#include "vtkAnimationCueDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkAnimationScene : public vtkAnimationCue
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAnimationScene *NewInstance ();
  vtkAnimationScene^ NewInstance();


  // vtkAnimationScene *SafeDownCast (vtkObject* o);
  static vtkAnimationScene^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkAnimationScene *New ();


  // void SetPlayMode (int );
/// <summary>
/// <para>Get/Set the PlayMode for running/playing the animation scene. In the Sequence mode, all the frames are generated one after the other. The time reported to each Tick of the constituent cues (during Play) is incremented by 1/frame rate, irrespective of the current time. In the RealTime mode, time indicates the instance in time. </para>
/// </summary>
  void SetPlayMode(int arg0);


  // void SetModeToSequence ();this SetPlayMode PLAYMODE_SEQUENCE 
/// <summary>
/// <para>Get/Set the PlayMode for running/playing the animation scene. In the Sequence mode, all the frames are generated one after the other. The time reported to each Tick of the constituent cues (during Play) is incremented by 1/frame rate, irrespective of the current time. In the RealTime mode, time indicates the instance in time. </para>
/// </summary>
  void SetModeToSequence();


  // void SetModeToRealTime ();this SetPlayMode PLAYMODE_REALTIME 
/// <summary>
/// <para>Get/Set the PlayMode for running/playing the animation scene. In the Sequence mode, all the frames are generated one after the other. The time reported to each Tick of the constituent cues (during Play) is incremented by 1/frame rate, irrespective of the current time. In the RealTime mode, time indicates the instance in time. </para>
/// </summary>
  void SetModeToRealTime();


  // int GetPlayMode ();
/// <summary>
/// <para>Get/Set the PlayMode for running/playing the animation scene. In the Sequence mode, all the frames are generated one after the other. The time reported to each Tick of the constituent cues (during Play) is incremented by 1/frame rate, irrespective of the current time. In the RealTime mode, time indicates the instance in time. </para>
/// </summary>
  int GetPlayMode();


  // void SetFrameRate (double );
/// <summary>
/// <para>Get/Set the frame rate (in frames per second). This parameter affects only in the Sequence mode. The time interval indicated to each cue on every tick is progressed by 1/frame-rate seconds.</para>
/// </summary>
  void SetFrameRate(double arg0);


  // double GetFrameRate ();
/// <summary>
/// <para>Get/Set the frame rate (in frames per second). This parameter affects only in the Sequence mode. The time interval indicated to each cue on every tick is progressed by 1/frame-rate seconds.</para>
/// </summary>
  double GetFrameRate();


  // void AddCue (vtkAnimationCue *cue);
/// <summary>
/// <para>Add/Remove an AnimationCue to/from the Scene. It's an error to add a cue twice to the Scene.</para>
/// </summary>
  void AddCue(vtkAnimationCue^ cue);


  // void RemoveCue (vtkAnimationCue *cue);
/// <summary>
/// <para>Add/Remove an AnimationCue to/from the Scene. It's an error to add a cue twice to the Scene.</para>
/// </summary>
  void RemoveCue(vtkAnimationCue^ cue);


  // void Play ();
/// <summary>
/// <para>Starts playing the animation scene.</para>
/// </summary>
  void Play();


  // void Stop ();
/// <summary>
/// <para>Stops the animation scene that is running.</para>
/// </summary>
  void Stop();


  // void SetLoop (int );
/// <summary>
/// <para>Enable/Disable animation loop.</para>
/// </summary>
  void SetLoop(int arg0);


  // int GetLoop ();
/// <summary>
/// <para>Enable/Disable animation loop.</para>
/// </summary>
  int GetLoop();


  // void SetAnimationTime (double time);
/// <summary>
/// <para>Makes the state of the scene same as the given time.</para>
/// </summary>
  void SetAnimationTime(double time);


  // virtual void SetTimeMode (int mode);
/// <summary>
/// <para>Overridden to allow change to Normalized mode only if none of the constituent cues is in Relative time mode.</para>
/// </summary>
  void SetTimeMode(int mode);


  // int IsInPlay ();return this InPlay 
  int IsInPlay();


// Did not wrap:  vtkAnimationScene ();


// Did not wrap:  ~vtkAnimationScene ();


// Did not wrap:  virtual void TickInternal (double currenttime, double deltatime);


// Did not wrap:  virtual void StartCueInternal ();


// Did not wrap:  virtual void EndCueInternal ();


// Did not wrap:  void InitializeChildren ();


// Did not wrap:  void FinalizeChildren ();


// Did not wrap:  vtkAnimationScene (const vtkAnimationScene &);


// Did not wrap:  void vtkAnimationScene 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAnimationScene(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAnimationScene(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAnimationScene();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAnimationScene();


};

} // end vtkCommon
