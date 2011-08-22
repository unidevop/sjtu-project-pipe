#pragma once

// managed includes
#include "vtkVideoSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkWin32VideoSource : public vtkVideoSource
{

public:
// Did not wrap:  static vtkWin32VideoSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWin32VideoSource *NewInstance ();
  vtkWin32VideoSource^ NewInstance();


  // vtkWin32VideoSource *SafeDownCast (vtkObject* o);
  static vtkWin32VideoSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Record ();
/// <summary>
/// <para>Standard VCR functionality: Record incoming video.</para>
/// </summary>
  void Record();


  // void Play ();
/// <summary>
/// <para>Standard VCR functionality: Play recorded video.</para>
/// </summary>
  void Play();


  // void Stop ();
/// <summary>
/// <para>Standard VCR functionality: Stop recording or playing.</para>
/// </summary>
  void Stop();


  // void Grab ();
/// <summary>
/// <para>Grab a single video frame.</para>
/// </summary>
  void Grab();


  // void SetFrameSize (int x, int y, int z);
/// <summary>
/// <para>Request a particular frame size (set the third value to 1).</para>
/// </summary>
  void SetFrameSize(int x, int y, int z);


  // virtual void SetFrameSize (int dim[3]);this SetFrameSize dim dim dim 
/// <summary>
/// <para>Request a particular frame size (set the third value to 1).</para>
/// </summary>
  void SetFrameSize(array<int>^ dim);


  // void SetFrameRate (float rate);
/// <summary>
/// <para>Request a particular frame rate (default 30 frames per second).</para>
/// </summary>
  void SetFrameRate(float rate);


  // void SetOutputFormat (int format);
/// <summary>
/// <para>Request a particular output format (default: VTK_RGB).</para>
/// </summary>
  void SetOutputFormat(int format);


  // void SetPreview (int p);
/// <summary>
/// <para>Turn on/off the preview (overlay) window.</para>
/// </summary>
  void SetPreview(int p);


  // void PreviewOn ();
/// <summary>
/// <para>Turn on/off the preview (overlay) window.</para>
/// </summary>
  void PreviewOn();


  // void PreviewOff ();
/// <summary>
/// <para>Turn on/off the preview (overlay) window.</para>
/// </summary>
  void PreviewOff();


  // int GetPreview ();
/// <summary>
/// <para>Turn on/off the preview (overlay) window.</para>
/// </summary>
  int GetPreview();


  // void VideoFormatDialog ();
/// <summary>
/// <para>Bring up a modal dialog box for video format selection.</para>
/// </summary>
  void VideoFormatDialog();


  // void VideoSourceDialog ();
/// <summary>
/// <para>Bring up a modal dialog box for video input selection.</para>
/// </summary>
  void VideoSourceDialog();


  // void Initialize ();
/// <summary>
/// <para>Initialize the driver (this is called automatically when the first grab is done).</para>
/// </summary>
  void Initialize();


  // void ReleaseSystemResources ();
/// <summary>
/// <para>Free the driver (this is called automatically inside the destructor).</para>
/// </summary>
  void ReleaseSystemResources();


  // void LocalInternalGrab (void *);
/// <summary>
/// <para>For internal use only</para>
/// </summary>
  void LocalInternalGrab(System::IntPtr arg0);


  // void OnParentWndDestroy ();
/// <summary>
/// <para>For internal use only</para>
/// </summary>
  void OnParentWndDestroy();


// Did not wrap:  vtkWin32VideoSource ();


// Did not wrap:  ~vtkWin32VideoSource ();


// Did not wrap:  void CheckBuffer ();


// Did not wrap:  void UnpackRasterLine (char *outptr, char *inptr, int start, int count);


// Did not wrap:  void DoVFWFormatSetup ();


// Did not wrap:  void DoVFWFormatCheck ();


// Did not wrap:  vtkWin32VideoSource (const vtkWin32VideoSource &);


// Did not wrap:  void vtkWin32VideoSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWin32VideoSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWin32VideoSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWin32VideoSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWin32VideoSource();


};

} // end vtkHybrid
