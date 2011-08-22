#pragma once

// managed includes
#include "vtkVolumeRayCastFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeRayCastIsosurfaceFunction : public vtkVolumeRayCastFunction
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeRayCastIsosurfaceFunction *NewInstance ();
  vtkVolumeRayCastIsosurfaceFunction^ NewInstance();


  // vtkVolumeRayCastIsosurfaceFunction *SafeDownCast (vtkObject* o);
  static vtkVolumeRayCastIsosurfaceFunction^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkVolumeRayCastIsosurfaceFunction *New ();


  // float GetZeroOpacityThreshold (vtkVolume *vol);
/// <summary>
/// <para>Get the scalar value below which all scalar values have 0 opacity</para>
/// </summary>
  float GetZeroOpacityThreshold(vtkVolume^ vol);


  // void SetIsoValue (double );
/// <summary>
/// <para>Set/Get the value of IsoValue.</para>
/// </summary>
  void SetIsoValue(double arg0);


  // double GetIsoValue ();
/// <summary>
/// <para>Set/Get the value of IsoValue.</para>
/// </summary>
  double GetIsoValue();


// Did not wrap:  vtkVolumeRayCastIsosurfaceFunction ();


// Did not wrap:  ~vtkVolumeRayCastIsosurfaceFunction ();


// Did not wrap:  vtkVolumeRayCastIsosurfaceFunction (const vtkVolumeRayCastIsosurfaceFunction &);


// Did not wrap:  void vtkVolumeRayCastIsosurfaceFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeRayCastIsosurfaceFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeRayCastIsosurfaceFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeRayCastIsosurfaceFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeRayCastIsosurfaceFunction();


};

} // end vtkVolumeRendering
