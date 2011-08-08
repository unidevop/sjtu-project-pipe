#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageButterworthHighPass : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageButterworthHighPass *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageButterworthHighPass *NewInstance ();
  vtkImageButterworthHighPass^ NewInstance();


  // vtkImageButterworthHighPass *SafeDownCast (vtkObject* o);
  static vtkImageButterworthHighPass^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetCutOff (double , double , double );
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  void SetCutOff(double arg0, double arg1, double arg2);


  // void SetCutOff (double  a[3]);
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  void SetCutOff(array<double>^ a);


  // void SetCutOff (double v);this SetCutOff v v v 
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  void SetCutOff(double v);


  // void SetXCutOff (double v);
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  void SetXCutOff(double v);


  // void SetYCutOff (double v);
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  void SetYCutOff(double v);


  // void SetZCutOff (double v);
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  void SetZCutOff(double v);


  // double  *GetCutOff ();
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  array<double>^ GetCutOff();


  // double GetXCutOff ();return this CutOff 
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  double GetXCutOff();


  // double GetYCutOff ();return this CutOff 
/// <summary>
/// <para>Set/Get the cutoff frequency for each axis. The values are specified in the order X, Y, Z, Time. Units: Cycles per world unit (as defined by the data spacing).</para>
/// </summary>
  double GetYCutOff();


  // double GetZCutOff ();return this CutOff 
/// <summary>
/// <para>The order determines sharpness of the cutoff curve.</para>
/// </summary>
  double GetZCutOff();


  // void SetOrder (int );
/// <summary>
/// <para>The order determines sharpness of the cutoff curve.</para>
/// </summary>
  void SetOrder(int arg0);


  // int GetOrder ();
/// <summary>
/// <para>The order determines sharpness of the cutoff curve.</para>
/// </summary>
  int GetOrder();


// Did not wrap:  vtkImageButterworthHighPass ();


// Did not wrap:  ~vtkImageButterworthHighPass ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int outExt[6], int id);


// Did not wrap:  vtkImageButterworthHighPass (const vtkImageButterworthHighPass &);


// Did not wrap:  void vtkImageButterworthHighPass 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageButterworthHighPass(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageButterworthHighPass(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageButterworthHighPass();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageButterworthHighPass();


};

} // end vtkImaging
