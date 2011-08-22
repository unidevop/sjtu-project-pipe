#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageStencilData;

public ref class vtkImageStencil : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageStencil *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageStencil *NewInstance ();
  vtkImageStencil^ NewInstance();


  // vtkImageStencil *SafeDownCast (vtkObject* o);
  static vtkImageStencil^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetStencil (vtkImageStencilData *stencil);
/// <summary>
/// <para>Specify the stencil to use.  The stencil can be created from a vtkImplicitFunction or a vtkPolyData.</para>
/// </summary>
  void SetStencil(vtkImageStencilData^ stencil);


  // vtkImageStencilData *GetStencil ();
/// <summary>
/// <para>Specify the stencil to use.  The stencil can be created from a vtkImplicitFunction or a vtkPolyData.</para>
/// </summary>
  vtkImageStencilData^ GetStencil();


  // void SetReverseStencil (int );
/// <summary>
/// <para>Reverse the stencil.</para>
/// </summary>
  void SetReverseStencil(int arg0);


  // void ReverseStencilOn ();
/// <summary>
/// <para>Reverse the stencil.</para>
/// </summary>
  void ReverseStencilOn();


  // void ReverseStencilOff ();
/// <summary>
/// <para>Reverse the stencil.</para>
/// </summary>
  void ReverseStencilOff();


  // int GetReverseStencil ();
/// <summary>
/// <para>Reverse the stencil.</para>
/// </summary>
  int GetReverseStencil();


  // virtual void SetBackgroundInput (vtkImageData *input);
/// <summary>
/// <para>NOTE: Not yet implemented, use SetBackgroundValue instead. Set the second input.  This image will be used for the 'outside' of the stencil.  If not set, the output voxels will be filled with BackgroundValue instead.</para>
/// </summary>
  void SetBackgroundInput(vtkImageData^ input);


  // vtkImageData *GetBackgroundInput ();
/// <summary>
/// <para>NOTE: Not yet implemented, use SetBackgroundValue instead. Set the second input.  This image will be used for the 'outside' of the stencil.  If not set, the output voxels will be filled with BackgroundValue instead.</para>
/// </summary>
  vtkImageData^ GetBackgroundInput();


  // void SetBackgroundValue (double val);this SetBackgroundColor val val val val 
/// <summary>
/// <para>Set the default output value to use when the second input is not set.</para>
/// </summary>
  void SetBackgroundValue(double val);


  // double GetBackgroundValue ();return this BackgroundColor 
/// <summary>
/// <para>Set the default output value to use when the second input is not set.</para>
/// </summary>
  double GetBackgroundValue();


  // void SetBackgroundColor (double , double , double , double );
/// <summary>
/// <para>Set the default color to use when the second input is not set. This is like SetBackgroundValue, but for multi-component images.</para>
/// </summary>
  void SetBackgroundColor(double arg0, double arg1, double arg2, double arg3);


  // void SetBackgroundColor (double  a[4]);
/// <summary>
/// <para>Set the default color to use when the second input is not set. This is like SetBackgroundValue, but for multi-component images.</para>
/// </summary>
  void SetBackgroundColor(array<double>^ a);


  // double  *GetBackgroundColor ();
/// <summary>
/// <para>Set the default color to use when the second input is not set. This is like SetBackgroundValue, but for multi-component images.</para>
/// </summary>
  array<double>^ GetBackgroundColor();


// Did not wrap:  vtkImageStencil ();


// Did not wrap:  ~vtkImageStencil ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImageStencil (const vtkImageStencil &);


// Did not wrap:  void vtkImageStencil 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageStencil(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageStencil(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageStencil();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageStencil();


};

} // end vtkImaging
