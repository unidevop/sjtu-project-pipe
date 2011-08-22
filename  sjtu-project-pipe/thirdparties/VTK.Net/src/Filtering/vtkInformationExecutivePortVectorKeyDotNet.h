#pragma once

// managed includes
#include "vtkInformationKeyDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkExecutive;
ref class vtkInformation;

public ref class vtkInformationExecutivePortVectorKey : public vtkInformationKey
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInformationExecutivePortVectorKey *NewInstance ();
  vtkInformationExecutivePortVectorKey^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkInformationExecutivePortVectorKey (const char *name, const char *location);


// Did not wrap:  ~vtkInformationExecutivePortVectorKey ();


  // void Append (vtkInformation *info, vtkExecutive *executive, int port);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  void Append(vtkInformation^ info, vtkExecutive^ executive, int port);


  // void Remove (vtkInformation *info, vtkExecutive *executive, int port);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  void Remove(vtkInformation^ info, vtkExecutive^ executive, int port);


// Did not wrap:  void Set (vtkInformation *info, vtkExecutive *executives, int *ports, int length);


// Did not wrap:  vtkExecutive *GetExecutives (vtkInformation *info);


// Did not wrap:  int *GetPorts (vtkInformation *info);


// Did not wrap:  void Get (vtkInformation *info, vtkExecutive *executives, int *ports);


  // int Length (vtkInformation *info);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  int Length(vtkInformation^ info);


  // int Has (vtkInformation *info);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  int Has(vtkInformation^ info);


  // virtual void ShallowCopy (vtkInformation *from, vtkInformation *to);
/// <summary>
/// <para>Copy the entry associated with this key from one information object to another.  If there is no entry in the first information object for this key, the value is removed from the second.</para>
/// </summary>
  void ShallowCopy(vtkInformation^ from, vtkInformation^ to);


  // virtual void Remove (vtkInformation *info);
/// <summary>
/// <para>Remove this key from the given information object.</para>
/// </summary>
  void Remove(vtkInformation^ info);


  // virtual void Report (vtkInformation *info, vtkGarbageCollector *collector);
/// <summary>
/// <para>Report a reference this key has in the given information object.</para>
/// </summary>
  void Report(vtkInformation^ info, vtkGarbageCollector^ collector);


// Did not wrap:  virtual void Print (ostream &os, vtkInformation *info);


// Did not wrap:  vtkExecutive *GetExecutivesWatchAddress (vtkInformation *info);


// Did not wrap:  int *GetPortsWatchAddress (vtkInformation *info);


// Did not wrap:  vtkInformationExecutivePortVectorKey (const vtkInformationExecutivePortVectorKey &);


// Did not wrap:  void vtkInformationExecutivePortVectorKey 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInformationExecutivePortVectorKey(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInformationExecutivePortVectorKey(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInformationExecutivePortVectorKey();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInformationExecutivePortVectorKey();


};

} // end vtkFiltering
