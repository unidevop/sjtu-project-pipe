#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCellDerivatives : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellDerivatives *NewInstance ();
  vtkCellDerivatives^ NewInstance();


  // vtkCellDerivatives *SafeDownCast (vtkObject* o);
  static vtkCellDerivatives^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCellDerivatives *New ();


  // void SetVectorMode (int );
/// <summary>
/// <para>Control how the filter works to generate vector cell data. You can choose to pass the input cell vectors, compute the gradient of the input scalars, or extract the vorticity of the computed vector gradient tensor. By default (VectorModeToComputeGradient), the filter will take the gradient of the input scalar data.</para>
/// </summary>
  void SetVectorMode(int arg0);


  // int GetVectorMode ();
/// <summary>
/// <para>Control how the filter works to generate vector cell data. You can choose to pass the input cell vectors, compute the gradient of the input scalars, or extract the vorticity of the computed vector gradient tensor. By default (VectorModeToComputeGradient), the filter will take the gradient of the input scalar data.</para>
/// </summary>
  int GetVectorMode();


  // void SetVectorModeToPassVectors ();this SetVectorMode VTK_VECTOR_MODE_PASS_VECTORS 
/// <summary>
/// <para>Control how the filter works to generate vector cell data. You can choose to pass the input cell vectors, compute the gradient of the input scalars, or extract the vorticity of the computed vector gradient tensor. By default (VectorModeToComputeGradient), the filter will take the gradient of the input scalar data.</para>
/// </summary>
  void SetVectorModeToPassVectors();


  // void SetVectorModeToComputeGradient ();this SetVectorMode VTK_VECTOR_MODE_COMPUTE_GRADIENT 
/// <summary>
/// <para>Control how the filter works to generate vector cell data. You can choose to pass the input cell vectors, compute the gradient of the input scalars, or extract the vorticity of the computed vector gradient tensor. By default (VectorModeToComputeGradient), the filter will take the gradient of the input scalar data.</para>
/// </summary>
  void SetVectorModeToComputeGradient();


  // void SetVectorModeToComputeVorticity ();this SetVectorMode VTK_VECTOR_MODE_COMPUTE_VORTICITY 
/// <summary>
/// <para>Control how the filter works to generate vector cell data. You can choose to pass the input cell vectors, compute the gradient of the input scalars, or extract the vorticity of the computed vector gradient tensor. By default (VectorModeToComputeGradient), the filter will take the gradient of the input scalar data.</para>
/// </summary>
  void SetVectorModeToComputeVorticity();


  // const char *GetVectorModeAsString ();
/// <summary>
/// <para>Control how the filter works to generate vector cell data. You can choose to pass the input cell vectors, compute the gradient of the input scalars, or extract the vorticity of the computed vector gradient tensor. By default (VectorModeToComputeGradient), the filter will take the gradient of the input scalar data.</para>
/// </summary>
  System::String^ GetVectorModeAsString();


  // void SetTensorMode (int );
/// <summary>
/// <para>Control how the filter works to generate tensor cell data. You can choose to pass the input cell tensors, compute the gradient of the input vectors, or compute the strain tensor of the vector gradient tensor. By default (TensorModeToComputeGradient), the filter will take the gradient of the vector data to construct a tensor.</para>
/// </summary>
  void SetTensorMode(int arg0);


  // int GetTensorMode ();
/// <summary>
/// <para>Control how the filter works to generate tensor cell data. You can choose to pass the input cell tensors, compute the gradient of the input vectors, or compute the strain tensor of the vector gradient tensor. By default (TensorModeToComputeGradient), the filter will take the gradient of the vector data to construct a tensor.</para>
/// </summary>
  int GetTensorMode();


  // void SetTensorModeToPassTensors ();this SetTensorMode VTK_TENSOR_MODE_PASS_TENSORS 
/// <summary>
/// <para>Control how the filter works to generate tensor cell data. You can choose to pass the input cell tensors, compute the gradient of the input vectors, or compute the strain tensor of the vector gradient tensor. By default (TensorModeToComputeGradient), the filter will take the gradient of the vector data to construct a tensor.</para>
/// </summary>
  void SetTensorModeToPassTensors();


  // void SetTensorModeToComputeGradient ();this SetTensorMode VTK_TENSOR_MODE_COMPUTE_GRADIENT 
/// <summary>
/// <para>Control how the filter works to generate tensor cell data. You can choose to pass the input cell tensors, compute the gradient of the input vectors, or compute the strain tensor of the vector gradient tensor. By default (TensorModeToComputeGradient), the filter will take the gradient of the vector data to construct a tensor.</para>
/// </summary>
  void SetTensorModeToComputeGradient();


  // void SetTensorModeToComputeStrain ();this SetTensorMode VTK_TENSOR_MODE_COMPUTE_STRAIN 
/// <summary>
/// <para>Control how the filter works to generate tensor cell data. You can choose to pass the input cell tensors, compute the gradient of the input vectors, or compute the strain tensor of the vector gradient tensor. By default (TensorModeToComputeGradient), the filter will take the gradient of the vector data to construct a tensor.</para>
/// </summary>
  void SetTensorModeToComputeStrain();


  // const char *GetTensorModeAsString ();
/// <summary>
/// <para>Control how the filter works to generate tensor cell data. You can choose to pass the input cell tensors, compute the gradient of the input vectors, or compute the strain tensor of the vector gradient tensor. By default (TensorModeToComputeGradient), the filter will take the gradient of the vector data to construct a tensor.</para>
/// </summary>
  System::String^ GetTensorModeAsString();


// Did not wrap:  vtkCellDerivatives ();


// Did not wrap:  ~vtkCellDerivatives ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkCellDerivatives (const vtkCellDerivatives &);


// Did not wrap:  void vtkCellDerivatives 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellDerivatives(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellDerivatives(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellDerivatives();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellDerivatives();


};

} // end vtkGraphics
