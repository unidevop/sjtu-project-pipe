#pragma once

// managed includes
#include "vtkImageSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkImageToImageFilter : public vtkImageSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageToImageFilter *NewInstance ();
  vtkImageToImageFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkImageData *input);
/// <summary>
/// <para>Set the Input of a filter. </para>
/// </summary>
  void SetInput(vtkImageData^ input);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Set the Input of a filter. </para>
/// </summary>
  vtkImageData^ GetInput();


  // void SetBypass (int );
/// <summary>
/// <para>Obsolete feature - do not use.</para>
/// </summary>
  void SetBypass(int arg0);


  // void BypassOn ();
/// <summary>
/// <para>Obsolete feature - do not use.</para>
/// </summary>
  void BypassOn();


  // void BypassOff ();
/// <summary>
/// <para>Obsolete feature - do not use.</para>
/// </summary>
  void BypassOff();


  // int GetBypass ();
/// <summary>
/// <para>Obsolete feature - do not use.</para>
/// </summary>
  int GetBypass();


  // virtual void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);
/// <summary>
/// <para>If the subclass does not define an Execute method, then the task will be broken up, multiple threads will be spawned, and each thread will call this method. It is public so that the thread functions can call this method.</para>
/// </summary>
  void ThreadedExecute(vtkImageData^ inData, vtkImageData^ outData, array<int>^ extent, int threadId);


  // void SetNumberOfThreads (int );
/// <summary>
/// <para>Get/Set the number of threads to create when rendering</para>
/// </summary>
  void SetNumberOfThreads(int arg0);


  // int GetNumberOfThreadsMinValue ();
/// <summary>
/// <para>Get/Set the number of threads to create when rendering</para>
/// </summary>
  int GetNumberOfThreadsMinValue();


  // int GetNumberOfThreadsMaxValue ();
/// <summary>
/// <para>Get/Set the number of threads to create when rendering</para>
/// </summary>
  int GetNumberOfThreadsMaxValue();


  // int GetNumberOfThreads ();
/// <summary>
/// <para>Get/Set the number of threads to create when rendering</para>
/// </summary>
  int GetNumberOfThreads();


  // void SetInputMemoryLimit (int );vtkErrorMacro 
  void SetInputMemoryLimit(int arg0);


  // long GetInputMemoryLimit ();vtkErrorMacro return 
  long GetInputMemoryLimit();


  // virtual int SplitExtent (int splitExt[6], int startExt[6], int num, int total);
/// <summary>
/// <para>Putting this here until I merge graphics and imaging streaming.</para>
/// </summary>
  int SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total);


// Did not wrap:  vtkImageToImageFilter ();


// Did not wrap:  ~vtkImageToImageFilter ();


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteInformation (vtkImageData *inData, vtkImageData *outData);


// Did not wrap:  void ExecuteData (vtkDataObject *output);


// Did not wrap:  virtual vtkImageData *AllocateOutputData (vtkDataObject *out);


// Did not wrap:  void MultiThread (vtkImageData *input, vtkImageData *output);


// Did not wrap:  void ComputeInputUpdateExtents (vtkDataObject *output);


// Did not wrap:  virtual void ComputeInputUpdateExtent (int inExt[6], int outExt[6]);


// Did not wrap:  void SetInputScalarsSelection (char *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImageToImageFilter (const vtkImageToImageFilter &);


// Did not wrap:  void vtkImageToImageFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageToImageFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageToImageFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageToImageFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageToImageFilter();


};

} // end vtkFiltering
