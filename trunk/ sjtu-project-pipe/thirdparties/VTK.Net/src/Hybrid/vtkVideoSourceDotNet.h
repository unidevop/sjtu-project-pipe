#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVideoSource : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkVideoSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVideoSource *NewInstance ();
  vtkVideoSource^ NewInstance();


  // vtkVideoSource *SafeDownCast (vtkObject* o);
  static vtkVideoSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Record ();
/// <summary>
/// <para>Record incoming video at the specified FrameRate.  The recording continues indefinitely until Stop() is called. </para>
/// </summary>
  void Record();


  // virtual void Play ();
/// <summary>
/// <para>Play through the 'tape' sequentially at the specified frame rate. If you have just finished Recoding, you should call Rewind() first.</para>
/// </summary>
  void Play();


  // virtual void Stop ();
/// <summary>
/// <para>Stop recording or playing.</para>
/// </summary>
  void Stop();


  // virtual void Rewind ();
/// <summary>
/// <para>Rewind to the frame with the earliest timestamp.  Record operations will start on the following frame, therefore if you want to re-record over this frame you must call Seek(-1) before calling Grab() or Record().</para>
/// </summary>
  void Rewind();


  // virtual void FastForward ();
/// <summary>
/// <para>FastForward to the last frame that was recorded (i.e. to the frame that has the most recent timestamp).</para>
/// </summary>
  void FastForward();


  // virtual void Seek (int n);
/// <summary>
/// <para>Seek forwards or backwards by the specified number of frames (positive is forward, negative is backward).</para>
/// </summary>
  void Seek(int n);


  // virtual void Grab ();
/// <summary>
/// <para>Grab a single video frame.</para>
/// </summary>
  void Grab();


  // int GetRecording ();
/// <summary>
/// <para>Are we in record mode? (record mode and play mode are mutually exclusive).</para>
/// </summary>
  int GetRecording();


  // int GetPlaying ();
/// <summary>
/// <para>Are we in play mode? (record mode and play mode are mutually exclusive).</para>
/// </summary>
  int GetPlaying();


  // virtual void SetFrameSize (int x, int y, int z);
/// <summary>
/// <para>Set the full-frame size.  This must be an allowed size for the device, the device may either refuse a request for an illegal frame size or automatically choose a new frame size. The default is usually 320x240x1, but can be device specific.   The 'depth' should always be 1 (unless you have a device that can handle 3D acquisition).</para>
/// </summary>
  void SetFrameSize(int x, int y, int z);


  // virtual void SetFrameSize (int dim[3]);this SetFrameSize dim dim dim 
/// <summary>
/// <para>Set the full-frame size.  This must be an allowed size for the device, the device may either refuse a request for an illegal frame size or automatically choose a new frame size. The default is usually 320x240x1, but can be device specific.   The 'depth' should always be 1 (unless you have a device that can handle 3D acquisition).</para>
/// </summary>
  void SetFrameSize(array<int>^ dim);


  // int  *GetFrameSize ();
/// <summary>
/// <para>Set the full-frame size.  This must be an allowed size for the device, the device may either refuse a request for an illegal frame size or automatically choose a new frame size. The default is usually 320x240x1, but can be device specific.   The 'depth' should always be 1 (unless you have a device that can handle 3D acquisition).</para>
/// </summary>
  array<int>^ GetFrameSize();


  // virtual void SetFrameRate (float rate);
/// <summary>
/// <para>Request a particular frame rate (default 30 frames per second).</para>
/// </summary>
  void SetFrameRate(float rate);


  // float GetFrameRate ();
/// <summary>
/// <para>Request a particular frame rate (default 30 frames per second).</para>
/// </summary>
  float GetFrameRate();


  // virtual void SetOutputFormat (int format);
/// <summary>
/// <para>Set the output format.  This must be appropriate for device, usually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.</para>
/// </summary>
  void SetOutputFormat(int format);


  // void SetOutputFormatToLuminance ();this SetOutputFormat VTK_LUMINANCE 
/// <summary>
/// <para>Set the output format.  This must be appropriate for device, usually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.</para>
/// </summary>
  void SetOutputFormatToLuminance();


  // void SetOutputFormatToRGB ();this SetOutputFormat VTK_RGB 
/// <summary>
/// <para>Set the output format.  This must be appropriate for device, usually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.</para>
/// </summary>
  void SetOutputFormatToRGB();


  // void SetOutputFormatToRGBA ();this SetOutputFormat VTK_RGBA 
/// <summary>
/// <para>Set the output format.  This must be appropriate for device, usually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.</para>
/// </summary>
  void SetOutputFormatToRGBA();


  // int GetOutputFormat ();
/// <summary>
/// <para>Set the output format.  This must be appropriate for device, usually only VTK_LUMINANCE, VTK_RGB, and VTK_RGBA are supported.</para>
/// </summary>
  int GetOutputFormat();


  // virtual void SetFrameBufferSize (int FrameBufferSize);
/// <summary>
/// <para>Set size of the frame buffer, i.e. the number of frames that the 'tape' can store.</para>
/// </summary>
  void SetFrameBufferSize(int FrameBufferSize);


  // int GetFrameBufferSize ();
/// <summary>
/// <para>Set size of the frame buffer, i.e. the number of frames that the 'tape' can store.</para>
/// </summary>
  int GetFrameBufferSize();


  // void SetNumberOfOutputFrames (int );
/// <summary>
/// <para>Set the number of frames to copy to the output on each execute. The frames will be concatenated along the Z dimension, with the  most recent frame first. Default: 1</para>
/// </summary>
  void SetNumberOfOutputFrames(int arg0);


  // int GetNumberOfOutputFrames ();
/// <summary>
/// <para>Set the number of frames to copy to the output on each execute. The frames will be concatenated along the Z dimension, with the  most recent frame first. Default: 1</para>
/// </summary>
  int GetNumberOfOutputFrames();


  // void AutoAdvanceOn ();
/// <summary>
/// <para>Set whether to automatically advance the buffer before each grab.  Default: on</para>
/// </summary>
  void AutoAdvanceOn();


  // void AutoAdvanceOff ();
/// <summary>
/// <para>Set whether to automatically advance the buffer before each grab.  Default: on</para>
/// </summary>
  void AutoAdvanceOff();


  // void SetAutoAdvance (int );
/// <summary>
/// <para>Set whether to automatically advance the buffer before each grab.  Default: on</para>
/// </summary>
  void SetAutoAdvance(int arg0);


  // int GetAutoAdvance ();
/// <summary>
/// <para>Set whether to automatically advance the buffer before each grab.  Default: on</para>
/// </summary>
  int GetAutoAdvance();


  // virtual void SetClipRegion (int r[6]);this SetClipRegion r r r r r r 
/// <summary>
/// <para>Set the clip rectangle for the frames.  The video will be clipped  before it is copied into the framebuffer.  Changing the ClipRegion will destroy the current contents of the framebuffer. The default ClipRegion is (0,VTK_INT_MAX,0,VTK_INT_MAX,0,VTK_INT_MAX).</para>
/// </summary>
  void SetClipRegion(array<int>^ r);


  // virtual void SetClipRegion (int x0, int x1, int y0, int y1, int z0, int z1);
/// <summary>
/// <para>Set the clip rectangle for the frames.  The video will be clipped  before it is copied into the framebuffer.  Changing the ClipRegion will destroy the current contents of the framebuffer. The default ClipRegion is (0,VTK_INT_MAX,0,VTK_INT_MAX,0,VTK_INT_MAX).</para>
/// </summary>
  void SetClipRegion(int x0, int x1, int y0, int y1, int z0, int z1);


  // int  *GetClipRegion ();
/// <summary>
/// <para>Set the clip rectangle for the frames.  The video will be clipped  before it is copied into the framebuffer.  Changing the ClipRegion will destroy the current contents of the framebuffer. The default ClipRegion is (0,VTK_INT_MAX,0,VTK_INT_MAX,0,VTK_INT_MAX).</para>
/// </summary>
  array<int>^ GetClipRegion();


  // void SetOutputWholeExtent (int , int , int , int , int , int );
/// <summary>
/// <para>Get/Set the WholeExtent of the output.  This can be used to either clip or pad the video frame.  This clipping/padding is done when the frame is copied to the output, and does not change the contents of the framebuffer.  This is useful e.g. for expanding  the output size to a power of two for texture mapping.  The default is (0,-1,0,-1,0,-1) which causes the entire frame to be copied to the output.</para>
/// </summary>
  void SetOutputWholeExtent(int arg0, int arg1, int arg2, int arg3, int arg4, int arg5);


  // void SetOutputWholeExtent (int  a[6]);
/// <summary>
/// <para>Get/Set the WholeExtent of the output.  This can be used to either clip or pad the video frame.  This clipping/padding is done when the frame is copied to the output, and does not change the contents of the framebuffer.  This is useful e.g. for expanding  the output size to a power of two for texture mapping.  The default is (0,-1,0,-1,0,-1) which causes the entire frame to be copied to the output.</para>
/// </summary>
  void SetOutputWholeExtent(array<int>^ a);


  // int  *GetOutputWholeExtent ();
/// <summary>
/// <para>Get/Set the WholeExtent of the output.  This can be used to either clip or pad the video frame.  This clipping/padding is done when the frame is copied to the output, and does not change the contents of the framebuffer.  This is useful e.g. for expanding  the output size to a power of two for texture mapping.  The default is (0,-1,0,-1,0,-1) which causes the entire frame to be copied to the output.</para>
/// </summary>
  array<int>^ GetOutputWholeExtent();


  // void SetDataSpacing (double , double , double );
/// <summary>
/// <para>Set/Get the pixel spacing.  Default: (1.0,1.0,1.0)</para>
/// </summary>
  void SetDataSpacing(double arg0, double arg1, double arg2);


  // void SetDataSpacing (double  a[3]);
/// <summary>
/// <para>Set/Get the pixel spacing.  Default: (1.0,1.0,1.0)</para>
/// </summary>
  void SetDataSpacing(array<double>^ a);


  // double  *GetDataSpacing ();
/// <summary>
/// <para>Set/Get the pixel spacing.  Default: (1.0,1.0,1.0)</para>
/// </summary>
  array<double>^ GetDataSpacing();


  // void SetDataOrigin (double , double , double );
/// <summary>
/// <para>Set/Get the coordinates of the lower, left corner of the frame.  Default: (0.0,0.0,0.0)</para>
/// </summary>
  void SetDataOrigin(double arg0, double arg1, double arg2);


  // void SetDataOrigin (double  a[3]);
/// <summary>
/// <para>Set/Get the coordinates of the lower, left corner of the frame.  Default: (0.0,0.0,0.0)</para>
/// </summary>
  void SetDataOrigin(array<double>^ a);


  // double  *GetDataOrigin ();
/// <summary>
/// <para>Set/Get the coordinates of the lower, left corner of the frame.  Default: (0.0,0.0,0.0)</para>
/// </summary>
  array<double>^ GetDataOrigin();


  // void SetOpacity (float );
/// <summary>
/// <para>For RGBA output only (4 scalar components), set the opacity.  This will not modify the existing contents of the framebuffer, only subsequently grabbed frames.</para>
/// </summary>
  void SetOpacity(float arg0);


  // float GetOpacity ();
/// <summary>
/// <para>For RGBA output only (4 scalar components), set the opacity.  This will not modify the existing contents of the framebuffer, only subsequently grabbed frames.</para>
/// </summary>
  float GetOpacity();


  // int GetFrameCount ();
/// <summary>
/// <para>This value is incremented each time a frame is grabbed. reset it to zero (or any other value) at any time.</para>
/// </summary>
  int GetFrameCount();


  // void SetFrameCount (int );
/// <summary>
/// <para>This value is incremented each time a frame is grabbed. reset it to zero (or any other value) at any time.</para>
/// </summary>
  void SetFrameCount(int arg0);


  // int GetFrameIndex ();
/// <summary>
/// <para>Get the frame index relative to the 'beginning of the tape'.  This value wraps back to zero if it increases past the FrameBufferSize.</para>
/// </summary>
  int GetFrameIndex();


  // virtual double GetFrameTimeStamp (int frame);
/// <summary>
/// <para>Get a time stamp in seconds (resolution of milliseconds) for a video frame.   Time began on Jan 1, 1970.  You can specify a number (negative or positive) to specify the position of the video frame relative to the current frame.</para>
/// </summary>
  double GetFrameTimeStamp(int frame);


  // double GetFrameTimeStamp ();return this FrameTimeStamp 
/// <summary>
/// <para>Get a time stamp in seconds (resolution of milliseconds) for the Output.  Time began on Jan 1, 1970.  This timestamp is only valid after the Output has been Updated.</para>
/// </summary>
  double GetFrameTimeStamp();


  // virtual void Initialize ();
/// <summary>
/// <para>Initialize the hardware.  This is called automatically on the first Update or Grab.</para>
/// </summary>
  void Initialize();


  // virtual int GetInitialized ();return this Initialized 
/// <summary>
/// <para>Initialize the hardware.  This is called automatically on the first Update or Grab.</para>
/// </summary>
  int GetInitialized();


  // virtual void ReleaseSystemResources ();
/// <summary>
/// <para>Release the video driver.  This method must be called before application exit, or else the application might hang during exit.  </para>
/// </summary>
  void ReleaseSystemResources();


  // virtual void InternalGrab ();
/// <summary>
/// <para>The internal function which actually does the grab.  You will definitely want to override this if you develop a vtkVideoSource subclass. </para>
/// </summary>
  void InternalGrab();


  // void SetStartTimeStamp (double t);this StartTimeStamp t 
/// <summary>
/// <para>And internal variable which marks the beginning of a Record session. These methods are for internal use only.</para>
/// </summary>
  void SetStartTimeStamp(double t);


  // double GetStartTimeStamp ();return this StartTimeStamp 
/// <summary>
/// <para>And internal variable which marks the beginning of a Record session. These methods are for internal use only.</para>
/// </summary>
  double GetStartTimeStamp();


// Did not wrap:  vtkVideoSource ();


// Did not wrap:  ~vtkVideoSource ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void UpdateFrameBuffer ();


// Did not wrap:  virtual void AdvanceFrameBuffer (int n);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void UnpackRasterLine (char *outPtr, char *rowPtr, int start, int count);


// Did not wrap:  vtkVideoSource (const vtkVideoSource &);


// Did not wrap:  void vtkVideoSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVideoSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVideoSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVideoSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVideoSource();


};

} // end vtkHybrid
