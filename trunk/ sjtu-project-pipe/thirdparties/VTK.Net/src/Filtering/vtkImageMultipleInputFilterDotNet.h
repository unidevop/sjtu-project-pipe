#pragma once

// managed includes
#include "vtkImageSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkImageMultipleInputFilter : public vtkImageSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMultipleInputFilter *NewInstance ();
  vtkImageMultipleInputFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (int num, vtkImageData *input);
/// <summary>
/// <para>Set an Input of this filter. </para>
/// </summary>
  void SetInput(int num, vtkImageData^ input);


  // virtual void AddInput (vtkImageData *input);
/// <summary>
/// <para>Adds an input to the first null position in the input list. Expands the list memory if necessary</para>
/// </summary>
  void AddInput(vtkImageData^ input);


  // virtual void RemoveInput (vtkImageData *input);
/// <summary>
/// <para>Adds an input to the first null position in the input list. Expands the list memory if necessary</para>
/// </summary>
  void RemoveInput(vtkImageData^ input);


  // vtkImageData *GetInput (int num);
/// <summary>
/// <para>Get one input to this filter.</para>
/// </summary>
  vtkImageData^ GetInput(int num);


  // vtkImageData *GetInput ();
/// <summary>
/// <para>Get one input to this filter.</para>
/// </summary>
  vtkImageData^ GetInput();


  // void SetBypass (int );
/// <summary>
/// <para>Turning bypass on will cause the filter to turn off and simply pass the data from the first input (input0) through.   It is implemented for consistency with vtkImageToImageFilter.</para>
/// </summary>
  void SetBypass(int arg0);


  // int GetBypass ();
/// <summary>
/// <para>Turning bypass on will cause the filter to turn off and simply pass the data from the first input (input0) through.   It is implemented for consistency with vtkImageToImageFilter.</para>
/// </summary>
  int GetBypass();


  // void BypassOn ();
/// <summary>
/// <para>Turning bypass on will cause the filter to turn off and simply pass the data from the first input (input0) through.   It is implemented for consistency with vtkImageToImageFilter.</para>
/// </summary>
  void BypassOn();


  // void BypassOff ();
/// <summary>
/// <para>Turning bypass on will cause the filter to turn off and simply pass the data from the first input (input0) through.   It is implemented for consistency with vtkImageToImageFilter.</para>
/// </summary>
  void BypassOff();


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


  // virtual int SplitExtent (int splitExt[6], int startExt[6], int num, int total);
/// <summary>
/// <para>Putting this here until I merge graphics and imaging streaming.</para>
/// </summary>
  int SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total);


// Did not wrap:  virtual void ThreadedExecute (vtkImageData *inDatas, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  vtkImageMultipleInputFilter ();


// Did not wrap:  ~vtkImageMultipleInputFilter ();


// Did not wrap:  void ComputeInputUpdateExtents (vtkDataObject *output);


// Did not wrap:  virtual void ComputeInputUpdateExtent (int inExt[6], int outExt[6], int whichInput);


// Did not wrap:  void ExecuteData (vtkDataObject *output);


// Did not wrap:  void MultiThread (vtkImageData *indatas, vtkImageData *outdata);


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteInformation (vtkImageData *, vtkImageData *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  void AddInput (vtkDataObject *);vtkErrorMacro 


// Did not wrap:  void RemoveInput (vtkDataObject *);vtkErrorMacro 


// Did not wrap:  vtkImageMultipleInputFilter (const vtkImageMultipleInputFilter &);


// Did not wrap:  void vtkImageMultipleInputFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMultipleInputFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMultipleInputFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMultipleInputFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMultipleInputFilter();


};

} // end vtkFiltering
