#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;
ref class vtkExecutive;
ref class vtkInformationDataObjectKey;
ref class vtkInformationDoubleKey;
ref class vtkInformationDoubleVectorKey;
ref class vtkInformationExecutivePortKey;
ref class vtkInformationExecutivePortVectorKey;
ref class vtkInformationIdTypeKey;
ref class vtkInformationInformationKey;
ref class vtkInformationInformationVectorKey;
ref class vtkInformationIntegerKey;
ref class vtkInformationIntegerPointerKey;
ref class vtkInformationIntegerVectorKey;
ref class vtkInformationKey;
ref class vtkInformationKeyVectorKey;
ref class vtkInformationObjectBaseKey;
ref class vtkInformationRequestKey;
ref class vtkInformationStringKey;
ref class vtkInformationUnsignedLongKey;
ref class vtkInformationVector;

public ref class vtkInformation : public vtkObject
{

public:
// Did not wrap:  static vtkInformation *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInformation *NewInstance ();
  vtkInformation^ NewInstance();


  // vtkInformation *SafeDownCast (vtkObject* o);
  static vtkInformation^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Clear ();
/// <summary>
/// <para>Clear all information entries.</para>
/// </summary>
  void Clear();


  // void Copy (vtkInformation *from, int deep);
/// <summary>
/// <para>Copy all information entries from the given vtkInformation instance.  Any previously existing entries are removed.  If  deep==1, a deep copy of the information structure is performed (new  instances of any contained vtkInformation and vtkInformationVector  objects are created).</para>
/// </summary>
  void Copy(vtkInformation^ from, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationDataObjectKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationDataObjectKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationDoubleVectorKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationDoubleVectorKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationExecutivePortKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationExecutivePortKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationInformationKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationInformationKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationInformationVectorKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationInformationVectorKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationIntegerKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationIntegerKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationIntegerVectorKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationIntegerVectorKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationRequestKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationRequestKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationStringKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationStringKey^ key, int deep);


  // void CopyEntry (vtkInformation *from, vtkInformationUnsignedLongKey *key, int deep);
/// <summary>
/// <para>Copy the key/value pair associated with the given key in the given information object.  If deep=1, a deep copy of the information structure is performed (new instances of any contained vtkInformation and  vtkInformationVector objects are created).</para>
/// </summary>
  void CopyEntry(vtkInformation^ from, vtkInformationUnsignedLongKey^ key, int deep);


  // void CopyEntries (vtkInformation *from, vtkInformationKeyVectorKey *key, int deep);
/// <summary>
/// <para>Use the given key to lookup a list of other keys in the given information object.  The key/value pairs associated with these other keys will be copied.  If deep==1, a deep copy of the information structure is performed.</para>
/// </summary>
  void CopyEntries(vtkInformation^ from, vtkInformationKeyVectorKey^ key, int deep);


  // void Set (vtkInformationRequestKey *key);
/// <summary>
/// <para>Get/Set a request-valued entry.</para>
/// </summary>
  void Set(vtkInformationRequestKey^ key);


  // void Remove (vtkInformationRequestKey *key);
/// <summary>
/// <para>Get/Set a request-valued entry.</para>
/// </summary>
  void Remove(vtkInformationRequestKey^ key);


  // int Has (vtkInformationRequestKey *key);
/// <summary>
/// <para>Get/Set a request-valued entry.</para>
/// </summary>
  int Has(vtkInformationRequestKey^ key);


  // void Set (vtkInformationIntegerKey *key, int value);
/// <summary>
/// <para>Get/Set an integer-valued entry.</para>
/// </summary>
  void Set(vtkInformationIntegerKey^ key, int value);


  // int Get (vtkInformationIntegerKey *key);
/// <summary>
/// <para>Get/Set an integer-valued entry.</para>
/// </summary>
  int Get(vtkInformationIntegerKey^ key);


  // void Remove (vtkInformationIntegerKey *key);
/// <summary>
/// <para>Get/Set an integer-valued entry.</para>
/// </summary>
  void Remove(vtkInformationIntegerKey^ key);


  // int Has (vtkInformationIntegerKey *key);
/// <summary>
/// <para>Get/Set an integer-valued entry.</para>
/// </summary>
  int Has(vtkInformationIntegerKey^ key);


  // void Set (vtkInformationIdTypeKey *key, vtkIdType value);
/// <summary>
/// <para>Get/Set a vtkIdType-valued entry.</para>
/// </summary>
  void Set(vtkInformationIdTypeKey^ key, int value);


  // vtkIdType Get (vtkInformationIdTypeKey *key);
/// <summary>
/// <para>Get/Set a vtkIdType-valued entry.</para>
/// </summary>
  int Get(vtkInformationIdTypeKey^ key);


  // void Remove (vtkInformationIdTypeKey *key);
/// <summary>
/// <para>Get/Set a vtkIdType-valued entry.</para>
/// </summary>
  void Remove(vtkInformationIdTypeKey^ key);


  // int Has (vtkInformationIdTypeKey *key);
/// <summary>
/// <para>Get/Set a vtkIdType-valued entry.</para>
/// </summary>
  int Has(vtkInformationIdTypeKey^ key);


  // void Set (vtkInformationDoubleKey *key, double value);
/// <summary>
/// <para>Get/Set an double-valued entry.</para>
/// </summary>
  void Set(vtkInformationDoubleKey^ key, double value);


  // double Get (vtkInformationDoubleKey *key);
/// <summary>
/// <para>Get/Set an double-valued entry.</para>
/// </summary>
  double Get(vtkInformationDoubleKey^ key);


  // void Remove (vtkInformationDoubleKey *key);
/// <summary>
/// <para>Get/Set an double-valued entry.</para>
/// </summary>
  void Remove(vtkInformationDoubleKey^ key);


  // int Has (vtkInformationDoubleKey *key);
/// <summary>
/// <para>Get/Set an double-valued entry.</para>
/// </summary>
  int Has(vtkInformationDoubleKey^ key);


  // void Append (vtkInformationIntegerVectorKey *key, int value);
/// <summary>
/// <para>Get/Set an integer-vector-valued entry.</para>
/// </summary>
  void Append(vtkInformationIntegerVectorKey^ key, int value);


  // void Set (vtkInformationIntegerVectorKey *key, int *value, int length);
/// <summary>
/// <para>Get/Set an integer-vector-valued entry.</para>
/// </summary>
  void Set(vtkInformationIntegerVectorKey^ key, array<int>^ value, int length);


  // void Set (vtkInformationIntegerVectorKey *key, int value1, int value2, int value3);
/// <summary>
/// <para>Get/Set an integer-vector-valued entry.</para>
/// </summary>
  void Set(vtkInformationIntegerVectorKey^ key, int value1, int value2, int value3);


  // void Set (vtkInformationIntegerVectorKey *key, int value1, int value2, int value3, int value4, int value5, int value6);
/// <summary>
/// <para>Get/Set an integer-vector-valued entry.</para>
/// </summary>
  void Set(vtkInformationIntegerVectorKey^ key, int value1, int value2, int value3, int value4, int value5, int value6);


// Did not wrap:  int *Get (vtkInformationIntegerVectorKey *key);


  // void Get (vtkInformationIntegerVectorKey *key, int *value);
/// <summary>
/// <para>Get/Set an integer-vector-valued entry.</para>
/// </summary>
  void Get(vtkInformationIntegerVectorKey^ key, array<int>^ value);


  // int Length (vtkInformationIntegerVectorKey *key);
/// <summary>
/// <para>Get/Set an integer-vector-valued entry.</para>
/// </summary>
  int Length(vtkInformationIntegerVectorKey^ key);


  // void Remove (vtkInformationIntegerVectorKey *key);
/// <summary>
/// <para>Get/Set an integer-vector-valued entry.</para>
/// </summary>
  void Remove(vtkInformationIntegerVectorKey^ key);


  // int Has (vtkInformationIntegerVectorKey *key);
/// <summary>
/// <para>Get/Set an integer-vector-valued entry.</para>
/// </summary>
  int Has(vtkInformationIntegerVectorKey^ key);


  // void Set (vtkInformationIntegerPointerKey *key, int *value, int length);
/// <summary>
/// <para>Get/Set an integer-pointer-valued entry.</para>
/// </summary>
  void Set(vtkInformationIntegerPointerKey^ key, array<int>^ value, int length);


// Did not wrap:  int *Get (vtkInformationIntegerPointerKey *key);


  // void Get (vtkInformationIntegerPointerKey *key, int *value);
/// <summary>
/// <para>Get/Set an integer-pointer-valued entry.</para>
/// </summary>
  void Get(vtkInformationIntegerPointerKey^ key, array<int>^ value);


  // int Length (vtkInformationIntegerPointerKey *key);
/// <summary>
/// <para>Get/Set an integer-pointer-valued entry.</para>
/// </summary>
  int Length(vtkInformationIntegerPointerKey^ key);


  // void Remove (vtkInformationIntegerPointerKey *key);
/// <summary>
/// <para>Get/Set an integer-pointer-valued entry.</para>
/// </summary>
  void Remove(vtkInformationIntegerPointerKey^ key);


  // int Has (vtkInformationIntegerPointerKey *key);
/// <summary>
/// <para>Get/Set an integer-pointer-valued entry.</para>
/// </summary>
  int Has(vtkInformationIntegerPointerKey^ key);


  // void Set (vtkInformationUnsignedLongKey *key, unsigned long value);
/// <summary>
/// <para>Get/Set an unsigned-long-valued entry.</para>
/// </summary>
  void Set(vtkInformationUnsignedLongKey^ key, unsigned long value);


  // unsigned long Get (vtkInformationUnsignedLongKey *key);
/// <summary>
/// <para>Get/Set an unsigned-long-valued entry.</para>
/// </summary>
  unsigned long Get(vtkInformationUnsignedLongKey^ key);


  // void Remove (vtkInformationUnsignedLongKey *key);
/// <summary>
/// <para>Get/Set an unsigned-long-valued entry.</para>
/// </summary>
  void Remove(vtkInformationUnsignedLongKey^ key);


  // int Has (vtkInformationUnsignedLongKey *key);
/// <summary>
/// <para>Get/Set an unsigned-long-valued entry.</para>
/// </summary>
  int Has(vtkInformationUnsignedLongKey^ key);


  // void Append (vtkInformationDoubleVectorKey *key, double value);
/// <summary>
/// <para>Get/Set an double-vector-valued entry.</para>
/// </summary>
  void Append(vtkInformationDoubleVectorKey^ key, double value);


  // void Set (vtkInformationDoubleVectorKey *key, double *value, int length);
/// <summary>
/// <para>Get/Set an double-vector-valued entry.</para>
/// </summary>
  void Set(vtkInformationDoubleVectorKey^ key, array<double>^ value, int length);


  // void Set (vtkInformationDoubleVectorKey *key, double value1, double value2, double value3);
/// <summary>
/// <para>Get/Set an double-vector-valued entry.</para>
/// </summary>
  void Set(vtkInformationDoubleVectorKey^ key, double value1, double value2, double value3);


  // void Set (vtkInformationDoubleVectorKey *key, double value1, double value2, double value3, double value4, double value5, double value6);
/// <summary>
/// <para>Get/Set an double-vector-valued entry.</para>
/// </summary>
  void Set(vtkInformationDoubleVectorKey^ key, double value1, double value2, double value3, double value4, double value5, double value6);


// Did not wrap:  double *Get (vtkInformationDoubleVectorKey *key);


  // void Get (vtkInformationDoubleVectorKey *key, double *value);
/// <summary>
/// <para>Get/Set an double-vector-valued entry.</para>
/// </summary>
  void Get(vtkInformationDoubleVectorKey^ key, array<double>^ value);


  // int Length (vtkInformationDoubleVectorKey *key);
/// <summary>
/// <para>Get/Set an double-vector-valued entry.</para>
/// </summary>
  int Length(vtkInformationDoubleVectorKey^ key);


  // void Remove (vtkInformationDoubleVectorKey *key);
/// <summary>
/// <para>Get/Set an double-vector-valued entry.</para>
/// </summary>
  void Remove(vtkInformationDoubleVectorKey^ key);


  // int Has (vtkInformationDoubleVectorKey *key);
/// <summary>
/// <para>Get/Set an double-vector-valued entry.</para>
/// </summary>
  int Has(vtkInformationDoubleVectorKey^ key);


  // void Append (vtkInformationKeyVectorKey *key, vtkInformationKey *value);
/// <summary>
/// <para>Get/Set an InformationKey-vector-valued entry.</para>
/// </summary>
  void Append(vtkInformationKeyVectorKey^ key, vtkInformationKey^ value);


  // void AppendUnique (vtkInformationKeyVectorKey *key, vtkInformationKey *value);
/// <summary>
/// <para>Get/Set an InformationKey-vector-valued entry.</para>
/// </summary>
  void AppendUnique(vtkInformationKeyVectorKey^ key, vtkInformationKey^ value);


// Did not wrap:  void Set (vtkInformationKeyVectorKey *key, vtkInformationKey *value, int length);


  // void Remove (vtkInformationKeyVectorKey *key, vtkInformationKey *value);
/// <summary>
/// <para>Get/Set an InformationKey-vector-valued entry.</para>
/// </summary>
  void Remove(vtkInformationKeyVectorKey^ key, vtkInformationKey^ value);


// Did not wrap:  vtkInformationKey *Get (vtkInformationKeyVectorKey *key);


// Did not wrap:  void Get (vtkInformationKeyVectorKey *key, vtkInformationKey *value);


  // int Length (vtkInformationKeyVectorKey *key);
/// <summary>
/// <para>Get/Set an InformationKey-vector-valued entry.</para>
/// </summary>
  int Length(vtkInformationKeyVectorKey^ key);


  // void Remove (vtkInformationKeyVectorKey *key);
/// <summary>
/// <para>Get/Set an InformationKey-vector-valued entry.</para>
/// </summary>
  void Remove(vtkInformationKeyVectorKey^ key);


  // int Has (vtkInformationKeyVectorKey *key);
/// <summary>
/// <para>Get/Set an InformationKey-vector-valued entry.</para>
/// </summary>
  int Has(vtkInformationKeyVectorKey^ key);


  // void Set (vtkInformationStringKey *key, const char *);
/// <summary>
/// <para>Get/Set a string-valued entry.</para>
/// </summary>
  void Set(vtkInformationStringKey^ key, System::String^ arg1);


  // const char *Get (vtkInformationStringKey *key);
/// <summary>
/// <para>Get/Set a string-valued entry.</para>
/// </summary>
  System::String^ Get(vtkInformationStringKey^ key);


  // void Remove (vtkInformationStringKey *key);
/// <summary>
/// <para>Get/Set a string-valued entry.</para>
/// </summary>
  void Remove(vtkInformationStringKey^ key);


  // int Has (vtkInformationStringKey *key);
/// <summary>
/// <para>Get/Set a string-valued entry.</para>
/// </summary>
  int Has(vtkInformationStringKey^ key);


  // void Set (vtkInformationInformationKey *key, vtkInformation *);
/// <summary>
/// <para>Get/Set an entry storing another vtkInformation instance.</para>
/// </summary>
  void Set(vtkInformationInformationKey^ key, vtkInformation^ arg1);


  // vtkInformation *Get (vtkInformationInformationKey *key);
/// <summary>
/// <para>Get/Set an entry storing another vtkInformation instance.</para>
/// </summary>
  vtkInformation^ Get(vtkInformationInformationKey^ key);


  // void Remove (vtkInformationInformationKey *key);
/// <summary>
/// <para>Get/Set an entry storing another vtkInformation instance.</para>
/// </summary>
  void Remove(vtkInformationInformationKey^ key);


  // int Has (vtkInformationInformationKey *key);
/// <summary>
/// <para>Get/Set an entry storing another vtkInformation instance.</para>
/// </summary>
  int Has(vtkInformationInformationKey^ key);


  // void Set (vtkInformationInformationVectorKey *key, vtkInformationVector *);
/// <summary>
/// <para>Get/Set an entry storing a vtkInformationVector instance.</para>
/// </summary>
  void Set(vtkInformationInformationVectorKey^ key, vtkInformationVector^ arg1);


  // vtkInformationVector *Get (vtkInformationInformationVectorKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkInformationVector instance.</para>
/// </summary>
  vtkInformationVector^ Get(vtkInformationInformationVectorKey^ key);


  // void Remove (vtkInformationInformationVectorKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkInformationVector instance.</para>
/// </summary>
  void Remove(vtkInformationInformationVectorKey^ key);


  // int Has (vtkInformationInformationVectorKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkInformationVector instance.</para>
/// </summary>
  int Has(vtkInformationInformationVectorKey^ key);


  // void Set (vtkInformationObjectBaseKey *key, vtkObjectBase *);
/// <summary>
/// <para>Get/Set an entry storing a vtkObjectBase instance.</para>
/// </summary>
  void Set(vtkInformationObjectBaseKey^ key, vtkObjectBase^ arg1);


  // vtkObjectBase *Get (vtkInformationObjectBaseKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkObjectBase instance.</para>
/// </summary>
  vtkObjectBase^ Get(vtkInformationObjectBaseKey^ key);


  // void Remove (vtkInformationObjectBaseKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkObjectBase instance.</para>
/// </summary>
  void Remove(vtkInformationObjectBaseKey^ key);


  // int Has (vtkInformationObjectBaseKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkObjectBase instance.</para>
/// </summary>
  int Has(vtkInformationObjectBaseKey^ key);


  // void Set (vtkInformationDataObjectKey *key, vtkDataObject *);
/// <summary>
/// <para>Get/Set an entry storing a vtkDataObject instance.</para>
/// </summary>
  void Set(vtkInformationDataObjectKey^ key, vtkDataObject^ arg1);


  // vtkDataObject *Get (vtkInformationDataObjectKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkDataObject instance.</para>
/// </summary>
  vtkDataObject^ Get(vtkInformationDataObjectKey^ key);


  // void Remove (vtkInformationDataObjectKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkDataObject instance.</para>
/// </summary>
  void Remove(vtkInformationDataObjectKey^ key);


  // int Has (vtkInformationDataObjectKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkDataObject instance.</para>
/// </summary>
  int Has(vtkInformationDataObjectKey^ key);


  // void Set (vtkInformationExecutivePortKey *key, vtkExecutive *, int );
/// <summary>
/// <para>Get/Set an entry storing a vtkExecutive/port number pair.</para>
/// </summary>
  void Set(vtkInformationExecutivePortKey^ key, vtkExecutive^ arg1, int arg2);


  // vtkExecutive *GetExecutive (vtkInformationExecutivePortKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkExecutive/port number pair.</para>
/// </summary>
  vtkExecutive^ GetExecutive(vtkInformationExecutivePortKey^ key);


  // int GetPort (vtkInformationExecutivePortKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkExecutive/port number pair.</para>
/// </summary>
  int GetPort(vtkInformationExecutivePortKey^ key);


// Did not wrap:  void Get (vtkInformationExecutivePortKey *key, vtkExecutive &executive, int &port);


  // void Remove (vtkInformationExecutivePortKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkExecutive/port number pair.</para>
/// </summary>
  void Remove(vtkInformationExecutivePortKey^ key);


  // int Has (vtkInformationExecutivePortKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vtkExecutive/port number pair.</para>
/// </summary>
  int Has(vtkInformationExecutivePortKey^ key);


  // void Append (vtkInformationExecutivePortVectorKey *key, vtkExecutive *executive, int port);
/// <summary>
/// <para>Get/Set an entry storing a vector of vtkExecutive/port number pairs.</para>
/// </summary>
  void Append(vtkInformationExecutivePortVectorKey^ key, vtkExecutive^ executive, int port);


  // void Remove (vtkInformationExecutivePortVectorKey *key, vtkExecutive *executive, int port);
/// <summary>
/// <para>Get/Set an entry storing a vector of vtkExecutive/port number pairs.</para>
/// </summary>
  void Remove(vtkInformationExecutivePortVectorKey^ key, vtkExecutive^ executive, int port);


// Did not wrap:  void Set (vtkInformationExecutivePortVectorKey *key, vtkExecutive *executives, int *ports, int length);


// Did not wrap:  vtkExecutive *GetExecutives (vtkInformationExecutivePortVectorKey *key);


// Did not wrap:  int *GetPorts (vtkInformationExecutivePortVectorKey *key);


// Did not wrap:  void Get (vtkInformationExecutivePortVectorKey *key, vtkExecutive *executives, int *ports);


  // int Length (vtkInformationExecutivePortVectorKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vector of vtkExecutive/port number pairs.</para>
/// </summary>
  int Length(vtkInformationExecutivePortVectorKey^ key);


  // void Remove (vtkInformationExecutivePortVectorKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vector of vtkExecutive/port number pairs.</para>
/// </summary>
  void Remove(vtkInformationExecutivePortVectorKey^ key);


  // int Has (vtkInformationExecutivePortVectorKey *key);
/// <summary>
/// <para>Get/Set an entry storing a vector of vtkExecutive/port number pairs.</para>
/// </summary>
  int Has(vtkInformationExecutivePortVectorKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationDataObjectKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationDataObjectKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationDoubleKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationDoubleKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationDoubleVectorKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationDoubleVectorKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationExecutivePortKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationExecutivePortKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationInformationKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationInformationKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationInformationVectorKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationInformationVectorKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationIntegerKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationIntegerKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationIntegerVectorKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationIntegerVectorKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationRequestKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationRequestKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationStringKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationStringKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationKey^ key);


  // static vtkInformationKey *GetKey (vtkInformationUnsignedLongKey *key);
/// <summary>
/// <para>Upcast the given key instance.</para>
/// </summary>
  static vtkInformationKey^ GetKey(vtkInformationUnsignedLongKey^ key);


  // virtual void Register (vtkObjectBase *o);
/// <summary>
/// <para>Initiate garbage collection when a reference is removed.</para>
/// </summary>
  void Register(vtkObjectBase^ o);


  // virtual void UnRegister (vtkObjectBase *o);
/// <summary>
/// <para>Initiate garbage collection when a reference is removed.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ o);


  // void SetRequest (vtkInformationRequestKey *request);this Request request 
/// <summary>
/// <para>Get/Set the Request ivar</para>
/// </summary>
  void SetRequest(vtkInformationRequestKey^ request);


  // vtkInformationRequestKey *GetRequest ();return this Request 
  vtkInformationRequestKey^ GetRequest();


// Did not wrap:  vtkInformation ();


// Did not wrap:  ~vtkInformation ();


// Did not wrap:  void SetAsObjectBase (vtkInformationKey *key, vtkObjectBase *value);


// Did not wrap:  vtkObjectBase *GetAsObjectBase (vtkInformationKey *key);


// Did not wrap:  void ExpandTable ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  void ReportAsObjectBase (vtkInformationKey *key, vtkGarbageCollector *collector);


// Did not wrap:  vtkInformation (const vtkInformation &);


// Did not wrap:  void vtkInformation 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInformation(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInformation(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInformation();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInformation();


};

} // end vtkFiltering
