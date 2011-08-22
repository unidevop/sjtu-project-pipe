#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkUnsignedCharArray;

public ref class vtkWindow : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWindow *NewInstance ();
  vtkWindow^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetDisplayId (void *) = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  void SetDisplayId(System::IntPtr arg0);


  // virtual void SetWindowId (void *) = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  void SetWindowId(System::IntPtr arg0);


  // virtual void SetParentId (void *) = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  void SetParentId(System::IntPtr arg0);


  // virtual void *GetGenericDisplayId () = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  System::IntPtr GetGenericDisplayId();


  // virtual void *GetGenericWindowId () = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  System::IntPtr GetGenericWindowId();


  // virtual void *GetGenericParentId () = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  System::IntPtr GetGenericParentId();


  // virtual void *GetGenericContext () = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  System::IntPtr GetGenericContext();


  // virtual void *GetGenericDrawable () = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  System::IntPtr GetGenericDrawable();


  // virtual void SetWindowInfo (char *) = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  void SetWindowInfo(System::String^ arg0);


  // virtual void SetParentInfo (char *) = 0;
/// <summary>
/// <para>These are window system independent methods that are used to help interface vtkWindow to native windowing systems.</para>
/// </summary>
  void SetParentInfo(System::String^ arg0);


  // virtual int *GetPosition ();
/// <summary>
/// <para>Set/Get the position in screen coordinates of the rendering window.</para>
/// </summary>
  array<int>^ GetPosition();


  // virtual void SetPosition (int , int );
/// <summary>
/// <para>Set/Get the position in screen coordinates of the rendering window.</para>
/// </summary>
  void SetPosition(int arg0, int arg1);


  // virtual void SetPosition (int a[2]);
/// <summary>
/// <para>Set/Get the position in screen coordinates of the rendering window.</para>
/// </summary>
  void SetPosition(array<int>^ a);


  // virtual int *GetSize ();
/// <summary>
/// <para>Set/Get the size of the window in screen coordinates.</para>
/// </summary>
  array<int>^ GetSize();


  // virtual void SetSize (int , int );
/// <summary>
/// <para>Set/Get the size of the window in screen coordinates.</para>
/// </summary>
  void SetSize(int arg0, int arg1);


  // virtual void SetSize (int a[2]);
/// <summary>
/// <para>Set/Get the size of the window in screen coordinates.</para>
/// </summary>
  void SetSize(array<int>^ a);


// Did not wrap:  virtual int *GetScreenSize () = 0;


  // void SetMapped (int );
/// <summary>
/// <para>Keep track of whether the rendering window has been mapped to screen.</para>
/// </summary>
  void SetMapped(int arg0);


  // int GetMapped ();
/// <summary>
/// <para>Keep track of whether the rendering window has been mapped to screen.</para>
/// </summary>
  int GetMapped();


  // void MappedOn ();
/// <summary>
/// <para>Keep track of whether the rendering window has been mapped to screen.</para>
/// </summary>
  void MappedOn();


  // void MappedOff ();
/// <summary>
/// <para>Keep track of whether the rendering window has been mapped to screen.</para>
/// </summary>
  void MappedOff();


  // void SetErase (int );
/// <summary>
/// <para>Turn on/off erasing the screen between images. This allows multiple  exposure sequences if turned on. You will need to turn double  buffering off or make use of the SwapBuffers methods to prevent you from swapping buffers between exposures.</para>
/// </summary>
  void SetErase(int arg0);


  // int GetErase ();
/// <summary>
/// <para>Turn on/off erasing the screen between images. This allows multiple  exposure sequences if turned on. You will need to turn double  buffering off or make use of the SwapBuffers methods to prevent you from swapping buffers between exposures.</para>
/// </summary>
  int GetErase();


  // void EraseOn ();
/// <summary>
/// <para>Turn on/off erasing the screen between images. This allows multiple  exposure sequences if turned on. You will need to turn double  buffering off or make use of the SwapBuffers methods to prevent you from swapping buffers between exposures.</para>
/// </summary>
  void EraseOn();


  // void EraseOff ();
/// <summary>
/// <para>Turn on/off erasing the screen between images. This allows multiple  exposure sequences if turned on. You will need to turn double  buffering off or make use of the SwapBuffers methods to prevent you from swapping buffers between exposures.</para>
/// </summary>
  void EraseOff();


  // void SetDoubleBuffer (int );
/// <summary>
/// <para>Keep track of whether double buffering is on or off</para>
/// </summary>
  void SetDoubleBuffer(int arg0);


  // int GetDoubleBuffer ();
/// <summary>
/// <para>Keep track of whether double buffering is on or off</para>
/// </summary>
  int GetDoubleBuffer();


  // void DoubleBufferOn ();
/// <summary>
/// <para>Keep track of whether double buffering is on or off</para>
/// </summary>
  void DoubleBufferOn();


  // void DoubleBufferOff ();
/// <summary>
/// <para>Keep track of whether double buffering is on or off</para>
/// </summary>
  void DoubleBufferOff();


  // char *GetWindowName ();
/// <summary>
/// <para>Get name of rendering window</para>
/// </summary>
  System::String^ GetWindowName();


  // virtual void SetWindowName (const char *);
/// <summary>
/// <para>Get name of rendering window</para>
/// </summary>
  void SetWindowName(System::String^ arg0);


  // virtual void Render () = 0;
/// <summary>
/// <para>Ask each viewport owned by this Window to render its image and  synchronize this process.</para>
/// </summary>
  void Render();


// Did not wrap:  virtual unsigned char *GetPixelData (int , int , int , int , int ) = 0;


  // virtual int GetPixelData (int , int , int , int , int , vtkUnsignedCharArray *) = 0;
/// <summary>
/// <para>Get the pixel data of an image, transmitted as RGBRGBRGB. The front argument indicates if the front buffer should be used or the back  buffer. It is the caller's responsibility to delete the resulting  array. It is very important to realize that the memory in this array is organized from the bottom of the window to the top. The origin of the screen is in the lower left corner. The y axis increases as you go up the screen. So the storage of pixels is from left to right and from bottom to top.</para>
/// </summary>
  int GetPixelData(int arg0, int arg1, int arg2, int arg3, int arg4, vtkUnsignedCharArray^ arg5);


  // int GetDPI ();
/// <summary>
/// <para>Return a best estimate to the dots per inch of the display device being rendered (or printed).</para>
/// </summary>
  int GetDPI();


  // void SetDPI (int );
/// <summary>
/// <para>Return a best estimate to the dots per inch of the display device being rendered (or printed).</para>
/// </summary>
  void SetDPI(int arg0);


  // int GetDPIMinValue ();
/// <summary>
/// <para>Return a best estimate to the dots per inch of the display device being rendered (or printed).</para>
/// </summary>
  int GetDPIMinValue();


  // int GetDPIMaxValue ();
/// <summary>
/// <para>Return a best estimate to the dots per inch of the display device being rendered (or printed).</para>
/// </summary>
  int GetDPIMaxValue();


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


  // virtual void MakeCurrent ();
/// <summary>
/// <para>Make the window current. May be overridden in subclasses to do for example a glXMakeCurrent or a wglMakeCurrent.</para>
/// </summary>
  void MakeCurrent();


  // void SetTileScale (int , int );
/// <summary>
/// <para>These methods are used by vtkWindowToImageFilter to tell a VTK window to simulate a larger window by tiling. For 3D geometry these methods have no impact. It is just in handling annotation that this information must be available to the mappers and the coordinate calculations.</para>
/// </summary>
  void SetTileScale(int arg0, int arg1);


  // void SetTileScale (int  a[2]);
/// <summary>
/// <para>These methods are used by vtkWindowToImageFilter to tell a VTK window to simulate a larger window by tiling. For 3D geometry these methods have no impact. It is just in handling annotation that this information must be available to the mappers and the coordinate calculations.</para>
/// </summary>
  void SetTileScale(array<int>^ a);


  // int  *GetTileScale ();
/// <summary>
/// <para>These methods are used by vtkWindowToImageFilter to tell a VTK window to simulate a larger window by tiling. For 3D geometry these methods have no impact. It is just in handling annotation that this information must be available to the mappers and the coordinate calculations.</para>
/// </summary>
  array<int>^ GetTileScale();


  // void SetTileScale (int s);this SetTileScale s s 
/// <summary>
/// <para>These methods are used by vtkWindowToImageFilter to tell a VTK window to simulate a larger window by tiling. For 3D geometry these methods have no impact. It is just in handling annotation that this information must be available to the mappers and the coordinate calculations.</para>
/// </summary>
  void SetTileScale(int s);


  // void SetTileViewport (double , double , double , double );
/// <summary>
/// <para>These methods are used by vtkWindowToImageFilter to tell a VTK window to simulate a larger window by tiling. For 3D geometry these methods have no impact. It is just in handling annotation that this information must be available to the mappers and the coordinate calculations.</para>
/// </summary>
  void SetTileViewport(double arg0, double arg1, double arg2, double arg3);


  // void SetTileViewport (double  a[4]);
/// <summary>
/// <para>These methods are used by vtkWindowToImageFilter to tell a VTK window to simulate a larger window by tiling. For 3D geometry these methods have no impact. It is just in handling annotation that this information must be available to the mappers and the coordinate calculations.</para>
/// </summary>
  void SetTileViewport(array<double>^ a);


  // double  *GetTileViewport ();
/// <summary>
/// <para>These methods are used by vtkWindowToImageFilter to tell a VTK window to simulate a larger window by tiling. For 3D geometry these methods have no impact. It is just in handling annotation that this information must be available to the mappers and the coordinate calculations.</para>
/// </summary>
  array<double>^ GetTileViewport();


// Did not wrap:  vtkWindow ();


// Did not wrap:  ~vtkWindow ();


// Did not wrap:  vtkWindow (const vtkWindow &);


// Did not wrap:  void vtkWindow 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWindow();


};

} // end vtkCommon
