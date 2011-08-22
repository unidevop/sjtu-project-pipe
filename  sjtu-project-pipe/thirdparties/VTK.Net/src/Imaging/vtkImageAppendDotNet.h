#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageAppend : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageAppend *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageAppend *NewInstance ();
  vtkImageAppend^ NewInstance();


  // vtkImageAppend *SafeDownCast (vtkObject* o);
  static vtkImageAppend^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


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


  // void SetAppendAxis (int );
/// <summary>
/// <para>This axis is expanded to hold the multiple images.   The default AppendAxis is the X axis. If you want to create a volue from a series of XY images, then you should set the AppendAxis to 2 (Z axis).</para>
/// </summary>
  void SetAppendAxis(int arg0);


  // int GetAppendAxis ();
/// <summary>
/// <para>This axis is expanded to hold the multiple images.   The default AppendAxis is the X axis. If you want to create a volue from a series of XY images, then you should set the AppendAxis to 2 (Z axis).</para>
/// </summary>
  int GetAppendAxis();


  // void SetPreserveExtents (int );
/// <summary>
/// <para>By default &quot;PreserveExtents&quot; is off and the append axis is used.   When &quot;PreseveExtents&quot; is on, the extent of the inputs is used to  place the image in the output.  The whole extent of the output is  the union of the input whole extents.  Any portion of the  output not covered by the inputs is set to zero.  The origin and  spacing is taken from the first input.</para>
/// </summary>
  void SetPreserveExtents(int arg0);


  // int GetPreserveExtents ();
/// <summary>
/// <para>By default &quot;PreserveExtents&quot; is off and the append axis is used.   When &quot;PreseveExtents&quot; is on, the extent of the inputs is used to  place the image in the output.  The whole extent of the output is  the union of the input whole extents.  Any portion of the  output not covered by the inputs is set to zero.  The origin and  spacing is taken from the first input.</para>
/// </summary>
  int GetPreserveExtents();


  // void PreserveExtentsOn ();
/// <summary>
/// <para>By default &quot;PreserveExtents&quot; is off and the append axis is used.   When &quot;PreseveExtents&quot; is on, the extent of the inputs is used to  place the image in the output.  The whole extent of the output is  the union of the input whole extents.  Any portion of the  output not covered by the inputs is set to zero.  The origin and  spacing is taken from the first input.</para>
/// </summary>
  void PreserveExtentsOn();


  // void PreserveExtentsOff ();
/// <summary>
/// <para>By default &quot;PreserveExtents&quot; is off and the append axis is used.   When &quot;PreseveExtents&quot; is on, the extent of the inputs is used to  place the image in the output.  The whole extent of the output is  the union of the input whole extents.  Any portion of the  output not covered by the inputs is set to zero.  The origin and  spacing is taken from the first input.</para>
/// </summary>
  void PreserveExtentsOff();


// Did not wrap:  vtkImageAppend ();


// Did not wrap:  ~vtkImageAppend ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  void InitOutput (int outExt[6], vtkImageData *outData);


// Did not wrap:  void InternalComputeInputUpdateExtent (int *inExt, int *outExt, int *inWextent, int whichInput);


// Did not wrap:  vtkImageAppend (const vtkImageAppend &);


// Did not wrap:  void vtkImageAppend 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageAppend(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageAppend(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageAppend();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageAppend();


};

} // end vtkImaging
