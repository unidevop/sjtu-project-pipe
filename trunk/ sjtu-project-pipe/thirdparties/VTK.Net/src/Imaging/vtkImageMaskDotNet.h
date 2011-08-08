#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMask : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageMask *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMask *NewInstance ();
  vtkImageMask^ NewInstance();


  // vtkImageMask *SafeDownCast (vtkObject* o);
  static vtkImageMask^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetMaskedOutputValue (int num, double *v);
/// <summary>
/// <para>SetGet the value of the output pixel replaced by mask.</para>
/// </summary>
  void SetMaskedOutputValue(int num, array<double>^ v);


  // void SetMaskedOutputValue (double v);this SetMaskedOutputValue v 
/// <summary>
/// <para>SetGet the value of the output pixel replaced by mask.</para>
/// </summary>
  void SetMaskedOutputValue(double v);


  // void SetMaskedOutputValue (double v1, double v2);double v v v1 v v2 this SetMaskedOutputValue v 
/// <summary>
/// <para>SetGet the value of the output pixel replaced by mask.</para>
/// </summary>
  void SetMaskedOutputValue(double v1, double v2);


  // void SetMaskedOutputValue (double v1, double v2, double v3);double v v v1 v v2 v v3 this SetMaskedOutputValue v 
/// <summary>
/// <para>SetGet the value of the output pixel replaced by mask.</para>
/// </summary>
  void SetMaskedOutputValue(double v1, double v2, double v3);


// Did not wrap:  double *GetMaskedOutputValue ();return this MaskedOutputValue 


  // int GetMaskedOutputValueLength ();return this MaskedOutputValueLength 
/// <summary>
/// <para>Set/Get the alpha blending value for the mask The input image is assumed to be at alpha = 1.0 and the mask image uses this alpha to blend using an over operator.</para>
/// </summary>
  int GetMaskedOutputValueLength();


  // void SetMaskAlpha (double );
/// <summary>
/// <para>Set/Get the alpha blending value for the mask The input image is assumed to be at alpha = 1.0 and the mask image uses this alpha to blend using an over operator.</para>
/// </summary>
  void SetMaskAlpha(double arg0);


  // double GetMaskAlphaMinValue ();
/// <summary>
/// <para>Set/Get the alpha blending value for the mask The input image is assumed to be at alpha = 1.0 and the mask image uses this alpha to blend using an over operator.</para>
/// </summary>
  double GetMaskAlphaMinValue();


  // double GetMaskAlphaMaxValue ();
/// <summary>
/// <para>Set/Get the alpha blending value for the mask The input image is assumed to be at alpha = 1.0 and the mask image uses this alpha to blend using an over operator.</para>
/// </summary>
  double GetMaskAlphaMaxValue();


  // double GetMaskAlpha ();
/// <summary>
/// <para>Set/Get the alpha blending value for the mask The input image is assumed to be at alpha = 1.0 and the mask image uses this alpha to blend using an over operator.</para>
/// </summary>
  double GetMaskAlpha();


  // void SetImageInput (vtkImageData *in);
/// <summary>
/// <para>Set the input to be masked.</para>
/// </summary>
  void SetImageInput(vtkImageData^ in);


  // void SetMaskInput (vtkImageData *in);
/// <summary>
/// <para>Set the mask to be used.</para>
/// </summary>
  void SetMaskInput(vtkImageData^ in);


  // void SetNotMask (int );
/// <summary>
/// <para>When Not Mask is on, the mask is passed through a boolean not before it is used to mask the image.  The effect is to pass the pixels where the input mask is zero, and replace the pixels where the input value is non zero.</para>
/// </summary>
  void SetNotMask(int arg0);


  // int GetNotMask ();
/// <summary>
/// <para>When Not Mask is on, the mask is passed through a boolean not before it is used to mask the image.  The effect is to pass the pixels where the input mask is zero, and replace the pixels where the input value is non zero.</para>
/// </summary>
  int GetNotMask();


  // void NotMaskOn ();
/// <summary>
/// <para>When Not Mask is on, the mask is passed through a boolean not before it is used to mask the image.  The effect is to pass the pixels where the input mask is zero, and replace the pixels where the input value is non zero.</para>
/// </summary>
  void NotMaskOn();


  // void NotMaskOff ();
/// <summary>
/// <para>When Not Mask is on, the mask is passed through a boolean not before it is used to mask the image.  The effect is to pass the pixels where the input mask is zero, and replace the pixels where the input value is non zero.</para>
/// </summary>
  void NotMaskOff();


  // virtual void SetInput1 (vtkDataObject *in);this SetInput in 
/// <summary>
/// <para>Set the two inputs to this filter</para>
/// </summary>
  void SetInput1(vtkDataObject^ in);


  // virtual void SetInput2 (vtkDataObject *in);this SetInput in 
  void SetInput2(vtkDataObject^ in);


// Did not wrap:  vtkImageMask ();


// Did not wrap:  ~vtkImageMask ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  vtkImageMask (const vtkImageMask &);


// Did not wrap:  void vtkImageMask 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMask(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMask(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMask();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMask();


};

} // end vtkImaging
