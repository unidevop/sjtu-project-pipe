#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageActor;
ref class vtkInteractorStyleImage;
ref class vtkRenderWindow;
ref class vtkRenderWindowInteractor;
ref class vtkRenderer;

public ref class vtkImageViewer2 : public vtkObject
{

public:
// Did not wrap:  static vtkImageViewer2 *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageViewer2 *NewInstance ();
  vtkImageViewer2^ NewInstance();


  // vtkImageViewer2 *SafeDownCast (vtkObject* o);
  static vtkImageViewer2^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual char *GetWindowName ();
/// <summary>
/// <para>Get the name of rendering window.</para>
/// </summary>
  System::String^ GetWindowName();


  // virtual void Render (void );
/// <summary>
/// <para>Render the resulting image.</para>
/// </summary>
  void Render();


  // virtual void SetInput (vtkImageData *in);
/// <summary>
/// <para>Set/Get the input image to the viewer.</para>
/// </summary>
  void SetInput(vtkImageData^ in);


  // virtual vtkImageData *GetInput ();
/// <summary>
/// <para>Set/Get the input image to the viewer.</para>
/// </summary>
  vtkImageData^ GetInput();


  // virtual void SetInputConnection (vtkAlgorithmOutput *input);
/// <summary>
/// <para>Set/Get the input image to the viewer.</para>
/// </summary>
  void SetInputConnection(vtkAlgorithmOutput^ input);


  // int GetSliceOrientation ();
/// <summary>
/// <para>Set/get the slice orientation</para>
/// </summary>
  int GetSliceOrientation();


  // virtual void SetSliceOrientation (int orientation);
/// <summary>
/// <para>Set/get the slice orientation</para>
/// </summary>
  void SetSliceOrientation(int orientation);


  // virtual void SetSliceOrientationToXY ();this SetSliceOrientation vtkImageViewer2 SLICE_ORIENTATION_XY 
/// <summary>
/// <para>Set/get the slice orientation</para>
/// </summary>
  void SetSliceOrientationToXY();


  // virtual void SetSliceOrientationToYZ ();this SetSliceOrientation vtkImageViewer2 SLICE_ORIENTATION_YZ 
/// <summary>
/// <para>Set/get the slice orientation</para>
/// </summary>
  void SetSliceOrientationToYZ();


  // virtual void SetSliceOrientationToXZ ();this SetSliceOrientation vtkImageViewer2 SLICE_ORIENTATION_XZ 
/// <summary>
/// <para>Set/get the slice orientation</para>
/// </summary>
  void SetSliceOrientationToXZ();


  // int GetSlice ();
/// <summary>
/// <para>Set/Get the current slice to display (depending on the orientation this can be in X, Y or Z).</para>
/// </summary>
  int GetSlice();


  // virtual void SetSlice (int s);
/// <summary>
/// <para>Set/Get the current slice to display (depending on the orientation this can be in X, Y or Z).</para>
/// </summary>
  void SetSlice(int s);


  // virtual int GetSliceMin ();
/// <summary>
/// <para>Return the minimum and maximum slice values (depending on the orientation this can be in X, Y or Z).</para>
/// </summary>
  int GetSliceMin();


  // virtual int GetSliceMax ();
/// <summary>
/// <para>Return the minimum and maximum slice values (depending on the orientation this can be in X, Y or Z).</para>
/// </summary>
  int GetSliceMax();


  // virtual void GetSliceRange (int range[2]);this GetSliceRange range range 
/// <summary>
/// <para>Return the minimum and maximum slice values (depending on the orientation this can be in X, Y or Z).</para>
/// </summary>
  void GetSliceRange(array<int>^ range);


  // virtual void GetSliceRange (int &min, int &max);
/// <summary>
/// <para>Return the minimum and maximum slice values (depending on the orientation this can be in X, Y or Z).</para>
/// </summary>
  void GetSliceRange(int% min, int% max);


// Did not wrap:  virtual int *GetSliceRange ();


  // virtual double GetColorWindow ();
/// <summary>
/// <para>Set window and level for mapping pixels to colors.</para>
/// </summary>
  double GetColorWindow();


  // virtual double GetColorLevel ();
/// <summary>
/// <para>Set window and level for mapping pixels to colors.</para>
/// </summary>
  double GetColorLevel();


  // virtual void SetColorWindow (double s);
/// <summary>
/// <para>Set window and level for mapping pixels to colors.</para>
/// </summary>
  void SetColorWindow(double s);


  // virtual void SetColorLevel (double s);
/// <summary>
/// <para>Set window and level for mapping pixels to colors.</para>
/// </summary>
  void SetColorLevel(double s);


  // virtual void SetDisplayId (void *a);
/// <summary>
/// <para>These are here when using a Tk window.</para>
/// </summary>
  void SetDisplayId(System::IntPtr a);


  // virtual void SetWindowId (void *a);
/// <summary>
/// <para>These are here when using a Tk window.</para>
/// </summary>
  void SetWindowId(System::IntPtr a);


  // virtual void SetParentId (void *a);
/// <summary>
/// <para>These are here when using a Tk window.</para>
/// </summary>
  void SetParentId(System::IntPtr a);


// Did not wrap:  virtual int *GetPosition ();


  // virtual void SetPosition (int a, int b);
/// <summary>
/// <para>Set/Get the position in screen coordinates of the rendering window.</para>
/// </summary>
  void SetPosition(int a, int b);


  // virtual void SetPosition (int a[2]);this SetPosition a a 
/// <summary>
/// <para>Set/Get the size of the window in screen coordinates.</para>
/// </summary>
  void SetPosition(array<int>^ a);


// Did not wrap:  virtual int *GetSize ();


  // virtual void SetSize (int a, int b);
/// <summary>
/// <para>Set/Get the size of the window in screen coordinates.</para>
/// </summary>
  void SetSize(int a, int b);


  // virtual void SetSize (int a[2]);this SetSize a a 
/// <summary>
/// <para>Get the internal render window, renderer, image actor, and image map instances.</para>
/// </summary>
  void SetSize(array<int>^ a);


  // vtkRenderWindow *GetRenderWindow ();
/// <summary>
/// <para>Get the internal render window, renderer, image actor, and image map instances.</para>
/// </summary>
  vtkRenderWindow^ GetRenderWindow();


  // vtkRenderer *GetRenderer ();
/// <summary>
/// <para>Get the internal render window, renderer, image actor, and image map instances.</para>
/// </summary>
  vtkRenderer^ GetRenderer();


  // vtkImageActor *GetImageActor ();
/// <summary>
/// <para>Get the internal render window, renderer, image actor, and image map instances.</para>
/// </summary>
  vtkImageActor^ GetImageActor();


  // vtkImageMapToWindowLevelColors *GetWindowLevel ();
/// <summary>
/// <para>Get the internal render window, renderer, image actor, and image map instances.</para>
/// </summary>
  vtkImageMapToWindowLevelColors^ GetWindowLevel();


  // vtkInteractorStyleImage *GetInteractorStyle ();
/// <summary>
/// <para>Get the internal render window, renderer, image actor, and image map instances.</para>
/// </summary>
  vtkInteractorStyleImage^ GetInteractorStyle();


  // virtual void SetRenderWindow (vtkRenderWindow *arg);
/// <summary>
/// <para>Set your own renderwindow and renderer</para>
/// </summary>
  void SetRenderWindow(vtkRenderWindow^ arg);


  // virtual void SetRenderer (vtkRenderer *arg);
/// <summary>
/// <para>Set your own renderwindow and renderer</para>
/// </summary>
  void SetRenderer(vtkRenderer^ arg);


  // virtual void SetupInteractor (vtkRenderWindowInteractor *);
/// <summary>
/// <para>Attach an interactor for the internal render window.</para>
/// </summary>
  void SetupInteractor(vtkRenderWindowInteractor^ arg0);


  // virtual void SetOffScreenRendering (int );
/// <summary>
/// <para>Create a window in memory instead of on the screen. This may not be supported for every type of window and on some windows you may need to invoke this prior to the first render.</para>
/// </summary>
  void SetOffScreenRendering(int arg0);


  // virtual int GetOffScreenRendering ();
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


  // int GetWholeZMin ();
/// <summary>
/// <para>@deprecated Replaced by vtkImageViewer2::GetSliceMin() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  int GetWholeZMin();


  // int GetWholeZMax ();
/// <summary>
/// <para>@deprecated Replaced by vtkImageViewer2::GetSliceMax() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  int GetWholeZMax();


  // int GetZSlice ();
/// <summary>
/// <para>@deprecated Replaced by vtkImageViewer2::GetSlice() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  int GetZSlice();


  // void SetZSlice (int );
/// <summary>
/// <para>@deprecated Replaced by vtkImageViewer2::SetSlice() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetZSlice(int arg0);


// Did not wrap:  vtkImageViewer2 ();


// Did not wrap:  ~vtkImageViewer2 ();


// Did not wrap:  virtual void InstallPipeline ();


// Did not wrap:  virtual void UnInstallPipeline ();


// Did not wrap:  virtual void UpdateOrientation ();


// Did not wrap:  virtual void UpdateDisplayExtent ();


// Did not wrap:  vtkImageViewer2 (const vtkImageViewer2 &);


// Did not wrap:  void vtkImageViewer2 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageViewer2(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageViewer2(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageViewer2();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageViewer2();


};

} // end vtkRendering
