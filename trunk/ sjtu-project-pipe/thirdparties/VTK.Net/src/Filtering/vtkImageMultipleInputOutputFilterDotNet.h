#pragma once

// managed includes
#include "vtkImageMultipleInputFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkImageMultipleInputOutputFilter : public vtkImageMultipleInputFilter
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMultipleInputOutputFilter *NewInstance ();
  vtkImageMultipleInputOutputFilter^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkImageData *GetOutput (int num);
/// <summary>
/// <para>Get one input to this filter.</para>
/// </summary>
  vtkImageData^ GetOutput(int num);


  // vtkImageData *GetOutput ();
/// <summary>
/// <para>Get one input to this filter.</para>
/// </summary>
  vtkImageData^ GetOutput();


// Did not wrap:  virtual void ThreadedExecute (vtkImageData *inDatas, vtkImageData *outDatas, int extent[6], int threadId);


// Did not wrap:  vtkImageMultipleInputOutputFilter ();


// Did not wrap:  ~vtkImageMultipleInputOutputFilter ();


// Did not wrap:  void ComputeInputUpdateExtents (vtkDataObject *output);


// Did not wrap:  virtual void ComputeInputUpdateExtent (int inExt[6], int outExt[6], int whichInput);


// Did not wrap:  void ExecuteData (vtkDataObject *out);


// Did not wrap:  virtual void ThreadedExecute (vtkImageData *inDatas, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  virtual void ExecuteInformation (vtkImageData *, vtkImageData *);


// Did not wrap:  void ExecuteInformation ();


// Did not wrap:  virtual void ExecuteInformation (vtkImageData *, vtkImageData *);


// Did not wrap:  vtkImageMultipleInputOutputFilter (const vtkImageMultipleInputOutputFilter &);


// Did not wrap:  void vtkImageMultipleInputOutputFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMultipleInputOutputFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMultipleInputOutputFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMultipleInputOutputFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMultipleInputOutputFilter();


};

} // end vtkFiltering
