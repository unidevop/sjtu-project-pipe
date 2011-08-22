#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkInformation;

public ref class vtkInformationKey : public vtkObjectBase
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInformationKey *NewInstance ();
  vtkInformationKey^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void Register (vtkObjectBase *);
/// <summary>
/// <para>Prevent normal vtkObject reference counting behavior.</para>
/// </summary>
  void Register(vtkObjectBase^ arg0);


  // virtual void UnRegister (vtkObjectBase *);
/// <summary>
/// <para>Prevent normal vtkObject reference counting behavior.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ arg0);


  // const char *GetName ();
/// <summary>
/// <para>Get the name of the key.  This is not the type of the key, but the name of the key instance.</para>
/// </summary>
  System::String^ GetName();


  // const char *GetLocation ();
/// <summary>
/// <para>Get the location of the key.  This is the name of the class in which the key is defined.</para>
/// </summary>
  System::String^ GetLocation();


// Did not wrap:  vtkInformationKey (const char *name, const char *location);


// Did not wrap:  ~vtkInformationKey ();


  // virtual void ShallowCopy (vtkInformation *from, vtkInformation *to) = 0;
/// <summary>
/// <para>Copy the entry associated with this key from one information object to another.  If there is no entry in the first information object for this key, the value is removed from the second.</para>
/// </summary>
  void ShallowCopy(vtkInformation^ from, vtkInformation^ to);


  // virtual void DeepCopy (vtkInformation *, vtkInformation *);
/// <summary>
/// <para>Remove this key from the given information object.</para>
/// </summary>
  void DeepCopy(vtkInformation^ arg0, vtkInformation^ arg1);


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


  // void Print (vtkInformation *info);
/// <summary>
/// <para>Print the key's value in an information object to a stream.</para>
/// </summary>
  void Print(vtkInformation^ info);


// Did not wrap:  virtual void Print (ostream &os, vtkInformation *info);


// Did not wrap:  void SetAsObjectBase (vtkInformation *info, vtkObjectBase *value);


// Did not wrap:  vtkObjectBase *GetAsObjectBase (vtkInformation *info);


// Did not wrap:  void ReportAsObjectBase (vtkInformation *info, vtkGarbageCollector *collector);


// Did not wrap:  void ConstructClass (const char *);


// Did not wrap:  vtkInformationKey (const vtkInformationKey &);


// Did not wrap:  void vtkInformationKey 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInformationKey(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInformationKey(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInformationKey();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInformationKey();


};

} // end vtkFiltering
