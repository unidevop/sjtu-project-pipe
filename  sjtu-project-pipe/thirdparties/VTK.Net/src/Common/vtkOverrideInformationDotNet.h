#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkObjectFactory;

public ref class vtkOverrideInformation : public vtkObject
{

public:
// Did not wrap:  static vtkOverrideInformation *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOverrideInformation *NewInstance ();
  vtkOverrideInformation^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassOverrideName ();return this ClassOverrideName 
/// <summary>
/// <para>Returns the name of the class that will override the class. For example, if you had a factory that provided an override for vtkVertex called vtkMyVertex, then this would return &quot;vtkMyVertex&quot;</para>
/// </summary>
  System::String^ GetClassOverrideName();


  // const char *GetClassOverrideWithName ();return this ClassOverrideWithName 
/// <summary>
/// <para>Return a human readable or GUI displayable description of this override.   </para>
/// </summary>
  System::String^ GetClassOverrideWithName();


  // const char *GetDescription ();return this Description 
/// <summary>
/// <para>Return the specific object factory that this override occurs in.</para>
/// </summary>
  System::String^ GetDescription();


  // vtkObjectFactory *GetObjectFactory ();return this ObjectFactory 
/// <summary>
/// <para>Set the class override name</para>
/// </summary>
  vtkObjectFactory^ GetObjectFactory();


  // void SetClassOverrideName (char *);
/// <summary>
/// <para>Set the class override name</para>
/// </summary>
  void SetClassOverrideName(System::String^ arg0);


  // void SetClassOverrideWithName (char *);
/// <summary>
/// <para>Set the class override name Set the class override with name</para>
/// </summary>
  void SetClassOverrideWithName(System::String^ arg0);


  // void SetDescription (char *);
/// <summary>
/// <para>Set the class override name Set the class override with name Set the description</para>
/// </summary>
  void SetDescription(System::String^ arg0);


// Did not wrap:  virtual void SetObjectFactory (vtkObjectFactory *);


// Did not wrap:  vtkOverrideInformation ();


// Did not wrap:  ~vtkOverrideInformation ();


// Did not wrap:  vtkOverrideInformation (const vtkOverrideInformation &);


// Did not wrap:  void vtkOverrideInformation 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOverrideInformation(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOverrideInformation(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOverrideInformation();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOverrideInformation();


};

} // end vtkCommon
