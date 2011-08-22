#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkCollection;
ref class vtkObjectFactoryCollection;
ref class vtkOverrideInformationCollection;

public ref class vtkObjectFactory : public vtkObject
{

public:
  // static vtkObject *CreateInstance (const char *vtkclassname);
/// <summary>
/// <para>Create and return an instance of the named vtk object. Each loaded vtkObjectFactory will be asked in the order the factory was in the VTK_AUTOLOAD_PATH.  After the first factory returns the object no other factories are asked.</para>
/// </summary>
  static vtkObject^ CreateInstance(System::String^ arg0);


  // static void CreateAllInstance (const char *vtkclassname, vtkCollection *retList);
/// <summary>
/// <para>Create all possible instances of the named vtk object. Each registered vtkObjectFactory will be asked, and the result will be stored in the user allocated vtkCollection passed in to the function.</para>
/// </summary>
  static void CreateAllInstance(System::String^ arg0, vtkCollection^ retList);


  // static void ReHash ();
/// <summary>
/// <para>Re-check the VTK_AUTOLOAD_PATH for new factory libraries. This calls UnRegisterAll before re-loading</para>
/// </summary>
  static void ReHash();


  // static void RegisterFactory (vtkObjectFactory *);
/// <summary>
/// <para>Register a factory so it can be used to create vtk objects</para>
/// </summary>
  static void RegisterFactory(vtkObjectFactory^ arg0);


  // static void UnRegisterFactory (vtkObjectFactory *);
/// <summary>
/// <para>Remove a factory from the list of registered factories</para>
/// </summary>
  static void UnRegisterFactory(vtkObjectFactory^ arg0);


  // static void UnRegisterAllFactories ();
/// <summary>
/// <para>Unregister all factories</para>
/// </summary>
  static void UnRegisterAllFactories();


  // static vtkObjectFactoryCollection *GetRegisteredFactories ();
/// <summary>
/// <para>Return the list of all registered factories.  This is NOT a copy, do not remove items from this list!</para>
/// </summary>
  static vtkObjectFactoryCollection^ GetRegisteredFactories();


  // static int HasOverrideAny (const char *className);
/// <summary>
/// <para>return 1 if one of the registered factories  overrides the given class name</para>
/// </summary>
  static int HasOverrideAny(System::String^ className);


  // static void GetOverrideInformation (const char *name, vtkOverrideInformationCollection *);
/// <summary>
/// <para>Fill the given collection with all the overrides for the class with the given name.</para>
/// </summary>
  static void GetOverrideInformation(System::String^ name, vtkOverrideInformationCollection^ arg1);


  // static void SetAllEnableFlags (int flag, const char *className);
/// <summary>
/// <para>Set the enable flag for a given named class for all registered factories.</para>
/// </summary>
  static void SetAllEnableFlags(int flag, System::String^ className);


  // static void SetAllEnableFlags (int flag, const char *className, const char *subclassName);
/// <summary>
/// <para>Set the enable flag for a given named class subclass pair for all registered factories.</para>
/// </summary>
  static void SetAllEnableFlags(int flag, System::String^ className, System::String^ subclassName);


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkObjectFactory *NewInstance ();
  vtkObjectFactory^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual const char *GetVTKSourceVersion () = 0;
/// <summary>
/// <para>All sub-classes of vtkObjectFactory should must return the version of  VTK they were built with.  This should be implemented with the macro VTK_SOURCE_VERSION and NOT a call to vtkVersion::GetVTKSourceVersion. As the version needs to be compiled into the file as a string constant. This is critical to determine possible incompatible dynamic factory loads.</para>
/// </summary>
  System::String^ GetVTKSourceVersion();


  // virtual const char *GetDescription () = 0;
/// <summary>
/// <para>Return a descriptive string describing the factory.</para>
/// </summary>
  System::String^ GetDescription();


  // virtual int GetNumberOfOverrides ();
/// <summary>
/// <para>Return number of overrides this factory can create.</para>
/// </summary>
  int GetNumberOfOverrides();


  // virtual const char *GetClassOverrideName (int index);
/// <summary>
/// <para>Return the name of a class override at the given index.</para>
/// </summary>
  System::String^ GetClassOverrideName(int index);


  // virtual const char *GetClassOverrideWithName (int index);
/// <summary>
/// <para>Return the name of the class that will override the class at the given index</para>
/// </summary>
  System::String^ GetClassOverrideWithName(int index);


  // virtual int GetEnableFlag (int index);
/// <summary>
/// <para>Return the enable flag for the class at the given index.</para>
/// </summary>
  int GetEnableFlag(int index);


  // virtual const char *GetOverrideDescription (int index);
/// <summary>
/// <para>Return the description for a the class override at the given  index.</para>
/// </summary>
  System::String^ GetOverrideDescription(int index);


  // virtual void SetEnableFlag (int flag, const char *className, const char *subclassName);
/// <summary>
/// <para>Set and Get the Enable flag for the specific override of className. if subclassName is null, then it is ignored.</para>
/// </summary>
  void SetEnableFlag(int flag, System::String^ className, System::String^ subclassName);


  // virtual int GetEnableFlag (const char *className, const char *subclassName);
/// <summary>
/// <para>Set and Get the Enable flag for the specific override of className. if subclassName is null, then it is ignored.</para>
/// </summary>
  int GetEnableFlag(System::String^ className, System::String^ subclassName);


  // virtual int HasOverride (const char *className);
/// <summary>
/// <para>Return 1 if this factory overrides the given class name, 0 otherwise.</para>
/// </summary>
  int HasOverride(System::String^ className);


  // virtual int HasOverride (const char *className, const char *subclassName);
/// <summary>
/// <para>Return 1 if this factory overrides the given class name, 0 otherwise.</para>
/// </summary>
  int HasOverride(System::String^ className, System::String^ subclassName);


  // virtual void Disable (const char *className);
/// <summary>
/// <para>Set all enable flags for the given class to 0.  This will mean that the factory will stop producing class with the given name.</para>
/// </summary>
  void Disable(System::String^ className);


  // char *GetLibraryPath ();
/// <summary>
/// <para>This returns the path to a dynamically loaded factory.</para>
/// </summary>
  System::String^ GetLibraryPath();


// Did not wrap:  virtual vtkObject *CreateObject (const char *vtkclassname);


// Did not wrap:  vtkObjectFactory ();


// Did not wrap:  ~vtkObjectFactory ();


// Did not wrap:  void GrowOverrideArray ();


// Did not wrap:  static void Init ();


// Did not wrap:  static void RegisterDefaults ();


// Did not wrap:  static void LoadDynamicFactories ();


// Did not wrap:  static void LoadLibrariesInPath (const char *);


// Did not wrap:  vtkObjectFactory (const vtkObjectFactory &);


// Did not wrap:  void vtkObjectFactory 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkObjectFactory(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkObjectFactory(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkObjectFactory();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkObjectFactory();


};

} // end vtkCommon
