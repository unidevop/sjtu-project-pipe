#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGraphicsFactory : public vtkObject
{

public:
// Did not wrap:  static vtkGraphicsFactory *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGraphicsFactory *NewInstance ();
  vtkGraphicsFactory^ NewInstance();


  // vtkGraphicsFactory *SafeDownCast (vtkObject* o);
  static vtkGraphicsFactory^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static vtkObject *CreateInstance (const char *vtkclassname);
/// <summary>
/// <para>Create and return an instance of the named vtk object. This method first checks the vtkObjectFactory to support dynamic loading. </para>
/// </summary>
  static vtkObject^ CreateInstance(System::String^ arg0);


  // static const char *GetRenderLibrary ();
/// <summary>
/// <para>What rendering library has the user requested</para>
/// </summary>
  static System::String^ GetRenderLibrary();


  // static void SetUseMesaClasses (int use);
/// <summary>
/// <para>This option enables the creation of Mesa classes instead of the OpenGL classes when using mangled Mesa.</para>
/// </summary>
  static void SetUseMesaClasses(int use);


  // static int GetUseMesaClasses ();
/// <summary>
/// <para>This option enables the creation of Mesa classes instead of the OpenGL classes when using mangled Mesa.</para>
/// </summary>
  static int GetUseMesaClasses();


  // static void SetOffScreenOnlyMode (int use);
/// <summary>
/// <para>This option enables the off-screen only mode. In this mode no X calls will be made even when interactor is used.</para>
/// </summary>
  static void SetOffScreenOnlyMode(int use);


  // static int GetOffScreenOnlyMode ();
/// <summary>
/// <para>This option enables the off-screen only mode. In this mode no X calls will be made even when interactor is used.</para>
/// </summary>
  static int GetOffScreenOnlyMode();


// Did not wrap:  vtkGraphicsFactory ();


// Did not wrap:  vtkGraphicsFactory (const vtkGraphicsFactory &);


// Did not wrap:  void vtkGraphicsFactory 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGraphicsFactory(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGraphicsFactory(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGraphicsFactory();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGraphicsFactory();


};

} // end vtkRendering
