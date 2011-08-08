#pragma once

// managed includes
#include "vtkOutputWindowDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkWin32ProcessOutputWindow : public vtkOutputWindow
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWin32ProcessOutputWindow *NewInstance ();
  vtkWin32ProcessOutputWindow^ NewInstance();


  // vtkWin32ProcessOutputWindow *SafeDownCast (vtkObject* o);
  static vtkWin32ProcessOutputWindow^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkWin32ProcessOutputWindow *New ();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void DisplayText (const char *);
/// <summary>
/// <para>Send text to the output window process.</para>
/// </summary>
  void DisplayText(System::String^ arg0);


// Did not wrap:  vtkWin32ProcessOutputWindow ();


// Did not wrap:  ~vtkWin32ProcessOutputWindow ();


// Did not wrap:  int Initialize ();


// Did not wrap:  void Write (const char *data, int length);


// Did not wrap:  vtkWin32ProcessOutputWindow (const vtkWin32ProcessOutputWindow &);


// Did not wrap:  void vtkWin32ProcessOutputWindow 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWin32ProcessOutputWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWin32ProcessOutputWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWin32ProcessOutputWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWin32ProcessOutputWindow();


};

} // end vtkCommon
