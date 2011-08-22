#pragma once

// managed includes
#include "vtkProcessObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkExecutive;

public ref class vtkSource : public vtkProcessObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSource *NewInstance ();
  vtkSource^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Update ();
/// <summary>
/// <para>Bring object up-to-date before execution. Update() checks modified time against last execution time, and re-executes object if necessary.</para>
/// </summary>
  void Update();


  // virtual void UpdateWholeExtent ();
/// <summary>
/// <para>Like update, but make sure the update extent is the whole extent in the output.</para>
/// </summary>
  void UpdateWholeExtent();


  // virtual void UpdateInformation ();
/// <summary>
/// <para>Updates any global information about the data  (like spacing for images)</para>
/// </summary>
  void UpdateInformation();


  // virtual void PropagateUpdateExtent (vtkDataObject *output);
/// <summary>
/// </summary>
  void PropagateUpdateExtent(vtkDataObject^ output);


  // virtual void TriggerAsynchronousUpdate ();
/// <summary>
/// </summary>
  void TriggerAsynchronousUpdate();


  // virtual void UpdateData (vtkDataObject *output);
/// <summary>
/// </summary>
  void UpdateData(vtkDataObject^ output);


  // virtual void ComputeInputUpdateExtents (vtkDataObject *output);
/// <summary>
/// <para>What is the input update extent that is required to produce the desired output? By default, the whole input is always required but this is overridden in many subclasses. </para>
/// </summary>
  void ComputeInputUpdateExtents(vtkDataObject^ output);


  // virtual void SetReleaseDataFlag (int );
/// <summary>
/// <para>Turn on/off flag to control whether this object's data is released after being used by a source.</para>
/// </summary>
  void SetReleaseDataFlag(int arg0);


  // virtual int GetReleaseDataFlag ();
/// <summary>
/// <para>Turn on/off flag to control whether this object's data is released after being used by a source.</para>
/// </summary>
  int GetReleaseDataFlag();


  // void ReleaseDataFlagOn ();
/// <summary>
/// <para>Turn on/off flag to control whether this object's data is released after being used by a source.</para>
/// </summary>
  void ReleaseDataFlagOn();


  // void ReleaseDataFlagOff ();
/// <summary>
/// <para>Turn on/off flag to control whether this object's data is released after being used by a source.</para>
/// </summary>
  void ReleaseDataFlagOff();


// Did not wrap:  vtkDataObject *GetOutputs ();


  // int GetNumberOfOutputs ();
/// <summary>
/// <para>Return an array with all the inputs of this process object. This is useful for tracing back in the pipeline to construct graphs etc.</para>
/// </summary>
  int GetNumberOfOutputs();


  // void UnRegisterAllOutputs (void );
/// <summary>
/// <para>Release/disconnect all outputs of this source. This is intended to be called prior to Delete() if the user is concerned about outputs holding on to the filter/source.</para>
/// </summary>
  void UnRegisterAllOutputs();


  // int GetOutputIndex (vtkDataObject *out);
/// <summary>
/// <para>Return what index output the passed in output is, return -1 if it does not match any of the outputs</para>
/// </summary>
  int GetOutputIndex(vtkDataObject^ out);


  // virtual void SetExecutive (vtkExecutive *executive);
/// <summary>
/// <para>Set this algorithm's executive.  This algorithm is removed from any executive to which it has previously been assigned and then assigned to the given executive.</para>
/// </summary>
  void SetExecutive(vtkExecutive^ executive);


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkSource ();


// Did not wrap:  ~vtkSource ();


// Did not wrap:  virtual void ExecuteData (vtkDataObject *output);


// Did not wrap:  virtual void Execute ();


// Did not wrap:  virtual void ExecuteInformation ();


// Did not wrap:  virtual void MarkGeneratedOutputs (vtkDataObject *);


// Did not wrap:  void SetNumberOfOutputs (int num);


// Did not wrap:  vtkDataObject *GetOutput (int idx);


// Did not wrap:  virtual void SetNthOutput (int num, vtkDataObject *output);


// Did not wrap:  virtual void AddOutput (vtkDataObject *output);


// Did not wrap:  virtual void RemoveOutput (vtkDataObject *output);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  virtual void SetNumberOfOutputPorts (int n);


// Did not wrap:  vtkSource (const vtkSource &);


// Did not wrap:  void vtkSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSource();


};

} // end vtkFiltering
