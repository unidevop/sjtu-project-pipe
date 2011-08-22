#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindow;

public ref class vtkExporter : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExporter *NewInstance ();
  vtkExporter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Write ();
/// <summary>
/// <para>Write data to output. Method executes subclasses WriteData() method, as  well as StartWrite() and EndWrite() methods.</para>
/// </summary>
  void Write();


  // void Update ();
/// <summary>
/// <para>Convenient alias for Write() method.</para>
/// </summary>
  void Update();


  // virtual void SetRenderWindow (vtkRenderWindow *);
/// <summary>
/// <para>Set/Get the rendering window that contains the scene to be written.</para>
/// </summary>
  void SetRenderWindow(vtkRenderWindow^ arg0);


  // vtkRenderWindow *GetRenderWindow ();
/// <summary>
/// <para>Set/Get the rendering window that contains the scene to be written.</para>
/// </summary>
  vtkRenderWindow^ GetRenderWindow();


  // void SetInput (vtkRenderWindow *renWin);this SetRenderWindow renWin 
/// <summary>
/// <para>These methods are provided for backward compatibility. Will disappear soon.</para>
/// </summary>
  void SetInput(vtkRenderWindow^ renWin);


  // vtkRenderWindow *GetInput ();return this GetRenderWindow 
/// <summary>
/// <para>These methods are provided for backward compatibility. Will disappear soon.</para>
/// </summary>
  vtkRenderWindow^ GetInput();


// Did not wrap:  void SetStartWrite (void (*func)(void *) , void *arg);


// Did not wrap:  void SetEndWrite (void (*func)(void *) , void *arg);


// Did not wrap:  void SetStartWriteArgDelete (void (*func)(void *) );


// Did not wrap:  void SetEndWriteArgDelete (void (*func)(void *) );


  // unsigned long GetMTime ();
/// <summary>
/// <para>Returns the MTime also considering the RenderWindow.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkExporter ();


// Did not wrap:  ~vtkExporter ();


// Did not wrap:  virtual void WriteData () = 0;


// Did not wrap:  vtkExporter (const vtkExporter &);


// Did not wrap:  void vtkExporter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExporter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExporter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExporter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExporter();


};

} // end vtkRendering
