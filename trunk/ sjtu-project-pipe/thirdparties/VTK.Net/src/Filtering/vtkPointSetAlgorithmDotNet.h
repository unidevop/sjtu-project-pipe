#pragma once

// managed includes
#include "vtkAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkPointSet;
ref class vtkPolyData;
ref class vtkStructuredGrid;
ref class vtkUnstructuredGrid;

public ref class vtkPointSetAlgorithm : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkPointSetAlgorithm *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointSetAlgorithm *NewInstance ();
  vtkPointSetAlgorithm^ NewInstance();


  // vtkPointSetAlgorithm *SafeDownCast (vtkObject* o);
  static vtkPointSetAlgorithm^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkPointSet *GetOutput ();
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkPointSet^ GetOutput();


  // vtkPointSet *GetOutput (int );
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkPointSet^ GetOutput(int arg0);


  // vtkPolyData *GetPolyDataOutput ();
/// <summary>
/// <para>Get the output as vtkPolyData.</para>
/// </summary>
  vtkPolyData^ GetPolyDataOutput();


  // vtkStructuredGrid *GetStructuredGridOutput ();
/// <summary>
/// <para>Get the output as vtkStructuredGrid.</para>
/// </summary>
  vtkStructuredGrid^ GetStructuredGridOutput();


  // vtkUnstructuredGrid *GetUnstructuredGridOutput ();
/// <summary>
/// <para>Get the output as vtkUnstructuredGrid.</para>
/// </summary>
  vtkUnstructuredGrid^ GetUnstructuredGridOutput();


  // void SetInput (vtkDataObject *);
/// <summary>
/// <para>Set an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline. Note that these methods support old-style pipeline connections. When writing new code you should use the more general vtkAlgorithm::SetInputConnection().  These methods transform the input index to the input port index, not an index of a connection within a single port.</para>
/// </summary>
  void SetInput(vtkDataObject^ arg0);


  // void SetInput (int , vtkDataObject *);
/// <summary>
/// <para>Set an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline. Note that these methods support old-style pipeline connections. When writing new code you should use the more general vtkAlgorithm::SetInputConnection().  These methods transform the input index to the input port index, not an index of a connection within a single port.</para>
/// </summary>
  void SetInput(int arg0, vtkDataObject^ arg1);


  // void SetInput (vtkPointSet *);
/// <summary>
/// <para>Set an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline. Note that these methods support old-style pipeline connections. When writing new code you should use the more general vtkAlgorithm::SetInputConnection().  These methods transform the input index to the input port index, not an index of a connection within a single port.</para>
/// </summary>
  void SetInput(vtkPointSet^ arg0);


  // void SetInput (int , vtkPointSet *);
/// <summary>
/// <para>Set an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline. Note that these methods support old-style pipeline connections. When writing new code you should use the more general vtkAlgorithm::SetInputConnection().  These methods transform the input index to the input port index, not an index of a connection within a single port.</para>
/// </summary>
  void SetInput(int arg0, vtkPointSet^ arg1);


  // void AddInput (vtkDataObject *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(vtkDataObject^ arg0);


  // void AddInput (vtkPointSet *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(vtkPointSet^ arg0);


  // void AddInput (int , vtkPointSet *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(int arg0, vtkPointSet^ arg1);


  // void AddInput (int , vtkDataObject *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(int arg0, vtkDataObject^ arg1);


  // vtkDataObject *GetInput ();
  vtkDataObject^ GetInput();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkPointSetAlgorithm ();


// Did not wrap:  ~vtkPointSetAlgorithm ();


// Did not wrap:  virtual int RequestDataObject (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int ExecuteInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int ComputeInputUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int FillOutputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkPointSetAlgorithm (const vtkPointSetAlgorithm &);


// Did not wrap:  void vtkPointSetAlgorithm 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointSetAlgorithm(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointSetAlgorithm(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointSetAlgorithm();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointSetAlgorithm();


};

} // end vtkFiltering
