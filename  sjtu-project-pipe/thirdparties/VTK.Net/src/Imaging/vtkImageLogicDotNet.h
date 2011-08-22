#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageLogic : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageLogic *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageLogic *NewInstance ();
  vtkImageLogic^ NewInstance();


  // vtkImageLogic *SafeDownCast (vtkObject* o);
  static vtkImageLogic^ SafeDownCast(vtkObject^ o);


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


  // void SetOperationToAnd ();this SetOperation VTK_AND 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToAnd();


  // void SetOperationToOr ();this SetOperation VTK_OR 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToOr();


  // void SetOperationToXor ();this SetOperation VTK_XOR 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToXor();


  // void SetOperationToNand ();this SetOperation VTK_NAND 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToNand();


  // void SetOperationToNor ();this SetOperation VTK_NOR 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToNor();


  // void SetOperationToNot ();this SetOperation VTK_NOT 
/// <summary>
/// <para>Set/Get the Operation to perform.</para>
/// </summary>
  void SetOperationToNot();


  // void SetOutputTrueValue (double );
/// <summary>
/// <para>Set the value to use for true in the output.</para>
/// </summary>
  void SetOutputTrueValue(double arg0);


  // double GetOutputTrueValue ();
/// <summary>
/// <para>Set the value to use for true in the output.</para>
/// </summary>
  double GetOutputTrueValue();


  // virtual void SetInput1 (vtkDataObject *input);this SetInput input 
/// <summary>
/// <para>Set the Input1 of this filter. </para>
/// </summary>
  void SetInput1(vtkDataObject^ input);


  // virtual void SetInput2 (vtkDataObject *input);this SetInput input 
/// <summary>
/// <para>Set the Input2 of this filter.</para>
/// </summary>
  void SetInput2(vtkDataObject^ input);


// Did not wrap:  vtkImageLogic ();


// Did not wrap:  ~vtkImageLogic ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageLogic (const vtkImageLogic &);


// Did not wrap:  void vtkImageLogic 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageLogic(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageLogic(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageLogic();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageLogic();


};

} // end vtkImaging
