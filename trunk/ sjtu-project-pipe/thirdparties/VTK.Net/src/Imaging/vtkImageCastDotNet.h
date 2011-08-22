#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageCast : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageCast *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageCast *NewInstance ();
  vtkImageCast^ NewInstance();


  // vtkImageCast *SafeDownCast (vtkObject* o);
  static vtkImageCast^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOutputScalarType (int );
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarType(int arg0);


  // int GetOutputScalarType ();
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  int GetOutputScalarType();


  // void SetOutputScalarTypeToFloat ();this SetOutputScalarType VTK_FLOAT 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToFloat();


  // void SetOutputScalarTypeToDouble ();this SetOutputScalarType VTK_DOUBLE 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToDouble();


  // void SetOutputScalarTypeToInt ();this SetOutputScalarType VTK_INT 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToInt();


  // void SetOutputScalarTypeToUnsignedInt ();this SetOutputScalarType VTK_UNSIGNED_INT 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedInt();


  // void SetOutputScalarTypeToLong ();this SetOutputScalarType VTK_LONG 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToLong();


  // void SetOutputScalarTypeToUnsignedLong ();this SetOutputScalarType VTK_UNSIGNED_LONG 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedLong();


  // void SetOutputScalarTypeToShort ();this SetOutputScalarType VTK_SHORT 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToShort();


  // void SetOutputScalarTypeToUnsignedShort ();this SetOutputScalarType VTK_UNSIGNED_SHORT 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedShort();


  // void SetOutputScalarTypeToUnsignedChar ();this SetOutputScalarType VTK_UNSIGNED_CHAR 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToUnsignedChar();


  // void SetOutputScalarTypeToChar ();this SetOutputScalarType VTK_CHAR 
/// <summary>
/// <para>Set the desired output scalar type to cast to.</para>
/// </summary>
  void SetOutputScalarTypeToChar();


  // void SetClampOverflow (int );
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default ClampOverflow is off.</para>
/// </summary>
  void SetClampOverflow(int arg0);


  // int GetClampOverflow ();
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default ClampOverflow is off.</para>
/// </summary>
  int GetClampOverflow();


  // void ClampOverflowOn ();
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default ClampOverflow is off.</para>
/// </summary>
  void ClampOverflowOn();


  // void ClampOverflowOff ();
/// <summary>
/// <para>When the ClampOverflow flag is on, the data is thresholded so that the output value does not exceed the max or min of the data type. By default ClampOverflow is off.</para>
/// </summary>
  void ClampOverflowOff();


// Did not wrap:  vtkImageCast ();


// Did not wrap:  ~vtkImageCast ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageCast (const vtkImageCast &);


// Did not wrap:  void vtkImageCast 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageCast(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageCast(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageCast();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageCast();


};

} // end vtkImaging
