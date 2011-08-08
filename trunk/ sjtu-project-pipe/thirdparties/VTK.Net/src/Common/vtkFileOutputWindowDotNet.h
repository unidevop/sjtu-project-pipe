#pragma once

// managed includes
#include "vtkOutputWindowDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkFileOutputWindow : public vtkOutputWindow
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFileOutputWindow *NewInstance ();
  vtkFileOutputWindow^ NewInstance();


  // vtkFileOutputWindow *SafeDownCast (vtkObject* o);
  static vtkFileOutputWindow^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkFileOutputWindow *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void DisplayText (const char *);
/// <summary>
/// <para>New lines are converted to carriage return new lines.</para>
/// </summary>
  void DisplayText(System::String^ arg0);


  // void SetFileName (char *);
/// <summary>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// </summary>
  System::String^ GetFileName();


  // void SetFlush (int );
/// <summary>
/// <para>to the log file.</para>
/// </summary>
  void SetFlush(int arg0);


  // int GetFlush ();
/// <summary>
/// <para>to the log file.</para>
/// </summary>
  int GetFlush();


  // void FlushOn ();
/// <summary>
/// <para>to the log file.</para>
/// </summary>
  void FlushOn();


  // void FlushOff ();
/// <summary>
/// <para>to the log file.</para>
/// </summary>
  void FlushOff();


  // void SetAppend (int );
/// <summary>
/// <para>opened in append mode.  Otherwise, if the log file exists, it will be overwritten each time the vtkFileOutputWindow  is created.</para>
/// </summary>
  void SetAppend(int arg0);


  // int GetAppend ();
/// <summary>
/// <para>opened in append mode.  Otherwise, if the log file exists, it will be overwritten each time the vtkFileOutputWindow  is created.</para>
/// </summary>
  int GetAppend();


  // void AppendOn ();
/// <summary>
/// <para>opened in append mode.  Otherwise, if the log file exists, it will be overwritten each time the vtkFileOutputWindow  is created.</para>
/// </summary>
  void AppendOn();


  // void AppendOff ();
/// <summary>
/// <para>opened in append mode.  Otherwise, if the log file exists, it will be overwritten each time the vtkFileOutputWindow  is created.</para>
/// </summary>
  void AppendOff();


// Did not wrap:  vtkFileOutputWindow ();


// Did not wrap:  virtual ~vtkFileOutputWindow ();


// Did not wrap:  void Initialize ();


// Did not wrap:  vtkFileOutputWindow (const vtkFileOutputWindow &);


// Did not wrap:  void vtkFileOutputWindow 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFileOutputWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFileOutputWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFileOutputWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFileOutputWindow();


};

} // end vtkCommon
