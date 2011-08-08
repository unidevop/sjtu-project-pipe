#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageRGBToHSI : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageRGBToHSI *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageRGBToHSI *NewInstance ();
  vtkImageRGBToHSI^ NewInstance();


  // vtkImageRGBToHSI *SafeDownCast (vtkObject* o);
  static vtkImageRGBToHSI^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMaximum (double );
/// <summary>
/// <para>Hue is an angle. Maximum specifies when it maps back to 0.  HueMaximum defaults to 255 instead of 2PI, because unsigned char is expected as input.  Maximum also specifies the maximum of the Saturation.</para>
/// </summary>
  void SetMaximum(double arg0);


  // double GetMaximum ();
/// <summary>
/// <para>Hue is an angle. Maximum specifies when it maps back to 0.  HueMaximum defaults to 255 instead of 2PI, because unsigned char is expected as input.  Maximum also specifies the maximum of the Saturation.</para>
/// </summary>
  double GetMaximum();


// Did not wrap:  vtkImageRGBToHSI ();


// Did not wrap:  ~vtkImageRGBToHSI ();


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageRGBToHSI (const vtkImageRGBToHSI &);


// Did not wrap:  void vtkImageRGBToHSI 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageRGBToHSI(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageRGBToHSI(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageRGBToHSI();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageRGBToHSI();


};

} // end vtkImaging
