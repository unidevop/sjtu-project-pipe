#pragma once

// managed includes
#include "vtkDemandDrivenPipelineDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkInformation;
ref class vtkInformationDoubleVectorKey;
ref class vtkInformationIntegerKey;
ref class vtkInformationIntegerVectorKey;
ref class vtkInformationObjectBaseKey;
ref class vtkInformationRequestKey;

public ref class vtkStreamingDemandDrivenPipeline : public vtkDemandDrivenPipeline
{

public:
// Did not wrap:  static vtkStreamingDemandDrivenPipeline *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStreamingDemandDrivenPipeline *NewInstance ();
  vtkStreamingDemandDrivenPipeline^ NewInstance();


  // vtkStreamingDemandDrivenPipeline *SafeDownCast (vtkObject* o);
  static vtkStreamingDemandDrivenPipeline^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


  // virtual int Update ();
/// <summary>
/// <para>Bring the outputs up-to-date.</para>
/// </summary>
  int Update();


  // virtual int Update (int port);
/// <summary>
/// <para>Bring the outputs up-to-date.</para>
/// </summary>
  int Update(int port);


  // virtual int UpdateWholeExtent ();
/// <summary>
/// <para>Bring the outputs up-to-date.</para>
/// </summary>
  int UpdateWholeExtent();


  // int PropagateUpdateExtent (int outputPort);
/// <summary>
/// <para>Propagate the update request from the given output port back through the pipeline.  Should be called only when information is up to date.</para>
/// </summary>
  int PropagateUpdateExtent(int outputPort);


  // int SetMaximumNumberOfPieces (vtkInformation *, int n);
/// <summary>
/// <para>Set/Get the maximum number of pieces that can be requested from the given port.  The maximum number of pieces is meta data for unstructured data sets.  It gets set by the source during the update information call.  A value of -1 indicates that there is no maximum.</para>
/// </summary>
  int SetMaximumNumberOfPieces(vtkInformation^ arg0, int n);


  // int GetMaximumNumberOfPieces (vtkInformation *);
/// <summary>
/// <para>Set/Get the maximum number of pieces that can be requested from the given port.  The maximum number of pieces is meta data for unstructured data sets.  It gets set by the source during the update information call.  A value of -1 indicates that there is no maximum.</para>
/// </summary>
  int GetMaximumNumberOfPieces(vtkInformation^ arg0);


  // int SetWholeExtent (vtkInformation *, int extent[6]);
/// <summary>
/// <para>Set/Get the whole extent of an output port.  The whole extent is meta data for structured data sets.  It gets set by the algorithm during the update information pass.</para>
/// </summary>
  int SetWholeExtent(vtkInformation^ arg0, array<int>^ extent);


  // void GetWholeExtent (vtkInformation *, int extent[6]);
/// <summary>
/// <para>Set/Get the whole extent of an output port.  The whole extent is meta data for structured data sets.  It gets set by the algorithm during the update information pass.</para>
/// </summary>
  void GetWholeExtent(vtkInformation^ arg0, array<int>^ extent);


// Did not wrap:  int *GetWholeExtent (vtkInformation *);


  // int SetUpdateExtentToWholeExtent (vtkInformation *);
/// <summary>
/// <para>If the whole input extent is required to generate the requested output extent, this method can be called to set the input update extent to the whole input extent. This method assumes that the whole extent is known (that UpdateInformation has been called)</para>
/// </summary>
  int SetUpdateExtentToWholeExtent(vtkInformation^ arg0);


  // int SetUpdateExtent (vtkInformation *, int extent[6]);
/// <summary>
/// <para>Get/Set the update extent for output ports that use 3D extents.</para>
/// </summary>
  int SetUpdateExtent(vtkInformation^ arg0, array<int>^ extent);


  // void GetUpdateExtent (vtkInformation *, int extent[6]);
/// <summary>
/// <para>Get/Set the update extent for output ports that use 3D extents.</para>
/// </summary>
  void GetUpdateExtent(vtkInformation^ arg0, array<int>^ extent);


// Did not wrap:  int *GetUpdateExtent (vtkInformation *);


  // int SetUpdateExtent (vtkInformation *, int piece, int numPieces, int ghostLevel);
/// <summary>
/// <para>Set/Get the update piece, update number of pieces, and update number of ghost levels for an output port.  Similar to update extent in 3D.</para>
/// </summary>
  int SetUpdateExtent(vtkInformation^ arg0, int piece, int numPieces, int ghostLevel);


  // int SetUpdatePiece (vtkInformation *, int piece);
/// <summary>
/// <para>Set/Get the update piece, update number of pieces, and update number of ghost levels for an output port.  Similar to update extent in 3D.</para>
/// </summary>
  int SetUpdatePiece(vtkInformation^ arg0, int piece);


  // int GetUpdatePiece (vtkInformation *);
/// <summary>
/// <para>Set/Get the update piece, update number of pieces, and update number of ghost levels for an output port.  Similar to update extent in 3D.</para>
/// </summary>
  int GetUpdatePiece(vtkInformation^ arg0);


  // int SetUpdateNumberOfPieces (vtkInformation *, int n);
/// <summary>
/// <para>Set/Get the update piece, update number of pieces, and update number of ghost levels for an output port.  Similar to update extent in 3D.</para>
/// </summary>
  int SetUpdateNumberOfPieces(vtkInformation^ arg0, int n);


  // int GetUpdateNumberOfPieces (vtkInformation *);
/// <summary>
/// <para>Set/Get the update piece, update number of pieces, and update number of ghost levels for an output port.  Similar to update extent in 3D.</para>
/// </summary>
  int GetUpdateNumberOfPieces(vtkInformation^ arg0);


  // int SetUpdateGhostLevel (vtkInformation *, int n);
/// <summary>
/// <para>Set/Get the update piece, update number of pieces, and update number of ghost levels for an output port.  Similar to update extent in 3D.</para>
/// </summary>
  int SetUpdateGhostLevel(vtkInformation^ arg0, int n);


  // int GetUpdateGhostLevel (vtkInformation *);
/// <summary>
/// <para>Set/Get the update piece, update number of pieces, and update number of ghost levels for an output port.  Similar to update extent in 3D.</para>
/// </summary>
  int GetUpdateGhostLevel(vtkInformation^ arg0);


  // int SetRequestExactExtent (int port, int flag);
/// <summary>
/// <para>This request flag indicates whether the requester can handle more data than requested for the given port.  Right now it is used in vtkImageData.  Image filters can return more data than requested. The the consumer cannot handle this (i.e. DataSetToDataSetFitler) the image will crop itself.  This functionality used to be in ImageToStructuredPoints.</para>
/// </summary>
  int SetRequestExactExtent(int port, int flag);


  // int GetRequestExactExtent (int port);
/// <summary>
/// <para>This request flag indicates whether the requester can handle more data than requested for the given port.  Right now it is used in vtkImageData.  Image filters can return more data than requested. The the consumer cannot handle this (i.e. DataSetToDataSetFitler) the image will crop itself.  This functionality used to be in ImageToStructuredPoints.</para>
/// </summary>
  int GetRequestExactExtent(int port);


  // int SetExtentTranslator (vtkInformation *, vtkExtentTranslator *translator);
/// <summary>
/// <para>Get/Set the object that will translate pieces into structured extents for an output port.</para>
/// </summary>
  int SetExtentTranslator(vtkInformation^ arg0, vtkExtentTranslator^ translator);


  // vtkExtentTranslator *GetExtentTranslator (vtkInformation *info);
/// <summary>
/// <para>Get/Set the object that will translate pieces into structured extents for an output port.</para>
/// </summary>
  vtkExtentTranslator^ GetExtentTranslator(vtkInformation^ info);


  // int SetWholeBoundingBox (int port, double bb[6]);
/// <summary>
/// <para>Set/Get the whole bounding box of an output port data object. The whole whole bounding box is meta data for data sets.  It gets set by the algorithm during the update information pass.</para>
/// </summary>
  int SetWholeBoundingBox(int port, array<double>^ bb);


  // void GetWholeBoundingBox (int port, double bb[6]);
/// <summary>
/// <para>Set/Get the whole bounding box of an output port data object. The whole whole bounding box is meta data for data sets.  It gets set by the algorithm during the update information pass.</para>
/// </summary>
  void GetWholeBoundingBox(int port, array<double>^ bb);


// Did not wrap:  double *GetWholeBoundingBox (int port);


  // static vtkInformationRequestKey *REQUEST_UPDATE_EXTENT ();
/// <summary>
/// <para>Key defining a request to propagate the update extent upstream.</para>
/// </summary>
  static vtkInformationRequestKey^ REQUEST_UPDATE_EXTENT();


  // static vtkInformationIntegerKey *CONTINUE_EXECUTING ();
/// <summary>
/// <para>Key for an algorithm to store in a request to tell this executive to keep executing it.</para>
/// </summary>
  static vtkInformationIntegerKey^ CONTINUE_EXECUTING();


  // static vtkInformationObjectBaseKey *EXTENT_TRANSLATOR ();
/// <summary>
/// <para>Key to store an extent translator in pipeline information.</para>
/// </summary>
  static vtkInformationObjectBaseKey^ EXTENT_TRANSLATOR();


  // static vtkInformationIntegerKey *UPDATE_EXTENT_INITIALIZED ();
/// <summary>
/// <para>Keys to store an update request in pipeline information.</para>
/// </summary>
  static vtkInformationIntegerKey^ UPDATE_EXTENT_INITIALIZED();


  // static vtkInformationIntegerVectorKey *UPDATE_EXTENT ();
/// <summary>
/// <para>Keys to store an update request in pipeline information.</para>
/// </summary>
  static vtkInformationIntegerVectorKey^ UPDATE_EXTENT();


  // static vtkInformationIntegerKey *UPDATE_PIECE_NUMBER ();
/// <summary>
/// <para>Keys to store an update request in pipeline information.</para>
/// </summary>
  static vtkInformationIntegerKey^ UPDATE_PIECE_NUMBER();


  // static vtkInformationIntegerKey *UPDATE_NUMBER_OF_PIECES ();
/// <summary>
/// <para>Keys to store an update request in pipeline information.</para>
/// </summary>
  static vtkInformationIntegerKey^ UPDATE_NUMBER_OF_PIECES();


  // static vtkInformationIntegerKey *UPDATE_NUMBER_OF_GHOST_LEVELS ();
/// <summary>
/// <para>Keys to store an update request in pipeline information.</para>
/// </summary>
  static vtkInformationIntegerKey^ UPDATE_NUMBER_OF_GHOST_LEVELS();


  // static vtkInformationIntegerVectorKey *WHOLE_EXTENT ();
/// <summary>
/// <para>Key to store the whole extent provided in pipeline information.</para>
/// </summary>
  static vtkInformationIntegerVectorKey^ WHOLE_EXTENT();


  // static vtkInformationIntegerKey *MAXIMUM_NUMBER_OF_PIECES ();
/// <summary>
/// <para>Key to store the maximum number of pieces provided in pipeline information.</para>
/// </summary>
  static vtkInformationIntegerKey^ MAXIMUM_NUMBER_OF_PIECES();


  // static vtkInformationDoubleVectorKey *WHOLE_BOUNDING_BOX ();
/// <summary>
/// <para>Key to store the bounding box of the entire data set in pipeline information.</para>
/// </summary>
  static vtkInformationDoubleVectorKey^ WHOLE_BOUNDING_BOX();


  // static vtkInformationIntegerKey *EXACT_EXTENT ();
/// <summary>
/// <para>Key to specify the request for exact extent in pipeline information.</para>
/// </summary>
  static vtkInformationIntegerKey^ EXACT_EXTENT();


  // static vtkInformationDoubleVectorKey *TIME_STEPS ();
/// <summary>
/// <para>Key to store available time steps.</para>
/// </summary>
  static vtkInformationDoubleVectorKey^ TIME_STEPS();


  // static vtkInformationIntegerKey *UPDATE_TIME_INDEX ();
/// <summary>
/// <para>Update time requested by the pipeline.</para>
/// </summary>
  static vtkInformationIntegerKey^ UPDATE_TIME_INDEX();


// Did not wrap:  vtkStreamingDemandDrivenPipeline ();


// Did not wrap:  ~vtkStreamingDemandDrivenPipeline ();


// Did not wrap:  virtual int ExecuteInformation (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void CopyDefaultInformation (vtkInformation *request, int direction, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual int VerifyOutputInformation (int outputPort, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual int NeedToExecuteData (int outputPort, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void ExecuteDataStart (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void ExecuteDataEnd (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void MarkOutputsGenerated (vtkInformation *request, vtkInformationVector *inInfoVec, vtkInformationVector *outInfoVec);


// Did not wrap:  virtual void ResetPipelineInformation (int port, vtkInformation *);


// Did not wrap:  vtkStreamingDemandDrivenPipeline (const vtkStreamingDemandDrivenPipeline &);


// Did not wrap:  void vtkStreamingDemandDrivenPipeline 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStreamingDemandDrivenPipeline(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStreamingDemandDrivenPipeline(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStreamingDemandDrivenPipeline();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStreamingDemandDrivenPipeline();


};

} // end vtkFiltering
