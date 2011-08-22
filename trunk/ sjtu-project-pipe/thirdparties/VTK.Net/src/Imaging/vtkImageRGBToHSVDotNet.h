#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageRGBToHSV : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageRGBToHSV *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageRGBToHSV *NewInstance ();
  vtkImageRGBToHSV^ NewInstance();


  // vtkImageRGBToHSV *SafeDownCast (vtkObject* o);
  static vtkImageRGBToHSV^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMaximum (double );
  void SetMaximum(double arg0);


  // double GetMaximum ();
  double GetMaximum();


// Did not wrap:  vtkImageRGBToHSV ();


// Did not wrap:  ~vtkImageRGBToHSV ();


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageRGBToHSV (const vtkImageRGBToHSV &);


// Did not wrap:  void vtkImageRGBToHSV 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageRGBToHSV(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageRGBToHSV(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageRGBToHSV();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageRGBToHSV();


};

} // end vtkImaging
