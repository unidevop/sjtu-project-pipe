#pragma once

// managed includes
#include "vtkRenderWindowDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOpenGLRenderWindow : public vtkRenderWindow
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOpenGLRenderWindow *NewInstance ();
  vtkOpenGLRenderWindow^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static void SetGlobalMaximumNumberOfMultiSamples (int val);
/// <summary>
/// <para>Set/Get the maximum number of multisamples</para>
/// </summary>
  static void SetGlobalMaximumNumberOfMultiSamples(int val);


  // static int GetGlobalMaximumNumberOfMultiSamples ();
/// <summary>
/// <para>Set/Get the maximum number of multisamples</para>
/// </summary>
  static int GetGlobalMaximumNumberOfMultiSamples();


  // void SetMultiSamples (int );
/// <summary>
/// <para>Set / Get the number of multisamples to use for hardware antialiasing.</para>
/// </summary>
  void SetMultiSamples(int arg0);


  // int GetMultiSamples ();
/// <summary>
/// <para>Set / Get the number of multisamples to use for hardware antialiasing.</para>
/// </summary>
  int GetMultiSamples();


  // virtual void StereoUpdate ();
/// <summary>
/// <para>Update system if needed due to stereo rendering.</para>
/// </summary>
  void StereoUpdate();


// Did not wrap:  virtual unsigned char *GetPixelData (int x, int y, int x2, int y2, int front);


  // virtual int GetPixelData (int x, int y, int x2, int y2, int front, vtkUnsignedCharArray *);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBRGB... </para>
/// </summary>
  int GetPixelData(int x, int y, int x2, int y2, int front, vtkUnsignedCharArray^ arg5);


  // virtual int SetPixelData (int x, int y, int x2, int y2, unsigned char *, int front);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBRGB... </para>
/// </summary>
  int SetPixelData(int x, int y, int x2, int y2, array<unsigned char>^ arg4, int front);


  // virtual int SetPixelData (int x, int y, int x2, int y2, vtkUnsignedCharArray *, int front);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBRGB... </para>
/// </summary>
  int SetPixelData(int x, int y, int x2, int y2, vtkUnsignedCharArray^ arg4, int front);


// Did not wrap:  virtual float *GetRGBAPixelData (int x, int y, int x2, int y2, int front);


  // virtual int GetRGBAPixelData (int x, int y, int x2, int y2, int front, vtkFloatArray *data);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBARGBA... </para>
/// </summary>
  int GetRGBAPixelData(int x, int y, int x2, int y2, int front, vtkFloatArray^ data);


  // virtual int SetRGBAPixelData (int x, int y, int x2, int y2, float *, int front, int blend);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBARGBA... </para>
/// </summary>
  int SetRGBAPixelData(int x, int y, int x2, int y2, array<float>^ arg4, int front, int blend);


  // virtual int SetRGBAPixelData (int x, int y, int x2, int y2, vtkFloatArray *, int front, int blend);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBARGBA... </para>
/// </summary>
  int SetRGBAPixelData(int x, int y, int x2, int y2, vtkFloatArray^ arg4, int front, int blend);


  // virtual void ReleaseRGBAPixelData (float *data);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBARGBA... </para>
/// </summary>
  void ReleaseRGBAPixelData(array<float>^ data);


// Did not wrap:  virtual unsigned char *GetRGBACharPixelData (int x, int y, int x2, int y2, int front);


  // virtual int GetRGBACharPixelData (int x, int y, int x2, int y2, int front, vtkUnsignedCharArray *data);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBARGBA... </para>
/// </summary>
  int GetRGBACharPixelData(int x, int y, int x2, int y2, int front, vtkUnsignedCharArray^ data);


  // virtual int SetRGBACharPixelData (int x, int y, int x2, int y2, unsigned char *, int front, int blend);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBARGBA... </para>
/// </summary>
  int SetRGBACharPixelData(int x, int y, int x2, int y2, array<unsigned char>^ arg4, int front, int blend);


  // virtual int SetRGBACharPixelData (int x, int y, int x2, int y2, vtkUnsignedCharArray *, int front, int blend);
/// <summary>
/// <para>Set/Get the pixel data of an image, transmitted as RGBARGBA... </para>
/// </summary>
  int SetRGBACharPixelData(int x, int y, int x2, int y2, vtkUnsignedCharArray^ arg4, int front, int blend);


// Did not wrap:  virtual float *GetZbufferData (int x1, int y1, int x2, int y2);


  // virtual int GetZbufferData (int x1, int y1, int x2, int y2, float *z);
/// <summary>
/// <para>Set/Get the zbuffer data from an image</para>
/// </summary>
  int GetZbufferData(int x1, int y1, int x2, int y2, array<float>^ z);


  // virtual int GetZbufferData (int x1, int y1, int x2, int y2, vtkFloatArray *z);
/// <summary>
/// <para>Set/Get the zbuffer data from an image</para>
/// </summary>
  int GetZbufferData(int x1, int y1, int x2, int y2, vtkFloatArray^ z);


  // virtual int SetZbufferData (int x1, int y1, int x2, int y2, float *buffer);
/// <summary>
/// <para>Set/Get the zbuffer data from an image</para>
/// </summary>
  int SetZbufferData(int x1, int y1, int x2, int y2, array<float>^ buffer);


  // virtual int SetZbufferData (int x1, int y1, int x2, int y2, vtkFloatArray *buffer);
/// <summary>
/// <para>Set/Get the zbuffer data from an image</para>
/// </summary>
  int SetZbufferData(int x1, int y1, int x2, int y2, vtkFloatArray^ buffer);


  // void MakeCurrent () = 0;
/// <summary>
/// <para>Make this window the current OpenGL context.</para>
/// </summary>
  void MakeCurrent();


// Did not wrap:  void RegisterTextureResource (GLuint id);


  // int GetDepthBufferSize ();
/// <summary>
/// <para>Get the size of the depth buffer.</para>
/// </summary>
  int GetDepthBufferSize();


  // virtual void OpenGLInit ();
/// <summary>
/// <para>Initialize OpenGL for this window.</para>
/// </summary>
  void OpenGLInit();


// Did not wrap:  vtkOpenGLRenderWindow ();


// Did not wrap:  ~vtkOpenGLRenderWindow ();


// Did not wrap:  int GetPixelData (int x, int y, int x2, int y2, int front, unsigned char *data);


// Did not wrap:  int GetRGBAPixelData (int x, int y, int x2, int y2, int front, float *data);


// Did not wrap:  int GetRGBACharPixelData (int x, int y, int x2, int y2, int front, unsigned char *data);


// Did not wrap:  vtkOpenGLRenderWindow (const vtkOpenGLRenderWindow &);


// Did not wrap:  void vtkOpenGLRenderWindow 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOpenGLRenderWindow(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOpenGLRenderWindow(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOpenGLRenderWindow();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOpenGLRenderWindow();


};

} // end vtkRendering
