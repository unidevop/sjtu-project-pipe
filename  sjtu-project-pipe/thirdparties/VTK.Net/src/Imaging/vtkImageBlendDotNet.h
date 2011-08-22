#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageStencilData;

public ref class vtkImageBlend : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageBlend *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageBlend *NewInstance ();
  vtkImageBlend^ NewInstance();


  // vtkImageBlend *SafeDownCast (vtkObject* o);
  static vtkImageBlend^ SafeDownCast(vtkObject^ o);


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


  // void SetOpacity (int idx, double opacity);
/// <summary>
/// <para>Set the opacity of an input image: the alpha values of the image are multiplied by the opacity.  The opacity of image idx=0 is ignored.</para>
/// </summary>
  void SetOpacity(int idx, double opacity);


  // double GetOpacity (int idx);
/// <summary>
/// <para>Set the opacity of an input image: the alpha values of the image are multiplied by the opacity.  The opacity of image idx=0 is ignored.</para>
/// </summary>
  double GetOpacity(int idx);


  // void SetStencil (vtkImageStencilData *stencil);
/// <summary>
/// <para>Set a stencil to apply when blending the data.</para>
/// </summary>
  void SetStencil(vtkImageStencilData^ stencil);


  // vtkImageStencilData *GetStencil ();
/// <summary>
/// <para>Set a stencil to apply when blending the data.</para>
/// </summary>
  vtkImageStencilData^ GetStencil();


  // void SetBlendMode (int );
/// <summary>
/// <para>Set the blend mode</para>
/// </summary>
  void SetBlendMode(int arg0);


  // int GetBlendModeMinValue ();
/// <summary>
/// <para>Set the blend mode</para>
/// </summary>
  int GetBlendModeMinValue();


  // int GetBlendModeMaxValue ();
/// <summary>
/// <para>Set the blend mode</para>
/// </summary>
  int GetBlendModeMaxValue();


  // int GetBlendMode ();
/// <summary>
/// <para>Set the blend mode</para>
/// </summary>
  int GetBlendMode();


  // void SetBlendModeToNormal ();this SetBlendMode VTK_IMAGE_BLEND_MODE_NORMAL 
/// <summary>
/// <para>Set the blend mode</para>
/// </summary>
  void SetBlendModeToNormal();


  // void SetBlendModeToCompound ();this SetBlendMode VTK_IMAGE_BLEND_MODE_COMPOUND 
/// <summary>
/// <para>Set the blend mode</para>
/// </summary>
  void SetBlendModeToCompound();


  // const char *GetBlendModeAsString (void );
/// <summary>
/// <para>Set the blend mode</para>
/// </summary>
  System::String^ GetBlendModeAsString();


  // void SetCompoundThreshold (double );
/// <summary>
/// <para>Specify a threshold in compound mode. Pixels with opacity*alpha less or equal the threshold are ignored.</para>
/// </summary>
  void SetCompoundThreshold(double arg0);


  // double GetCompoundThreshold ();
/// <summary>
/// <para>Specify a threshold in compound mode. Pixels with opacity*alpha less or equal the threshold are ignored.</para>
/// </summary>
  double GetCompoundThreshold();


// Did not wrap:  vtkImageBlend ();


// Did not wrap:  ~vtkImageBlend ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void InternalComputeInputUpdateExtent (int inExt[6], int outExt[6], int inWExtent[6]);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkImageBlend (const vtkImageBlend &);


// Did not wrap:  void vtkImageBlend 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageBlend(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageBlend(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageBlend();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageBlend();


};

} // end vtkImaging
