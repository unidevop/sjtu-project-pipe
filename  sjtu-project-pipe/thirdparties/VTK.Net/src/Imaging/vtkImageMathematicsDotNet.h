#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageMathematics : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageMathematics *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageMathematics *NewInstance ();
  vtkImageMathematics^ NewInstance();


  // vtkImageMathematics *SafeDownCast (vtkObject* o);
  static vtkImageMathematics^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOperation (int );
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperation(int arg0);


  // int GetOperation ();
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  int GetOperation();


  // void SetOperationToAdd ();this SetOperation VTK_ADD 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToAdd();


  // void SetOperationToSubtract ();this SetOperation VTK_SUBTRACT 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToSubtract();


  // void SetOperationToMultiply ();this SetOperation VTK_MULTIPLY 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToMultiply();


  // void SetOperationToDivide ();this SetOperation VTK_DIVIDE 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToDivide();


  // void SetOperationToConjugate ();this SetOperation VTK_CONJUGATE 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToConjugate();


  // void SetOperationToComplexMultiply ();this SetOperation VTK_COMPLEX_MULTIPLY 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToComplexMultiply();


  // void SetOperationToInvert ();this SetOperation VTK_INVERT 
  void SetOperationToInvert();


  // void SetOperationToSin ();this SetOperation VTK_SIN 
  void SetOperationToSin();


  // void SetOperationToCos ();this SetOperation VTK_COS 
  void SetOperationToCos();


  // void SetOperationToExp ();this SetOperation VTK_EXP 
  void SetOperationToExp();


  // void SetOperationToLog ();this SetOperation VTK_LOG 
  void SetOperationToLog();


  // void SetOperationToAbsoluteValue ();this SetOperation VTK_ABS 
  void SetOperationToAbsoluteValue();


  // void SetOperationToSquare ();this SetOperation VTK_SQR 
  void SetOperationToSquare();


  // void SetOperationToSquareRoot ();this SetOperation VTK_SQRT 
  void SetOperationToSquareRoot();


  // void SetOperationToMin ();this SetOperation VTK_MIN 
  void SetOperationToMin();


  // void SetOperationToMax ();this SetOperation VTK_MAX 
  void SetOperationToMax();


  // void SetOperationToATAN ();this SetOperation VTK_ATAN 
  void SetOperationToATAN();


  // void SetOperationToATAN2 ();this SetOperation VTK_ATAN2 
  void SetOperationToATAN2();


  // void SetOperationToMultiplyByK ();this SetOperation VTK_MULTIPLYBYK 
  void SetOperationToMultiplyByK();


  // void SetOperationToAddConstant ();this SetOperation VTK_ADDC 
  void SetOperationToAddConstant();


  // void SetOperationToReplaceCByK ();this SetOperation VTK_REPLACECBYK 
  void SetOperationToReplaceCByK();


  // void SetConstantK (double );
  void SetConstantK(double arg0);


  // double GetConstantK ();
  double GetConstantK();


  // void SetConstantC (double );
  void SetConstantC(double arg0);


  // double GetConstantC ();
  double GetConstantC();


  // void SetDivideByZeroToC (int );
  void SetDivideByZeroToC(int arg0);


  // int GetDivideByZeroToC ();
  int GetDivideByZeroToC();


  // void DivideByZeroToCOn ();
  void DivideByZeroToCOn();


  // void DivideByZeroToCOff ();
  void DivideByZeroToCOff();


  // virtual void SetInput1 (vtkDataObject *in);this SetInput in 
/// <summary>
/// <para>Set the two inputs to this filter</para>
/// </summary>
  void SetInput1(vtkDataObject^ in);


  // virtual void SetInput2 (vtkDataObject *in);this SetInput in 
  void SetInput2(vtkDataObject^ in);


// Did not wrap:  vtkImageMathematics ();


// Did not wrap:  ~vtkImageMathematics ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int extent[6], int threadId);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkImageMathematics (const vtkImageMathematics &);


// Did not wrap:  void vtkImageMathematics 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageMathematics(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageMathematics(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageMathematics();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageMathematics();


};

} // end vtkImaging
