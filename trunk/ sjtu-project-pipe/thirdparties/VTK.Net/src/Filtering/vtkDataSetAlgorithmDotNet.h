#pragma once

// managed includes
#include "vtkAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkDataSet;
ref class vtkImageData;
ref class vtkPolyData;
ref class vtkRectilinearGrid;
ref class vtkStructuredGrid;
ref class vtkStructuredPoints;
ref class vtkUnstructuredGrid;

public ref class vtkDataSetAlgorithm : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkDataSetAlgorithm *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetAlgorithm *NewInstance ();
  vtkDataSetAlgorithm^ NewInstance();


  // vtkDataSetAlgorithm *SafeDownCast (vtkObject* o);
  static vtkDataSetAlgorithm^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkDataSet *GetOutput ();
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkDataSet^ GetOutput();


  // vtkDataSet *GetOutput (int );
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkDataSet^ GetOutput(int arg0);


  // vtkDataObject *GetInput ();
/// <summary>
/// <para>Get the input data object. This method is not recommended for use, but lots of old style filters use it.</para>
/// </summary>
  vtkDataObject^ GetInput();


  // vtkPolyData *GetPolyDataOutput ();
/// <summary>
/// <para>Get the output as vtkPolyData.</para>
/// </summary>
  vtkPolyData^ GetPolyDataOutput();


  // vtkStructuredPoints *GetStructuredPointsOutput ();
/// <summary>
/// <para>Get the output as vtkStructuredPoints.</para>
/// </summary>
  vtkStructuredPoints^ GetStructuredPointsOutput();


  // vtkImageData *GetImageDataOutput ();
/// <summary>
/// <para>Get the output as vtkStructuredPoints.</para>
/// </summary>
  vtkImageData^ GetImageDataOutput();


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


  // vtkRectilinearGrid *GetRectilinearGridOutput ();
/// <summary>
/// <para>Get the output as vtkRectilinearGrid. </para>
/// </summary>
  vtkRectilinearGrid^ GetRectilinearGridOutput();


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


  // void SetInput (vtkDataSet *);
/// <summary>
/// <para>Set an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline. Note that these methods support old-style pipeline connections. When writing new code you should use the more general vtkAlgorithm::SetInputConnection().  These methods transform the input index to the input port index, not an index of a connection within a single port.</para>
/// </summary>
  void SetInput(vtkDataSet^ arg0);


  // void SetInput (int , vtkDataSet *);
/// <summary>
/// <para>Set an input of this algorithm. You should not override these methods because they are not the only way to connect a pipeline. Note that these methods support old-style pipeline connections. When writing new code you should use the more general vtkAlgorithm::SetInputConnection().  These methods transform the input index to the input port index, not an index of a connection within a single port.</para>
/// </summary>
  void SetInput(int arg0, vtkDataSet^ arg1);


  // void AddInput (vtkDataObject *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(vtkDataObject^ arg0);


  // void AddInput (vtkDataSet *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(vtkDataSet^ arg0);


  // void AddInput (int , vtkDataSet *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(int arg0, vtkDataSet^ arg1);


  // void AddInput (int , vtkDataObject *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(int arg0, vtkDataObject^ arg1);


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkDataSetAlgorithm ();


// Did not wrap:  ~vtkDataSetAlgorithm ();


// Did not wrap:  virtual int RequestDataObject (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int FillOutputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkDataObject *GetInput (int port);


// Did not wrap:  vtkDataSetAlgorithm (const vtkDataSetAlgorithm &);


// Did not wrap:  void vtkDataSetAlgorithm 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetAlgorithm(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetAlgorithm(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetAlgorithm();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetAlgorithm();


};

} // end vtkFiltering
