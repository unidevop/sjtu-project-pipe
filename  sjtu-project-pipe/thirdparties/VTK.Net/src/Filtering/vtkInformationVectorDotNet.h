#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkInformation;

public ref class vtkInformationVector : public vtkObject
{

public:
// Did not wrap:  static vtkInformationVector *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInformationVector *NewInstance ();
  vtkInformationVector^ NewInstance();


  // vtkInformationVector *SafeDownCast (vtkObject* o);
  static vtkInformationVector^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // int GetNumberOfInformationObjects ();return this NumberOfInformationObjects 
/// <summary>
/// <para>Get/Set the number of information objects in the vector.  Setting the number to larger than the current number will create empty vtkInformation instances.  Setting the number to smaller than the current number will remove entries from higher indices.</para>
/// </summary>
  int GetNumberOfInformationObjects();


  // void SetNumberOfInformationObjects (int n);
/// <summary>
/// <para>Get/Set the number of information objects in the vector.  Setting the number to larger than the current number will create empty vtkInformation instances.  Setting the number to smaller than the current number will remove entries from higher indices.</para>
/// </summary>
  void SetNumberOfInformationObjects(int n);


  // void SetInformationObject (int index, vtkInformation *info);
/// <summary>
/// <para>Get/Set the vtkInformation instance stored at the given index in the vector.  The vector will automatically expand to include the index given if necessary.  Missing entries in-between will be filled with empty vtkInformation instances.</para>
/// </summary>
  void SetInformationObject(int index, vtkInformation^ info);


  // vtkInformation *GetInformationObject (int index);
/// <summary>
/// <para>Get/Set the vtkInformation instance stored at the given index in the vector.  The vector will automatically expand to include the index given if necessary.  Missing entries in-between will be filled with empty vtkInformation instances.</para>
/// </summary>
  vtkInformation^ GetInformationObject(int index);


  // void Append (vtkInformation *info);
/// <summary>
/// <para>Append/Remove an information object.</para>
/// </summary>
  void Append(vtkInformation^ info);


  // void Remove (vtkInformation *info);
/// <summary>
/// <para>Append/Remove an information object.</para>
/// </summary>
  void Remove(vtkInformation^ info);


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


  // void Copy (vtkInformationVector *from, int deep);
/// <summary>
/// <para>Copy all information entries from the given vtkInformation instance.  Any previously existing entries are removed.  If  deep==1, a deep copy of the information structure is performed (new  instances of any contained vtkInformation and vtkInformationVector  objects are created).</para>
/// </summary>
  void Copy(vtkInformationVector^ from, int deep);


// Did not wrap:  vtkInformationVector ();


// Did not wrap:  ~vtkInformationVector ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkInformationVector (const vtkInformationVector &);


// Did not wrap:  void vtkInformationVector 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInformationVector(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInformationVector(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInformationVector();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInformationVector();


};

} // end vtkFiltering
