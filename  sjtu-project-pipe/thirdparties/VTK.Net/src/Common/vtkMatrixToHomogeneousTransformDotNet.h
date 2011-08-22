#pragma once

// managed includes
#include "vtkHomogeneousTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractTransform;
ref class vtkMatrix4x4;
ref class vtkObject;

public ref class vtkMatrixToHomogeneousTransform : public vtkHomogeneousTransform
{

public:
// Did not wrap:  static vtkMatrixToHomogeneousTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMatrixToHomogeneousTransform *NewInstance ();
  vtkMatrixToHomogeneousTransform^ NewInstance();


  // vtkMatrixToHomogeneousTransform *SafeDownCast (vtkObject* o);
  static vtkMatrixToHomogeneousTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkMatrix4x4 *);
  void SetInput(vtkMatrix4x4^ arg0);


  // vtkMatrix4x4 *GetInput ();
  vtkMatrix4x4^ GetInput();


  // void Inverse ();
/// <summary>
/// <para>The input matrix is left as-is, but the transformation matrix is inverted.</para>
/// </summary>
  void Inverse();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the MTime: this is the bit of magic that makes everything work.</para>
/// </summary>
  unsigned long GetMTime();


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make a new transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


  // void SetMatrix (vtkMatrix4x4 *matrix);
/// <summary>
/// <para>@deprecated This method is deprecated.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetMatrix(vtkMatrix4x4^ matrix);


// Did not wrap:  vtkMatrixToHomogeneousTransform ();


// Did not wrap:  ~vtkMatrixToHomogeneousTransform ();


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *transform);


// Did not wrap:  vtkMatrixToHomogeneousTransform (const vtkMatrixToHomogeneousTransform &);


// Did not wrap:  void vtkMatrixToHomogeneousTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMatrixToHomogeneousTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMatrixToHomogeneousTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMatrixToHomogeneousTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMatrixToHomogeneousTransform();


};

} // end vtkCommon
