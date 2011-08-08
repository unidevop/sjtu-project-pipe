#pragma once

// managed includes
#include "vtkInformationKeyDotNet.h"
#include "vtkInformationKeyDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkInformation;

public ref class vtkInformationKeyVectorKey : public vtkInformationKey
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInformationKeyVectorKey *NewInstance ();
  vtkInformationKeyVectorKey^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkInformationKeyVectorKey (const char *name, const char *location);


// Did not wrap:  ~vtkInformationKeyVectorKey ();


  // void Append (vtkInformation *info, vtkInformationKey *value);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  void Append(vtkInformation^ info, vtkInformationKey^ value);


  // void AppendUnique (vtkInformation *info, vtkInformationKey *value);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  void AppendUnique(vtkInformation^ info, vtkInformationKey^ value);


// Did not wrap:  void Set (vtkInformation *info, vtkInformationKey *value, int length);


  // void RemoveItem (vtkInformation *info, vtkInformationKey *value);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  void RemoveItem(vtkInformation^ info, vtkInformationKey^ value);


// Did not wrap:  vtkInformationKey *Get (vtkInformation *info);


// Did not wrap:  void Get (vtkInformation *info, vtkInformationKey *value);


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


// Did not wrap:  virtual void Print (ostream &os, vtkInformation *info);


// Did not wrap:  vtkInformationKeyVectorKey (const vtkInformationKeyVectorKey &);


// Did not wrap:  void vtkInformationKeyVectorKey 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInformationKeyVectorKey(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInformationKeyVectorKey(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInformationKeyVectorKey();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInformationKeyVectorKey();


};

} // end vtkFiltering
