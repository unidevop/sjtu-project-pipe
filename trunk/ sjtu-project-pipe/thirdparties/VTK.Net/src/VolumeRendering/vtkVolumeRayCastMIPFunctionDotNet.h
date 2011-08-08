#pragma once

// managed includes
#include "vtkVolumeRayCastFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeRayCastMIPFunction : public vtkVolumeRayCastFunction
{

public:
// Did not wrap:  static vtkVolumeRayCastMIPFunction *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeRayCastMIPFunction *NewInstance ();
  vtkVolumeRayCastMIPFunction^ NewInstance();


  // vtkVolumeRayCastMIPFunction *SafeDownCast (vtkObject* o);
  static vtkVolumeRayCastMIPFunction^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // float GetZeroOpacityThreshold (vtkVolume *vol);
/// <summary>
/// <para>Get the scalar value below which all scalar values have zero opacity.</para>
/// </summary>
  float GetZeroOpacityThreshold(vtkVolume^ vol);


  // void SetMaximizeMethod (int );
/// <summary>
/// <para>Set the MaximizeMethod to either ScalarValue or Opacity.</para>
/// </summary>
  void SetMaximizeMethod(int arg0);


  // int GetMaximizeMethodMinValue ();
/// <summary>
/// <para>Set the MaximizeMethod to either ScalarValue or Opacity.</para>
/// </summary>
  int GetMaximizeMethodMinValue();


  // int GetMaximizeMethodMaxValue ();
/// <summary>
/// <para>Set the MaximizeMethod to either ScalarValue or Opacity.</para>
/// </summary>
  int GetMaximizeMethodMaxValue();


  // int GetMaximizeMethod ();
/// <summary>
/// <para>Set the MaximizeMethod to either ScalarValue or Opacity.</para>
/// </summary>
  int GetMaximizeMethod();


  // void SetMaximizeMethodToScalarValue ();this SetMaximizeMethod VTK_MAXIMIZE_SCALAR_VALUE 
/// <summary>
/// <para>Set the MaximizeMethod to either ScalarValue or Opacity.</para>
/// </summary>
  void SetMaximizeMethodToScalarValue();


  // void SetMaximizeMethodToOpacity ();this SetMaximizeMethod VTK_MAXIMIZE_OPACITY 
/// <summary>
/// <para>Set the MaximizeMethod to either ScalarValue or Opacity.</para>
/// </summary>
  void SetMaximizeMethodToOpacity();


  // const char *GetMaximizeMethodAsString (void );
/// <summary>
/// <para>Set the MaximizeMethod to either ScalarValue or Opacity.</para>
/// </summary>
  System::String^ GetMaximizeMethodAsString();


// Did not wrap:  vtkVolumeRayCastMIPFunction ();


// Did not wrap:  ~vtkVolumeRayCastMIPFunction ();


// Did not wrap:  vtkVolumeRayCastMIPFunction (const vtkVolumeRayCastMIPFunction &);


// Did not wrap:  void vtkVolumeRayCastMIPFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeRayCastMIPFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeRayCastMIPFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeRayCastMIPFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeRayCastMIPFunction();


};

} // end vtkVolumeRendering
