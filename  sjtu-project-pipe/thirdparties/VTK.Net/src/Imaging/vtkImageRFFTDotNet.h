#pragma once

// managed includes
#include "vtkImageFourierFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageRFFT : public vtkImageFourierFilter
{

public:
// Did not wrap:  static vtkImageRFFT *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageRFFT *NewInstance ();
  vtkImageRFFT^ NewInstance();


  // vtkImageRFFT *SafeDownCast (vtkObject* o);
  static vtkImageRFFT^ SafeDownCast(vtkObject^ o);


  // int SplitExtent (int splitExt[6], int startExt[6], int num, int total);
/// <summary>
/// <para>For streaming and threads.  Splits output update extent into num pieces. This method needs to be called num times.  Results must not overlap for consistent starting extent.  Subclass can override this method.  This method returns the number of pieces resulting from a successful split. This can be from 1 to &quot;total&quot;.  If 1 is returned, the extent cannot be split.</para>
/// </summary>
  int SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total);


// Did not wrap:  vtkImageRFFT ();


// Did not wrap:  ~vtkImageRFFT ();


// Did not wrap:  virtual int IterativeRequestInformation (vtkInformation *in, vtkInformation *out);


// Did not wrap:  virtual int IterativeRequestUpdateExtent (vtkInformation *in, vtkInformation *out);


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int outExt[6], int threadId);


// Did not wrap:  vtkImageRFFT (const vtkImageRFFT &);


// Did not wrap:  void vtkImageRFFT 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageRFFT(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageRFFT(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageRFFT();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageRFFT();


};

} // end vtkImaging
