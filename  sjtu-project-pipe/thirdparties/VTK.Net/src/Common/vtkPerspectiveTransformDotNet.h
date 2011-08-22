#pragma once

// managed includes
#include "vtkHomogeneousTransformDotNet.h"
#include "vtkHomogeneousTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractTransform;
ref class vtkMatrix4x4;
ref class vtkObject;

public ref class vtkPerspectiveTransform : public vtkHomogeneousTransform
{

public:
// Did not wrap:  static vtkPerspectiveTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPerspectiveTransform *NewInstance ();
  vtkPerspectiveTransform^ NewInstance();


  // vtkPerspectiveTransform *SafeDownCast (vtkObject* o);
  static vtkPerspectiveTransform^ SafeDownCast(vtkObject^ o);


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


  // void AdjustViewport (double oldXMin, double oldXMax, double oldYMin, double oldYMax, double newXMin, double newXMax, double newYMin, double newYMax);
/// <summary>
/// <para>Perform an adjustment to the viewport coordinates.  By default Ortho, Frustum, and Perspective provide a window of ([-1,+1],[-1,+1]). In PreMultiply mode, you call this method before calling Ortho, Frustum, or Perspective.  In PostMultiply mode you can call it after.  Note that if you must apply both AdjustZBuffer and AdjustViewport, it makes no difference which order you apply them in.</para>
/// </summary>
  void AdjustViewport(double oldXMin, double oldXMax, double oldYMin, double oldYMax, double newXMin, double newXMax, double newYMin, double newYMax);


  // void AdjustZBuffer (double oldNearZ, double oldFarZ, double newNearZ, double newFarZ);
/// <summary>
/// <para>Perform an adjustment to the Z-Buffer range that the near and far clipping planes map to.  By default Ortho, Frustum, and Perspective map the near clipping plane to -1 and the far clipping plane to +1. In PreMultiply mode, you call this method before calling Ortho, Frustum, or Perspective.  In PostMultiply mode you can call it after.</para>
/// </summary>
  void AdjustZBuffer(double oldNearZ, double oldFarZ, double newNearZ, double newFarZ);


  // void Ortho (double xmin, double xmax, double ymin, double ymax, double znear, double zfar);
/// <summary>
/// <para>Create an orthogonal projection matrix and concatenate it by the current transformation.  The matrix maps [xmin,xmax], [ymin,ymax],  [-znear,-zfar] to [-1,+1], [-1,+1], [+1,-1]. </para>
/// </summary>
  void Ortho(double xmin, double xmax, double ymin, double ymax, double znear, double zfar);


  // void Frustum (double xmin, double xmax, double ymin, double ymax, double znear, double zfar);
/// <summary>
/// <para>Create an perspective projection matrix and concatenate it by the current transformation.  The matrix maps a frustum with a back plane at -zfar and a front plane at -znear with extent  [xmin,xmax],[ymin,ymax] to [-1,+1], [-1,+1], [+1,-1].</para>
/// </summary>
  void Frustum(double xmin, double xmax, double ymin, double ymax, double znear, double zfar);


  // void Perspective (double angle, double aspect, double znear, double zfar);
/// <summary>
/// <para>Create a perspective projection matrix by specifying the view angle (this angle is in the y direction), the aspect ratio, and the near  and far clipping range.  The projection matrix is concatenated  with the current transformation.  This method works via Frustum.</para>
/// </summary>
  void Perspective(double angle, double aspect, double znear, double zfar);


  // void Shear (double dxdz, double dydz, double zplane);
/// <summary>
/// <para>Create a shear transformation about a plane at distance z from the camera.  The values dxdz (i.e. dx/dz) and dydz specify the amount of shear in the x and y directions.  The 'zplane' specifies the distance from the camera to the plane at which the shear causes zero displacement.  Generally you want this plane to be the focal plane. This transformation can be used in combination with Ortho to create  an oblique projection.  It can also be used in combination with Perspective to provide correct stereo views when the eye is at arbitrary but known positions relative to the center of a flat viewing screen.</para>
/// </summary>
  void Shear(double dxdz, double dydz, double zplane);


  // void Stereo (double angle, double focaldistance);
/// <summary>
/// <para>Create a stereo shear matrix and concatenate it with the current transformation.  This can be applied in conjunction with either a  perspective transformation (via Frustum or Projection) or an orthographic projection.  You must specify the distance from the camera plane to the focal plane, and the angle between the distance vector and the eye.  The angle should be negative for the left eye, and positive for the right.  This method works via Oblique.</para>
/// </summary>
  void Stereo(double angle, double focaldistance);


  // void SetupCamera (const double position[3], const double focalpoint[3], const double viewup[3]);
/// <summary>
/// <para>Set a view transformation matrix for the camera (this matrix does not contain any perspective) and concatenate it with the current transformation.</para>
/// </summary>
  void SetupCamera(array<double>^ position, array<double>^ focalpoint, array<double>^ viewup);


  // void SetupCamera (double p0, double p1, double p2, double fp0, double fp1, double fp2, double vup0, double vup1, double vup2);
  void SetupCamera(double p0, double p1, double p2, double fp0, double fp1, double fp2, double vup0, double vup1, double vup2);


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


  // void Concatenate (vtkHomogeneousTransform *transform);
/// <summary>
/// <para>Concatenate the specified transform with the current transformation according to PreMultiply or PostMultiply semantics. The concatenation is pipelined, meaning that if any of the transformations are changed, even after Concatenate() is called, those changes will be reflected when you call TransformPoint().</para>
/// </summary>
  void Concatenate(vtkHomogeneousTransform^ transform);


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


  // vtkHomogeneousTransform *GetConcatenatedTransform (int i);if this Input NULL return vtkHomogeneousTransform this Concatenation GetTransform i else if i this Concatenation GetNumberOfPreTransforms return vtkHomogeneousTransform this Concatenation GetTransform i else if i this Concatenation GetNumberOfPreTransforms return vtkHomogeneousTransform this Concatenation GetTransform i else if this GetInverseFlag return vtkHomogeneousTransform this Input GetInverse else return vtkHomogeneousTransform this Input 
  vtkHomogeneousTransform^ GetConcatenatedTransform(int i);


  // void SetInput (vtkHomogeneousTransform *input);
/// <summary>
/// <para>Set the input for this transformation.  This will be used as the base transformation if it is set.  This method allows you to build a transform pipeline: if the input is modified, then this transformation will automatically update accordingly.  Note that the InverseFlag, controlled via Inverse(), determines whether this transformation will use the Input or the inverse of the Input.</para>
/// </summary>
  void SetInput(vtkHomogeneousTransform^ input);


  // vtkHomogeneousTransform *GetInput ();return this Input 
/// <summary>
/// <para>Set the input for this transformation.  This will be used as the base transformation if it is set.  This method allows you to build a transform pipeline: if the input is modified, then this transformation will automatically update accordingly.  Note that the InverseFlag, controlled via Inverse(), determines whether this transformation will use the Input or the inverse of the Input.</para>
/// </summary>
  vtkHomogeneousTransform^ GetInput();


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


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make a new transform of the same type -- you are responsible for deleting the transform when you are done with it.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


  // int CircuitCheck (vtkAbstractTransform *transform);
/// <summary>
/// <para>Check for self-reference.  Will return true if concatenating with the specified transform, setting it to be our inverse, or setting it to be our input will create a circular reference. CircuitCheck is automatically called by SetInput(), SetInverse(), and Concatenate(vtkXTransform *).  Avoid using this function, it is experimental.</para>
/// </summary>
  int CircuitCheck(vtkAbstractTransform^ transform);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override GetMTime to account for input and concatenation.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkPerspectiveTransform ();


// Did not wrap:  ~vtkPerspectiveTransform ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *t);


// Did not wrap:  void InternalUpdate ();


// Did not wrap:  vtkPerspectiveTransform (const vtkPerspectiveTransform &);


// Did not wrap:  void vtkPerspectiveTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPerspectiveTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPerspectiveTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPerspectiveTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPerspectiveTransform();


};

} // end vtkCommon
