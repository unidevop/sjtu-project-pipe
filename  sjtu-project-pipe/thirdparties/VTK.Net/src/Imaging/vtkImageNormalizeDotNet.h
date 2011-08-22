#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageNormalize : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageNormalize *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageNormalize *NewInstance ();
  vtkImageNormalize^ NewInstance();


  // vtkImageNormalize *SafeDownCast (vtkObject* o);
  static vtkImageNormalize^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkImageNormalize ();


// Did not wrap:  ~vtkImageNormalize ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  vtkImageNormalize (const vtkImageNormalize &);


// Did not wrap:  void vtkImageNormalize 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageNormalize(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageNormalize(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageNormalize();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageNormalize();


};

} // end vtkImaging
