#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageThreshold : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageThreshold *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageThreshold *NewInstance ();
  vtkImageThreshold^ NewInstance();


  // vtkImageThreshold *SafeDownCast (vtkObject* o);
  static vtkImageThreshold^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ThresholdByUpper (double thresh);
/// <summary>
/// <para>The values greater than or equal to the value match.</para>
/// </summary>
  void ThresholdByUpper(double thresh);


  // void ThresholdByLower (double thresh);
/// <summary>
/// <para>The values less than or equal to the value match.</para>
/// </summary>
  void ThresholdByLower(double thresh);


  // void ThresholdBetween (double lower, double upper);
/// <summary>
/// <para>The values in a range (inclusive) match</para>
/// </summary>
  void ThresholdBetween(double lower, double upper);


  // void SetReplaceIn (int );
/// <summary>
/// <para>Determines whether to replace the pixel in range with InValue</para>
/// </summary>
  void SetReplaceIn(int arg0);


  // int GetReplaceIn ();
/// <summary>
/// <para>Determines whether to replace the pixel in range with InValue</para>
/// </summary>
  int GetReplaceIn();


  // void ReplaceInOn ();
/// <summary>
/// <para>Determines whether to replace the pixel in range with InValue</para>
/// </summary>
  void ReplaceInOn();


  // void ReplaceInOff ();
/// <summary>
/// <para>Determines whether to replace the pixel in range with InValue</para>
/// </summary>
  void ReplaceInOff();


  // void SetInValue (double val);
/// <summary>
/// <para>Replace the in range pixels with this value.</para>
/// </summary>
  void SetInValue(double val);


  // double GetInValue ();
/// <summary>
/// <para>Replace the in range pixels with this value.</para>
/// </summary>
  double GetInValue();


  // void SetReplaceOut (int );
/// <summary>
/// <para>Determines whether to replace the pixel out of range with OutValue</para>
/// </summary>
  void SetReplaceOut(int arg0);


  // int GetReplaceOut ();
/// <summary>
/// <para>Determines whether to replace the pixel out of range with OutValue</para>
/// </summary>
  int GetReplaceOut();


  // void ReplaceOutOn ();
/// <summary>
/// <para>Determines whether to replace the pixel out of range with OutValue</para>
/// </summary>
  void ReplaceOutOn();


  // void ReplaceOutOff ();
/// <summary>
/// <para>Determines whether to replace the pixel out of range with OutValue</para>
/// </summary>
  void ReplaceOutOff();


  // void SetOutValue (double val);
/// <summary>
/// <para>Replace the in range pixels with this value.</para>
/// </summary>
  void SetOutValue(double val);


  // double GetOutValue ();
/// <summary>
/// <para>Replace the in range pixels with this value.</para>
/// </summary>
  double GetOutValue();


  // double GetUpperThreshold ();
/// <summary>
/// <para>Get the Upper and Lower thresholds.</para>
/// </summary>
  double GetUpperThreshold();


  // double GetLowerThreshold ();
/// <summary>
/// <para>Get the Upper and Lower thresholds.</para>
/// </summary>
  double GetLowerThreshold();


  // void SetOutputScalarType (int );
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarType(int arg0);


  // int GetOutputScalarType ();
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  int GetOutputScalarType();


  // void SetOutputScalarTypeToDouble ();this SetOutputScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToDouble();


  // void SetOutputScalarTypeToFloat ();this SetOutputScalarType VTK_FLOAT 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToFloat();


  // void SetOutputScalarTypeToLong ();this SetOutputScalarType VTK_LONG 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToLong();


  // void SetOutputScalarTypeToUnsignedLong ();this SetOutputScalarType VTK_UNSIGNED_LONG 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedLong();


  // void SetOutputScalarTypeToInt ();this SetOutputScalarType VTK_INT 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToInt();


  // void SetOutputScalarTypeToUnsignedInt ();this SetOutputScalarType VTK_UNSIGNED_INT 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedInt();


  // void SetOutputScalarTypeToShort ();this SetOutputScalarType VTK_SHORT 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToShort();


  // void SetOutputScalarTypeToUnsignedShort ();this SetOutputScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedShort();


  // void SetOutputScalarTypeToChar ();this SetOutputScalarType VTK_CHAR 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToChar();


  // void SetOutputScalarTypeToSignedChar ();this SetOutputScalarType VTK_SIGNED_CHAR 
/// <summary>
/// <para>Set the desired output scalar type to cast to</para>
/// </summary>
  void SetOutputScalarTypeToSignedChar();


  // void SetOutputScalarTypeToUnsignedChar ();this SetOutputScalarType VTK_UNSIGNED_CHAR 
  void SetOutputScalarTypeToUnsignedChar();


// Did not wrap:  vtkImageThreshold ();


// Did not wrap:  ~vtkImageThreshold ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int id);


// Did not wrap:  vtkImageThreshold (const vtkImageThreshold &);


// Did not wrap:  void vtkImageThreshold 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageThreshold(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageThreshold(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageThreshold();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageThreshold();


};

} // end vtkImaging
