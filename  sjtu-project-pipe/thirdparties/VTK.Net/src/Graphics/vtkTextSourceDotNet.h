#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTextSource : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTextSource *NewInstance ();
  vtkTextSource^ NewInstance();


  // vtkTextSource *SafeDownCast (vtkObject* o);
  static vtkTextSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTextSource *New ();


  // void SetText (char *);
/// <summary>
/// <para>Set/Get the text to be drawn.</para>
/// </summary>
  void SetText(System::String^ arg0);


  // char *GetText ();
/// <summary>
/// <para>Set/Get the text to be drawn.</para>
/// </summary>
  System::String^ GetText();


  // void SetBacking (int );
/// <summary>
/// <para>Controls whether or not a background is drawn with the text.</para>
/// </summary>
  void SetBacking(int arg0);


  // int GetBacking ();
/// <summary>
/// <para>Controls whether or not a background is drawn with the text.</para>
/// </summary>
  int GetBacking();


  // void BackingOn ();
/// <summary>
/// <para>Controls whether or not a background is drawn with the text.</para>
/// </summary>
  void BackingOn();


  // void BackingOff ();
/// <summary>
/// <para>Controls whether or not a background is drawn with the text.</para>
/// </summary>
  void BackingOff();


  // void SetForegroundColor (double , double , double );
/// <summary>
/// <para>Set/Get the foreground color. Default is white (1,1,1). ALpha is always 1.</para>
/// </summary>
  void SetForegroundColor(double arg0, double arg1, double arg2);


  // void SetForegroundColor (double  a[3]);
/// <summary>
/// <para>Set/Get the foreground color. Default is white (1,1,1). ALpha is always 1.</para>
/// </summary>
  void SetForegroundColor(array<double>^ a);


  // double  *GetForegroundColor ();
/// <summary>
/// <para>Set/Get the foreground color. Default is white (1,1,1). ALpha is always 1.</para>
/// </summary>
  array<double>^ GetForegroundColor();


  // void SetBackgroundColor (double , double , double );
/// <summary>
/// <para>Set/Get the background color. Default is black (0,0,0). Alpha is always 1.</para>
/// </summary>
  void SetBackgroundColor(double arg0, double arg1, double arg2);


  // void SetBackgroundColor (double  a[3]);
/// <summary>
/// <para>Set/Get the background color. Default is black (0,0,0). Alpha is always 1.</para>
/// </summary>
  void SetBackgroundColor(array<double>^ a);


  // double  *GetBackgroundColor ();
/// <summary>
/// <para>Set/Get the background color. Default is black (0,0,0). Alpha is always 1.</para>
/// </summary>
  array<double>^ GetBackgroundColor();


// Did not wrap:  vtkTextSource ();


// Did not wrap:  ~vtkTextSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTextSource (const vtkTextSource &);


// Did not wrap:  void vtkTextSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTextSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTextSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTextSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTextSource();


};

} // end vtkGraphics
