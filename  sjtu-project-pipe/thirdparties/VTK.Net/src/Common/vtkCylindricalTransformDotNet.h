#pragma once

// managed includes
#include "vtkWarpTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractTransform;
ref class vtkObject;

public ref class vtkCylindricalTransform : public vtkWarpTransform
{

public:
// Did not wrap:  static vtkCylindricalTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCylindricalTransform *NewInstance ();
  vtkCylindricalTransform^ NewInstance();


  // vtkCylindricalTransform *SafeDownCast (vtkObject* o);
  static vtkCylindricalTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make another transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


// Did not wrap:  vtkCylindricalTransform ();


// Did not wrap:  ~vtkCylindricalTransform ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *transform);


// Did not wrap:  void ForwardTransformPoint (const float in[3], float out[3]);


// Did not wrap:  void ForwardTransformPoint (const double in[3], double out[3]);


// Did not wrap:  void ForwardTransformDerivative (const float in[3], float out[3], float derivative[3][3]);


// Did not wrap:  void ForwardTransformDerivative (const double in[3], double out[3], double derivative[3][3]);


// Did not wrap:  void InverseTransformPoint (const float in[3], float out[3]);


// Did not wrap:  void InverseTransformPoint (const double in[3], double out[3]);


// Did not wrap:  void InverseTransformDerivative (const float in[3], float out[3], float derivative[3][3]);


// Did not wrap:  void InverseTransformDerivative (const double in[3], double out[3], double derivative[3][3]);


// Did not wrap:  vtkCylindricalTransform (const vtkCylindricalTransform &);


// Did not wrap:  void vtkCylindricalTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCylindricalTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCylindricalTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCylindricalTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCylindricalTransform();


};

} // end vtkCommon
