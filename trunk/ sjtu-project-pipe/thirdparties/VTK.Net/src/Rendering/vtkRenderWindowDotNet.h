#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkRenderWindowInteractor;
ref class vtkRenderer;
ref class vtkRendererCollection;

public ref class vtkRenderWindow : public vtkWindow
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRenderWindow *NewInstance ();
  vtkRenderWindow^ NewInstance();


  // vtkRenderWindow *SafeDownCast (vtkObject* o);
  static vtkRenderWindow^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRenderWindow *New ();


  // virtual void AddRenderer (vtkRenderer *);
/// <summary>
/// <para>Add a renderer to the list of renderers.</para>
/// </summary>
  void AddRenderer(vtkRenderer^ arg0);


  // void RemoveRenderer (vtkRenderer *);
/// <summary>
/// <para>Remove a renderer from the list of renderers.</para>
/// </summary>
  void RemoveRenderer(vtkRenderer^ arg0);


  // int HasRenderer (vtkRenderer *);
/// <summary>
/// <para>Query if a renderer is in the list of renderers.</para>
/// </summary>
  int HasRenderer(vtkRenderer^ arg0);


  // static const char *GetRenderLibrary ();
/// <summary>
/// <para>What rendering library has the user requested</para>
/// </summary>
  static System::String^ GetRenderLibrary();


  // vtkRendererCollection *GetRenderers ();return this Renderers 
/// <summary>
/// <para>Return the collection of renderers in the render window.</para>
/// </summary>
  vtkRendererCollection^ GetRenderers();


  // virtual void Render ();
/// <summary>
/// <para>Ask each renderer owned by this RenderWindow to render its image and  synchronize this process.</para>
/// </summary>
  void Render();


  // virtual void Start () = 0;
/// <summary>
/// <para>Initialize the rendering process.</para>
/// </summary>
  void Start();


  // virtual void Finalize () = 0;
/// <summary>
/// <para>Finalize the rendering process.</para>
/// </summary>
  void FinalizeWrap();


  // virtual void Frame () = 0;
/// <summary>
/// <para>A termination method performed at the end of the rendering process to do things like swapping buffers (if necessary) or similar actions.</para>
/// </summary>
  void Frame();


  // virtual void CopyResultFrame ();
/// <summary>
/// <para>Performed at the end of the rendering process to generate image. This is typically done right before swapping buffers.</para>
/// </summary>
  void CopyResultFrame();


  // virtual vtkRenderWindowInteractor *MakeRenderWindowInteractor ();
/// <summary>
/// <para>Create an interactor to control renderers in this window. We need to know what type of interactor to create, because we might be in X Windows or MS Windows. </para>
/// </summary>
  vtkRenderWindowInteractor^ MakeRenderWindowInteractor();


  // virtual void HideCursor () = 0;
/// <summary>
/// <para>Hide or Show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead. Set cursor position in window (note that (0,0) is the lower left  corner).</para>
/// </summary>
  void HideCursor();


  // virtual void ShowCursor () = 0;
/// <summary>
/// <para>Hide or Show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead. Set cursor position in window (note that (0,0) is the lower left  corner).</para>
/// </summary>
  void ShowCursor();


  // virtual void SetCursorPosition (int , int );
/// <summary>
/// <para>Hide or Show the mouse cursor, it is nice to be able to hide the default cursor if you want VTK to display a 3D cursor instead. Set cursor position in window (note that (0,0) is the lower left  corner).</para>
/// </summary>
  void SetCursorPosition(int arg0, int arg1);


  // void SetCurrentCursor (int );
/// <summary>
/// <para>Change the shape of the cursor</para>
/// </summary>
  void SetCurrentCursor(int arg0);


  // int GetCurrentCursor ();
/// <summary>
/// <para>Change the shape of the cursor</para>
/// </summary>
  int GetCurrentCursor();


  // virtual void SetFullScreen (int ) = 0;
/// <summary>
/// <para>Turn on/off rendering full screen window size.</para>
/// </summary>
  void SetFullScreen(int arg0);


  // int GetFullScreen ();
/// <summary>
/// <para>Turn on/off rendering full screen window size.</para>
/// </summary>
  int GetFullScreen();


  // void FullScreenOn ();
/// <summary>
/// <para>Turn on/off rendering full screen window size.</para>
/// </summary>
  void FullScreenOn();


  // void FullScreenOff ();
/// <summary>
/// <para>Turn on/off rendering full screen window size.</para>
/// </summary>
  void FullScreenOff();


  // void SetBorders (int );
/// <summary>
/// <para>Turn on/off window manager borders. Typically, you shouldn't turn the  borders off, because that bypasses the window manager and can cause undesirable behavior.</para>
/// </summary>
  void SetBorders(int arg0);


  // int GetBorders ();
/// <summary>
/// <para>Turn on/off window manager borders. Typically, you shouldn't turn the  borders off, because that bypasses the window manager and can cause undesirable behavior.</para>
/// </summary>
  int GetBorders();


  // void BordersOn ();
/// <summary>
/// <para>Turn on/off window manager borders. Typically, you shouldn't turn the  borders off, because that bypasses the window manager and can cause undesirable behavior.</para>
/// </summary>
  void BordersOn();


  // void BordersOff ();
/// <summary>
/// <para>Turn on/off window manager borders. Typically, you shouldn't turn the  borders off, because that bypasses the window manager and can cause undesirable behavior.</para>
/// </summary>
  void BordersOff();


  // int GetStereoCapableWindow ();
/// <summary>
/// <para>Prescribe that the window be created in a stereo-capable mode. This method must be called before the window is realized. Default is off.</para>
/// </summary>
  int GetStereoCapableWindow();


  // void StereoCapableWindowOn ();
/// <summary>
/// <para>Prescribe that the window be created in a stereo-capable mode. This method must be called before the window is realized. Default is off.</para>
/// </summary>
  void StereoCapableWindowOn();


  // void StereoCapableWindowOff ();
/// <summary>
/// <para>Prescribe that the window be created in a stereo-capable mode. This method must be called before the window is realized. Default is off.</para>
/// </summary>
  void StereoCapableWindowOff();


  // virtual void SetStereoCapableWindow (int capable);
/// <summary>
/// <para>Prescribe that the window be created in a stereo-capable mode. This method must be called before the window is realized. Default is off.</para>
/// </summary>
  void SetStereoCapableWindow(int capable);


  // int GetStereoRender ();
/// <summary>
/// <para>Turn on/off stereo rendering.</para>
/// </summary>
  int GetStereoRender();


  // void SetStereoRender (int stereo);
/// <summary>
/// <para>Turn on/off stereo rendering.</para>
/// </summary>
  void SetStereoRender(int stereo);


  // void StereoRenderOn ();
/// <summary>
/// <para>Turn on/off stereo rendering.</para>
/// </summary>
  void StereoRenderOn();


  // void StereoRenderOff ();
/// <summary>
/// <para>Turn on/off stereo rendering.</para>
/// </summary>
  void StereoRenderOff();


  // void SetAlphaBitPlanes (int );
/// <summary>
/// <para>Turn on/off the use of alpha bitplanes.</para>
/// </summary>
  void SetAlphaBitPlanes(int arg0);


  // int GetAlphaBitPlanes ();
/// <summary>
/// <para>Turn on/off the use of alpha bitplanes.</para>
/// </summary>
  int GetAlphaBitPlanes();


  // void AlphaBitPlanesOn ();
/// <summary>
/// <para>Turn on/off the use of alpha bitplanes.</para>
/// </summary>
  void AlphaBitPlanesOn();


  // void AlphaBitPlanesOff ();
/// <summary>
/// <para>Turn on/off the use of alpha bitplanes.</para>
/// </summary>
  void AlphaBitPlanesOff();


  // void SetPointSmoothing (int );
/// <summary>
/// <para>Turn on/off point smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void SetPointSmoothing(int arg0);


  // int GetPointSmoothing ();
/// <summary>
/// <para>Turn on/off point smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  int GetPointSmoothing();


  // void PointSmoothingOn ();
/// <summary>
/// <para>Turn on/off point smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void PointSmoothingOn();


  // void PointSmoothingOff ();
/// <summary>
/// <para>Turn on/off point smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void PointSmoothingOff();


  // void SetLineSmoothing (int );
/// <summary>
/// <para>Turn on/off line smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void SetLineSmoothing(int arg0);


  // int GetLineSmoothing ();
/// <summary>
/// <para>Turn on/off line smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  int GetLineSmoothing();


  // void LineSmoothingOn ();
/// <summary>
/// <para>Turn on/off line smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void LineSmoothingOn();


  // void LineSmoothingOff ();
/// <summary>
/// <para>Turn on/off line smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void LineSmoothingOff();


  // void SetPolygonSmoothing (int );
/// <summary>
/// <para>Turn on/off polygon smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void SetPolygonSmoothing(int arg0);


  // int GetPolygonSmoothing ();
/// <summary>
/// <para>Turn on/off polygon smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  int GetPolygonSmoothing();


  // void PolygonSmoothingOn ();
/// <summary>
/// <para>Turn on/off polygon smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void PolygonSmoothingOn();


  // void PolygonSmoothingOff ();
/// <summary>
/// <para>Turn on/off polygon smoothing. Default is off. This must be applied before the first Render.</para>
/// </summary>
  void PolygonSmoothingOff();


  // int GetStereoType ();
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  int GetStereoType();


  // void SetStereoType (int );
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  void SetStereoType(int arg0);


  // void SetStereoTypeToCrystalEyes ();this SetStereoType VTK_STEREO_CRYSTAL_EYES 
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  void SetStereoTypeToCrystalEyes();


  // void SetStereoTypeToRedBlue ();this SetStereoType VTK_STEREO_RED_BLUE 
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  void SetStereoTypeToRedBlue();


  // void SetStereoTypeToInterlaced ();this SetStereoType VTK_STEREO_INTERLACED 
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  void SetStereoTypeToInterlaced();


  // void SetStereoTypeToLeft ();this SetStereoType VTK_STEREO_LEFT 
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  void SetStereoTypeToLeft();


  // void SetStereoTypeToRight ();this SetStereoType VTK_STEREO_RIGHT 
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  void SetStereoTypeToRight();


  // void SetStereoTypeToDresden ();this SetStereoType VTK_STEREO_DRESDEN 
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  void SetStereoTypeToDresden();


  // void SetStereoTypeToAnaglyph ();this SetStereoType VTK_STEREO_ANAGLYPH 
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  void SetStereoTypeToAnaglyph();


  // char *GetStereoTypeAsString ();
/// <summary>
/// <para>Set/Get what type of stereo rendering to use.  CrystalEyes mode uses frame-sequential capabilities available in OpenGL to drive LCD shutter glasses and stereo projectors.  RedBlue mode is a simple type of stereo for use with red-blue glasses. Anaglyph mode is a superset of RedBlue mode, but the color output channels can be configured using the AnaglyphColorMask and the color of the original image can be (somewhat) maintained using AnaglyphColorSaturation;  the default colors for Anaglyph mode is red-cyan.  Interlaced stereo mode produces a composite image where horizontal lines alternate between left and right views.  StereoLeft and StereoRight modes choose one or the other stereo view.  Dresden mode is yet another stereoscopic  interleaving.</para>
/// </summary>
  System::String^ GetStereoTypeAsString();


  // virtual void StereoUpdate ();
/// <summary>
/// <para>Update the system, if needed, due to stereo rendering. For some stereo  methods, subclasses might need to switch some hardware settings here.</para>
/// </summary>
  void StereoUpdate();


  // virtual void StereoMidpoint ();
/// <summary>
/// <para>Intermediate method performs operations required between the rendering of the left and right eye.</para>
/// </summary>
  void StereoMidpoint();


  // virtual void StereoRenderComplete ();
/// <summary>
/// <para>Handles work required once both views have been rendered when using stereo rendering.</para>
/// </summary>
  void StereoRenderComplete();


  // void SetAnaglyphColorSaturation (float );
  void SetAnaglyphColorSaturation(float arg0);


  // float GetAnaglyphColorSaturationMinValue ();
  float GetAnaglyphColorSaturationMinValue();


  // float GetAnaglyphColorSaturationMaxValue ();
  float GetAnaglyphColorSaturationMaxValue();


  // float GetAnaglyphColorSaturation ();
  float GetAnaglyphColorSaturation();


  // void SetAnaglyphColorMask (int , int );
  void SetAnaglyphColorMask(int arg0, int arg1);


  // void SetAnaglyphColorMask (int  a[2]);
  void SetAnaglyphColorMask(array<int>^ a);


  // int  *GetAnaglyphColorMask ();
  array<int>^ GetAnaglyphColorMask();


  // virtual void WindowRemap () = 0;
/// <summary>
/// <para>Remap the rendering window. This probably only works on UNIX right now. It is useful for changing properties that can't normally be changed once the window is up.</para>
/// </summary>
  void WindowRemap();


  // void SetSwapBuffers (int );
/// <summary>
/// <para>Turn on/off buffer swapping between images. </para>
/// </summary>
  void SetSwapBuffers(int arg0);


  // int GetSwapBuffers ();
/// <summary>
/// <para>Turn on/off buffer swapping between images. </para>
/// </summary>
  int GetSwapBuffers();


  // void SwapBuffersOn ();
/// <summary>
/// <para>Turn on/off buffer swapping between images. </para>
/// </summary>
  void SwapBuffersOn();


  // void SwapBuffersOff ();
/// <summary>
/// <para>Turn on/off buffer swapping between images. </para>
/// </summary>
  void SwapBuffersOff();


  // virtual int SetPixelData (int , int , int , int , unsigned char *, int ) = 0;
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBRGBRGB. The front argument indicates if the front buffer should be used or the back  buffer. It is the caller's responsibility to delete the resulting  array. It is very important to realize that the memory in this array is organized from the bottom of the window to the top. The origin of the screen is in the lower left corner. The y axis increases as you go up the screen. So the storage of pixels is from left to right and from bottom to top.</para>
/// </summary>
  int SetPixelData(int arg0, int arg1, int arg2, int arg3, array<unsigned char>^ arg4, int arg5);


  // virtual int SetPixelData (int , int , int , int , vtkUnsignedCharArray *, int ) = 0;
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBRGBRGB. The front argument indicates if the front buffer should be used or the back  buffer. It is the caller's responsibility to delete the resulting  array. It is very important to realize that the memory in this array is organized from the bottom of the window to the top. The origin of the screen is in the lower left corner. The y axis increases as you go up the screen. So the storage of pixels is from left to right and from bottom to top.</para>
/// </summary>
  int SetPixelData(int arg0, int arg1, int arg2, int arg3, vtkUnsignedCharArray^ arg4, int arg5);


// Did not wrap:  virtual float *GetRGBAPixelData (int , int , int , int , int ) = 0;


  // virtual int GetRGBAPixelData (int , int , int , int , int , vtkFloatArray *) = 0;
/// <summary>
/// <para>Same as Get/SetPixelData except that the image also contains an alpha component. The image is transmitted as RGBARGBARGBA... each of which is a float value. The &quot;blend&quot; parameter controls whether the SetRGBAPixelData method blends the data with the previous contents of the frame buffer or completely replaces the frame buffer data.</para>
/// </summary>
  int GetRGBAPixelData(int arg0, int arg1, int arg2, int arg3, int arg4, vtkFloatArray^ arg5);


  // virtual int SetRGBAPixelData (int , int , int , int , float *, int , int blend) = 0;
/// <summary>
/// <para>Same as Get/SetPixelData except that the image also contains an alpha component. The image is transmitted as RGBARGBARGBA... each of which is a float value. The &quot;blend&quot; parameter controls whether the SetRGBAPixelData method blends the data with the previous contents of the frame buffer or completely replaces the frame buffer data.</para>
/// </summary>
  int SetRGBAPixelData(int arg0, int arg1, int arg2, int arg3, array<float>^ arg4, int arg5, int blend);


  // virtual int SetRGBAPixelData (int , int , int , int , vtkFloatArray *, int , int blend) = 0;
/// <summary>
/// <para>Same as Get/SetPixelData except that the image also contains an alpha component. The image is transmitted as RGBARGBARGBA... each of which is a float value. The &quot;blend&quot; parameter controls whether the SetRGBAPixelData method blends the data with the previous contents of the frame buffer or completely replaces the frame buffer data.</para>
/// </summary>
  int SetRGBAPixelData(int arg0, int arg1, int arg2, int arg3, vtkFloatArray^ arg4, int arg5, int blend);


  // virtual void ReleaseRGBAPixelData (float *data) = 0;
/// <summary>
/// <para>Same as Get/SetPixelData except that the image also contains an alpha component. The image is transmitted as RGBARGBARGBA... each of which is a float value. The &quot;blend&quot; parameter controls whether the SetRGBAPixelData method blends the data with the previous contents of the frame buffer or completely replaces the frame buffer data.</para>
/// </summary>
  void ReleaseRGBAPixelData(array<float>^ data);


// Did not wrap:  virtual unsigned char *GetRGBACharPixelData (int , int , int , int , int ) = 0;


  // virtual int GetRGBACharPixelData (int , int , int , int , int , vtkUnsignedCharArray *) = 0;
/// <summary>
/// <para>Same as Get/SetPixelData except that the image also contains an alpha component. The image is transmitted as RGBARGBARGBA... each of which is a float value. The &quot;blend&quot; parameter controls whether the SetRGBAPixelData method blends the data with the previous contents of the frame buffer or completely replaces the frame buffer data.</para>
/// </summary>
  int GetRGBACharPixelData(int arg0, int arg1, int arg2, int arg3, int arg4, vtkUnsignedCharArray^ arg5);


  // virtual int SetRGBACharPixelData (int , int , int , int , unsigned char *, int , int blend) = 0;
/// <summary>
/// <para>Same as Get/SetPixelData except that the image also contains an alpha component. The image is transmitted as RGBARGBARGBA... each of which is a float value. The &quot;blend&quot; parameter controls whether the SetRGBAPixelData method blends the data with the previous contents of the frame buffer or completely replaces the frame buffer data.</para>
/// </summary>
  int SetRGBACharPixelData(int arg0, int arg1, int arg2, int arg3, array<unsigned char>^ arg4, int arg5, int blend);


  // virtual int SetRGBACharPixelData (int , int , int , int , vtkUnsignedCharArray *, int , int blend) = 0;
/// <summary>
/// <para>Same as Get/SetPixelData except that the image also contains an alpha component. The image is transmitted as RGBARGBARGBA... each of which is a float value. The &quot;blend&quot; parameter controls whether the SetRGBAPixelData method blends the data with the previous contents of the frame buffer or completely replaces the frame buffer data.</para>
/// </summary>
  int SetRGBACharPixelData(int arg0, int arg1, int arg2, int arg3, vtkUnsignedCharArray^ arg4, int arg5, int blend);


// Did not wrap:  virtual float *GetZbufferData (int , int , int , int ) = 0;


  // virtual int GetZbufferData (int , int , int , int , float *) = 0;
/// <summary>
/// <para>Set/Get the zbuffer data from the frame buffer.</para>
/// </summary>
  int GetZbufferData(int arg0, int arg1, int arg2, int arg3, array<float>^ arg4);


  // virtual int GetZbufferData (int , int , int , int , vtkFloatArray *) = 0;
/// <summary>
/// <para>Set/Get the zbuffer data from the frame buffer.</para>
/// </summary>
  int GetZbufferData(int arg0, int arg1, int arg2, int arg3, vtkFloatArray^ arg4);


  // virtual int SetZbufferData (int , int , int , int , float *) = 0;
/// <summary>
/// <para>Set/Get the zbuffer data from the frame buffer.</para>
/// </summary>
  int SetZbufferData(int arg0, int arg1, int arg2, int arg3, array<float>^ arg4);


  // virtual int SetZbufferData (int , int , int , int , vtkFloatArray *) = 0;
/// <summary>
/// <para>Set/Get the zbuffer data from the frame buffer.</para>
/// </summary>
  int SetZbufferData(int arg0, int arg1, int arg2, int arg3, vtkFloatArray^ arg4);


  // int GetAAFrames ();
/// <summary>
/// <para>Set the number of frames for doing antialiasing. The default is zero. Typically five or six will yield reasonable results without taking too long.</para>
/// </summary>
  int GetAAFrames();


  // void SetAAFrames (int );
/// <summary>
/// <para>Set the number of frames for doing antialiasing. The default is zero. Typically five or six will yield reasonable results without taking too long.</para>
/// </summary>
  void SetAAFrames(int arg0);


  // int GetFDFrames ();
/// <summary>
/// <para>Set the number of frames for doing focal depth. The default is zero. Depending on how your scene is organized you can get away with as few as four frames for focal depth or you might need thirty. One thing to note is that if you are using focal depth frames, then you will not need many (if any) frames for antialiasing. </para>
/// </summary>
  int GetFDFrames();


  // void SetFDFrames (int );
/// <summary>
/// <para>Set the number of frames for doing focal depth. The default is zero. Depending on how your scene is organized you can get away with as few as four frames for focal depth or you might need thirty. One thing to note is that if you are using focal depth frames, then you will not need many (if any) frames for antialiasing. </para>
/// </summary>
  void SetFDFrames(int arg0);


  // int GetSubFrames ();
/// <summary>
/// <para>Set the number of sub frames for doing motion blur. The default is zero. Once this is set greater than one, you will no longer see a new frame for every Render().  If you set this to five, you will need to do  five Render() invocations before seeing the result. This isn't very impressive unless something is changing between the Renders. Changing this value may reset the current subframe count.</para>
/// </summary>
  int GetSubFrames();


  // virtual void SetSubFrames (int subFrames);
/// <summary>
/// <para>Set the number of sub frames for doing motion blur. The default is zero. Once this is set greater than one, you will no longer see a new frame for every Render().  If you set this to five, you will need to do  five Render() invocations before seeing the result. This isn't very impressive unless something is changing between the Renders. Changing this value may reset the current subframe count.</para>
/// </summary>
  void SetSubFrames(int subFrames);


  // int GetNeverRendered ();
/// <summary>
/// <para>This flag is set if the window hasn't rendered since it was created</para>
/// </summary>
  int GetNeverRendered();


  // int GetAbortRender ();
/// <summary>
/// <para>This is a flag that can be set to interrupt a rendering that is in progress.</para>
/// </summary>
  int GetAbortRender();


  // void SetAbortRender (int );
/// <summary>
/// <para>This is a flag that can be set to interrupt a rendering that is in progress.</para>
/// </summary>
  void SetAbortRender(int arg0);


  // int GetInAbortCheck ();
/// <summary>
/// <para>This is a flag that can be set to interrupt a rendering that is in progress.</para>
/// </summary>
  int GetInAbortCheck();


  // void SetInAbortCheck (int );
/// <summary>
/// <para>This is a flag that can be set to interrupt a rendering that is in progress.</para>
/// </summary>
  void SetInAbortCheck(int arg0);


  // virtual int CheckAbortStatus ();
/// <summary>
/// <para>This is a flag that can be set to interrupt a rendering that is in progress.</para>
/// </summary>
  int CheckAbortStatus();


  // int GetIsPicking ();
  int GetIsPicking();


  // void SetIsPicking (int );
  void SetIsPicking(int arg0);


  // void IsPickingOn ();
  void IsPickingOn();


  // void IsPickingOff ();
  void IsPickingOff();


  // virtual int GetEventPending () = 0;
/// <summary>
/// <para>Check to see if a mouse button has been pressed.  All other events are ignored by this method.  Ideally, you want to abort the render on any event which causes the DesiredUpdateRate to switch from a high-quality rate to a more interactive rate.  </para>
/// </summary>
  int GetEventPending();


  // virtual int CheckInRenderStatus ();return this InRender 
/// <summary>
/// <para>Clear status (after an exception was thrown for example)</para>
/// </summary>
  int CheckInRenderStatus();


  // virtual void ClearInRenderStatus ();this InRender 
/// <summary>
/// <para>Set/Get the desired update rate. This is used with the vtkLODActor class. When using level of detail actors you need to specify what update rate you require. The LODActors then will pick the correct resolution to meet your desired update rate in frames per second. A value of zero indicates that they can use all the time they want to.</para>
/// </summary>
  void ClearInRenderStatus();


  // virtual void SetDesiredUpdateRate (double );
/// <summary>
/// <para>Set/Get the desired update rate. This is used with the vtkLODActor class. When using level of detail actors you need to specify what update rate you require. The LODActors then will pick the correct resolution to meet your desired update rate in frames per second. A value of zero indicates that they can use all the time they want to.</para>
/// </summary>
  void SetDesiredUpdateRate(double arg0);


  // double GetDesiredUpdateRate ();
/// <summary>
/// <para>Set/Get the desired update rate. This is used with the vtkLODActor class. When using level of detail actors you need to specify what update rate you require. The LODActors then will pick the correct resolution to meet your desired update rate in frames per second. A value of zero indicates that they can use all the time they want to.</para>
/// </summary>
  double GetDesiredUpdateRate();


  // int GetNumberOfLayers ();
/// <summary>
/// <para>Get the number of layers for renderers.  Each renderer should have its layer set individually.  Some algorithms iterate through all layers, so it is not wise to set the number of layers to be exorbitantly large (say bigger than 100).</para>
/// </summary>
  int GetNumberOfLayers();


  // void SetNumberOfLayers (int );
/// <summary>
/// <para>Get the number of layers for renderers.  Each renderer should have its layer set individually.  Some algorithms iterate through all layers, so it is not wise to set the number of layers to be exorbitantly large (say bigger than 100).</para>
/// </summary>
  void SetNumberOfLayers(int arg0);


  // int GetNumberOfLayersMinValue ();
/// <summary>
/// <para>Get the number of layers for renderers.  Each renderer should have its layer set individually.  Some algorithms iterate through all layers, so it is not wise to set the number of layers to be exorbitantly large (say bigger than 100).</para>
/// </summary>
  int GetNumberOfLayersMinValue();


  // int GetNumberOfLayersMaxValue ();
/// <summary>
/// <para>Get the number of layers for renderers.  Each renderer should have its layer set individually.  Some algorithms iterate through all layers, so it is not wise to set the number of layers to be exorbitantly large (say bigger than 100).</para>
/// </summary>
  int GetNumberOfLayersMaxValue();


  // vtkRenderWindowInteractor *GetInteractor ();
/// <summary>
/// <para>Get the interactor associated with this render window</para>
/// </summary>
  vtkRenderWindowInteractor^ GetInteractor();


  // void SetInteractor (vtkRenderWindowInteractor *);
/// <summary>
/// <para>Set the interactor to the render window</para>
/// </summary>
  void SetInteractor(vtkRenderWindowInteractor^ arg0);


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>This Method detects loops of RenderWindow&lt;-&gt;Interactor, so objects are freed properly.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


  // virtual void SetDisplayId (void *) = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  void SetDisplayId(System::IntPtr arg0);


  // virtual void SetWindowId (void *) = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  void SetWindowId(System::IntPtr arg0);


  // virtual void SetNextWindowId (void *) = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  void SetNextWindowId(System::IntPtr arg0);


  // virtual void SetParentId (void *) = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  void SetParentId(System::IntPtr arg0);


  // virtual void *GetGenericDisplayId () = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  System::IntPtr GetGenericDisplayId();


  // virtual void *GetGenericWindowId () = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  System::IntPtr GetGenericWindowId();


  // virtual void *GetGenericParentId () = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  System::IntPtr GetGenericParentId();


  // virtual void *GetGenericContext () = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  System::IntPtr GetGenericContext();


  // virtual void *GetGenericDrawable () = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  System::IntPtr GetGenericDrawable();


  // virtual void SetWindowInfo (char *) = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  void SetWindowInfo(System::String^ arg0);


  // virtual void SetNextWindowInfo (char *) = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  void SetNextWindowInfo(System::String^ arg0);


  // virtual void SetParentInfo (char *) = 0;
/// <summary>
/// <para>Dummy stubs for vtkWindow API.</para>
/// </summary>
  void SetParentInfo(System::String^ arg0);


  // virtual void MakeCurrent () = 0;
/// <summary>
/// <para>Make this the current window. </para>
/// </summary>
  void MakeCurrent();


  // virtual void SetForceMakeCurrent ();
/// <summary>
/// <para>If called, allow MakeCurrent() to skip cache-check when called. MakeCurrent() reverts to original behavior of cache-checking on the next render.</para>
/// </summary>
  void SetForceMakeCurrent();


  // virtual const char *ReportCapabilities ();return 
/// <summary>
/// <para>Get report of capabilities for the render window</para>
/// </summary>
  System::String^ ReportCapabilities();


  // virtual int SupportsOpenGL ();return 
/// <summary>
/// <para>Does this render window support OpenGL? 0-false, 1-true</para>
/// </summary>
  int SupportsOpenGL();


  // virtual int IsDirect ();return 
/// <summary>
/// <para>Is this render window using hardware acceleration? 0-false, 1-true</para>
/// </summary>
  int IsDirect();


  // virtual int GetDepthBufferSize () = 0;
/// <summary>
/// <para>This method should be defined by the subclass. How many bits of precision are there in the zbuffer?</para>
/// </summary>
  int GetDepthBufferSize();


// Did not wrap:  vtkRenderWindow ();


// Did not wrap:  ~vtkRenderWindow ();


// Did not wrap:  virtual void DoStereoRender ();


// Did not wrap:  virtual void DoFDRender ();


// Did not wrap:  virtual void DoAARender ();


// Did not wrap:  vtkRenderWindow (const vtkRenderWindow &);


// Did not wrap:  void vtkRenderWindow 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRenderWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRenderWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRenderWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRenderWindow();


};

} // end vtkRendering
