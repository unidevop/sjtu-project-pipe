#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkAlgorithmOutput;
ref class vtkFieldData;
ref class vtkInformation;
ref class vtkInformationDataObjectKey;
ref class vtkInformationDoubleKey;
ref class vtkInformationDoubleVectorKey;
ref class vtkInformationInformationVectorKey;
ref class vtkInformationIntegerKey;
ref class vtkInformationIntegerPointerKey;
ref class vtkInformationStringKey;
ref class vtkSource;

public ref class vtkDataObject : public vtkObject
{

public:
// Did not wrap:  static vtkDataObject *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataObject *NewInstance ();
  vtkDataObject^ NewInstance();


  // vtkDataObject *SafeDownCast (vtkObject* o);
  static vtkDataObject^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkSource *GetSource ();
/// <summary>
/// <para>Set/Get the source object creating this data object.</para>
/// </summary>
  vtkSource^ GetSource();


  // void SetSource (vtkSource *s);
/// <summary>
/// <para>Set/Get the source object creating this data object.</para>
/// </summary>
  void SetSource(vtkSource^ s);


  // vtkInformation *GetInformation ();
/// <summary>
/// <para>Set/Get the information object associated with this data object.</para>
/// </summary>
  vtkInformation^ GetInformation();


  // virtual void SetInformation (vtkInformation *);
/// <summary>
/// <para>Set/Get the information object associated with this data object.</para>
/// </summary>
  void SetInformation(vtkInformation^ arg0);


  // vtkInformation *GetPipelineInformation ();
/// <summary>
/// <para>Get/Set the pipeline information object that owns this data object.</para>
/// </summary>
  vtkInformation^ GetPipelineInformation();


  // virtual void SetPipelineInformation (vtkInformation *);
/// <summary>
/// <para>Get/Set the pipeline information object that owns this data object.</para>
/// </summary>
  void SetPipelineInformation(vtkInformation^ arg0);


  // virtual vtkAlgorithmOutput *GetProducerPort ();
/// <summary>
/// <para>Get the port currently producing this object.</para>
/// </summary>
  vtkAlgorithmOutput^ GetProducerPort();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Data objects are composite objects and need to check each part for MTime. The information object also needs to be considered.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void Initialize ();
/// <summary>
/// <para>Restore data object to initial state,</para>
/// </summary>
  void Initialize();


  // void ReleaseData ();
/// <summary>
/// <para>Release data back to system to conserve memory resource. Used during visualization network execution.  Releasing this data does not make  down-stream data invalid, so it does not modify the MTime of this  data object.</para>
/// </summary>
  void ReleaseData();


  // int ShouldIReleaseData ();
/// <summary>
/// <para>Return flag indicating whether data should be released after use   by a filter.</para>
/// </summary>
  int ShouldIReleaseData();


  // int GetDataReleased ();
/// <summary>
/// <para>Get the flag indicating the data has been released.</para>
/// </summary>
  int GetDataReleased();


  // void SetReleaseDataFlag (int );
/// <summary>
/// <para>Turn on/off flag to control whether this object's data is released after being used by a filter.</para>
/// </summary>
  void SetReleaseDataFlag(int arg0);


  // int GetReleaseDataFlag ();
/// <summary>
/// <para>Turn on/off flag to control whether this object's data is released after being used by a filter.</para>
/// </summary>
  int GetReleaseDataFlag();


  // void ReleaseDataFlagOn ();
/// <summary>
/// <para>Turn on/off flag to control whether this object's data is released after being used by a filter.</para>
/// </summary>
  void ReleaseDataFlagOn();


  // void ReleaseDataFlagOff ();
/// <summary>
/// <para>Turn on/off flag to control whether this object's data is released after being used by a filter.</para>
/// </summary>
  void ReleaseDataFlagOff();


  // static void SetGlobalReleaseDataFlag (int val);
/// <summary>
/// <para>Turn on/off flag to control whether every object releases its data after being used by a filter.</para>
/// </summary>
  static void SetGlobalReleaseDataFlag(int val);


  // void GlobalReleaseDataFlagOn ();this SetGlobalReleaseDataFlag 
/// <summary>
/// <para>Turn on/off flag to control whether every object releases its data after being used by a filter.</para>
/// </summary>
  void GlobalReleaseDataFlagOn();


  // void GlobalReleaseDataFlagOff ();this SetGlobalReleaseDataFlag 
/// <summary>
/// <para>Turn on/off flag to control whether every object releases its data after being used by a filter.</para>
/// </summary>
  void GlobalReleaseDataFlagOff();


  // static int GetGlobalReleaseDataFlag ();
/// <summary>
/// <para>Turn on/off flag to control whether every object releases its data after being used by a filter.</para>
/// </summary>
  static int GetGlobalReleaseDataFlag();


  // virtual void SetFieldData (vtkFieldData *);
/// <summary>
/// <para>Assign or retrieve field data to this data object.</para>
/// </summary>
  void SetFieldData(vtkFieldData^ arg0);


  // vtkFieldData *GetFieldData ();
/// <summary>
/// <para>Assign or retrieve field data to this data object.</para>
/// </summary>
  vtkFieldData^ GetFieldData();


  // virtual void Register (vtkObjectBase *o);
  void Register(vtkObjectBase^ o);


  // virtual void UnRegister (vtkObjectBase *o);
  void UnRegister(vtkObjectBase^ o);


  // virtual void Update ();
/// <summary>
/// <para>Provides opportunity for the data object to insure internal  consistency before access. Also causes owning source/filter  (if any) to update itself. The Update() method is composed of  UpdateInformation(), PropagateUpdateExtent(),  TriggerAsynchronousUpdate(), and UpdateData().</para>
/// </summary>
  void Update();


  // virtual void UpdateInformation ();
/// <summary>
/// <para>WARNING: INTERNAL METHOD - NOT FOR GENERAL USE.  THIS METHOD IS PART OF THE PIPELINE UPDATE FUNCTIONALITY. Update all the &quot;easy to update&quot; information about the object such as the extent which will be used to control the update. This propagates all the way up then back down the pipeline. As a by-product the PipelineMTime is updated.</para>
/// </summary>
  void UpdateInformation();


  // virtual void PropagateUpdateExtent ();
/// <summary>
/// <para>WARNING: INTERNAL METHOD - NOT FOR GENERAL USE.  THIS METHOD IS PART OF THE PIPELINE UPDATE FUNCTIONALITY. The update extent for this object is propagated up the pipeline. This propagation may early terminate based on the PipelineMTime.</para>
/// </summary>
  void PropagateUpdateExtent();


  // virtual void TriggerAsynchronousUpdate ();
/// <summary>
/// <para>WARNING: INTERNAL METHOD - NOT FOR GENERAL USE.  THIS METHOD IS PART OF THE PIPELINE UPDATE FUNCTIONALITY. Propagate back up the pipeline for ports and trigger the update on the other side of the port to allow for asynchronous parallel processing in the pipeline. This propagation may early terminate based on the PipelineMTime.</para>
/// </summary>
  void TriggerAsynchronousUpdate();


  // virtual void UpdateData ();
/// <summary>
/// <para>WARNING: INTERNAL METHOD - NOT FOR GENERAL USE.  THIS METHOD IS PART OF THE PIPELINE UPDATE FUNCTIONALITY. Propagate the update back up the pipeline, and perform the actual  work of updating on the way down. When the propagate arrives at a port, block and wait for the asynchronous update to finish on the other side. This propagation may early terminate based on the PipelineMTime.</para>
/// </summary>
  void UpdateData();


  // virtual unsigned long GetEstimatedMemorySize ();
/// <summary>
/// <para>Get the estimated size of this data object itself. Should be called after UpdateInformation() and PropagateUpdateExtent() have both been  called. Should be overridden in a subclass - otherwise the default is to assume that this data object requires no memory. The size is returned in kilobytes.</para>
/// </summary>
  unsigned long GetEstimatedMemorySize();


  // virtual void SetUpdateExtent (int piece, int numPieces, int ghostLevel);
/// <summary>
/// <para>A generic way of specifying an update extent.  Subclasses must decide what a piece is.  When the NumberOfPieces is zero, then no data is requested, and the source will not execute.</para>
/// </summary>
  void SetUpdateExtent(int piece, int numPieces, int ghostLevel);


  // void SetUpdateExtent (int piece, int numPieces);this SetUpdateExtent piece numPieces 
/// <summary>
/// <para>Set the update extent for data objects that use 3D extents. Using this method on data objects that set extents as pieces (such as vtkPolyData or vtkUnstructuredGrid) has no real effect. Don't use the set macro to set the update extent since we don't want this object to be modified just due to a change in update extent. When the volume of the extent is zero (0, -1,..),  then no data is requested, and the source will not execute.</para>
/// </summary>
  void SetUpdateExtent(int piece, int numPieces);


  // virtual void SetUpdateExtent (int x0, int x1, int y0, int y1, int z0, int z1);
/// <summary>
/// <para>Set the update extent for data objects that use 3D extents. Using this method on data objects that set extents as pieces (such as vtkPolyData or vtkUnstructuredGrid) has no real effect. Don't use the set macro to set the update extent since we don't want this object to be modified just due to a change in update extent. When the volume of the extent is zero (0, -1,..),  then no data is requested, and the source will not execute.</para>
/// </summary>
  void SetUpdateExtent(int x0, int x1, int y0, int y1, int z0, int z1);


  // virtual void SetUpdateExtent (int extent[6]);
/// <summary>
/// <para>Set the update extent for data objects that use 3D extents. Using this method on data objects that set extents as pieces (such as vtkPolyData or vtkUnstructuredGrid) has no real effect. Don't use the set macro to set the update extent since we don't want this object to be modified just due to a change in update extent. When the volume of the extent is zero (0, -1,..),  then no data is requested, and the source will not execute.</para>
/// </summary>
  void SetUpdateExtent(array<int>^ extent);


  // virtual int *GetUpdateExtent ();
/// <summary>
/// <para>Set the update extent for data objects that use 3D extents. Using this method on data objects that set extents as pieces (such as vtkPolyData or vtkUnstructuredGrid) has no real effect. Don't use the set macro to set the update extent since we don't want this object to be modified just due to a change in update extent. When the volume of the extent is zero (0, -1,..),  then no data is requested, and the source will not execute.</para>
/// </summary>
  array<int>^ GetUpdateExtent();


  // virtual void GetUpdateExtent (int &x0, int &x1, int &y0, int &y1, int &z0, int &z1);
/// <summary>
/// <para>Set the update extent for data objects that use 3D extents. Using this method on data objects that set extents as pieces (such as vtkPolyData or vtkUnstructuredGrid) has no real effect. Don't use the set macro to set the update extent since we don't want this object to be modified just due to a change in update extent. When the volume of the extent is zero (0, -1,..),  then no data is requested, and the source will not execute.</para>
/// </summary>
  void GetUpdateExtent(int% x0, int% x1, int% y0, int% y1, int% z0, int% z1);


  // virtual void GetUpdateExtent (int extent[6]);
/// <summary>
/// <para>Set the update extent for data objects that use 3D extents. Using this method on data objects that set extents as pieces (such as vtkPolyData or vtkUnstructuredGrid) has no real effect. Don't use the set macro to set the update extent since we don't want this object to be modified just due to a change in update extent. When the volume of the extent is zero (0, -1,..),  then no data is requested, and the source will not execute.</para>
/// </summary>
  void GetUpdateExtent(array<int>^ extent);


  // virtual int GetDataObjectType ();return VTK_DATA_OBJECT 
/// <summary>
/// <para>Used by Threaded ports to determine if they should initiate an asynchronous update (still in development).</para>
/// </summary>
  int GetDataObjectType();


  // unsigned long GetUpdateTime ();
/// <summary>
/// <para>Used by Threaded ports to determine if they should initiate an asynchronous update (still in development).</para>
/// </summary>
  unsigned long GetUpdateTime();


  // void SetUpdateExtentToWholeExtent ();
/// <summary>
/// <para>If the whole input extent is required to generate the requested output extent, this method can be called to set the input update extent to the whole input extent. This method assumes that the whole extent is known (that UpdateInformation has been called)</para>
/// </summary>
  void SetUpdateExtentToWholeExtent();


  // unsigned long GetPipelineMTime ();
/// <summary>
/// <para>Get the cumulative modified time of everything upstream.  Does not include the MTime of this object.</para>
/// </summary>
  unsigned long GetPipelineMTime();


  // virtual unsigned long GetActualMemorySize ();
/// <summary>
/// <para>Return the actual size of the data in kilobytes. This number is valid only after the pipeline has updated. The memory size returned is guaranteed to be greater than or equal to the memory required to represent the data (e.g., extra space in arrays, etc. are not included in the return value).</para>
/// </summary>
  unsigned long GetActualMemorySize();


  // void CopyInformation (vtkDataObject *data);
/// <summary>
/// <para>Copy the generic information (WholeExtent ...)</para>
/// </summary>
  void CopyInformation(vtkDataObject^ data);


  // virtual void CopyTypeSpecificInformation (vtkDataObject *data);this CopyInformation data 
/// <summary>
/// <para>By default, there is no type specific information</para>
/// </summary>
  void CopyTypeSpecificInformation(vtkDataObject^ data);


  // void SetUpdatePiece (int piece);
/// <summary>
/// <para>Set / Get the update piece and the update number of pieces. Similar to update extent in 3D.</para>
/// </summary>
  void SetUpdatePiece(int piece);


  // void SetUpdateNumberOfPieces (int num);
/// <summary>
/// <para>Set / Get the update piece and the update number of pieces. Similar to update extent in 3D.</para>
/// </summary>
  void SetUpdateNumberOfPieces(int num);


  // virtual int GetUpdatePiece ();
/// <summary>
/// <para>Set / Get the update piece and the update number of pieces. Similar to update extent in 3D.</para>
/// </summary>
  int GetUpdatePiece();


  // virtual int GetUpdateNumberOfPieces ();
/// <summary>
/// <para>Set / Get the update piece and the update number of pieces. Similar to update extent in 3D.</para>
/// </summary>
  int GetUpdateNumberOfPieces();


  // void SetUpdateGhostLevel (int level);
/// <summary>
/// <para>Set / Get the update ghost level and the update number of ghost levels. Similar to update extent in 3D.</para>
/// </summary>
  void SetUpdateGhostLevel(int level);


  // virtual int GetUpdateGhostLevel ();
/// <summary>
/// <para>Set / Get the update ghost level and the update number of ghost levels. Similar to update extent in 3D.</para>
/// </summary>
  int GetUpdateGhostLevel();


  // virtual void SetRequestExactExtent (int flag);
/// <summary>
/// <para>This request flag indicates whether the requester can handle  more data than requested.  Right now it is used in vtkImageData. Image filters can return more data than requested.  The the  consumer cannot handle this (i.e. DataSetToDataSetFitler) the image will crop itself.  This functionality used to be in  ImageToStructuredPoints.</para>
/// </summary>
  void SetRequestExactExtent(int flag);


  // virtual int GetRequestExactExtent ();
/// <summary>
/// <para>This request flag indicates whether the requester can handle  more data than requested.  Right now it is used in vtkImageData. Image filters can return more data than requested.  The the  consumer cannot handle this (i.e. DataSetToDataSetFitler) the image will crop itself.  This functionality used to be in  ImageToStructuredPoints.</para>
/// </summary>
  int GetRequestExactExtent();


  // void RequestExactExtentOn ();
/// <summary>
/// <para>This request flag indicates whether the requester can handle  more data than requested.  Right now it is used in vtkImageData. Image filters can return more data than requested.  The the  consumer cannot handle this (i.e. DataSetToDataSetFitler) the image will crop itself.  This functionality used to be in  ImageToStructuredPoints.</para>
/// </summary>
  void RequestExactExtentOn();


  // void RequestExactExtentOff ();
/// <summary>
/// <para>This request flag indicates whether the requester can handle  more data than requested.  Right now it is used in vtkImageData. Image filters can return more data than requested.  The the  consumer cannot handle this (i.e. DataSetToDataSetFitler) the image will crop itself.  This functionality used to be in  ImageToStructuredPoints.</para>
/// </summary>
  void RequestExactExtentOff();


  // virtual void SetWholeExtent (int x0, int x1, int y0, int y1, int z0, int z1);
/// <summary>
/// <para>Set/Get the whole extent of this data object.   The whole extent is meta data for structured data sets. It gets set by the source during the update information call.</para>
/// </summary>
  void SetWholeExtent(int x0, int x1, int y0, int y1, int z0, int z1);


  // virtual void SetWholeExtent (int extent[6]);
/// <summary>
/// <para>Set/Get the whole extent of this data object.   The whole extent is meta data for structured data sets. It gets set by the source during the update information call.</para>
/// </summary>
  void SetWholeExtent(array<int>^ extent);


  // virtual int *GetWholeExtent ();
/// <summary>
/// <para>Set/Get the whole extent of this data object.   The whole extent is meta data for structured data sets. It gets set by the source during the update information call.</para>
/// </summary>
  array<int>^ GetWholeExtent();


  // virtual void GetWholeExtent (int &x0, int &x1, int &y0, int &y1, int &z0, int &z1);
/// <summary>
/// <para>Set/Get the whole extent of this data object.   The whole extent is meta data for structured data sets. It gets set by the source during the update information call.</para>
/// </summary>
  void GetWholeExtent(int% x0, int% x1, int% y0, int% y1, int% z0, int% z1);


  // virtual void GetWholeExtent (int extent[6]);
/// <summary>
/// <para>Set/Get the whole extent of this data object.   The whole extent is meta data for structured data sets. It gets set by the source during the update information call.</para>
/// </summary>
  void GetWholeExtent(array<int>^ extent);


  // virtual void SetWholeBoundingBox (double x0, double x1, double y0, double y1, double z0, double z1);
/// <summary>
/// <para>Set/Get the whole bounding box of this data object.   The whole whole bounding box is meta data for data sets It gets set by the source during the update information call.</para>
/// </summary>
  void SetWholeBoundingBox(double x0, double x1, double y0, double y1, double z0, double z1);


  // virtual void SetWholeBoundingBox (double bb[6]);
/// <summary>
/// <para>Set/Get the whole bounding box of this data object.   The whole whole bounding box is meta data for data sets It gets set by the source during the update information call.</para>
/// </summary>
  void SetWholeBoundingBox(array<double>^ bb);


// Did not wrap:  virtual double *GetWholeBoundingBox ();


  // virtual void GetWholeBoundingBox (double &x0, double &x1, double &y0, double &y1, double &z0, double &z1);
/// <summary>
/// <para>Set/Get the whole bounding box of this data object.   The whole whole bounding box is meta data for data sets It gets set by the source during the update information call.</para>
/// </summary>
  void GetWholeBoundingBox(double% x0, double% x1, double% y0, double% y1, double% z0, double% z1);


  // virtual void GetWholeBoundingBox (double extent[6]);
/// <summary>
/// <para>Set/Get the whole bounding box of this data object.   The whole whole bounding box is meta data for data sets It gets set by the source during the update information call.</para>
/// </summary>
  void GetWholeBoundingBox(array<double>^ extent);


  // virtual void SetMaximumNumberOfPieces (int );
/// <summary>
/// <para>Set/Get the maximum number of pieces that can be requested.   The maximum number of pieces is meta data for unstructured data sets. It gets set by the source during the update information call. A value of -1 indicates that there is no maximum.  A value of</para>
/// </summary>
  void SetMaximumNumberOfPieces(int arg0);


  // virtual int GetMaximumNumberOfPieces ();
/// <summary>
/// <para>Set/Get the maximum number of pieces that can be requested.   The maximum number of pieces is meta data for unstructured data sets. It gets set by the source during the update information call. A value of -1 indicates that there is no maximum.  A value of</para>
/// </summary>
  int GetMaximumNumberOfPieces();


  // virtual void CopyInformationToPipeline (vtkInformation *request, vtkInformation *input);
/// <summary>
/// <para>Copy information about this data object to its PipelineInformation from its own Information for the given request.  If the second argument is not NULL then it is the pipeline information object for the input to this data object's producer.</para>
/// </summary>
  void CopyInformationToPipeline(vtkInformation^ request, vtkInformation^ input);


  // virtual void CopyInformationFromPipeline (vtkInformation *request);
/// <summary>
/// <para>Copy information about this data object from the PipelineInformation to its own Information for the given request.</para>
/// </summary>
  void CopyInformationFromPipeline(vtkInformation^ request);


  // static vtkInformation *GetActiveFieldInformation (vtkInformation *info, int fieldAssociation, int attributeType);
/// <summary>
/// <para>Return the information object within the input information object's field data corresponding to the specified association  (FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and attribute (SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS)</para>
/// </summary>
  static vtkInformation^ GetActiveFieldInformation(vtkInformation^ info, int fieldAssociation, int attributeType);


  // static vtkInformation *GetNamedFieldInformation (vtkInformation *info, int fieldAssociation, const char *name);
/// <summary>
/// <para>Return the information object within the input information object's field data corresponding to the specified association  (FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and name.</para>
/// </summary>
  static vtkInformation^ GetNamedFieldInformation(vtkInformation^ info, int fieldAssociation, System::String^ name);


  // static void RemoveNamedFieldInformation (vtkInformation *info, int fieldAssociation, const char *name);
/// <summary>
/// <para>Remove the info associated with an array</para>
/// </summary>
  static void RemoveNamedFieldInformation(vtkInformation^ info, int fieldAssociation, System::String^ name);


  // static vtkInformation *SetActiveAttribute (vtkInformation *info, int fieldAssociation, const char *attributeName, int attributeType);
/// <summary>
/// <para>Set the named array to be the active field for the specified type (SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS) and association (FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  Returns the  active field information object and creates on entry if one not found.</para>
/// </summary>
  static vtkInformation^ SetActiveAttribute(vtkInformation^ info, int fieldAssociation, System::String^ attributeName, int attributeType);


  // static void SetActiveAttributeInfo (vtkInformation *info, int fieldAssociation, int attributeType, const char *name, int arrayType, int numComponents, int numTuples);
/// <summary>
/// <para>Set the name, array type, number of components, and number of tuples within the passed information object for the active attribute of type attributeType (in specified association, FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  If there is not an active attribute of the specified type, an entry in the information object is created.  If arrayType, numComponents, or numTuples equal to -1, or name=NULL the  value is not changed.</para>
/// </summary>
  static void SetActiveAttributeInfo(vtkInformation^ info, int fieldAssociation, int attributeType, System::String^ name, int arrayType, int numComponents, int numTuples);


  // static void SetPointDataActiveScalarInfo (vtkInformation *info, int arrayType, int numComponents);
/// <summary>
/// <para>Convenience version of previous method for use (primarily) by the Imaging filters. If arrayType or numComponents == -1, the value is not changed.</para>
/// </summary>
  static void SetPointDataActiveScalarInfo(vtkInformation^ info, int arrayType, int numComponents);


  // void DataHasBeenGenerated ();
/// <summary>
/// <para>This method is called by the source when it executes to generate data. It is sort of the opposite of ReleaseData. It sets the DataReleased flag to 0, and sets a new UpdateTime.</para>
/// </summary>
  void DataHasBeenGenerated();


  // virtual void PrepareForNewData ();this Initialize 
/// <summary>
/// <para>make the output data ready for new data to be inserted. For most  objects we just call Initialize. But for vtkImageData we leave the old data in case the memory can be reused.</para>
/// </summary>
  void PrepareForNewData();


  // virtual void ShallowCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.  These copy the data, but not any of the  pipeline connections.</para>
/// </summary>
  void ShallowCopy(vtkDataObject^ src);


  // virtual void DeepCopy (vtkDataObject *src);
/// <summary>
/// <para>Shallow and Deep copy.  These copy the data, but not any of the  pipeline connections.</para>
/// </summary>
  void DeepCopy(vtkDataObject^ src);


  // void SetExtentTranslator (vtkExtentTranslator *translator);
/// <summary>
/// <para>An object that will translate pieces into structured extents.</para>
/// </summary>
  void SetExtentTranslator(vtkExtentTranslator^ translator);


  // vtkExtentTranslator *GetExtentTranslator ();
/// <summary>
/// <para>An object that will translate pieces into structured extents.</para>
/// </summary>
  vtkExtentTranslator^ GetExtentTranslator();


  // virtual int GetExtentType ();return VTK_PIECES_EXTENT 
/// <summary>
/// <para>The ExtentType will be left as VTK_PIECES_EXTENT for data objects  such as vtkPolyData and vtkUnstructuredGrid. The ExtentType will be  changed to VTK_3D_EXTENT for data objects with 3D structure such as  vtkImageData (and its subclass vtkStructuredPoints), vtkRectilinearGrid, and vtkStructuredGrid. The default is the have an extent in pieces, with only one piece (no streaming possible).</para>
/// </summary>
  int GetExtentType();


  // virtual void Crop ();
/// <summary>
/// <para>This method crops the data object (if necesary) so that the extent matches the update extent.</para>
/// </summary>
  void Crop();


  // static const char *GetAssociationTypeAsString (int associationType);
/// <summary>
/// <para>Given an integer association type, this static method returns a string type for the attribute (i.e. type = 0: returns &quot;Points&quot;).</para>
/// </summary>
  static System::String^ GetAssociationTypeAsString(int associationType);


  // static vtkInformationStringKey *DATA_TYPE_NAME ();
  static vtkInformationStringKey^ DATA_TYPE_NAME();


  // static vtkInformationDataObjectKey *DATA_OBJECT ();
  static vtkInformationDataObjectKey^ DATA_OBJECT();


  // static vtkInformationIntegerKey *DATA_EXTENT_TYPE ();
  static vtkInformationIntegerKey^ DATA_EXTENT_TYPE();


  // static vtkInformationIntegerPointerKey *DATA_EXTENT ();
  static vtkInformationIntegerPointerKey^ DATA_EXTENT();


  // static vtkInformationIntegerKey *DATA_PIECE_NUMBER ();
  static vtkInformationIntegerKey^ DATA_PIECE_NUMBER();


  // static vtkInformationIntegerKey *DATA_NUMBER_OF_PIECES ();
  static vtkInformationIntegerKey^ DATA_NUMBER_OF_PIECES();


  // static vtkInformationIntegerKey *DATA_NUMBER_OF_GHOST_LEVELS ();
  static vtkInformationIntegerKey^ DATA_NUMBER_OF_GHOST_LEVELS();


  // static vtkInformationIntegerKey *DATA_TIME_INDEX ();
  static vtkInformationIntegerKey^ DATA_TIME_INDEX();


  // static vtkInformationDoubleKey *DATA_TIME ();
  static vtkInformationDoubleKey^ DATA_TIME();


  // static vtkInformationInformationVectorKey *POINT_DATA_VECTOR ();
  static vtkInformationInformationVectorKey^ POINT_DATA_VECTOR();


  // static vtkInformationInformationVectorKey *CELL_DATA_VECTOR ();
  static vtkInformationInformationVectorKey^ CELL_DATA_VECTOR();


  // static vtkInformationIntegerKey *FIELD_ARRAY_TYPE ();
  static vtkInformationIntegerKey^ FIELD_ARRAY_TYPE();


  // static vtkInformationIntegerKey *FIELD_ASSOCIATION ();
  static vtkInformationIntegerKey^ FIELD_ASSOCIATION();


  // static vtkInformationIntegerKey *FIELD_ATTRIBUTE_TYPE ();
  static vtkInformationIntegerKey^ FIELD_ATTRIBUTE_TYPE();


  // static vtkInformationIntegerKey *FIELD_ACTIVE_ATTRIBUTE ();
  static vtkInformationIntegerKey^ FIELD_ACTIVE_ATTRIBUTE();


  // static vtkInformationIntegerKey *FIELD_NUMBER_OF_COMPONENTS ();
  static vtkInformationIntegerKey^ FIELD_NUMBER_OF_COMPONENTS();


  // static vtkInformationIntegerKey *FIELD_NUMBER_OF_TUPLES ();
  static vtkInformationIntegerKey^ FIELD_NUMBER_OF_TUPLES();


  // static vtkInformationIntegerKey *FIELD_OPERATION ();
  static vtkInformationIntegerKey^ FIELD_OPERATION();


  // static vtkInformationStringKey *FIELD_NAME ();
  static vtkInformationStringKey^ FIELD_NAME();


  // static vtkInformationDoubleVectorKey *ORIGIN ();
  static vtkInformationDoubleVectorKey^ ORIGIN();


  // static vtkInformationDoubleVectorKey *SPACING ();
  static vtkInformationDoubleVectorKey^ SPACING();


// Did not wrap:  vtkDataObject ();


// Did not wrap:  ~vtkDataObject ();


// Did not wrap:  vtkExecutive *GetExecutive ();


// Did not wrap:  int GetPortNumber ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  void InternalDataObjectCopy (vtkDataObject *src);


// Did not wrap:  vtkDataObject (const vtkDataObject &);


// Did not wrap:  void vtkDataObject 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataObject(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataObject(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataObject();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataObject();


};

} // end vtkFiltering
