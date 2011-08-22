#pragma once

// managed includes
#include "vtkInformationKeyDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkInformation;
ref class vtkInformationVector;

public ref class vtkInformationInformationVectorKey : public vtkInformationKey
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInformationInformationVectorKey *NewInstance ();
  vtkInformationInformationVectorKey^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkInformationInformationVectorKey (const char *name, const char *location);


// Did not wrap:  ~vtkInformationInformationVectorKey ();


  // void Set (vtkInformation *info, vtkInformationVector *);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  void Set(vtkInformation^ info, vtkInformationVector^ arg1);


  // vtkInformationVector *Get (vtkInformation *info);
/// <summary>
/// <para>Get/Set the value associated with this key in the given information object.</para>
/// </summary>
  vtkInformationVector^ Get(vtkInformation^ info);


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


  // virtual void DeepCopy (vtkInformation *from, vtkInformation *to);
/// <summary>
/// <para>Duplicate (new instance created) the entry associated with this key from one information object to another (new instances of any contained vtkInformation and vtkInformationVector objects are created).  </para>
/// </summary>
  void DeepCopy(vtkInformation^ from, vtkInformation^ to);


  // virtual void Report (vtkInformation *info, vtkGarbageCollector *collector);
/// <summary>
/// <para>Report a reference this key has in the given information object.</para>
/// </summary>
  void Report(vtkInformation^ info, vtkGarbageCollector^ collector);


// Did not wrap:  vtkInformationInformationVectorKey (const vtkInformationInformationVectorKey &);


// Did not wrap:  void vtkInformationInformationVectorKey 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInformationInformationVectorKey(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInformationInformationVectorKey(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInformationInformationVectorKey();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInformationInformationVectorKey();


};

} // end vtkFiltering
