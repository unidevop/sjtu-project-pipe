#pragma once

// managed includes
#include "vtkInteractorObserverDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindowInteractor;

public ref class vtkInteractorEventRecorder : public vtkInteractorObserver
{

public:
// Did not wrap:  static vtkInteractorEventRecorder *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorEventRecorder *NewInstance ();
  vtkInteractorEventRecorder^ NewInstance();


  // vtkInteractorEventRecorder *SafeDownCast (vtkObject* o);
  static vtkInteractorEventRecorder^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetEnabled (int );
  void SetEnabled(int arg0);


  // virtual void SetInteractor (vtkRenderWindowInteractor *iren);
  void SetInteractor(vtkRenderWindowInteractor^ iren);


  // void SetFileName (char *);
/// <summary>
/// <para>Set/Get the name of a file events should be written to/from.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Set/Get the name of a file events should be written to/from.</para>
/// </summary>
  System::String^ GetFileName();


  // void Record ();
/// <summary>
/// <para>Invoke this method to begin recording events. The events will be recorded to the filename indicated.</para>
/// </summary>
  void Record();


  // void Play ();
/// <summary>
/// <para>Invoke this method to begin playing events from the current position. The events will be played back from the filename indicated.</para>
/// </summary>
  void Play();


  // void Stop ();
/// <summary>
/// <para>Invoke this method to stop recording/playing events.</para>
/// </summary>
  void Stop();


  // void Rewind ();
/// <summary>
/// <para>Rewind to the beginning of the file.</para>
/// </summary>
  void Rewind();


  // void SetReadFromInputString (int );
/// <summary>
/// <para>Enable reading from an InputString as compared to the default behavior, which is to read from a file.</para>
/// </summary>
  void SetReadFromInputString(int arg0);


  // int GetReadFromInputString ();
/// <summary>
/// <para>Enable reading from an InputString as compared to the default behavior, which is to read from a file.</para>
/// </summary>
  int GetReadFromInputString();


  // void ReadFromInputStringOn ();
/// <summary>
/// <para>Enable reading from an InputString as compared to the default behavior, which is to read from a file.</para>
/// </summary>
  void ReadFromInputStringOn();


  // void ReadFromInputStringOff ();
/// <summary>
/// <para>Enable reading from an InputString as compared to the default behavior, which is to read from a file.</para>
/// </summary>
  void ReadFromInputStringOff();


  // void SetInputString (char *);
/// <summary>
/// <para>Set/Get the string to read from.</para>
/// </summary>
  void SetInputString(System::String^ arg0);


  // char *GetInputString ();
/// <summary>
/// <para>Set/Get the string to read from.</para>
/// </summary>
  System::String^ GetInputString();


// Did not wrap:  vtkInteractorEventRecorder ();


// Did not wrap:  ~vtkInteractorEventRecorder ();


// Did not wrap:  static void ProcessCharEvent (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  virtual void WriteEvent (const char *event, int pos[2], int ctrlKey, int shiftKey, int keyCode, int repeatCount, char *keySym);


// Did not wrap:  virtual void ReadEvent ();


// Did not wrap:  vtkInteractorEventRecorder (const vtkInteractorEventRecorder &);


// Did not wrap:  void vtkInteractorEventRecorder 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorEventRecorder(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorEventRecorder(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorEventRecorder();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorEventRecorder();


};

} // end vtkRendering
