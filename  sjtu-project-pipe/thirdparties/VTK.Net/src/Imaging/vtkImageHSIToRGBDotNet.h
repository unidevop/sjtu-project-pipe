#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageHSIToRGB : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageHSIToRGB *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageHSIToRGB *NewInstance ();
  vtkImageHSIToRGB^ NewInstance();


  // vtkImageHSIToRGB *SafeDownCast (vtkObject* o);
  static vtkImageHSIToRGB^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMaximum (double );
/// <summary>
/// <para>Hue is an angle. Maximum specifies when it maps back to 0. HueMaximum defaults to 255 instead of 2PI, because unsigned char is expected as input. Maximum also specifies the maximum of the Saturation, and R, G, B.</para>
/// </summary>
  void SetMaximum(double arg0);


  // double GetMaximum ();
/// <summary>
/// <para>Hue is an angle. Maximum specifies when it maps back to 0. HueMaximum defaults to 255 instead of 2PI, because unsigned char is expected as input. Maximum also specifies the maximum of the Saturation, and R, G, B.</para>
/// </summary>
  double GetMaximum();


// Did not wrap:  vtkImageHSIToRGB ();


// Did not wrap:  ~vtkImageHSIToRGB ();


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageHSIToRGB (const vtkImageHSIToRGB &);


// Did not wrap:  void vtkImageHSIToRGB 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageHSIToRGB(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageHSIToRGB(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageHSIToRGB();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageHSIToRGB();


};

} // end vtkImaging
