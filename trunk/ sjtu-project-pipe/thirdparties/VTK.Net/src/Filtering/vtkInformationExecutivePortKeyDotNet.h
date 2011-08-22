#pragma once

// managed includes
#include "vtkInformationKeyDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkExecutive;
ref class vtkInformation;

public ref class vtkInformationExecutivePortKey : public vtkInformationKey
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInformationExecutivePortKey *NewInstance ();
  vtkInformationExecutivePortKey^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkInformationExecutivePortKey (const char *name, const char *location);


// Did not wrap:  ~vtkInformationExecutivePortKey ();


  // void Set (vtkInformation *info, vtkExecutive *, int );
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  void Set(vtkInformation^ info, vtkExecutive^ arg1, int arg2);


  // vtkExecutive *GetExecutive (vtkInformation *info);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  vtkExecutive^ GetExecutive(vtkInformation^ info);


  // int GetPort (vtkInformation *info);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  int GetPort(vtkInformation^ info);


// Did not wrap:  void Get (vtkInformation *info, vtkExecutive &executive, int &port);


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


  // virtual void Report (vtkInformation *info, vtkGarbageCollector *collector);
/// <summary>
/// <para>Report a reference this key has in the given information object.</para>
/// </summary>
  void Report(vtkInformation^ info, vtkGarbageCollector^ collector);


// Did not wrap:  virtual void Print (ostream &os, vtkInformation *info);


// Did not wrap:  vtkInformationExecutivePortKey (const vtkInformationExecutivePortKey &);


// Did not wrap:  void vtkInformationExecutivePortKey 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInformationExecutivePortKey(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInformationExecutivePortKey(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInformationExecutivePortKey();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInformationExecutivePortKey();


};

} // end vtkFiltering
