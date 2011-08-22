#pragma once

// managed includes
#include "vtkExecutiveDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkInformationIntegerKey;
ref class vtkInformationRequestKey;

public ref class vtkDemandDrivenPipeline : public vtkExecutive
{

public:
// Did not wrap:  static vtkDemandDrivenPipeline *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDemandDrivenPipeline *NewInstance ();
  vtkDemandDrivenPipeline^ NewInstance();


  // vtkDemandDrivenPipeline *SafeDownCast (vtkObject* o);
  static vtkDemandDrivenPipeline^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


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


  // long unsigned GetPipelineMTime ();
/// <summary>
/// <para>Get the PipelineMTime for this exective.</para>
/// </summary>
  unsigned long GetPipelineMTime();


  // virtual int SetReleaseDataFlag (int port, int n);
/// <summary>
/// <para>Set whether the given output port releases data when it is consumed.  Returns 1 if the the value changes and 0 otherwise.</para>
/// </summary>
  int SetReleaseDataFlag(int port, int n);


  // virtual int GetReleaseDataFlag (int port);
/// <summary>
/// <para>Get whether the given output port releases data when it is consumed.</para>
/// </summary>
  int GetReleaseDataFlag(int port);


  // virtual int UpdatePipelineMTime ();
/// <summary>
/// <para>Bring the PipelineMTime up to date.</para>
/// </summary>
  int UpdatePipelineMTime();


  // virtual int UpdateDataObject ();
/// <summary>
/// <para>Bring the output data object's existence up to date.  This does not actually produce data, but does create the data object that will store data produced during the UpdateData step.</para>
/// </summary>
  int UpdateDataObject();


  // virtual int UpdateInformation ();
/// <summary>
/// <para>Bring the output information up to date.</para>
/// </summary>
  int UpdateInformation();


  // virtual int UpdateData (int outputPort);
/// <summary>
/// <para>Bring the output data up to date.  This should be called only when information is up to date.  Use the Update method if it is not known that the information is up to date.</para>
/// </summary>
  int UpdateData(int outputPort);


  // static vtkInformationRequestKey *REQUEST_DATA_OBJECT ();
/// <summary>
/// <para>Key defining a request to make sure the output data objects exist.</para>
/// </summary>
  static vtkInformationRequestKey^ REQUEST_DATA_OBJECT();


  // static vtkInformationRequestKey *REQUEST_INFORMATION ();
/// <summary>
/// <para>Key defining a request to make sure the output information is up to date.</para>
/// </summary>
  static vtkInformationRequestKey^ REQUEST_INFORMATION();


  // static vtkInformationRequestKey *REQUEST_DATA ();
/// <summary>
/// <para>Key defining a request to make sure the output data are up to date.</para>
/// </summary>
  static vtkInformationRequestKey^ REQUEST_DATA();


  // static vtkInformationRequestKey *REQUEST_DATA_NOT_GENERATED ();
/// <summary>
/// <para>Key defining a request to mark outputs that will NOT be generated during a REQUEST_DATA.</para>
/// </summary>
  static vtkInformationRequestKey^ REQUEST_DATA_NOT_GENERATED();


  // static vtkInformationIntegerKey *RELEASE_DATA ();
/// <summary>
/// <para>Key to specify in pipeline information the request that data be released after it is used.</para>
/// </summary>
  static vtkInformationIntegerKey^ RELEASE_DATA();


  // static vtkInformationIntegerKey *DATA_NOT_GENERATED ();
/// <summary>
/// <para>Key to store a mark for an output that will not be generated. Algorithms use this to tell the executive that they will not generate certain outputs for a REQUEST_DATA.</para>
/// </summary>
  static vtkInformationIntegerKey^ DATA_NOT_GENERATED();


  // static vtkDataObject *NewDataObject (const char *type);
/// <summary>
/// <para>Create (New) and return a data object of the given type.</para>
/// </summary>
  static vtkDataObject^ NewDataObject(System::String^ type);


// Did not wrap:  vtkDemandDrivenPipeline ();


// Did not wrap:  ~vtkDemandDrivenPipeline ();


// Did not wrap:  virtual int ExecuteDataObject (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  virtual int ExecuteInformation (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  virtual int ExecuteData (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  virtual void ResetPipelineInformation (int port, vtkInformation *);


// Did not wrap:  virtual int CheckDataObject (int port, vtkInformationVector *outInfo);


// Did not wrap:  int InputCountIsValid (vtkInformationVector *);


// Did not wrap:  int InputCountIsValid (int port, vtkInformationVector *);


// Did not wrap:  int InputTypeIsValid (vtkInformationVector *);


// Did not wrap:  int InputTypeIsValid (int port, vtkInformationVector *);


// Did not wrap:  int InputTypeIsValid (int port, int index, vtkInformationVector *);


// Did not wrap:  int InputFieldsAreValid (vtkInformationVector *);


// Did not wrap:  int InputFieldsAreValid (int port, vtkInformationVector *);


// Did not wrap:  int InputFieldsAreValid (int port, int index, vtkInformationVector *);


// Did not wrap:  int DataSetAttributeExists (vtkDataSetAttributes *dsa, vtkInformation *field);


// Did not wrap:  int FieldArrayExists (vtkFieldData *data, vtkInformation *field);


// Did not wrap:  int ArrayIsValid (vtkDataArray *array, vtkInformation *field);


// Did not wrap:  int InputIsOptional (int port);


// Did not wrap:  int InputIsRepeatable (int port);


// Did not wrap:  virtual int NeedToExecuteData (int outputPort, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void ExecuteDataStart (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void ExecuteDataEnd (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void MarkOutputsGenerated (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  vtkDemandDrivenPipeline (const vtkDemandDrivenPipeline &);


// Did not wrap:  void vtkDemandDrivenPipeline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDemandDrivenPipeline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDemandDrivenPipeline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDemandDrivenPipeline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDemandDrivenPipeline();


};

} // end vtkFiltering
