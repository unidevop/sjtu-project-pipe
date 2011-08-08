#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkRIBLight : public vtkLight
{

public:
// Did not wrap:  static vtkRIBLight *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRIBLight *NewInstance ();
  vtkRIBLight^ NewInstance();


  // vtkRIBLight *SafeDownCast (vtkObject* o);
  static vtkRIBLight^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ShadowsOn ();
  void ShadowsOn();


  // void ShadowsOff ();
  void ShadowsOff();


  // void SetShadows (int );
  void SetShadows(int arg0);


  // int GetShadows ();
  int GetShadows();


  // void Render (vtkRenderer *ren, int index);
  void Render(vtkRenderer^ ren, int index);


// Did not wrap:  vtkRIBLight ();


// Did not wrap:  ~vtkRIBLight ();


// Did not wrap:  vtkRIBLight (const vtkRIBLight &);


// Did not wrap:  void vtkRIBLight 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRIBLight(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRIBLight(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRIBLight();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRIBLight();


};

} // end vtkHybrid
