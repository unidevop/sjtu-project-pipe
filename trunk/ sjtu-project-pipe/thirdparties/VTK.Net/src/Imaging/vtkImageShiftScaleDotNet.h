#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageShiftScale : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageShiftScale *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageShiftScale *NewInstance ();
  vtkImageShiftScale^ NewInstance();


  // vtkImageShiftScale *SafeDownCast (vtkObject* o);
  static vtkImageShiftScale^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetShift (double );
/// <summary>
/// <para>Set/Get the shift value.</para>
/// </summary>
  void SetShift(double arg0);


  // double GetShift ();
/// <summary>
/// <para>Set/Get the shift value.</para>
/// </summary>
  double GetShift();


  // void SetScale (double );
/// <summary>
/// <para>Set/Get the scale value.</para>
/// </summary>
  void SetScale(double arg0);


  // double GetScale ();
/// <summary>
/// <para>Set/Get the scale value.</para>
/// </summary>
  double GetScale();


  // void SetOutputScalarType (int );
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarType(int arg0);


  // int GetOutputScalarType ();
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  int GetOutputScalarType();


  // void SetOutputScalarTypeToDouble ();this SetOutputScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToDouble();


  // void SetOutputScalarTypeToFloat ();this SetOutputScalarType VTK_FLOAT 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToFloat();


  // void SetOutputScalarTypeToLong ();this SetOutputScalarType VTK_LONG 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToLong();


  // void SetOutputScalarTypeToUnsignedLong ();this SetOutputScalarType VTK_UNSIGNED_LONG 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedLong();


  // void SetOutputScalarTypeToInt ();this SetOutputScalarType VTK_INT 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToInt();


  // void SetOutputScalarTypeToUnsignedInt ();this SetOutputScalarType VTK_UNSIGNED_INT 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedInt();


  // void SetOutputScalarTypeToShort ();this SetOutputScalarType VTK_SHORT 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToShort();


  // void SetOutputScalarTypeToUnsignedShort ();this SetOutputScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedShort();


  // void SetOutputScalarTypeToChar ();this SetOutputScalarType VTK_CHAR 
/// <summary>
/// <para>Set the desired output scalar type. The result of the shift  and scale operations is cast to the type specified.</para>
/// </summary>
  void SetOutputScalarTypeToChar();


  // void SetOutputScalarTypeToUnsignedChar ();this SetOutputScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default, ClampOverflow is off.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedChar();


  // void SetClampOverflow (int );
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default, ClampOverflow is off.</para>
/// </summary>
  void SetClampOverflow(int arg0);


  // int GetClampOverflow ();
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default, ClampOverflow is off.</para>
/// </summary>
  int GetClampOverflow();


  // void ClampOverflowOn ();
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default, ClampOverflow is off.</para>
/// </summary>
  void ClampOverflowOn();


  // void ClampOverflowOff ();
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default, ClampOverflow is off.</para>
/// </summary>
  void ClampOverflowOff();


// Did not wrap:  vtkImageShiftScale ();


// Did not wrap:  ~vtkImageShiftScale ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *, vtkImageData *inData, vtkImageData *outData, int outExt[6], int threadId);


// Did not wrap:  vtkImageShiftScale (const vtkImageShiftScale &);


// Did not wrap:  void vtkImageShiftScale 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageShiftScale(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageShiftScale(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageShiftScale();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageShiftScale();


};

} // end vtkImaging
