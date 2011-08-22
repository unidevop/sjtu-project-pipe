#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkWindowToImageFilter : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkWindowToImageFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWindowToImageFilter *NewInstance ();
  vtkWindowToImageFilter^ NewInstance();


  // vtkWindowToImageFilter *SafeDownCast (vtkObject* o);
  static vtkWindowToImageFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetInput (vtkWindow *input);
/// <summary>
/// <para>Indicates what renderer to get the pixel data from.</para>
/// </summary>
  void SetInput(vtkWindow^ input);


  // vtkWindow *GetInput ();
/// <summary>
/// <para>Returns which renderer is being used as the source for the pixel data.</para>
/// </summary>
  vtkWindow^ GetInput();


  // void SetMagnification (int );
/// <summary>
/// <para>The magnification of the current render window</para>
/// </summary>
  void SetMagnification(int arg0);


  // int GetMagnificationMinValue ();
/// <summary>
/// <para>The magnification of the current render window</para>
/// </summary>
  int GetMagnificationMinValue();


  // int GetMagnificationMaxValue ();
/// <summary>
/// <para>The magnification of the current render window</para>
/// </summary>
  int GetMagnificationMaxValue();


  // int GetMagnification ();
/// <summary>
/// <para>The magnification of the current render window</para>
/// </summary>
  int GetMagnification();


  // void ReadFrontBufferOn ();
/// <summary>
/// <para>Set/Get the flag that determines which buffer to read from. The default is to read from the front buffer.   </para>
/// </summary>
  void ReadFrontBufferOn();


  // void ReadFrontBufferOff ();
/// <summary>
/// <para>Set/Get the flag that determines which buffer to read from. The default is to read from the front buffer.   </para>
/// </summary>
  void ReadFrontBufferOff();


  // int GetReadFrontBuffer ();
/// <summary>
/// <para>Set/Get the flag that determines which buffer to read from. The default is to read from the front buffer.   </para>
/// </summary>
  int GetReadFrontBuffer();


  // void SetReadFrontBuffer (int );
/// <summary>
/// <para>Set/Get the flag that determines which buffer to read from. The default is to read from the front buffer.   </para>
/// </summary>
  void SetReadFrontBuffer(int arg0);


  // void ShouldRerenderOn ();
/// <summary>
/// <para>Set/get whether to re-render the input window. (This option makes no difference if Magnification &gt; 1.)</para>
/// </summary>
  void ShouldRerenderOn();


  // void ShouldRerenderOff ();
/// <summary>
/// <para>Set/get whether to re-render the input window. (This option makes no difference if Magnification &gt; 1.)</para>
/// </summary>
  void ShouldRerenderOff();


  // void SetShouldRerender (int );
/// <summary>
/// <para>Set/get whether to re-render the input window. (This option makes no difference if Magnification &gt; 1.)</para>
/// </summary>
  void SetShouldRerender(int arg0);


  // int GetShouldRerender ();
/// <summary>
/// <para>Set/get whether to re-render the input window. (This option makes no difference if Magnification &gt; 1.)</para>
/// </summary>
  int GetShouldRerender();


  // void SetViewport (double , double , double , double );
  void SetViewport(double arg0, double arg1, double arg2, double arg3);


  // void SetViewport (double  a[4]);
  void SetViewport(array<double>^ a);


  // double  *GetViewport ();
  array<double>^ GetViewport();


  // void SetInputBufferType (int );
  void SetInputBufferType(int arg0);


  // int GetInputBufferType ();
  int GetInputBufferType();


  // void SetInputBufferTypeToRGB ();this SetInputBufferType VTK_RGB 
  void SetInputBufferTypeToRGB();


  // void SetInputBufferTypeToRGBA ();this SetInputBufferType VTK_RGBA 
  void SetInputBufferTypeToRGBA();


  // void SetInputBufferTypeToZBuffer ();this SetInputBufferType VTK_ZBUFFER 
  void SetInputBufferTypeToZBuffer();


  // vtkImageData *GetOutput ();
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkImageData^ GetOutput();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkWindowToImageFilter ();


// Did not wrap:  ~vtkWindowToImageFilter ();


// Did not wrap:  void RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkWindowToImageFilter (const vtkWindowToImageFilter &);


// Did not wrap:  void vtkWindowToImageFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWindowToImageFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWindowToImageFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWindowToImageFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWindowToImageFilter();


};

} // end vtkRendering
