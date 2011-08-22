#pragma once

// managed includes
#include "vtkImageAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkThreadedImageAlgorithm : public vtkImageAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkThreadedImageAlgorithm *NewInstance ();
  vtkThreadedImageAlgorithm^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


  // virtual void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);
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


  // virtual int SplitExtent (int splitExt[6], int startExt[6], int num, int total);
/// <summary>
/// <para>Putting this here until I merge graphics and imaging streaming.</para>
/// </summary>
  int SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total);


// Did not wrap:  vtkThreadedImageAlgorithm ();


// Did not wrap:  ~vtkThreadedImageAlgorithm ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkThreadedImageAlgorithm (const vtkThreadedImageAlgorithm &);


// Did not wrap:  void vtkThreadedImageAlgorithm 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkThreadedImageAlgorithm(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkThreadedImageAlgorithm(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkThreadedImageAlgorithm();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkThreadedImageAlgorithm();


};

} // end vtkFiltering
