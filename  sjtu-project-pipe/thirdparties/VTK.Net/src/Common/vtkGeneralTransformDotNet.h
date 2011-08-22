#pragma once

// managed includes
#include "vtkAbstractTransformDotNet.h"
#include "vtkAbstractTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkMatrix4x4;
ref class vtkObject;

public ref class vtkGeneralTransform : public vtkAbstractTransform
{

public:
// Did not wrap:  static vtkGeneralTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGeneralTransform *NewInstance ();
  vtkGeneralTransform^ NewInstance();


  // vtkGeneralTransform *SafeDownCast (vtkObject* o);
  static vtkGeneralTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Identity ();this Concatenation Identity this Modified 
/// <summary>
/// <para>Set this transformation to the identity transformation.  If  the transform has an Input, then the transformation will be reset so that it is the same as the Input.</para>
/// </summary>
  void Identity();


  // void Inverse ();this Concatenation Inverse this Modified 
/// <summary>
/// <para>Invert the transformation.  This will also set a flag so that the transformation will use the inverse of its Input, if an Input has been set.</para>
/// </summary>
  void Inverse();


  // void Translate (double x, double y, double z);this Concatenation Translate x y z 
/// <summary>
/// <para>Create a translation matrix and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.</para>
/// </summary>
  void Translate(double x, double y, double z);


  // void Translate (const double x[3]);this Translate x x x 
/// <summary>
/// <para>Create a translation matrix and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.</para>
/// </summary>
  void Translate(array<double>^ x);


  // void Translate (const float x[3]);this Translate x x x 
/// <summary>
/// <para>Create a translation matrix and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.</para>
/// </summary>
  void Translate(array<float>^ x);


  // void RotateWXYZ (double angle, double x, double y, double z);this Concatenation Rotate angle x y z 
/// <summary>
/// <para>Create a rotation matrix and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics. The angle is in degrees, and (x,y,z) specifies the axis that the rotation will be performed around. </para>
/// </summary>
  void RotateWXYZ(double angle, double x, double y, double z);


  // void RotateWXYZ (double angle, const double axis[3]);this RotateWXYZ angle axis axis axis 
/// <summary>
/// <para>Create a rotation matrix and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics. The angle is in degrees, and (x,y,z) specifies the axis that the rotation will be performed around. </para>
/// </summary>
  void RotateWXYZ(double angle, array<double>^ axis);


  // void RotateWXYZ (double angle, const float axis[3]);this RotateWXYZ angle axis axis axis 
/// <summary>
/// <para>Create a rotation matrix and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics. The angle is in degrees, and (x,y,z) specifies the axis that the rotation will be performed around. </para>
/// </summary>
  void RotateWXYZ(double angle, array<float>^ axis);


  // void RotateX (double angle);this RotateWXYZ angle 
/// <summary>
/// <para>Create a rotation matrix about the X, Y, or Z axis and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.  The angle is expressed in degrees.</para>
/// </summary>
  void RotateX(double angle);


  // void RotateY (double angle);this RotateWXYZ angle 
/// <summary>
/// <para>Create a rotation matrix about the X, Y, or Z axis and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.  The angle is expressed in degrees.</para>
/// </summary>
  void RotateY(double angle);


  // void RotateZ (double angle);this RotateWXYZ angle 
/// <summary>
/// <para>Create a rotation matrix about the X, Y, or Z axis and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.  The angle is expressed in degrees.</para>
/// </summary>
  void RotateZ(double angle);


  // void Scale (double x, double y, double z);this Concatenation Scale x y z 
/// <summary>
/// <para>Create a scale matrix (i.e. set the diagonal elements to x, y, z) and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.</para>
/// </summary>
  void Scale(double x, double y, double z);


  // void Scale (const double s[3]);this Scale s s s 
/// <summary>
/// <para>Create a scale matrix (i.e. set the diagonal elements to x, y, z) and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.</para>
/// </summary>
  void Scale(array<double>^ s);


  // void Scale (const float s[3]);this Scale s s s 
/// <summary>
/// <para>Create a scale matrix (i.e. set the diagonal elements to x, y, z) and concatenate it with the current transformation according to PreMultiply or PostMultiply semantics.</para>
/// </summary>
  void Scale(array<float>^ s);


  // void Concatenate (vtkMatrix4x4 *matrix);this Concatenate matrix Element 
/// <summary>
/// <para>Concatenates the matrix with the current transformation according to PreMultiply or PostMultiply semantics.</para>
/// </summary>
  void Concatenate(vtkMatrix4x4^ matrix);


  // void Concatenate (const double elements[16]);this Concatenation Concatenate elements 
/// <summary>
/// <para>Concatenates the matrix with the current transformation according to PreMultiply or PostMultiply semantics.</para>
/// </summary>
  void Concatenate(array<double>^ elements);


  // void Concatenate (vtkAbstractTransform *transform);
/// <summary>
/// <para>Concatenate the specified transform with the current transformation according to PreMultiply or PostMultiply semantics. The concatenation is pipelined, meaning that if any of the transformations are changed, even after Concatenate() is called, those changes will be reflected when you call TransformPoint().</para>
/// </summary>
  void Concatenate(vtkAbstractTransform^ transform);


  // void PreMultiply ();if this Concatenation GetPreMultiplyFlag return this Concatenation SetPreMultiplyFlag this Modified 
/// <summary>
/// <para>Sets the internal state of the transform to PreMultiply. All subsequent operations will occur before those already represented in the current transformation.  In homogeneous matrix notation, M = M*A where M is the current transformation matrix and A is the applied matrix. The default is PreMultiply.</para>
/// </summary>
  void PreMultiply();


  // void PostMultiply ();if this Concatenation GetPreMultiplyFlag return this Concatenation SetPreMultiplyFlag this Modified 
/// <summary>
/// <para>Sets the internal state of the transform to PostMultiply. All subsequent operations will occur after those already represented in the current transformation.  In homogeneous matrix notation, M = A*M where M is the current transformation matrix and A is the applied matrix. The default is PreMultiply.</para>
/// </summary>
  void PostMultiply();


  // int GetNumberOfConcatenatedTransforms ();return this Concatenation GetNumberOfTransforms this Input NULL 
/// <summary>
/// <para>Get the total number of transformations that are linked into this one via Concatenate() operations or via SetInput().</para>
/// </summary>
  int GetNumberOfConcatenatedTransforms();


  // vtkAbstractTransform *GetConcatenatedTransform (int i);if this Input NULL return this Concatenation GetTransform i else if i this Concatenation GetNumberOfPreTransforms return this Concatenation GetTransform i else if i this Concatenation GetNumberOfPreTransforms return this Concatenation GetTransform i else if this GetInverseFlag return this Input GetInverse else return this Input 
  vtkAbstractTransform^ GetConcatenatedTransform(int i);


  // void SetInput (vtkAbstractTransform *input);
/// <summary>
/// <para>Set the input for this transformation.  This will be used as the base transformation if it is set.  This method allows you to build a transform pipeline: if the input is modified, then this transformation will automatically update accordingly.  Note that the InverseFlag, controlled via Inverse(), determines whether this transformation will use the Input or the inverse of the Input.</para>
/// </summary>
  void SetInput(vtkAbstractTransform^ input);


  // vtkAbstractTransform *GetInput ();return this Input 
/// <summary>
/// <para>Set the input for this transformation.  This will be used as the base transformation if it is set.  This method allows you to build a transform pipeline: if the input is modified, then this transformation will automatically update accordingly.  Note that the InverseFlag, controlled via Inverse(), determines whether this transformation will use the Input or the inverse of the Input.</para>
/// </summary>
  vtkAbstractTransform^ GetInput();


  // int GetInverseFlag ();return this Concatenation GetInverseFlag 
/// <summary>
/// <para>Get the inverse flag of the transformation.  This controls whether it is the Input or the inverse of the Input that is used as the base transformation.  The InverseFlag is flipped every time Inverse() is called.  The InverseFlag is off when a transform is first created.</para>
/// </summary>
  int GetInverseFlag();


  // void Push ();if this Stack NULL this Stack vtkTransformConcatenationStack New this Stack Push this Concatenation this Modified 
/// <summary>
/// <para>Pushes the current transformation onto the transformation stack.</para>
/// </summary>
  void Push();


  // void Pop ();if this Stack NULL return this Stack Pop this Concatenation this Modified 
/// <summary>
/// <para>Deletes the transformation on the top of the stack and sets the top  to the next transformation on the stack.</para>
/// </summary>
  void Pop();


  // void InternalTransformPoint (const float in[3], float out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformPoint(array<float>^ in, array<float>^ out);


  // void InternalTransformPoint (const double in[3], double out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformPoint(array<double>^ in, array<double>^ out);


  // void InternalTransformDerivative (const float in[3], float out[3], float derivative[3][3]);
/// <summary>
/// <para>This will calculate the transformation as well as its derivative without calling Update.  Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative);


  // void InternalTransformDerivative (const double in[3], double out[3], double derivative[3][3]);
/// <summary>
/// <para>This will calculate the transformation as well as its derivative without calling Update.  Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative);


  // int CircuitCheck (vtkAbstractTransform *transform);
/// <summary>
/// <para>Check for self-reference.  Will return true if concatenating with the specified transform, setting it to be our inverse, or setting it to be our input will create a circular reference. CircuitCheck is automatically called by SetInput(), SetInverse(), and Concatenate(vtkXTransform *).  Avoid using this function, it is experimental.</para>
/// </summary>
  int CircuitCheck(vtkAbstractTransform^ transform);


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make another transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override GetMTime to account for input and concatenation.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkGeneralTransform ();


// Did not wrap:  ~vtkGeneralTransform ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *t);


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  vtkGeneralTransform (const vtkGeneralTransform &);


// Did not wrap:  void vtkGeneralTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGeneralTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGeneralTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGeneralTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGeneralTransform();


};

} // end vtkCommon
