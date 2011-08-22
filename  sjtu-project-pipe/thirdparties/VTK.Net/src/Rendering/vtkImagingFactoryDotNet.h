#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImagingFactory : public vtkObject
{

public:
// Did not wrap:  static vtkImagingFactory *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImagingFactory *NewInstance ();
  vtkImagingFactory^ NewInstance();


  // vtkImagingFactory *SafeDownCast (vtkObject* o);
  static vtkImagingFactory^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static vtkObject *CreateInstance (const char *vtkclassname);
/// <summary>
/// <para>Create and return an instance of the named vtk object. This method first checks the vtkObjectFactory to support dynamic loading. </para>
/// </summary>
  static vtkObject^ CreateInstance(System::String^ arg0);


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


// Did not wrap:  vtkImagingFactory ();


// Did not wrap:  vtkImagingFactory (const vtkImagingFactory &);


// Did not wrap:  void vtkImagingFactory 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImagingFactory(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImagingFactory(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImagingFactory();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImagingFactory();


};

} // end vtkRendering
