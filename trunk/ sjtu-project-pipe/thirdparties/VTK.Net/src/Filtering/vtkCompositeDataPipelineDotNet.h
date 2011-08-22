#pragma once

// managed includes
#include "vtkStreamingDemandDrivenPipelineDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkInformationIntegerKey;
ref class vtkInformationObjectBaseKey;
ref class vtkInformationStringKey;

public ref class vtkCompositeDataPipeline : public vtkStreamingDemandDrivenPipeline
{

public:
// Did not wrap:  static vtkCompositeDataPipeline *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCompositeDataPipeline *NewInstance ();
  vtkCompositeDataPipeline^ NewInstance();


  // vtkCompositeDataPipeline *SafeDownCast (vtkObject* o);
  static vtkCompositeDataPipeline^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  virtual int ComputePipelineMTime (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec, int reqeustFromOutputPort, unsigned long *mtime);


  // vtkDataObject *GetCompositeOutputData (int port);
/// <summary>
/// <para>Returns the data object stored with the COMPOSITE_DATA_SET() in the output port</para>
/// </summary>
  vtkDataObject^ GetCompositeOutputData(int port);


  // static vtkInformationIntegerKey *BEGIN_LOOP ();
/// <summary>
/// <para>vtkCompositeDataPipeline specific keys</para>
/// </summary>
  static vtkInformationIntegerKey^ BEGIN_LOOP();


  // static vtkInformationIntegerKey *END_LOOP ();
/// <summary>
/// <para>vtkCompositeDataPipeline specific keys</para>
/// </summary>
  static vtkInformationIntegerKey^ END_LOOP();


  // static vtkInformationStringKey *COMPOSITE_DATA_TYPE_NAME ();
/// <summary>
/// <para>vtkCompositeDataPipeline specific keys</para>
/// </summary>
  static vtkInformationStringKey^ COMPOSITE_DATA_TYPE_NAME();


  // static vtkInformationObjectBaseKey *COMPOSITE_DATA_INFORMATION ();
/// <summary>
/// <para>vtkCompositeDataPipeline specific keys</para>
/// </summary>
  static vtkInformationObjectBaseKey^ COMPOSITE_DATA_INFORMATION();


  // static vtkInformationIntegerKey *MARKED_FOR_UPDATE ();
/// <summary>
/// <para>vtkCompositeDataPipeline specific keys</para>
/// </summary>
  static vtkInformationIntegerKey^ MARKED_FOR_UPDATE();


  // static vtkInformationStringKey *INPUT_REQUIRED_COMPOSITE_DATA_TYPE ();
/// <summary>
/// <para>vtkCompositeDataPipeline specific keys</para>
/// </summary>
  static vtkInformationStringKey^ INPUT_REQUIRED_COMPOSITE_DATA_TYPE();


  // static vtkInformationObjectBaseKey *UPDATE_BLOCKS ();
/// <summary>
/// <para>vtkCompositeDataPipeline specific keys</para>
/// </summary>
  static vtkInformationObjectBaseKey^ UPDATE_BLOCKS();


// Did not wrap:  vtkCompositeDataPipeline ();


// Did not wrap:  ~vtkCompositeDataPipeline ();


// Did not wrap:  virtual int CheckDataObject (int port, vtkInformationVector *outInfo);


// Did not wrap:  virtual int ForwardUpstream (vtkInformation *request);


// Did not wrap:  virtual int ForwardUpstream (int i, int j, vtkInformation *request);


// Did not wrap:  virtual void CopyDefaultInformation (vtkInformation *request, int direction, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void CopyFromDataToInformation (vtkDataObject *dobj, vtkInformation *inInfo);


// Did not wrap:  virtual void PushInformation (vtkInformation *);


// Did not wrap:  virtual void PopInformation (vtkInformation *);


// Did not wrap:  virtual int ExecuteDataObjectForBlock (vtkInformation *request);


// Did not wrap:  virtual int ExecuteDataObject (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  virtual int ExecuteInformationForBlock (vtkInformation *request);


// Did not wrap:  virtual int ExecuteDataForBlock (vtkInformation *request);


// Did not wrap:  virtual int ExecuteData (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void ExecuteDataStart (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual int VerifyOutputInformation (int outputPort, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  int CheckCompositeData (int port, vtkInformationVector *outInfoVec);


// Did not wrap:  int SendEndLoop (int i, int j);


// Did not wrap:  virtual int SendBeginLoop (int i, int j, vtkInformation *inInfo, vtkHierarchicalDataSet *updateInfo);


// Did not wrap:  virtual vtkCompositeDataSet *CreateInputCompositeData (int i, vtkInformation *inInfo);


// Did not wrap:  virtual int UpdateBlocks (int i, int j, int outputPort, vtkHierarchicalDataSet *updateInfo, vtkCompositeDataSet *input, vtkInformation *inInfo);


// Did not wrap:  virtual void ExecuteSimpleAlgorithm (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec, int compositePort);


// Did not wrap:  void CheckInputPorts (int &inputPortIsComposite, int &inputIsComposite, int &compositePort);


// Did not wrap:  vtkCompositeDataPipeline (const vtkCompositeDataPipeline &);


// Did not wrap:  void vtkCompositeDataPipeline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCompositeDataPipeline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCompositeDataPipeline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCompositeDataPipeline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCompositeDataPipeline();


};

} // end vtkFiltering
