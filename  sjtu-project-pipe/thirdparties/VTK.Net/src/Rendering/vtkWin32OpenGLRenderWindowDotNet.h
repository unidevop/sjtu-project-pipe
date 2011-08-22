#pragma once

// managed includes
#include "vtkOpenGLRenderWindowDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkWin32OpenGLRenderWindow : public vtkOpenGLRenderWindow
{

public:
// Did not wrap:  static vtkWin32OpenGLRenderWindow *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWin32OpenGLRenderWindow *NewInstance ();
  vtkWin32OpenGLRenderWindow^ NewInstance();


  // vtkWin32OpenGLRenderWindow *SafeDownCast (vtkObject* o);
  static vtkWin32OpenGLRenderWindow^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Start (void );
/// <summary>
/// <para>Begin the rendering process.</para>
/// </summary>
  void Start();


  // void Frame (void );
/// <summary>
/// <para>End the rendering process and display the image.</para>
/// </summary>
  void Frame();


  // virtual void WindowInitialize (void );
/// <summary>
/// <para>Create the window</para>
/// </summary>
  void WindowInitialize();


  // virtual void Initialize (void );
/// <summary>
/// <para>Initialize the rendering window.  This will setup all system-specific resources.  This method and Finalize() must be symmetric and it should be possible to call them multiple times, even changing WindowId in-between.  This is what WindowRemap does.</para>
/// </summary>
  void Initialize();


  // virtual void Finalize (void );
/// <summary>
/// <para>Finalize the rendering window.  This will shutdown all system-specific resources.  After having called this, it should be possible to destroy a window that was used for a SetWindowId() call without any ill effects.</para>
/// </summary>
  void FinalizeWrap();


  // virtual void SetFullScreen (int );
/// <summary>
/// <para>Change the window to fill the entire screen.</para>
/// </summary>
  void SetFullScreen(int arg0);


  // virtual void WindowRemap (void );
/// <summary>
/// <para>Remap the window.</para>
/// </summary>
  void WindowRemap();


  // virtual void PrefFullScreen (void );
/// <summary>
/// <para>Set the preferred window size to full screen.</para>
/// </summary>
  void PrefFullScreen();


  // virtual void SetSize (int , int );
/// <summary>
/// <para>Set the size of the window.</para>
/// </summary>
  void SetSize(int arg0, int arg1);


  // virtual void SetSize (int a[2]);vtkOpenGLRenderWindow SetSize a 
/// <summary>
/// <para>Set the size of the window.</para>
/// </summary>
  void SetSize(array<int>^ a);


// Did not wrap:  virtual int *GetSize ();


  // virtual void SetPosition (int , int );
/// <summary>
/// <para>Set the position of the window.</para>
/// </summary>
  void SetPosition(int arg0, int arg1);


  // virtual void SetPosition (int a[2]);vtkOpenGLRenderWindow SetPosition a 
/// <summary>
/// <para>Set the position of the window.</para>
/// </summary>
  void SetPosition(array<int>^ a);


// Did not wrap:  virtual int *GetScreenSize ();


// Did not wrap:  virtual int *GetPosition ();


  // virtual void SetWindowName (const char *);
/// <summary>
/// <para>Set the name of the window. This appears at the top of the window normally.</para>
/// </summary>
  void SetWindowName(System::String^ arg0);


  // void SetWindowInfo (char *);
/// <summary>
/// <para>Set this RenderWindow's window id to a pre-existing window.</para>
/// </summary>
  void SetWindowInfo(System::String^ arg0);


  // void SetNextWindowInfo (char *);
/// <summary>
/// <para>Sets the WindowInfo that will be used after a WindowRemap.</para>
/// </summary>
  void SetNextWindowInfo(System::String^ arg0);


  // void SetParentInfo (char *);
/// <summary>
/// <para>Sets the HWND id of the window that WILL BE created.</para>
/// </summary>
  void SetParentInfo(System::String^ arg0);


  // virtual void SetStereoCapableWindow (int capable);
/// <summary>
/// <para>Prescribe that the window be created in a stereo-capable mode. This method must be called before the window is realized. This method overrides the superclass method since this class can actually check whether the window has been realized yet.</para>
/// </summary>
  void SetStereoCapableWindow(int capable);


  // void MakeCurrent ();
/// <summary>
/// <para>Make this windows OpenGL context the current context.</para>
/// </summary>
  void MakeCurrent();


  // const char *ReportCapabilities ();
/// <summary>
/// <para>Get report of capabilities for the render window</para>
/// </summary>
  System::String^ ReportCapabilities();


  // int SupportsOpenGL ();
/// <summary>
/// <para>Does this render window support OpenGL? 0-false, 1-true</para>
/// </summary>
  int SupportsOpenGL();


  // int IsDirect ();
/// <summary>
/// <para>Is this render window using hardware acceleration? 0-false, 1-true</para>
/// </summary>
  int IsDirect();


  // virtual int GetEventPending ();
/// <summary>
/// <para>Check to see if a mouse button has been pressed. All other events are ignored by this method. This is a useful check to abort a long render.</para>
/// </summary>
  int GetEventPending();


// Did not wrap:  void SetupMemoryRendering (int x, int y, HDC prn);


// Did not wrap:  void SetupMemoryRendering (HBITMAP hbmp);


  // void ResumeScreenRendering (void );
/// <summary>
/// <para>These methods can be used by MFC applications to support print preview and printing, or more general rendering into memory.</para>
/// </summary>
  void ResumeScreenRendering();


// Did not wrap:  HDC GetMemoryDC ();


// Did not wrap:  unsigned char *GetMemoryData ();return this MemoryData 


// Did not wrap:  virtual void SetupPalette (HDC hDC);


// Did not wrap:  virtual void SetupPixelFormat (HDC hDC, DWORD dwFlags, int debug, int bpp, int zbpp);


  // void Clean ();
/// <summary>
/// <para>Clean up device contexts, rendering contexts, etc.</para>
/// </summary>
  void Clean();


  // void HideCursor ();
/// <summary>
/// <para>Hide or Show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead. Set cursor position in window (note that (0,0) is the lower left  corner).</para>
/// </summary>
  void HideCursor();


  // void ShowCursor ();
/// <summary>
/// <para>Hide or Show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead. Set cursor position in window (note that (0,0) is the lower left  corner).</para>
/// </summary>
  void ShowCursor();


  // void SetCursorPosition (int x, int y);
/// <summary>
/// <para>Hide or Show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead. Set cursor position in window (note that (0,0) is the lower left  corner).</para>
/// </summary>
  void SetCursorPosition(int x, int y);


  // virtual void SetCurrentCursor (int );
/// <summary>
/// <para>Change the shape of the cursor</para>
/// </summary>
  void SetCurrentCursor(int arg0);


  // virtual void SetOffScreenRendering (int offscreen);
/// <summary>
/// <para>Override the default implementation so that we can actively switch between on and off screen rendering.</para>
/// </summary>
  void SetOffScreenRendering(int offscreen);


// Did not wrap:  vtkWin32OpenGLRenderWindow ();


// Did not wrap:  ~vtkWin32OpenGLRenderWindow ();


// Did not wrap:  void ResizeWhileOffscreen (int xsize, int ysize);


// Did not wrap:  void CreateAWindow (int x, int y, int width, int height);


// Did not wrap:  void InitializeApplication ();


// Did not wrap:  void CleanUpOffScreenRendering (void );


// Did not wrap:  void CreateOffScreenDC (int xsize, int ysize, HDC aHdc);


// Did not wrap:  void CreateOffScreenDC (HBITMAP hbmp, HDC aHdc);


// Did not wrap:  vtkWin32OpenGLRenderWindow (const vtkWin32OpenGLRenderWindow &);


// Did not wrap:  void vtkWin32OpenGLRenderWindow 


  /// <summary>
  /// Sets the HWND for the render window.
  /// </summary>
  void SetWindowId(System::IntPtr hWindow);

  /// <summary>
  /// Sets the HWND for the parent of the render window.
  /// </summary>
  void SetParentId(System::IntPtr hParent);


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWin32OpenGLRenderWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWin32OpenGLRenderWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWin32OpenGLRenderWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWin32OpenGLRenderWindow();


};

} // end vtkRendering
