#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageAppendComponents : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageAppendComponents *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageAppendComponents *NewInstance ();
  vtkImageAppendComponents^ NewInstance();


  // vtkImageAppendComponents *SafeDownCast (vtkObject* o);
  static vtkImageAppendComponents^ SafeDownCast(vtkObject^ o);


  // void SetInput (int num, vtkDataObject *input);
/// <summary>
/// <para>Set an Input of this filter.  This method is only for support of old-style pipeline connections.  When writing new code you should use vtkAlgorithm::AddInputConnection(0, data).</para>
/// </summary>
  void SetInput(int num, vtkDataObject^ input);


  // void SetInput (vtkDataObject *input);this SetInput input 
/// <summary>
/// <para>Set an Input of this filter.  This method is only for support of old-style pipeline connections.  When writing new code you should use vtkAlgorithm::AddInputConnection(0, data).</para>
/// </summary>
  void SetInput(vtkDataObject^ input);


  // vtkDataObject *GetInput (int num);
/// <summary>
/// <para>Get one input to this filter. This method is only for support of old-style pipeline connections.  When writing new code you should use vtkAlgorithm::GetInputConnection(0, num).</para>
/// </summary>
  vtkDataObject^ GetInput(int num);


  // vtkDataObject *GetInput ();return this GetInput 
/// <summary>
/// <para>Get one input to this filter. This method is only for support of old-style pipeline connections.  When writing new code you should use vtkAlgorithm::GetInputConnection(0, num).</para>
/// </summary>
  vtkDataObject^ GetInput();


  // int GetNumberOfInputs ();return this GetNumberOfInputConnections 
/// <summary>
/// <para>Get the number of inputs to this filter. This method is only for support of old-style pipeline connections.  When writing new code you should use vtkAlgorithm::GetNumberOfInputConnections(0).</para>
/// </summary>
  int GetNumberOfInputs();


// Did not wrap:  vtkImageAppendComponents ();


// Did not wrap:  ~vtkImageAppendComponents ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImageAppendComponents (const vtkImageAppendComponents &);


// Did not wrap:  void vtkImageAppendComponents 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageAppendComponents(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageAppendComponents(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageAppendComponents();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageAppendComponents();


};

} // end vtkImaging
