#pragma once

// managed includes
#include "vtkOutputWindowDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkWin32OutputWindow : public vtkOutputWindow
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWin32OutputWindow *NewInstance ();
  vtkWin32OutputWindow^ NewInstance();


  // vtkWin32OutputWindow *SafeDownCast (vtkObject* o);
  static vtkWin32OutputWindow^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkWin32OutputWindow *New ();


  // virtual void DisplayText (const char *);
/// <summary>
/// <para>New lines are converted to carriage return new lines.</para>
/// </summary>
  void DisplayText(System::String^ arg0);


// Did not wrap:  vtkWin32OutputWindow ();


// Did not wrap:  virtual ~vtkWin32OutputWindow ();


// Did not wrap:  void PromptText (const char *text);


// Did not wrap:  static void AddText (const char *);


// Did not wrap:  static int Initialize ();


// Did not wrap:  vtkWin32OutputWindow (const vtkWin32OutputWindow &);


// Did not wrap:  void vtkWin32OutputWindow 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWin32OutputWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWin32OutputWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWin32OutputWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWin32OutputWindow();


};

} // end vtkCommon
