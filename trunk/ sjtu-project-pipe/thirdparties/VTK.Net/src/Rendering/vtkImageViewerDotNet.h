#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageMapper;
ref class vtkRenderWindow;
ref class vtkRenderWindowInteractor;
ref class vtkRenderer;

public ref class vtkImageViewer : public vtkObject
{

public:
// Did not wrap:  static vtkImageViewer *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageViewer *NewInstance ();
  vtkImageViewer^ NewInstance();


  // vtkImageViewer *SafeDownCast (vtkObject* o);
  static vtkImageViewer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // char *GetWindowName ();return this RenderWindow GetWindowName 
/// <summary>
/// <para>Get name of rendering window</para>
/// </summary>
  System::String^ GetWindowName();


  // virtual void Render (void );
/// <summary>
/// <para>Render the resulting image.</para>
/// </summary>
  void Render();


  // void SetInput (vtkImageData *in);this ImageMapper SetInput in 
/// <summary>
/// <para>Set/Get the input to the viewer.</para>
/// </summary>
  void SetInput(vtkImageData^ in);


  // vtkImageData *GetInput ();return this ImageMapper GetInput 
/// <summary>
/// <para>Set/Get the input to the viewer.</para>
/// </summary>
  vtkImageData^ GetInput();


  // virtual void SetInputConnection (vtkAlgorithmOutput *input);this ImageMapper SetInputConnection input 
/// <summary>
/// <para>Set/Get the input to the viewer.</para>
/// </summary>
  void SetInputConnection(vtkAlgorithmOutput^ input);


  // int GetWholeZMin ();return this ImageMapper GetWholeZMin 
/// <summary>
/// <para>What is the possible Min/ Max z slices available.</para>
/// </summary>
  int GetWholeZMin();


  // int GetWholeZMax ();return this ImageMapper GetWholeZMax 
/// <summary>
/// <para>What is the possible Min/ Max z slices available.</para>
/// </summary>
  int GetWholeZMax();


  // int GetZSlice ();return this ImageMapper GetZSlice 
/// <summary>
/// <para>Set/Get the current Z Slice to display</para>
/// </summary>
  int GetZSlice();


  // void SetZSlice (int s);this ImageMapper SetZSlice s 
/// <summary>
/// <para>Set/Get the current Z Slice to display</para>
/// </summary>
  void SetZSlice(int s);


  // double GetColorWindow ();return this ImageMapper GetColorWindow 
/// <summary>
/// <para>Sets window/level for mapping pixels to colors.</para>
/// </summary>
  double GetColorWindow();


  // double GetColorLevel ();return this ImageMapper GetColorLevel 
/// <summary>
/// <para>Sets window/level for mapping pixels to colors.</para>
/// </summary>
  double GetColorLevel();


  // void SetColorWindow (double s);this ImageMapper SetColorWindow s 
/// <summary>
/// <para>Sets window/level for mapping pixels to colors.</para>
/// </summary>
  void SetColorWindow(double s);


  // void SetColorLevel (double s);this ImageMapper SetColorLevel s 
/// <summary>
/// <para>Sets window/level for mapping pixels to colors.</para>
/// </summary>
  void SetColorLevel(double s);


  // void SetDisplayId (void *a);this RenderWindow SetDisplayId a 
/// <summary>
/// <para>These are here for using a tk window.</para>
/// </summary>
  void SetDisplayId(System::IntPtr a);


  // void SetWindowId (void *a);this RenderWindow SetWindowId a 
/// <summary>
/// <para>These are here for using a tk window.</para>
/// </summary>
  void SetWindowId(System::IntPtr a);


  // void SetParentId (void *a);this RenderWindow SetParentId a 
/// <summary>
/// <para>These are here for using a tk window.</para>
/// </summary>
  void SetParentId(System::IntPtr a);


  // int GetGrayScaleHint ();
/// <summary>
/// <para>By default this is a color viewer.  GrayScaleHintOn will improve the appearance of gray scale images on some systems.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  int GetGrayScaleHint();


  // void SetGrayScaleHint (int );
/// <summary>
/// <para>By default this is a color viewer.  GrayScaleHintOn will improve the appearance of gray scale images on some systems.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetGrayScaleHint(int arg0);


  // void GrayScaleHintOn ();
/// <summary>
/// <para>By default this is a color viewer.  GrayScaleHintOn will improve the appearance of gray scale images on some systems.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void GrayScaleHintOn();


  // void GrayScaleHintOff ();
/// <summary>
/// <para>By default this is a color viewer.  GrayScaleHintOn will improve the appearance of gray scale images on some systems.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void GrayScaleHintOff();


  // int *GetPosition ();return this RenderWindow GetPosition 
/// <summary>
/// <para>Set/Get the position in screen coordinates of the rendering window.</para>
/// </summary>
  array<int>^ GetPosition();


  // void SetPosition (int a, int b);this RenderWindow SetPosition a b 
/// <summary>
/// <para>Set/Get the position in screen coordinates of the rendering window.</para>
/// </summary>
  void SetPosition(int a, int b);


  // virtual void SetPosition (int a[2]);
/// <summary>
/// <para>Set/Get the position in screen coordinates of the rendering window.</para>
/// </summary>
  void SetPosition(array<int>^ a);


  // int *GetSize ();return this RenderWindow GetSize 
/// <summary>
/// <para>Set/Get the size of the window in screen coordinates.</para>
/// </summary>
  array<int>^ GetSize();


  // void SetSize (int a, int b);this RenderWindow SetSize a b 
/// <summary>
/// <para>Set/Get the size of the window in screen coordinates.</para>
/// </summary>
  void SetSize(int a, int b);


  // virtual void SetSize (int a[2]);
/// <summary>
/// <para>Set/Get the size of the window in screen coordinates.</para>
/// </summary>
  void SetSize(array<int>^ a);


  // vtkRenderWindow *GetRenderWindow ();
/// <summary>
/// <para>Get the internal objects</para>
/// </summary>
  vtkRenderWindow^ GetRenderWindow();


  // vtkRenderer *GetRenderer ();
/// <summary>
/// <para>Get the internal objects</para>
/// </summary>
  vtkRenderer^ GetRenderer();


  // vtkImageMapper *GetImageMapper ();
/// <summary>
/// <para>Get the internal objects</para>
/// </summary>
  vtkImageMapper^ GetImageMapper();


  // vtkActor2D *GetActor2D ();
/// <summary>
/// <para>Get the internal objects</para>
/// </summary>
  vtkActor2D^ GetActor2D();


  // void SetupInteractor (vtkRenderWindowInteractor *);
/// <summary>
/// <para>Create and attach an interactor for this window</para>
/// </summary>
  void SetupInteractor(vtkRenderWindowInteractor^ arg0);


  // void SetOffScreenRendering (int );
/// <summary>
/// <para>Create a window in memory instead of on the screen. This may not be supported for every type of window and on some windows you may need to invoke this prior to the first render.</para>
/// </summary>
  void SetOffScreenRendering(int arg0);


  // int GetOffScreenRendering ();
/// <summary>
/// <para>Create a window in memory instead of on the screen. This may not be supported for every type of window and on some windows you may need to invoke this prior to the first render.</para>
/// </summary>
  int GetOffScreenRendering();


  // void OffScreenRenderingOn ();
/// <summary>
/// <para>Create a window in memory instead of on the screen. This may not be supported for every type of window and on some windows you may need to invoke this prior to the first render.</para>
/// </summary>
  void OffScreenRenderingOn();


  // void OffScreenRenderingOff ();
/// <summary>
/// <para>Create a window in memory instead of on the screen. This may not be supported for every type of window and on some windows you may need to invoke this prior to the first render.</para>
/// </summary>
  void OffScreenRenderingOff();


// Did not wrap:  vtkImageViewer ();


// Did not wrap:  ~vtkImageViewer ();


// Did not wrap:  vtkImageViewer (const vtkImageViewer &);


// Did not wrap:  void vtkImageViewer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageViewer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageViewer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageViewer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageViewer();


};

} // end vtkRendering
