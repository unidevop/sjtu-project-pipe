#pragma once

// managed includes
#include "vtkAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAlgorithmOutput;

public ref class vtkProcessObject : public vtkAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProcessObject *NewInstance ();
  vtkProcessObject^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkDataObject *GetInputs ();


  // int GetNumberOfInputs ();
/// <summary>
/// <para>Return an array with all the inputs of this process object. This is useful for tracing back in the pipeline to construct graphs etc.</para>
/// </summary>
  int GetNumberOfInputs();


  // void SqueezeInputArray ();
/// <summary>
/// <para>This method will rearrange the input array so that all NULL entries  are removed.</para>
/// </summary>
  void SqueezeInputArray();


  // void RemoveAllInputs ();
/// <summary>
/// <para>Remove all the input data.</para>
/// </summary>
  void RemoveAllInputs();


  // virtual void SetInputConnection (vtkAlgorithmOutput *input);this vtkAlgorithm SetInputConnection input 
/// <summary>
/// <para>Reimplemented from vtkAlgorithm to maintain backward compatibility for vtkProcessObject.</para>
/// </summary>
  void SetInputConnection(vtkAlgorithmOutput^ input);


  // virtual void SetInputConnection (int port, vtkAlgorithmOutput *input);
/// <summary>
/// <para>Reimplemented from vtkAlgorithm to maintain backward compatibility for vtkProcessObject.</para>
/// </summary>
  void SetInputConnection(int port, vtkAlgorithmOutput^ input);


  // virtual void AddInputConnection (int port, vtkAlgorithmOutput *input);
/// <summary>
/// <para>Reimplemented from vtkAlgorithm to maintain backward compatibility for vtkProcessObject.</para>
/// </summary>
  void AddInputConnection(int port, vtkAlgorithmOutput^ input);


  // virtual void AddInputConnection (vtkAlgorithmOutput *input);this AddInputConnection input 
/// <summary>
/// <para>Reimplemented from vtkAlgorithm to maintain backward compatibility for vtkProcessObject.</para>
/// </summary>
  void AddInputConnection(vtkAlgorithmOutput^ input);


  // virtual void RemoveInputConnection (int port, vtkAlgorithmOutput *input);
/// <summary>
/// <para>Reimplemented from vtkAlgorithm to maintain backward compatibility for vtkProcessObject.</para>
/// </summary>
  void RemoveInputConnection(int port, vtkAlgorithmOutput^ input);


  // virtual void SetNthInputConnection (int port, int index, vtkAlgorithmOutput *input);
/// <summary>
/// <para>Reimplemented from vtkAlgorithm to maintain backward compatibility for vtkProcessObject.</para>
/// </summary>
  void SetNthInputConnection(int port, int index, vtkAlgorithmOutput^ input);


  // virtual void SetNumberOfInputConnections (int port, int n);
/// <summary>
/// <para>Reimplemented from vtkAlgorithm to maintain backward compatibility for vtkProcessObject.</para>
/// </summary>
  void SetNumberOfInputConnections(int port, int n);


// Did not wrap:  vtkProcessObject ();


// Did not wrap:  ~vtkProcessObject ();


// Did not wrap:  void SetNumberOfInputs (int num);


// Did not wrap:  virtual void SetNthInput (int num, vtkDataObject *input);


// Did not wrap:  virtual void AddInput (vtkDataObject *input);


// Did not wrap:  virtual void RemoveInput (vtkDataObject *input);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  void AddInputInternal (vtkDataObject *input);


// Did not wrap:  void RemoveInputInternal (vtkDataObject *input);


// Did not wrap:  void SetupInputs ();


// Did not wrap:  vtkProcessObject (const vtkProcessObject &);


// Did not wrap:  void vtkProcessObject 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProcessObject(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProcessObject(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProcessObject();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProcessObject();


};

} // end vtkFiltering
