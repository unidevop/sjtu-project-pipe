#pragma once

// managed includes
#include "vtkAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkRectilinearGrid;

public ref class vtkRectilinearGridAlgorithm : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkRectilinearGridAlgorithm *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRectilinearGridAlgorithm *NewInstance ();
  vtkRectilinearGridAlgorithm^ NewInstance();


  // vtkRectilinearGridAlgorithm *SafeDownCast (vtkObject* o);
  static vtkRectilinearGridAlgorithm^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkRectilinearGrid *GetOutput ();
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkRectilinearGrid^ GetOutput();


  // vtkRectilinearGrid *GetOutput (int );
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  vtkRectilinearGrid^ GetOutput(int arg0);


  // virtual void SetOutput (vtkDataObject *d);
/// <summary>
/// <para>Get the output data object for a port on this algorithm.</para>
/// </summary>
  void SetOutput(vtkDataObject^ d);


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


  // vtkDataObject *GetInput ();
  vtkDataObject^ GetInput();


  // vtkDataObject *GetInput (int port);
  vtkDataObject^ GetInput(int port);


  // vtkRectilinearGrid *GetRectilinearGridInput (int port);
  vtkRectilinearGrid^ GetRectilinearGridInput(int port);


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


  // void AddInput (vtkDataObject *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(vtkDataObject^ arg0);


  // void AddInput (int , vtkDataObject *);
/// <summary>
/// <para>Add an input of this algorithm.  Note that these methods support old-style pipeline connections.  When writing new code you should use the more general vtkAlgorithm::AddInputConnection().  See SetInput() for details.</para>
/// </summary>
  void AddInput(int arg0, vtkDataObject^ arg1);


// Did not wrap:  vtkRectilinearGridAlgorithm ();


// Did not wrap:  ~vtkRectilinearGridAlgorithm ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual void ExecuteData (vtkDataObject *output);


// Did not wrap:  virtual void Execute ();


// Did not wrap:  virtual int FillOutputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkRectilinearGridAlgorithm (const vtkRectilinearGridAlgorithm &);


// Did not wrap:  void vtkRectilinearGridAlgorithm 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRectilinearGridAlgorithm(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRectilinearGridAlgorithm(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRectilinearGridAlgorithm();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRectilinearGridAlgorithm();


};

} // end vtkFiltering
