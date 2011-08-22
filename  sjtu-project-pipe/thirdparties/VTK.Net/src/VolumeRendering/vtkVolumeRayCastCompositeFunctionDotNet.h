#pragma once

// managed includes
#include "vtkVolumeRayCastFunctionDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkVolumeRayCastCompositeFunction : public vtkVolumeRayCastFunction
{

public:
// Did not wrap:  static vtkVolumeRayCastCompositeFunction *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolumeRayCastCompositeFunction *NewInstance ();
  vtkVolumeRayCastCompositeFunction^ NewInstance();


  // vtkVolumeRayCastCompositeFunction *SafeDownCast (vtkObject* o);
  static vtkVolumeRayCastCompositeFunction^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetCompositeMethod (int );
/// <summary>
/// <para>Set the CompositeMethod to either Classify First or Interpolate First</para>
/// </summary>
  void SetCompositeMethod(int arg0);


  // int GetCompositeMethodMinValue ();
/// <summary>
/// <para>Set the CompositeMethod to either Classify First or Interpolate First</para>
/// </summary>
  int GetCompositeMethodMinValue();


  // int GetCompositeMethodMaxValue ();
/// <summary>
/// <para>Set the CompositeMethod to either Classify First or Interpolate First</para>
/// </summary>
  int GetCompositeMethodMaxValue();


  // int GetCompositeMethod ();
/// <summary>
/// <para>Set the CompositeMethod to either Classify First or Interpolate First</para>
/// </summary>
  int GetCompositeMethod();


  // void SetCompositeMethodToInterpolateFirst ();this SetCompositeMethod VTK_COMPOSITE_INTERPOLATE_FIRST 
/// <summary>
/// <para>Set the CompositeMethod to either Classify First or Interpolate First</para>
/// </summary>
  void SetCompositeMethodToInterpolateFirst();


  // void SetCompositeMethodToClassifyFirst ();this SetCompositeMethod VTK_COMPOSITE_CLASSIFY_FIRST 
/// <summary>
/// <para>Set the CompositeMethod to either Classify First or Interpolate First</para>
/// </summary>
  void SetCompositeMethodToClassifyFirst();


  // const char *GetCompositeMethodAsString (void );
/// <summary>
/// <para>Set the CompositeMethod to either Classify First or Interpolate First</para>
/// </summary>
  System::String^ GetCompositeMethodAsString();


// Did not wrap:  vtkVolumeRayCastCompositeFunction ();


// Did not wrap:  ~vtkVolumeRayCastCompositeFunction ();


// Did not wrap:  vtkVolumeRayCastCompositeFunction (const vtkVolumeRayCastCompositeFunction &);


// Did not wrap:  void vtkVolumeRayCastCompositeFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolumeRayCastCompositeFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolumeRayCastCompositeFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolumeRayCastCompositeFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolumeRayCastCompositeFunction();


};

} // end vtkVolumeRendering
