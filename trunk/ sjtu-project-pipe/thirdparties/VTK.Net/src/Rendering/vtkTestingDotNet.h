#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindow;

public ref class vtkTesting : public vtkObject
{

public:
// Did not wrap:  static vtkTesting *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTesting *NewInstance ();
  vtkTesting^ NewInstance();


  // vtkTesting *SafeDownCast (vtkObject* o);
  static vtkTesting^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFrontBuffer (int );
/// <summary>
/// <para>Use front buffer for tests. By default use back buffer.</para>
/// </summary>
  void SetFrontBuffer(int arg0);


  // int GetFrontBufferMinValue ();
/// <summary>
/// <para>Use front buffer for tests. By default use back buffer.</para>
/// </summary>
  int GetFrontBufferMinValue();


  // int GetFrontBufferMaxValue ();
/// <summary>
/// <para>Use front buffer for tests. By default use back buffer.</para>
/// </summary>
  int GetFrontBufferMaxValue();


  // void FrontBufferOn ();
/// <summary>
/// <para>Use front buffer for tests. By default use back buffer.</para>
/// </summary>
  void FrontBufferOn();


  // void FrontBufferOff ();
/// <summary>
/// <para>Use front buffer for tests. By default use back buffer.</para>
/// </summary>
  void FrontBufferOff();


  // int GetFrontBuffer ();
/// <summary>
/// <para>Use front buffer for tests. By default use back buffer.</para>
/// </summary>
  int GetFrontBuffer();


  // virtual int RegressionTest (double thresh);
/// <summary>
/// <para>Perform the test and return result. At the same time the output will be written cout</para>
/// </summary>
  int RegressionTest(double thresh);


// Did not wrap:  virtual int RegressionTest (double thresh, ostream &os);


  // virtual int RegressionTest (vtkImageData *image, double thresh);
/// <summary>
/// <para>Compare the image with the valid image.</para>
/// </summary>
  int RegressionTest(vtkImageData^ image, double thresh);


// Did not wrap:  virtual int RegressionTest (vtkImageData *image, double thresh, ostream &os);


  // virtual void SetRenderWindow (vtkRenderWindow *rw);
/// <summary>
/// <para>Set and get the render window that will be used for regression testing.</para>
/// </summary>
  void SetRenderWindow(vtkRenderWindow^ rw);


  // vtkRenderWindow *GetRenderWindow ();
/// <summary>
/// <para>Set and get the render window that will be used for regression testing.</para>
/// </summary>
  vtkRenderWindow^ GetRenderWindow();


  // void SetValidImageFileName (char *);
/// <summary>
/// <para>Set/Get the name of the valid image file</para>
/// </summary>
  void SetValidImageFileName(System::String^ arg0);


  // const char *GetValidImageFileName ();
/// <summary>
/// <para>Set/Get the name of the valid image file</para>
/// </summary>
  System::String^ GetValidImageFileName();


  // double GetImageDifference ();
/// <summary>
/// <para>Get the image difference.</para>
/// </summary>
  double GetImageDifference();


  // void AddArgument (const char *argv);
/// <summary>
/// <para>Pass the command line arguments into this class to be processed. Many of the Get methods such as GetValidImage and GetBaselineRoot rely on the arguments to be passed in prior to retrieving these values. Just call AddArgument for each argument that was passed into the command line</para>
/// </summary>
  void AddArgument(System::String^ argv);


  // void CleanArguments ();
  void CleanArguments();


  // const char *GetDataRoot ();
/// <summary>
/// <para>Get some paramters from the command line arguments, env, or defaults</para>
/// </summary>
  System::String^ GetDataRoot();


  // void SetDataRoot (char *);
/// <summary>
/// <para>Get some paramters from the command line arguments, env, or defaults</para>
/// </summary>
  void SetDataRoot(System::String^ arg0);


  // const char *GetTempDirectory ();
/// <summary>
/// <para>Get some paramters from the command line arguments, env, or defaults</para>
/// </summary>
  System::String^ GetTempDirectory();


  // void SetTempDirectory (char *);
/// <summary>
/// <para>Get some paramters from the command line arguments, env, or defaults</para>
/// </summary>
  void SetTempDirectory(System::String^ arg0);


  // int IsValidImageSpecified ();
/// <summary>
/// <para>Is a valid image specified on the command line areguments?</para>
/// </summary>
  int IsValidImageSpecified();


  // int IsInteractiveModeSpecified ();
/// <summary>
/// <para>Is the interactive mode specified?</para>
/// </summary>
  int IsInteractiveModeSpecified();


  // void SetBorderOffset (int );
/// <summary>
/// <para>Number of pixels added as borders to avoid problems with window decorations added by some window managers.</para>
/// </summary>
  void SetBorderOffset(int arg0);


  // int GetBorderOffset ();
/// <summary>
/// <para>Number of pixels added as borders to avoid problems with window decorations added by some window managers.</para>
/// </summary>
  int GetBorderOffset();


// Did not wrap:  vtkTesting ();


// Did not wrap:  ~vtkTesting ();


// Did not wrap:  static char *IncrementFileName (const char *fname, int count);


// Did not wrap:  static int LookForFile (const char *newFileName);


// Did not wrap:  vtkTesting (const vtkTesting &);


// Did not wrap:  void vtkTesting 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTesting(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTesting(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTesting();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTesting();


};

} // end vtkRendering
