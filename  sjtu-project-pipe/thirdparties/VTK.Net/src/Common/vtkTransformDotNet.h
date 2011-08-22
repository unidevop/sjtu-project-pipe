#pragma once

// managed includes
#include "vtkLinearTransformDotNet.h"
#include "vtkLinearTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractTransform;
ref class vtkMatrix4x4;
ref class vtkObject;

public ref class vtkTransform : public vtkLinearTransform
{

public:
// Did not wrap:  static vtkTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTransform *NewInstance ();
  vtkTransform^ NewInstance();


  // vtkTransform *SafeDownCast (vtkObject* o);
  static vtkTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Identity ();
/// <summary>
/// <para>Set the transformation to the identity transformation.  If  the transform has an Input, then the transformation will be reset so that it is the same as the Input.</para>
/// </summary>
  void Identity();


  // void Inverse ();
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


  // void SetMatrix (vtkMatrix4x4 *matrix);this SetMatrix matrix Element 
/// <summary>
/// <para>Set the current matrix directly.  This actually calls Identity(), followed by Concatenate(matrix).</para>
/// </summary>
  void SetMatrix(vtkMatrix4x4^ matrix);


  // void SetMatrix (const double elements[16]);this Identity this Concatenate elements 
/// <summary>
/// <para>Set the current matrix directly.  This actually calls Identity(), followed by Concatenate(matrix).</para>
/// </summary>
  void SetMatrix(array<double>^ elements);


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


  // void Concatenate (vtkLinearTransform *transform);
/// <summary>
/// <para>Concatenate the specified transform with the current transformation according to PreMultiply or PostMultiply semantics. The concatenation is pipelined, meaning that if any of the transformations are changed, even after Concatenate() is called, those changes will be reflected when you call TransformPoint().</para>
/// </summary>
  void Concatenate(vtkLinearTransform^ transform);


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


  // vtkLinearTransform *GetConcatenatedTransform (int i);if this Input NULL return vtkLinearTransform this Concatenation GetTransform i else if i this Concatenation GetNumberOfPreTransforms return vtkLinearTransform this Concatenation GetTransform i else if i this Concatenation GetNumberOfPreTransforms return vtkLinearTransform this Concatenation GetTransform i else if this GetInverseFlag return vtkLinearTransform this Input GetInverse else return vtkLinearTransform this Input 
  vtkLinearTransform^ GetConcatenatedTransform(int i);


  // void GetOrientation (double orient[3]);
/// <summary>
/// <para>Get the x, y, z orientation angles from the transformation matrix as an array of three floating point values.  </para>
/// </summary>
  void GetOrientation(array<double>^ orient);


  // void GetOrientation (float orient[3]);double temp this GetOrientation temp orient static_cast float temp orient static_cast float temp orient static_cast float temp 
/// <summary>
/// <para>Get the x, y, z orientation angles from the transformation matrix as an array of three floating point values.  </para>
/// </summary>
  void GetOrientation(array<float>^ orient);


  // double *GetOrientation ();this GetOrientation this ReturnValue return this ReturnValue 
/// <summary>
/// <para>Get the x, y, z orientation angles from the transformation matrix as an array of three floating point values.  </para>
/// </summary>
  array<double>^ GetOrientation();


  // static void GetOrientation (double orient[3], vtkMatrix4x4 *matrix);
/// <summary>
/// <para>Convenience function to get the x, y, z orientation angles from  a transformation matrix as an array of three floating point values.  </para>
/// </summary>
  static void GetOrientation(array<double>^ orient, vtkMatrix4x4^ matrix);


  // void GetOrientationWXYZ (double wxyz[4]);
/// <summary>
/// <para>Return the wxyz angle+axis representing the current orientation. The angle is in degrees and the axis is a unit vector.</para>
/// </summary>
  void GetOrientationWXYZ(array<double>^ wxyz);


  // void GetOrientationWXYZ (float wxyz[3]);double temp this GetOrientationWXYZ temp wxyz static_cast float temp wxyz static_cast float temp wxyz static_cast float temp wxyz static_cast float temp 
/// <summary>
/// <para>Return the wxyz angle+axis representing the current orientation. The angle is in degrees and the axis is a unit vector.</para>
/// </summary>
  void GetOrientationWXYZ(array<float>^ wxyz);


  // double *GetOrientationWXYZ ();this GetOrientationWXYZ this ReturnValue return this ReturnValue 
/// <summary>
/// <para>Return the wxyz angle+axis representing the current orientation. The angle is in degrees and the axis is a unit vector.</para>
/// </summary>
  array<double>^ GetOrientationWXYZ();


  // void GetPosition (double pos[3]);
/// <summary>
/// <para>Return the position from the current transformation matrix as an array of three floating point numbers. This is simply returning the translation  component of the 4x4 matrix.</para>
/// </summary>
  void GetPosition(array<double>^ pos);


  // void GetPosition (float pos[3]);double temp this GetPosition temp pos static_cast float temp pos static_cast float temp pos static_cast float temp 
/// <summary>
/// <para>Return the position from the current transformation matrix as an array of three floating point numbers. This is simply returning the translation  component of the 4x4 matrix.</para>
/// </summary>
  void GetPosition(array<float>^ pos);


  // double *GetPosition ();this GetPosition this ReturnValue return this ReturnValue 
/// <summary>
/// <para>Return the position from the current transformation matrix as an array of three floating point numbers. This is simply returning the translation  component of the 4x4 matrix.</para>
/// </summary>
  array<double>^ GetPosition();


  // void GetScale (double scale[3]);
/// <summary>
/// <para>Return the scale factors of the current transformation matrix as  an array of three float numbers.  These scale factors are not necessarily about the x, y, and z axes unless unless the scale transformation was applied before any rotations.  </para>
/// </summary>
  void GetScale(array<double>^ scale);


  // void GetScale (float scale[3]);double temp this GetScale temp scale static_cast float temp scale static_cast float temp scale static_cast float temp 
/// <summary>
/// <para>Return the scale factors of the current transformation matrix as  an array of three float numbers.  These scale factors are not necessarily about the x, y, and z axes unless unless the scale transformation was applied before any rotations.  </para>
/// </summary>
  void GetScale(array<float>^ scale);


  // double *GetScale ();this GetScale this ReturnValue return this ReturnValue 
/// <summary>
/// <para>Return the scale factors of the current transformation matrix as  an array of three float numbers.  These scale factors are not necessarily about the x, y, and z axes unless unless the scale transformation was applied before any rotations.  </para>
/// </summary>
  array<double>^ GetScale();


  // void GetInverse (vtkMatrix4x4 *inverse);
/// <summary>
/// <para>Return a matrix which is the inverse of the current transformation matrix.</para>
/// </summary>
  void GetInverse(vtkMatrix4x4^ inverse);


  // void GetTranspose (vtkMatrix4x4 *transpose);
/// <summary>
/// <para>Return a matrix which is the transpose of the current transformation matrix.  This is equivalent to the inverse if and only if the  transformation is a pure rotation with no translation or scale.</para>
/// </summary>
  void GetTranspose(vtkMatrix4x4^ transpose);


  // void SetInput (vtkLinearTransform *input);
/// <summary>
/// <para>Set the input for this transformation.  This will be used as the base transformation if it is set.  This method allows you to build a transform pipeline: if the input is modified, then this transformation will automatically update accordingly.  Note that the InverseFlag, controlled via Inverse(), determines whether this transformation will use the Input or the inverse of the Input.</para>
/// </summary>
  void SetInput(vtkLinearTransform^ input);


  // vtkLinearTransform *GetInput ();return this Input 
/// <summary>
/// <para>Set the input for this transformation.  This will be used as the base transformation if it is set.  This method allows you to build a transform pipeline: if the input is modified, then this transformation will automatically update accordingly.  Note that the InverseFlag, controlled via Inverse(), determines whether this transformation will use the Input or the inverse of the Input.</para>
/// </summary>
  vtkLinearTransform^ GetInput();


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


  // int CircuitCheck (vtkAbstractTransform *transform);
/// <summary>
/// <para>Check for self-reference.  Will return true if concatenating with the specified transform, setting it to be our inverse, or setting it to be our input will create a circular reference. CircuitCheck is automatically called by SetInput(), SetInverse(), and Concatenate(vtkXTransform *).  Avoid using this function, it is experimental.</para>
/// </summary>
  int CircuitCheck(vtkAbstractTransform^ transform);


  // vtkAbstractTransform *GetInverse ();return vtkLinearTransform GetInverse 
/// <summary>
/// <para>Make a new transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ GetInverse();


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make a new transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override GetMTime to account for input and concatenation.</para>
/// </summary>
  unsigned long GetMTime();


  // void MultiplyPoint (const float in[4], float out[4]);this GetMatrix MultiplyPoint in out 
/// <summary>
/// <para>Use this method only if you wish to compute the transformation in homogeneous (x,y,z,w) coordinates, otherwise use TransformPoint(). This method calls this-&gt;GetMatrix()-&gt;MultiplyPoint().</para>
/// </summary>
  void MultiplyPoint(array<float>^ in, array<float>^ out);


  // void MultiplyPoint (const double in[4], double out[4]);this GetMatrix MultiplyPoint in out 
/// <summary>
/// <para>Use this method only if you wish to compute the transformation in homogeneous (x,y,z,w) coordinates, otherwise use TransformPoint(). This method calls this-&gt;GetMatrix()-&gt;MultiplyPoint().</para>
/// </summary>
  void MultiplyPoint(array<double>^ in, array<double>^ out);


// Did not wrap:  vtkTransform ();


// Did not wrap:  ~vtkTransform ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *t);


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  vtkTransform (const vtkTransform &);


// Did not wrap:  void vtkTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTransform();


};

} // end vtkCommon
