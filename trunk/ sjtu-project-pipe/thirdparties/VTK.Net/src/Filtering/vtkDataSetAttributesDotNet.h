#pragma once

// managed includes
#include "vtkFieldDataDotNet.h"
#include "vtkFieldDataDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataSetAttributes : public vtkFieldData
{

public:
// Did not wrap:  static vtkDataSetAttributes *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetAttributes *NewInstance ();
  vtkDataSetAttributes^ NewInstance();


  // vtkDataSetAttributes *SafeDownCast (vtkObject* o);
  static vtkDataSetAttributes^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Initialize ();
/// <summary>
/// <para>Initialize all of the object's data to NULL Also, clear the copy flags.</para>
/// </summary>
  void Initialize();


  // virtual void Update ();
/// <summary>
/// <para>Pass entire arrays of input data through to output. Obey the &quot;copy&quot; flags. When passing a field,  the following copying rules are  followed: 1) Check if a field is an attribute, if yes and if there is a copy flag for that attribute (on or off), obey the  flag for  that attribute, ignore (2) and (3), 2) if there is a copy field for that field (on or off), obey the flag, ignore (3) 3) obey CopyAllOn/Off</para>
/// </summary>
  void Update();


  // virtual void PassData (vtkFieldData *fd);
/// <summary>
/// <para>Pass entire arrays of input data through to output. Obey the &quot;copy&quot; flags. When passing a field,  the following copying rules are  followed: 1) Check if a field is an attribute, if yes and if there is a copy flag for that attribute (on or off), obey the  flag for  that attribute, ignore (2) and (3), 2) if there is a copy field for that field (on or off), obey the flag, ignore (3) 3) obey CopyAllOn/Off</para>
/// </summary>
  void PassData(vtkFieldData^ fd);


  // void CopyAllocate (vtkDataSetAttributes *pd, vtkIdType sze, vtkIdType ext);
/// <summary>
/// <para>Allocates point data for point-by-point (or cell-by-cell) copy operation. If sze=0, then use the input DataSetAttributes to create (i.e., find  initial size of) new objects; otherwise use the sze variable. Note that pd HAS to be the vtkDataSetAttributes object which will later be used with CopyData. If this is not the case, consider using the alternative forms of CopyAllocate and CopyData. ext is no longer used.</para>
/// </summary>
  void CopyAllocate(vtkDataSetAttributes^ pd, int sze, int ext);


  // void CopyData (vtkDataSetAttributes *fromPd, vtkIdType fromId, vtkIdType toId);
/// <summary>
/// <para>Copy the attribute data from one id to another. Make sure CopyAllocate() has been invoked before using this method. When copying a field,   the following copying rules are  followed: 1) Check if a field is an attribute, if yes and if there is a copy flag for that attribute (on or off), obey the  flag for  that attribute, ignore (2) and (3), 2) if there is a copy field for that field (on or off), obey the flag, ignore (3) 3) obey CopyAllOn/Off</para>
/// </summary>
  void CopyData(vtkDataSetAttributes^ fromPd, int fromId, int toId);


  // void InterpolateAllocate (vtkDataSetAttributes *pd, vtkIdType sze, vtkIdType ext);
/// <summary>
/// <para>Initialize point interpolation method. Note that pd HAS to be the vtkDataSetAttributes object which will later be used with InterpolatePoint or InterpolateEdge. ext is no longer used.</para>
/// </summary>
  void InterpolateAllocate(vtkDataSetAttributes^ pd, int sze, int ext);


  // void CopyStructuredData (vtkDataSetAttributes *inDsa, const int *inExt, const int *outExt);
/// <summary>
/// <para>This method is used to copy data arrays in images. You should not call &quot;CopyAllocate&quot; before calling this method. This method is called once to copy all of the data. If the two extents are the same, this method calls &quot;PassData&quot;.</para>
/// </summary>
  void CopyStructuredData(vtkDataSetAttributes^ inDsa, array<int>^ arg1, array<int>^ arg2);


  // void InterpolatePoint (vtkDataSetAttributes *fromPd, vtkIdType toId, vtkIdList *ids, double *weights);
/// <summary>
/// <para>Interpolate data set attributes from other data set attributes given cell or point ids and associated interpolation weights.</para>
/// </summary>
  void InterpolatePoint(vtkDataSetAttributes^ fromPd, int toId, vtkIdList^ ids, array<double>^ weights);


  // void InterpolateEdge (vtkDataSetAttributes *fromPd, vtkIdType toId, vtkIdType p1, vtkIdType p2, double t);
/// <summary>
/// <para>Interpolate data from the two points p1,p2 (forming an edge) and an  interpolation factor, t, along the edge. The weight ranges from (0,1),  with t=0 located at p1. Make sure that the method InterpolateAllocate()  has been invoked before using this method.</para>
/// </summary>
  void InterpolateEdge(vtkDataSetAttributes^ fromPd, int toId, int p1, int p2, double t);


  // void InterpolateTime (vtkDataSetAttributes *from1, vtkDataSetAttributes *from2, vtkIdType id, double t);
/// <summary>
/// <para>Interpolate data from the same id (point or cell) at different points in time (parameter t). Two input data set attributes objects are input. The parameter t lies between (0&lt;=t&lt;=1). IMPORTANT: it is assumed that the number of attributes and number of components is the same for both from1 and from2, and the type of data for from1 and from2 are the same. Make sure that the method InterpolateAllocate() has been invoked before  using this method.</para>
/// </summary>
  void InterpolateTime(vtkDataSetAttributes^ from1, vtkDataSetAttributes^ from2, int id, double t);


  // virtual void DeepCopy (vtkFieldData *pd);
/// <summary>
/// <para>Deep copy of data (i.e., create new data arrays and copy from input data).</para>
/// </summary>
  void DeepCopy(vtkFieldData^ pd);


  // virtual void ShallowCopy (vtkFieldData *pd);
/// <summary>
/// <para>Shallow copy of data (i.e., use reference counting).</para>
/// </summary>
  void ShallowCopy(vtkFieldData^ pd);


  // int SetScalars (vtkDataArray *da);
/// <summary>
/// <para>Set/Get the scalar data.</para>
/// </summary>
  int SetScalars(vtkDataArray^ da);


  // int SetActiveScalars (const char *name);
/// <summary>
/// <para>Set/Get the scalar data.</para>
/// </summary>
  int SetActiveScalars(System::String^ name);


  // vtkDataArray *GetScalars ();
/// <summary>
/// <para>Set/Get the scalar data.</para>
/// </summary>
  vtkDataArray^ GetScalars();


  // int SetVectors (vtkDataArray *da);
/// <summary>
/// <para>Set/Get the vector data.</para>
/// </summary>
  int SetVectors(vtkDataArray^ da);


  // int SetActiveVectors (const char *name);
/// <summary>
/// <para>Set/Get the vector data.</para>
/// </summary>
  int SetActiveVectors(System::String^ name);


  // vtkDataArray *GetVectors ();
/// <summary>
/// <para>Set/Get the vector data.</para>
/// </summary>
  vtkDataArray^ GetVectors();


  // int SetNormals (vtkDataArray *da);
/// <summary>
/// <para>Set/get the normal data.</para>
/// </summary>
  int SetNormals(vtkDataArray^ da);


  // int SetActiveNormals (const char *name);
/// <summary>
/// <para>Set/get the normal data.</para>
/// </summary>
  int SetActiveNormals(System::String^ name);


  // vtkDataArray *GetNormals ();
/// <summary>
/// <para>Set/get the normal data.</para>
/// </summary>
  vtkDataArray^ GetNormals();


  // int SetTCoords (vtkDataArray *da);
/// <summary>
/// <para>Set/Get the texture coordinate data.</para>
/// </summary>
  int SetTCoords(vtkDataArray^ da);


  // int SetActiveTCoords (const char *name);
/// <summary>
/// <para>Set/Get the texture coordinate data.</para>
/// </summary>
  int SetActiveTCoords(System::String^ name);


  // vtkDataArray *GetTCoords ();
/// <summary>
/// <para>Set/Get the texture coordinate data.</para>
/// </summary>
  vtkDataArray^ GetTCoords();


  // int SetTensors (vtkDataArray *da);
/// <summary>
/// <para>Set/Get the tensor data.</para>
/// </summary>
  int SetTensors(vtkDataArray^ da);


  // int SetActiveTensors (const char *name);
/// <summary>
/// <para>Set/Get the tensor data.</para>
/// </summary>
  int SetActiveTensors(System::String^ name);


  // vtkDataArray *GetTensors ();
/// <summary>
/// <para>Set/Get the tensor data.</para>
/// </summary>
  vtkDataArray^ GetTensors();


  // vtkDataArray *GetScalars (const char *name);
/// <summary>
/// <para>This will first look for an array with the correct name. If one exists, it is returned. Otherwise, the name argument is ignored, and the active attribute is returned.</para>
/// </summary>
  vtkDataArray^ GetScalars(System::String^ name);


  // vtkDataArray *GetVectors (const char *name);
/// <summary>
/// <para>This will first look for an array with the correct name. If one exists, it is returned. Otherwise, the name argument is ignored, and the active attribute is returned.</para>
/// </summary>
  vtkDataArray^ GetVectors(System::String^ name);


  // vtkDataArray *GetNormals (const char *name);
/// <summary>
/// <para>This will first look for an array with the correct name. If one exists, it is returned. Otherwise, the name argument is ignored, and the active attribute is returned.</para>
/// </summary>
  vtkDataArray^ GetNormals(System::String^ name);


  // vtkDataArray *GetTCoords (const char *name);
/// <summary>
/// <para>This will first look for an array with the correct name. If one exists, it is returned. Otherwise, the name argument is ignored, and the active attribute is returned.</para>
/// </summary>
  vtkDataArray^ GetTCoords(System::String^ name);


  // vtkDataArray *GetTensors (const char *name);
/// <summary>
/// <para>This will first look for an array with the correct name. If one exists, it is returned. Otherwise, the name argument is ignored, and the active attribute is returned.</para>
/// </summary>
  vtkDataArray^ GetTensors(System::String^ name);


  // int SetActiveAttribute (const char *name, int attributeType);
/// <summary>
/// <para>Make the array with the given name the active attribute. Attribute types are:  vtkDataSetAttributes::SCALARS = 0  vtkDataSetAttributes::VECTORS = 1  vtkDataSetAttributes::NORMALS = 2  vtkDataSetAttributes::TCOORDS = 3  vtkDataSetAttributes::TENSORS = 4 Returns the index of the array if succesful, -1 if the array  is not in the list of arrays.</para>
/// </summary>
  int SetActiveAttribute(System::String^ name, int attributeType);


  // int SetActiveAttribute (int index, int attributeType);
/// <summary>
/// <para>Make the array with the given index the active attribute.</para>
/// </summary>
  int SetActiveAttribute(int index, int attributeType);


  // void SetCopyAttribute (int index, int value);
/// <summary>
/// <para>Specify whether to copy the data attribute referred to by index i.</para>
/// </summary>
  void SetCopyAttribute(int index, int value);


  // void SetCopyScalars (int i);
/// <summary>
/// <para>Turn on/off the copying of scalar data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void SetCopyScalars(int i);


  // int GetCopyScalars ();
/// <summary>
/// <para>Turn on/off the copying of scalar data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  int GetCopyScalars();


  // void CopyScalarsOn ();
/// <summary>
/// <para>Turn on/off the copying of scalar data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyScalarsOn();


  // void CopyScalarsOff ();
/// <summary>
/// <para>Turn on/off the copying of scalar data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyScalarsOff();


  // void SetCopyVectors (int i);
/// <summary>
/// <para>Turn on/off the copying of vector data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void SetCopyVectors(int i);


  // int GetCopyVectors ();
/// <summary>
/// <para>Turn on/off the copying of vector data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  int GetCopyVectors();


  // void CopyVectorsOn ();
/// <summary>
/// <para>Turn on/off the copying of vector data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyVectorsOn();


  // void CopyVectorsOff ();
/// <summary>
/// <para>Turn on/off the copying of vector data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyVectorsOff();


  // void SetCopyNormals (int i);
/// <summary>
/// <para>Turn on/off the copying of normals data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void SetCopyNormals(int i);


  // int GetCopyNormals ();
/// <summary>
/// <para>Turn on/off the copying of normals data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  int GetCopyNormals();


  // void CopyNormalsOn ();
/// <summary>
/// <para>Turn on/off the copying of normals data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyNormalsOn();


  // void CopyNormalsOff ();
/// <summary>
/// <para>Turn on/off the copying of normals data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyNormalsOff();


  // void SetCopyTCoords (int i);
/// <summary>
/// <para>Turn on/off the copying of texture coordinates data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void SetCopyTCoords(int i);


  // int GetCopyTCoords ();
/// <summary>
/// <para>Turn on/off the copying of texture coordinates data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  int GetCopyTCoords();


  // void CopyTCoordsOn ();
/// <summary>
/// <para>Turn on/off the copying of texture coordinates data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyTCoordsOn();


  // void CopyTCoordsOff ();
/// <summary>
/// <para>Turn on/off the copying of texture coordinates data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyTCoordsOff();


  // void SetCopyTensors (int i);
/// <summary>
/// <para>Turn on/off the copying of tensor data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void SetCopyTensors(int i);


  // int GetCopyTensors ();
/// <summary>
/// <para>Turn on/off the copying of tensor data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  int GetCopyTensors();


  // void CopyTensorsOn ();
/// <summary>
/// <para>Turn on/off the copying of tensor data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyTensorsOn();


  // void CopyTensorsOff ();
/// <summary>
/// <para>Turn on/off the copying of tensor data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyTensorsOff();


  // virtual void CopyAllOn ();
/// <summary>
/// <para>Turn on copying of all data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyAllOn();


  // virtual void CopyAllOff ();
/// <summary>
/// <para>Turn off copying of all data. During the copy/pass, the following rules are followed for each array: 1. If the copy flag for an attribute is set (on or off), it is applied.    This overrides rules 2 and 3. 2. If the copy flag for an array is set (on or off), it is applied    This overrides rule 3. 3. If CopyAllOn is set, copy the array.    If CopyAllOff is set, do not copy the array</para>
/// </summary>
  void CopyAllOff();


  // void CopyTuple (vtkDataArray *fromData, vtkDataArray *toData, vtkIdType fromId, vtkIdType toId);
/// <summary>
/// <para>Copy a tuple of data from one data array to another. This method (and following ones) assume that the fromData and toData objects are of the same type, and have the same number of components. This is true if you invoke CopyAllocate() or InterpolateAllocate().</para>
/// </summary>
  void CopyTuple(vtkDataArray^ fromData, vtkDataArray^ toData, int fromId, int toId);


  // void GetAttributeIndices (int *indexArray);
/// <summary>
/// <para>Get the field data array indices corresponding to scalars,  vectors, tensors, etc.</para>
/// </summary>
  void GetAttributeIndices(array<int>^ indexArray);


  // int IsArrayAnAttribute (int idx);
/// <summary>
/// <para>Determine whether a data array of index idx is considered a data set attribute (i.e., scalar, vector, tensor, etc). Return less-than zero  if it is, otherwise an index 0&lt;=idx&lt;NUM_ATTRIBUTES to indicate  which attribute.</para>
/// </summary>
  int IsArrayAnAttribute(int idx);


  // vtkDataArray *GetAttribute (int attributeType);
/// <summary>
/// <para>Return an attribute given the attribute type (see vtkDataSetAttributes::AttributeTypes).</para>
/// </summary>
  vtkDataArray^ GetAttribute(int attributeType);


  // virtual void RemoveArray (const char *name);
/// <summary>
/// <para>Remove an array (with the given name) from the list of arrays.</para>
/// </summary>
  void RemoveArray(System::String^ name);


  // static const char *GetAttributeTypeAsString (int attributeType);
/// <summary>
/// <para>Given an integer attribute type, this static method returns a string type for the attribute (i.e. type = 0: returns &quot;Scalars&quot;).</para>
/// </summary>
  static System::String^ GetAttributeTypeAsString(int attributeType);


  // static const char *GetLongAttributeTypeAsString (int attributeType);
/// <summary>
/// <para>Given an integer attribute type, this static method returns a string type for the attribute (i.e. type = 0: returns &quot;Scalars&quot;).</para>
/// </summary>
  static System::String^ GetLongAttributeTypeAsString(int attributeType);


// Did not wrap:  vtkDataSetAttributes ();


// Did not wrap:  ~vtkDataSetAttributes ();


// Did not wrap:  void InterpolateTuple (vtkDataArray *fromData, vtkDataArray *toData, vtkIdType toId, vtkIdList *ptIds, double *weights);


// Did not wrap:  void InterpolateTuple (vtkDataArray *fromData, vtkDataArray *toData, vtkIdType toId, vtkIdType id1, vtkIdType id2, double t);


// Did not wrap:  void InterpolateTuple (vtkDataArray *fromData1, vtkDataArray *fromData2, vtkDataArray *toData, vtkIdType id, double t);


// Did not wrap:  virtual void InitializeFields ();


// Did not wrap:  virtual void RemoveArray (int index);


// Did not wrap:  int SetAttribute (vtkDataArray *da, int attributeType);


// Did not wrap:  static int CheckNumberOfComponents (vtkDataArray *da, int attributeType);


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetAttributes(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetAttributes(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetAttributes();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetAttributes();


};

} // end vtkFiltering
