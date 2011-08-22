#pragma once

// managed includes
#include "vtkFileOutputWindowDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObject;

public ref class vtkXMLFileOutputWindow : public vtkFileOutputWindow
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXMLFileOutputWindow *NewInstance ();
  vtkXMLFileOutputWindow^ NewInstance();


  // vtkXMLFileOutputWindow *SafeDownCast (vtkObject* o);
  static vtkXMLFileOutputWindow^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkXMLFileOutputWindow *New ();


  // virtual void DisplayText (const char *);
/// <summary>
/// <para>Put the text into the log file. The text is processed to replace &amp;, &lt;, &gt; with &amp;amp, &amp;lt, and &amp;gt. Each display method outputs a different XML tag.</para>
/// </summary>
  void DisplayText(System::String^ arg0);


  // virtual void DisplayErrorText (const char *);
/// <summary>
/// <para>Put the text into the log file. The text is processed to replace &amp;, &lt;, &gt; with &amp;amp, &amp;lt, and &amp;gt. Each display method outputs a different XML tag.</para>
/// </summary>
  void DisplayErrorText(System::String^ arg0);


  // virtual void DisplayWarningText (const char *);
/// <summary>
/// <para>Put the text into the log file. The text is processed to replace &amp;, &lt;, &gt; with &amp;amp, &amp;lt, and &amp;gt. Each display method outputs a different XML tag.</para>
/// </summary>
  void DisplayWarningText(System::String^ arg0);


  // virtual void DisplayGenericWarningText (const char *);
/// <summary>
/// <para>Put the text into the log file. The text is processed to replace &amp;, &lt;, &gt; with &amp;amp, &amp;lt, and &amp;gt. Each display method outputs a different XML tag.</para>
/// </summary>
  void DisplayGenericWarningText(System::String^ arg0);


  // virtual void DisplayDebugText (const char *);
/// <summary>
/// <para>Put the text into the log file. The text is processed to replace &amp;, &lt;, &gt; with &amp;amp, &amp;lt, and &amp;gt. Each display method outputs a different XML tag.</para>
/// </summary>
  void DisplayDebugText(System::String^ arg0);


  // virtual void DisplayTag (const char *);
/// <summary>
/// <para>Put the text into the log file without processing it.</para>
/// </summary>
  void DisplayTag(System::String^ arg0);


// Did not wrap:  vtkXMLFileOutputWindow ();


// Did not wrap:  virtual ~vtkXMLFileOutputWindow ();


// Did not wrap:  void Initialize ();


// Did not wrap:  virtual void DisplayXML (const char *, const char *);


// Did not wrap:  vtkXMLFileOutputWindow (const vtkXMLFileOutputWindow &);


// Did not wrap:  void vtkXMLFileOutputWindow 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXMLFileOutputWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXMLFileOutputWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXMLFileOutputWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXMLFileOutputWindow();


};

} // end vtkCommon
