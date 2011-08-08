#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkAlgorithmOutput;
ref class vtkDataObject;
ref class vtkExecutive;
ref class vtkInformation;
ref class vtkInformationInformationVectorKey;
ref class vtkInformationIntegerKey;
ref class vtkInformationStringKey;

public ref class vtkAlgorithm : public vtkObject
{

public:
// Did not wrap:  static vtkAlgorithm *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAlgorithm *NewInstance ();
  vtkAlgorithm^ NewInstance();


  // vtkAlgorithm *SafeDownCast (vtkObject* o);
  static vtkAlgorithm^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int HasExecutive ();
/// <summary>
/// <para>Check whether this algorithm has an assigned executive.  This will NOT create a default executive.</para>
/// </summary>
  int HasExecutive();


  // vtkExecutive *GetExecutive ();
/// <summary>
/// <para>Get this algorithm's executive.  If it has none, a default executive will be created.</para>
/// </summary>
  vtkExecutive^ GetExecutive();


  // virtual void SetExecutive (vtkExecutive *executive);
/// <summary>
/// <para>Set this algorithm's executive.  This algorithm is removed from any executive to which it has previously been assigned and then assigned to the given executive.</para>
/// </summary>
  void SetExecutive(vtkExecutive^ executive);


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  virtual int ComputePipelineMTime (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec, int requestFromOutputPort, unsigned long *mtime);


  // virtual int ModifyRequest (vtkInformation *request, int when);
/// <summary>
/// <para>This method gives the algorithm a chance to modify the contents of a request before or after (specified in the when argument) it is forwarded. The default implementation is empty. Returns 1 on success, 0 on failure. When can be either vtkExecutive::BeforeForward or vtkExecutive::AfterForward.</para>
/// </summary>
  int ModifyRequest(vtkInformation^ request, int when);


  // vtkInformation *GetInputPortInformation (int port);
/// <summary>
/// <para>Get the information object associated with an input port.  There is one input port per kind of input to the algorithm.  Each input port tells executives what kind of data and downstream requests this algorithm can handle for that input.</para>
/// </summary>
  vtkInformation^ GetInputPortInformation(int port);


  // vtkInformation *GetOutputPortInformation (int port);
/// <summary>
/// <para>Get the information object associated with an output port.  There is one output port per output from the algorithm.  Each output port tells executives what kind of upstream requests this algorithm can handle for that output.</para>
/// </summary>
  vtkInformation^ GetOutputPortInformation(int port);


  // vtkInformation *GetInformation ();
/// <summary>
/// <para>Set/Get the information object associated with this algorithm.</para>
/// </summary>
  vtkInformation^ GetInformation();


  // virtual void SetInformation (vtkInformation *);
/// <summary>
/// <para>Set/Get the information object associated with this algorithm.</para>
/// </summary>
  void SetInformation(vtkInformation^ arg0);


  // int GetNumberOfInputPorts ();
/// <summary>
/// <para>Get the number of input ports used by the algorithm.</para>
/// </summary>
  int GetNumberOfInputPorts();


  // int GetNumberOfOutputPorts ();
/// <summary>
/// <para>Get the number of output ports provided by the algorithm.</para>
/// </summary>
  int GetNumberOfOutputPorts();


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


  // void SetAbortExecute (int );
/// <summary>
/// <para>Set/Get the AbortExecute flag for the process object. Process objects may handle premature termination of execution in different ways.</para>
/// </summary>
  void SetAbortExecute(int arg0);


  // int GetAbortExecute ();
/// <summary>
/// <para>Set/Get the AbortExecute flag for the process object. Process objects may handle premature termination of execution in different ways.</para>
/// </summary>
  int GetAbortExecute();


  // void AbortExecuteOn ();
/// <summary>
/// <para>Set/Get the AbortExecute flag for the process object. Process objects may handle premature termination of execution in different ways.</para>
/// </summary>
  void AbortExecuteOn();


  // void AbortExecuteOff ();
/// <summary>
/// <para>Set/Get the AbortExecute flag for the process object. Process objects may handle premature termination of execution in different ways.</para>
/// </summary>
  void AbortExecuteOff();


  // void SetProgress (double );
/// <summary>
/// <para>Set/Get the execution progress of a process object.</para>
/// </summary>
  void SetProgress(double arg0);


  // double GetProgressMinValue ();
/// <summary>
/// <para>Set/Get the execution progress of a process object.</para>
/// </summary>
  double GetProgressMinValue();


  // double GetProgressMaxValue ();
/// <summary>
/// <para>Set/Get the execution progress of a process object.</para>
/// </summary>
  double GetProgressMaxValue();


  // double GetProgress ();
/// <summary>
/// <para>Set/Get the execution progress of a process object.</para>
/// </summary>
  double GetProgress();


  // void UpdateProgress (double amount);
/// <summary>
/// <para>Update the progress of the process object. If a ProgressMethod exists, executes it.  Then set the Progress ivar to amount. The parameter amount should range between (0,1).</para>
/// </summary>
  void UpdateProgress(double amount);


  // void SetProgressText (char *);
/// <summary>
/// <para>Set the current text message associated with the progress state. This may be used by a calling process/GUI.</para>
/// </summary>
  void SetProgressText(System::String^ arg0);


  // char *GetProgressText ();
/// <summary>
/// <para>Set the current text message associated with the progress state. This may be used by a calling process/GUI.</para>
/// </summary>
  System::String^ GetProgressText();


  // long unsigned GetErrorCode ();
/// <summary>
/// <para>The error code contains a possible error that occured while reading or writing the file.</para>
/// </summary>
  unsigned long GetErrorCode();


  // static vtkInformationIntegerKey *INPUT_IS_OPTIONAL ();
/// <summary>
/// <para>Keys used to specify input port requirements.</para>
/// </summary>
  static vtkInformationIntegerKey^ INPUT_IS_OPTIONAL();


  // static vtkInformationIntegerKey *INPUT_IS_REPEATABLE ();
/// <summary>
/// <para>Keys used to specify input port requirements.</para>
/// </summary>
  static vtkInformationIntegerKey^ INPUT_IS_REPEATABLE();


  // static vtkInformationInformationVectorKey *INPUT_REQUIRED_FIELDS ();
/// <summary>
/// <para>Keys used to specify input port requirements.</para>
/// </summary>
  static vtkInformationInformationVectorKey^ INPUT_REQUIRED_FIELDS();


  // static vtkInformationStringKey *INPUT_REQUIRED_DATA_TYPE ();
/// <summary>
/// <para>Keys used to specify input port requirements.</para>
/// </summary>
  static vtkInformationStringKey^ INPUT_REQUIRED_DATA_TYPE();


  // static vtkInformationInformationVectorKey *INPUT_ARRAYS_TO_PROCESS ();
/// <summary>
/// <para>Keys used to specify input port requirements.</para>
/// </summary>
  static vtkInformationInformationVectorKey^ INPUT_ARRAYS_TO_PROCESS();


  // static vtkInformationIntegerKey *INPUT_PORT ();
/// <summary>
/// <para>Keys used to specify input port requirements.</para>
/// </summary>
  static vtkInformationIntegerKey^ INPUT_PORT();


  // static vtkInformationIntegerKey *INPUT_CONNECTION ();
/// <summary>
/// <para>Keys used to specify input port requirements.</para>
/// </summary>
  static vtkInformationIntegerKey^ INPUT_CONNECTION();


  // void SetInputArrayToProcess (int idx, int port, int connection, int fieldAssociation, const char *name);
/// <summary>
/// <para>Set the input data arrays that this algorithm will process. Specifically the idx array that this algorithm will process (starting from 0) is the array on port, connection with the specified association and name or attribute type (such as SCALARS). The fieldAssociation refers to which field in the data object the array is stored. See vtkDataObject::FieldAssociations for detail.</para>
/// </summary>
  void SetInputArrayToProcess(int idx, int port, int connection, int fieldAssociation, System::String^ name);


  // void SetInputArrayToProcess (int idx, int port, int connection, int fieldAssociation, int fieldAttributeType);
/// <summary>
/// <para>Set the input data arrays that this algorithm will process. Specifically the idx array that this algorithm will process (starting from 0) is the array on port, connection with the specified association and name or attribute type (such as SCALARS). The fieldAssociation refers to which field in the data object the array is stored. See vtkDataObject::FieldAssociations for detail.</para>
/// </summary>
  void SetInputArrayToProcess(int idx, int port, int connection, int fieldAssociation, int fieldAttributeType);


  // void SetInputArrayToProcess (int idx, vtkInformation *info);
/// <summary>
/// <para>Set the input data arrays that this algorithm will process. Specifically the idx array that this algorithm will process (starting from 0) is the array on port, connection with the specified association and name or attribute type (such as SCALARS). The fieldAssociation refers to which field in the data object the array is stored. See vtkDataObject::FieldAssociations for detail.</para>
/// </summary>
  void SetInputArrayToProcess(int idx, vtkInformation^ info);


  // void SetInputArrayToProcess (int idx, int port, int connection, const char *fieldAssociation, const char *attributeTypeorName);
/// <summary>
/// <para>String based versions of SetInputArrayToProcess(). Because fieldAssociation and fieldAttributeType are enums, they cannot be easily accessed from scripting language. These methods provides an easy and safe way of passing association and attribute type information. Field association is one of the following: @verbatim vtkDataObject::FIELD_ASSOCIATION_POINTS vtkDataObject::FIELD_ASSOCIATION_CELLS vtkDataObject::FIELD_ASSOCIATION_NONE vtkDataObject::FIELD_ASSOCIATION_POINTS_THEN_CELLS @endverbatim Attribute type is one of the following: @verbatim vtkDataSetAttributes::SCALARS vtkDataSetAttributes::VECTORS vtkDataSetAttributes::NORMALS vtkDataSetAttributes::TCOORDS vtkDataSetAttributes::TENSORS @endverbatim If the last argument is not an attribute type, it is assumed to be an array name.</para>
/// </summary>
  void SetInputArrayToProcess(int idx, int port, int connection, System::String^ fieldAssociation, System::String^ attributeTypeorName);


  // vtkInformation *GetInputArrayInformation (int idx);
/// <summary>
/// <para>Get the info object for the specified input array to this algorithm</para>
/// </summary>
  vtkInformation^ GetInputArrayInformation(int idx);


  // void RemoveAllInputs ();
/// <summary>
/// <para>Remove all the input data.</para>
/// </summary>
  void RemoveAllInputs();


  // vtkDataObject *GetOutputDataObject (int port);
/// <summary>
/// <para>Get the data object that will contain the algorithm output for the given port.</para>
/// </summary>
  vtkDataObject^ GetOutputDataObject(int port);


  // virtual void SetInputConnection (int port, vtkAlgorithmOutput *input);
/// <summary>
/// <para>Set the connection for the given input port index.  Each input port of a filter has a specific purpose.  A port may have zero or more connections and the required number is specified by each filter.  Setting the connection with this method removes all other connections from the port.  To add more than one connection use AddInputConnection().</para>
/// <para>The input for the connection is the output port of another filter, which is obtained with GetOutputPort().  Typical usage is</para>
/// <para>filter2-&gt;SetInputConnection(0, filter1-&gt;GetOutputPort(0)).</para>
/// </summary>
  void SetInputConnection(int port, vtkAlgorithmOutput^ input);


  // virtual void SetInputConnection (vtkAlgorithmOutput *input);
/// <summary>
/// <para>Set the connection for the given input port index.  Each input port of a filter has a specific purpose.  A port may have zero or more connections and the required number is specified by each filter.  Setting the connection with this method removes all other connections from the port.  To add more than one connection use AddInputConnection().</para>
/// <para>The input for the connection is the output port of another filter, which is obtained with GetOutputPort().  Typical usage is</para>
/// <para>filter2-&gt;SetInputConnection(0, filter1-&gt;GetOutputPort(0)).</para>
/// </summary>
  void SetInputConnection(vtkAlgorithmOutput^ input);


  // virtual void AddInputConnection (int port, vtkAlgorithmOutput *input);
/// <summary>
/// <para>Add a connection to the given input port index.  See SetInputConnection() for details on input connections.  This method is the complement to RemoveInputConnection() in that it adds only the connection specified without affecting other connections.  Typical usage is</para>
/// <para>filter2-&gt;AddInputConnection(0, filter1-&gt;GetOutputPort(0)).</para>
/// </summary>
  void AddInputConnection(int port, vtkAlgorithmOutput^ input);


  // virtual void AddInputConnection (vtkAlgorithmOutput *input);
/// <summary>
/// <para>Add a connection to the given input port index.  See SetInputConnection() for details on input connections.  This method is the complement to RemoveInputConnection() in that it adds only the connection specified without affecting other connections.  Typical usage is</para>
/// <para>filter2-&gt;AddInputConnection(0, filter1-&gt;GetOutputPort(0)).</para>
/// </summary>
  void AddInputConnection(vtkAlgorithmOutput^ input);


  // virtual void RemoveInputConnection (int port, vtkAlgorithmOutput *input);
/// <summary>
/// <para>Remove a connection from the given input port index.  See SetInputConnection() for details on input connection.  This method is the complement to AddInputConnection() in that it removes only the connection specified without affecting other connections.  Typical usage is</para>
/// <para>filter2-&gt;RemoveInputConnection(0, filter1-&gt;GetOutputPort(0)).</para>
/// </summary>
  void RemoveInputConnection(int port, vtkAlgorithmOutput^ input);


  // vtkAlgorithmOutput *GetOutputPort (int index);
/// <summary>
/// <para>Get a proxy object corresponding to the given output port of this algorithm.  The proxy object can be passed to another algorithm's SetInputConnection(), AddInputConnection(), and RemoveInputConnection() methods to modify pipeline connectivity.</para>
/// </summary>
  vtkAlgorithmOutput^ GetOutputPort(int index);


  // vtkAlgorithmOutput *GetOutputPort ();return this GetOutputPort 
/// <summary>
/// <para>Get the number of inputs currently connected to a port.</para>
/// </summary>
  vtkAlgorithmOutput^ GetOutputPort();


  // int GetNumberOfInputConnections (int port);
/// <summary>
/// <para>Get the number of inputs currently connected to a port.</para>
/// </summary>
  int GetNumberOfInputConnections(int port);


  // int GetTotalNumberOfInputConnections ();
/// <summary>
/// <para>Get the total number of inputs for this algorithm</para>
/// </summary>
  int GetTotalNumberOfInputConnections();


  // vtkAlgorithmOutput *GetInputConnection (int port, int index);
/// <summary>
/// <para>Get the algorithm output port connected to an input port.</para>
/// </summary>
  vtkAlgorithmOutput^ GetInputConnection(int port, int index);


  // virtual void Update ();
/// <summary>
/// <para>Bring this algorithm's outputs up-to-date.</para>
/// </summary>
  void Update();


  // virtual void UpdateInformation ();
/// <summary>
/// <para>Backward compatibility method to invoke UpdateInformation on executive.</para>
/// </summary>
  void UpdateInformation();


  // virtual void UpdateWholeExtent ();
/// <summary>
/// <para>Bring this algorithm's outputs up-to-date.</para>
/// </summary>
  void UpdateWholeExtent();


  // void ConvertTotalInputToPortConnection (int ind, int &port, int &conn);
/// <summary>
/// <para>Convenience routine to convert from a linear ordering of input connections to a port/connection pair.</para>
/// </summary>
  void ConvertTotalInputToPortConnection(int ind, int% port, int% conn);


  // virtual void SetReleaseDataFlag (int );
/// <summary>
/// <para>Turn release data flag on or off for all output ports.</para>
/// </summary>
  void SetReleaseDataFlag(int arg0);


  // virtual int GetReleaseDataFlag ();
/// <summary>
/// <para>Turn release data flag on or off for all output ports.</para>
/// </summary>
  int GetReleaseDataFlag();


  // void ReleaseDataFlagOn ();
/// <summary>
/// <para>Turn release data flag on or off for all output ports.</para>
/// </summary>
  void ReleaseDataFlagOn();


  // void ReleaseDataFlagOff ();
/// <summary>
/// <para>Turn release data flag on or off for all output ports.</para>
/// </summary>
  void ReleaseDataFlagOff();


  // int UpdateExtentIsEmpty (vtkDataObject *output);
/// <summary>
/// <para>This detects when the UpdateExtent will generate no data This condition is satisfied when the UpdateExtent has  zero volume (0,-1,...) or the UpdateNumberOfPieces is 0. The source uses this call to determine whether to call Execute.</para>
/// </summary>
  int UpdateExtentIsEmpty(vtkDataObject^ output);


  // int UpdateExtentIsEmpty (vtkInformation *pinfo, int extentType);
/// <summary>
/// <para>This detects when the UpdateExtent will generate no data This condition is satisfied when the UpdateExtent has  zero volume (0,-1,...) or the UpdateNumberOfPieces is 0. The source uses this call to determine whether to call Execute.</para>
/// </summary>
  int UpdateExtentIsEmpty(vtkInformation^ pinfo, int extentType);


// Did not wrap:  vtkAlgorithm ();


// Did not wrap:  ~vtkAlgorithm ();


// Did not wrap:  static vtkInformationIntegerKey *PORT_REQUIREMENTS_FILLED ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual int FillOutputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual void SetNumberOfInputPorts (int n);


// Did not wrap:  virtual void SetNumberOfOutputPorts (int n);


// Did not wrap:  int InputPortIndexInRange (int index, const char *action);


// Did not wrap:  int OutputPortIndexInRange (int index, const char *action);


// Did not wrap:  vtkDataArray *GetInputArrayToProcess (int idx, vtkInformationVector *inputVector);


// Did not wrap:  vtkDataArray *GetInputArrayToProcess (int idx, int connection, vtkInformationVector *inputVector);


// Did not wrap:  vtkInformation *GetInputArrayFieldInformation (int idx, vtkInformationVector *inputVector);


// Did not wrap:  static void SetDefaultExecutivePrototype (vtkExecutive *proto);


// Did not wrap:  virtual vtkExecutive *CreateDefaultExecutive ();


// Did not wrap:  void SetErrorCode (unsigned long );


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  virtual void SetNthInputConnection (int port, int index, vtkAlgorithmOutput *input);


// Did not wrap:  virtual void SetNumberOfInputConnections (int port, int n);


// Did not wrap:  static void ConnectionAdd (vtkAlgorithm *producer, int producerPort, vtkAlgorithm *consumer, int consumerPort);


// Did not wrap:  static void ConnectionRemove (vtkAlgorithm *producer, int producerPort, vtkAlgorithm *consumer, int consumerPort);


// Did not wrap:  static void ConnectionRemoveAllInput (vtkAlgorithm *consumer, int port);


// Did not wrap:  static void ConnectionRemoveAllOutput (vtkAlgorithm *producer, int port);


// Did not wrap:  vtkAlgorithm (const vtkAlgorithm &);


// Did not wrap:  void vtkAlgorithm 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAlgorithm(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAlgorithm(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAlgorithm();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAlgorithm();


};

} // end vtkFiltering
