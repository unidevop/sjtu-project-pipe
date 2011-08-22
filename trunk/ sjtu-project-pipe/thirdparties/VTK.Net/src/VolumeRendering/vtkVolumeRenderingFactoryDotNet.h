#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeRenderingFactory : public vtkObject
{

public:
// Did not wrap:  static vtkVolumeRenderingFactory *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeRenderingFactory *NewInstance ();
  vtkVolumeRenderingFactory^ NewInstance();


  // vtkVolumeRenderingFactory *SafeDownCast (vtkObject* o);
  static vtkVolumeRenderingFactory^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // static vtkObject *CreateInstance (const char *vtkclassname);
/// <summary>
/// <para>Create and return an instance of the named vtk object. This method first checks the vtkObjectFactory to support dynamic loading. </para>
/// </summary>
  static vtkObject^ CreateInstance(System::String^ arg0);


// Did not wrap:  vtkVolumeRenderingFactory ();


// Did not wrap:  vtkVolumeRenderingFactory (const vtkVolumeRenderingFactory &);


// Did not wrap:  void vtkVolumeRenderingFactory 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeRenderingFactory(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeRenderingFactory(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeRenderingFactory();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeRenderingFactory();


};

} // end vtkVolumeRendering
