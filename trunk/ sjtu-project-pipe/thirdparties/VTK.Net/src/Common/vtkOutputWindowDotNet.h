#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOutputWindow : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOutputWindow *NewInstance ();
  vtkOutputWindow^ NewInstance();


  // vtkOutputWindow *SafeDownCast (vtkObject* o);
  static vtkOutputWindow^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkOutputWindow *New ();


  // static vtkOutputWindow *GetInstance ();
/// <summary>
/// <para>Return the singleton instance with no reference counting.</para>
/// </summary>
  static vtkOutputWindow^ GetInstance();


  // static void SetInstance (vtkOutputWindow *instance);
/// <summary>
/// <para>Supply a user defined output window. Call -&gt;Delete() on the supplied instance after setting it.</para>
/// </summary>
  static void SetInstance(vtkOutputWindow^ instance);


  // virtual void DisplayText (const char *);
/// <summary>
/// <para>Display the text. Four virtual methods exist, depending on the type of message to display. This allows redirection or reformatting of the messages. The default implementation uses DisplayText for all.</para>
/// </summary>
  void DisplayText(System::String^ arg0);


  // virtual void DisplayErrorText (const char *);
/// <summary>
/// <para>Display the text. Four virtual methods exist, depending on the type of message to display. This allows redirection or reformatting of the messages. The default implementation uses DisplayText for all.</para>
/// </summary>
  void DisplayErrorText(System::String^ arg0);


  // virtual void DisplayWarningText (const char *);
/// <summary>
/// <para>Display the text. Four virtual methods exist, depending on the type of message to display. This allows redirection or reformatting of the messages. The default implementation uses DisplayText for all.</para>
/// </summary>
  void DisplayWarningText(System::String^ arg0);


  // virtual void DisplayGenericWarningText (const char *);
/// <summary>
/// <para>Display the text. Four virtual methods exist, depending on the type of message to display. This allows redirection or reformatting of the messages. The default implementation uses DisplayText for all.</para>
/// </summary>
  void DisplayGenericWarningText(System::String^ arg0);


  // virtual void DisplayDebugText (const char *);
  void DisplayDebugText(System::String^ arg0);


  // void PromptUserOn ();
/// <summary>
/// <para>If PromptUser is set to true then each time a line of text is displayed, the user is asked if they want to keep getting messages.</para>
/// </summary>
  void PromptUserOn();


  // void PromptUserOff ();
/// <summary>
/// <para>If PromptUser is set to true then each time a line of text is displayed, the user is asked if they want to keep getting messages.</para>
/// </summary>
  void PromptUserOff();


  // void SetPromptUser (int );
/// <summary>
/// <para>If PromptUser is set to true then each time a line of text is displayed, the user is asked if they want to keep getting messages.</para>
/// </summary>
  void SetPromptUser(int arg0);


// Did not wrap:  vtkOutputWindow ();


// Did not wrap:  virtual ~vtkOutputWindow ();


// Did not wrap:  vtkOutputWindow (const vtkOutputWindow &);


// Did not wrap:  void vtkOutputWindow 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOutputWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOutputWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOutputWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOutputWindow();


};

} // end vtkCommon
