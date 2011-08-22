#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkAlgorithm;
ref class vtkAlgorithmOutput;
ref class vtkDataObject;
ref class vtkInformation;
ref class vtkInformationExecutivePortKey;
ref class vtkInformationExecutivePortVectorKey;
ref class vtkInformationIntegerKey;
ref class vtkInformationKeyVectorKey;
ref class vtkInformationVector;

public ref class vtkExecutive : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExecutive *NewInstance ();
  vtkExecutive^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkAlgorithm *GetAlgorithm ();
/// <summary>
/// <para>Get the algorithm to which this executive has been assigned.</para>
/// </summary>
  vtkAlgorithm^ GetAlgorithm();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  virtual int ComputePipelineMTime (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec, int requestFromOutputPort, unsigned long *mtime);


  // virtual int Update ();
/// <summary>
/// <para>Bring the algorithm's outputs up-to-date.  Returns 1 for success and 0 for failure.</para>
/// </summary>
  int Update();


  // virtual int Update (int port);
/// <summary>
/// <para>Bring the algorithm's outputs up-to-date.  Returns 1 for success and 0 for failure.</para>
/// </summary>
  int Update(int port);


  // int GetNumberOfInputPorts ();
/// <summary>
/// <para>Get the number of input/output ports for the algorithm associated with this executive.  Returns 0 if no algorithm is set.</para>
/// </summary>
  int GetNumberOfInputPorts();


  // int GetNumberOfOutputPorts ();
/// <summary>
/// <para>Get the number of input/output ports for the algorithm associated with this executive.  Returns 0 if no algorithm is set.</para>
/// </summary>
  int GetNumberOfOutputPorts();


  // int GetNumberOfInputConnections (int port);
/// <summary>
/// <para>Get the number of input connections on the given port.</para>
/// </summary>
  int GetNumberOfInputConnections(int port);


  // virtual vtkInformation *GetOutputInformation (int port);
/// <summary>
/// <para>Get the pipeline information object for the given output port.</para>
/// </summary>
  vtkInformation^ GetOutputInformation(int port);


  // vtkInformationVector *GetOutputInformation ();
/// <summary>
/// <para>Get the pipeline information object for all output ports.</para>
/// </summary>
  vtkInformationVector^ GetOutputInformation();


  // vtkInformation *GetInputInformation (int port, int connection);
/// <summary>
/// <para>Get the pipeline information for the given input connection.</para>
/// </summary>
  vtkInformation^ GetInputInformation(int port, int connection);


  // vtkInformationVector *GetInputInformation (int port);
/// <summary>
/// <para>Get the pipeline information vectors for the given input port.</para>
/// </summary>
  vtkInformationVector^ GetInputInformation(int port);


// Did not wrap:  vtkInformationVector *GetInputInformation ();


  // vtkExecutive *GetInputExecutive (int port, int connection);
/// <summary>
/// <para>Get the executive managing the given input connection.</para>
/// </summary>
  vtkExecutive^ GetInputExecutive(int port, int connection);


  // virtual vtkDataObject *GetOutputData (int port);
/// <summary>
/// <para>Get/Set the data object for an output port of the algorithm.</para>
/// </summary>
  vtkDataObject^ GetOutputData(int port);


  // virtual void SetOutputData (int port, vtkDataObject *, vtkInformation *info);
/// <summary>
/// <para>Get/Set the data object for an output port of the algorithm.</para>
/// </summary>
  void SetOutputData(int port, vtkDataObject^ arg1, vtkInformation^ info);


  // virtual void SetOutputData (int port, vtkDataObject *);
/// <summary>
/// <para>Get/Set the data object for an output port of the algorithm.</para>
/// </summary>
  void SetOutputData(int port, vtkDataObject^ arg1);


  // virtual vtkDataObject *GetInputData (int port, int connection);
/// <summary>
/// <para>Get the data object for an output port of the algorithm.</para>
/// </summary>
  vtkDataObject^ GetInputData(int port, int connection);


// Did not wrap:  virtual vtkDataObject *GetInputData (int port, int connection, vtkInformationVector *inInfoVec);


  // virtual vtkAlgorithmOutput *GetProducerPort (vtkDataObject *);
/// <summary>
/// <para>Get the output port that produces the given data object.</para>
/// </summary>
  vtkAlgorithmOutput^ GetProducerPort(vtkDataObject^ arg0);


// Did not wrap:  void SetSharedInputInformation (vtkInformationVector *inInfoVec);


  // void SetSharedOutputInformation (vtkInformationVector *outInfoVec);
/// <summary>
/// <para>Set a pointer to an outside instance of input or output information vectors.  No references are held to the given vectors, and setting this does not change the executive object modification time.  This is a preliminary interface to use in implementing filters with internal pipelines, and may change without notice when a future interface is created.</para>
/// </summary>
  void SetSharedOutputInformation(vtkInformationVector^ outInfoVec);


  // virtual void Register (vtkObjectBase *o);
/// <summary>
/// <para>Participate in garbage collection.</para>
/// </summary>
  void Register(vtkObjectBase^ o);


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>Participate in garbage collection.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


  // static vtkInformationExecutivePortKey *PRODUCER ();
/// <summary>
/// <para>Information key to store the executive/port number producing an information object.</para>
/// </summary>
  static vtkInformationExecutivePortKey^ PRODUCER();


  // static vtkInformationExecutivePortVectorKey *CONSUMERS ();
/// <summary>
/// <para>Information key to store the executive/port number pairs consuming an information object.</para>
/// </summary>
  static vtkInformationExecutivePortVectorKey^ CONSUMERS();


  // static vtkInformationIntegerKey *FROM_OUTPUT_PORT ();
/// <summary>
/// <para>Information key to store the output port number from which a request is made.</para>
/// </summary>
  static vtkInformationIntegerKey^ FROM_OUTPUT_PORT();


  // static vtkInformationIntegerKey *ALGORITHM_BEFORE_FORWARD ();
/// <summary>
/// <para>Keys to program vtkExecutive::ProcessRequest with the default behavior for unknown requests.</para>
/// </summary>
  static vtkInformationIntegerKey^ ALGORITHM_BEFORE_FORWARD();


  // static vtkInformationIntegerKey *ALGORITHM_AFTER_FORWARD ();
/// <summary>
/// <para>Keys to program vtkExecutive::ProcessRequest with the default behavior for unknown requests.</para>
/// </summary>
  static vtkInformationIntegerKey^ ALGORITHM_AFTER_FORWARD();


  // static vtkInformationIntegerKey *ALGORITHM_DIRECTION ();
/// <summary>
/// <para>Keys to program vtkExecutive::ProcessRequest with the default behavior for unknown requests.</para>
/// </summary>
  static vtkInformationIntegerKey^ ALGORITHM_DIRECTION();


  // static vtkInformationIntegerKey *FORWARD_DIRECTION ();
/// <summary>
/// <para>Keys to program vtkExecutive::ProcessRequest with the default behavior for unknown requests.</para>
/// </summary>
  static vtkInformationIntegerKey^ FORWARD_DIRECTION();


  // static vtkInformationKeyVectorKey *KEYS_TO_COPY ();
/// <summary>
/// <para>Keys to program vtkExecutive::ProcessRequest with the default behavior for unknown requests.</para>
/// </summary>
  static vtkInformationKeyVectorKey^ KEYS_TO_COPY();


// Did not wrap:  virtual int CallAlgorithm (vtkInformation *request, int direction, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  vtkExecutive ();


// Did not wrap:  ~vtkExecutive ();


// Did not wrap:  int InputPortIndexInRange (int port, const char *action);


// Did not wrap:  int OutputPortIndexInRange (int port, const char *action);


// Did not wrap:  int CheckAlgorithm (const char *method, vtkInformation *request);


// Did not wrap:  virtual int ForwardDownstream (vtkInformation *request);


// Did not wrap:  virtual int ForwardUpstream (vtkInformation *request);


// Did not wrap:  virtual void CopyDefaultInformation (vtkInformation *request, int direction, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  virtual void ResetPipelineInformation (int port, vtkInformation *) = 0;


// Did not wrap:  virtual int UpdateDataObject () = 0;


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual void SetAlgorithm (vtkAlgorithm *algorithm);


// Did not wrap:  vtkExecutive (const vtkExecutive &);


// Did not wrap:  void vtkExecutive 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExecutive(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExecutive(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExecutive();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExecutive();


};

} // end vtkFiltering
