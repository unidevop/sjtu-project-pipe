#pragma once

// managed includes
#include "vtkLinearTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractTransform;
ref class vtkMatrix4x4;
ref class vtkObject;

public ref class vtkMatrixToLinearTransform : public vtkLinearTransform
{

public:
// Did not wrap:  static vtkMatrixToLinearTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMatrixToLinearTransform *NewInstance ();
  vtkMatrixToLinearTransform^ NewInstance();


  // vtkMatrixToLinearTransform *SafeDownCast (vtkObject* o);
  static vtkMatrixToLinearTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkMatrix4x4 *);
/// <summary>
/// <para>Set the input matrix.  Any modifications to the matrix will be reflected in the transformation.</para>
/// </summary>
  void SetInput(vtkMatrix4x4^ arg0);


  // vtkMatrix4x4 *GetInput ();
/// <summary>
/// <para>Set the input matrix.  Any modifications to the matrix will be reflected in the transformation.</para>
/// </summary>
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


// Did not wrap:  vtkMatrixToLinearTransform ();


// Did not wrap:  ~vtkMatrixToLinearTransform ();


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *transform);


// Did not wrap:  vtkMatrixToLinearTransform (const vtkMatrixToLinearTransform &);


// Did not wrap:  void vtkMatrixToLinearTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMatrixToLinearTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMatrixToLinearTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMatrixToLinearTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMatrixToLinearTransform();


};

} // end vtkCommon
