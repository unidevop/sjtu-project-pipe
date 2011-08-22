#pragma once

// managed includes
#include "vtkRenderWindowInteractorDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkWin32RenderWindowInteractor : public vtkRenderWindowInteractor
{

public:
// Did not wrap:  static vtkWin32RenderWindowInteractor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWin32RenderWindowInteractor *NewInstance ();
  vtkWin32RenderWindowInteractor^ NewInstance();


  // vtkWin32RenderWindowInteractor *SafeDownCast (vtkObject* o);
  static vtkWin32RenderWindowInteractor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize ();
/// <summary>
/// <para>Initialize the event handler</para>
/// </summary>
  void Initialize();


  // virtual void Enable ();
/// <summary>
/// <para>Enable/Disable interactions.  By default interactors are enabled when initialized.  Initialize() must be called prior to enabling/disabling interaction. These methods are used when a window/widget is being shared by multiple renderers and interactors.  This allows a &quot;modal&quot; display where one interactor is active when its data is to be displayed and all other interactors associated with the widget are disabled when their data is not displayed.</para>
/// </summary>
  void Enable();


  // virtual void Disable ();
/// <summary>
/// <para>Enable/Disable interactions.  By default interactors are enabled when initialized.  Initialize() must be called prior to enabling/disabling interaction. These methods are used when a window/widget is being shared by multiple renderers and interactors.  This allows a &quot;modal&quot; display where one interactor is active when its data is to be displayed and all other interactors associated with the widget are disabled when their data is not displayed.</para>
/// </summary>
  void Disable();


  // virtual void Start ();
/// <summary>
/// <para>This will start up the event loop and never return. If you call this method it will loop processing events until the application is exited.</para>
/// </summary>
  void Start();


  // void SetInstallMessageProc (int );
/// <summary>
/// <para>By default the interactor installs a MessageProc callback which intercepts windows messages to the window and controls interactions. MFC or BCB programs can prevent this and instead directly route any mouse/key messages into the event bindings by setting InstallMessgeProc to false.</para>
/// </summary>
  void SetInstallMessageProc(int arg0);


  // int GetInstallMessageProc ();
/// <summary>
/// <para>By default the interactor installs a MessageProc callback which intercepts windows messages to the window and controls interactions. MFC or BCB programs can prevent this and instead directly route any mouse/key messages into the event bindings by setting InstallMessgeProc to false.</para>
/// </summary>
  int GetInstallMessageProc();


  // void InstallMessageProcOn ();
/// <summary>
/// <para>By default the interactor installs a MessageProc callback which intercepts windows messages to the window and controls interactions. MFC or BCB programs can prevent this and instead directly route any mouse/key messages into the event bindings by setting InstallMessgeProc to false.</para>
/// </summary>
  void InstallMessageProcOn();


  // void InstallMessageProcOff ();
/// <summary>
/// <para>By default the interactor installs a MessageProc callback which intercepts windows messages to the window and controls interactions. MFC or BCB programs can prevent this and instead directly route any mouse/key messages into the event bindings by setting InstallMessgeProc to false.</para>
/// </summary>
  void InstallMessageProcOff();


  // void TerminateApp (void );
/// <summary>
/// <para>Win32 specific application terminate, calls ClassExitMethod then calls PostQuitMessage(0) to terminate the application. An application can Specify ExitMethod for alternative behavior (i.e. suppression of keyboard exit)</para>
/// </summary>
  void TerminateApp();


  // int CreateTimer (int timertype);
/// <summary>
/// <para>Win32 timer methods</para>
/// </summary>
  int CreateTimer(int timertype);


  // int DestroyTimer (void );
/// <summary>
/// <para>Win32 timer methods</para>
/// </summary>
  int DestroyTimer();


// Did not wrap:  static void SetClassExitMethod (void (*func)(void *) , void *arg);


// Did not wrap:  static void SetClassExitMethodArgDelete (void (*func)(void *) );


  // virtual void ExitCallback ();
/// <summary>
/// <para>These methods correspond to the the Exit, User and Pick callbacks. They allow for the Style to invoke them.</para>
/// </summary>
  void ExitCallback();


// Did not wrap:  vtkWin32RenderWindowInteractor ();


// Did not wrap:  ~vtkWin32RenderWindowInteractor ();


// Did not wrap:  vtkWin32RenderWindowInteractor (const vtkWin32RenderWindowInteractor &);


// Did not wrap:  void vtkWin32RenderWindowInteractor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWin32RenderWindowInteractor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWin32RenderWindowInteractor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWin32RenderWindowInteractor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWin32RenderWindowInteractor();


};

} // end vtkRendering
