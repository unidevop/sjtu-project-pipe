#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeRayCastFunction : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeRayCastFunction *NewInstance ();
  vtkVolumeRayCastFunction^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual float GetZeroOpacityThreshold (vtkVolume *vol) = 0;
/// <summary>
/// <para>Get the value below which all scalar values are considered to have 0 opacity.</para>
/// </summary>
  float GetZeroOpacityThreshold(vtkVolume^ vol);


// Did not wrap:  vtkVolumeRayCastFunction ();


// Did not wrap:  ~vtkVolumeRayCastFunction ();


// Did not wrap:  vtkVolumeRayCastFunction (const vtkVolumeRayCastFunction &);


// Did not wrap:  void vtkVolumeRayCastFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeRayCastFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeRayCastFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeRayCastFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeRayCastFunction();


};

} // end vtkVolumeRendering
