#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkObjectBase;
ref class vtkPoints;

public ref class vtkAbstractTransform : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAbstractTransform *NewInstance ();
  vtkAbstractTransform^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void TransformPoint (const float in[3], float out[3]);this Update this InternalTransformPoint in out 
/// <summary>
/// <para>Apply the transformation to a coordinate.  You can use the same  array to store both the input and output point.</para>
/// </summary>
  void TransformPoint(array<float>^ in, array<float>^ out);


  // void TransformPoint (const double in[3], double out[3]);this Update this InternalTransformPoint in out 
/// <summary>
/// <para>Apply the transformation to a double-precision coordinate.   You can use the same array to store both the input and output point.</para>
/// </summary>
  void TransformPoint(array<double>^ in, array<double>^ out);


  // double *TransformPoint (double x, double y, double z);return this TransformDoublePoint x y z 
/// <summary>
/// <para>Apply the transformation to a double-precision coordinate.   Use this if you are programming in Python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformPoint(double x, double y, double z);


  // double *TransformPoint (const double point[3]);return this TransformPoint point point point 
/// <summary>
/// <para>Apply the transformation to a double-precision coordinate.   Use this if you are programming in Python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformPoint(array<double>^ point);


  // float *TransformFloatPoint (float x, float y, float z);this InternalFloatPoint x this InternalFloatPoint y this InternalFloatPoint z this TransformPoint this InternalFloatPoint this InternalFloatPoint return this InternalFloatPoint 
/// <summary>
/// <para>Apply the transformation to an (x,y,z) coordinate. Use this if you are programming in Python, tcl or Java.</para>
/// </summary>
  array<float>^ TransformFloatPoint(float x, float y, float z);


  // float *TransformFloatPoint (const float point[3]);return this TransformFloatPoint point point point 
/// <summary>
/// <para>Apply the transformation to an (x,y,z) coordinate. Use this if you are programming in Python, tcl or Java.</para>
/// </summary>
  array<float>^ TransformFloatPoint(array<float>^ point);


  // double *TransformDoublePoint (double x, double y, double z);this InternalDoublePoint x this InternalDoublePoint y this InternalDoublePoint z this TransformPoint this InternalDoublePoint this InternalDoublePoint return this InternalDoublePoint 
/// <summary>
/// <para>Apply the transformation to a double-precision (x,y,z) coordinate. Use this if you are programming in Python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformDoublePoint(double x, double y, double z);


  // double *TransformDoublePoint (const double point[3]);return this TransformDoublePoint point point point 
/// <summary>
/// <para>Apply the transformation to a double-precision (x,y,z) coordinate. Use this if you are programming in Python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformDoublePoint(array<double>^ point);


  // void TransformNormalAtPoint (const float point[3], const float in[3], float out[3]);
/// <summary>
/// <para>Apply the transformation to a normal at the specified vertex.  If the transformation is a vtkLinearTransform, you can use TransformNormal() instead.</para>
/// </summary>
  void TransformNormalAtPoint(array<float>^ point, array<float>^ in, array<float>^ out);


  // void TransformNormalAtPoint (const double point[3], const double in[3], double out[3]);
/// <summary>
/// <para>Apply the transformation to a normal at the specified vertex.  If the transformation is a vtkLinearTransform, you can use TransformNormal() instead.</para>
/// </summary>
  void TransformNormalAtPoint(array<double>^ point, array<double>^ in, array<double>^ out);


  // double *TransformNormalAtPoint (const double point[3], const double normal[3]);this TransformNormalAtPoint point normal this InternalDoublePoint return this InternalDoublePoint 
  array<double>^ TransformNormalAtPoint(array<double>^ point, array<double>^ normal);


  // double *TransformDoubleNormalAtPoint (const double point[3], const double normal[3]);this TransformNormalAtPoint point normal this InternalDoublePoint return this InternalDoublePoint 
/// <summary>
/// <para>Apply the transformation to a double-precision normal at the specified vertex.  If the transformation is a vtkLinearTransform, you can use TransformDoubleNormal() instead.</para>
/// </summary>
  array<double>^ TransformDoubleNormalAtPoint(array<double>^ point, array<double>^ normal);


  // float *TransformFloatNormalAtPoint (const float point[3], const float normal[3]);this TransformNormalAtPoint point normal this InternalFloatPoint return this InternalFloatPoint 
/// <summary>
/// <para>Apply the transformation to a single-precision normal at the specified vertex.  If the transformation is a vtkLinearTransform, you can use TransformFloatNormal() instead.</para>
/// </summary>
  array<float>^ TransformFloatNormalAtPoint(array<float>^ point, array<float>^ normal);


  // void TransformVectorAtPoint (const float point[3], const float in[3], float out[3]);
/// <summary>
/// <para>Apply the transformation to a vector at the specified vertex.  If the transformation is a vtkLinearTransform, you can use TransformVector() instead.</para>
/// </summary>
  void TransformVectorAtPoint(array<float>^ point, array<float>^ in, array<float>^ out);


  // void TransformVectorAtPoint (const double point[3], const double in[3], double out[3]);
/// <summary>
/// <para>Apply the transformation to a vector at the specified vertex.  If the transformation is a vtkLinearTransform, you can use TransformVector() instead.</para>
/// </summary>
  void TransformVectorAtPoint(array<double>^ point, array<double>^ in, array<double>^ out);


  // double *TransformVectorAtPoint (const double point[3], const double vector[3]);this TransformVectorAtPoint point vector this InternalDoublePoint return this InternalDoublePoint 
  array<double>^ TransformVectorAtPoint(array<double>^ point, array<double>^ vector);


  // double *TransformDoubleVectorAtPoint (const double point[3], const double vector[3]);this TransformVectorAtPoint point vector this InternalDoublePoint return this InternalDoublePoint 
/// <summary>
/// <para>Apply the transformation to a double-precision vector at the specified vertex.  If the transformation is a vtkLinearTransform, you can use TransformDoubleVector() instead.</para>
/// </summary>
  array<double>^ TransformDoubleVectorAtPoint(array<double>^ point, array<double>^ vector);


  // float *TransformFloatVectorAtPoint (const float point[3], const float vector[3]);this TransformVectorAtPoint point vector this InternalFloatPoint return this InternalFloatPoint 
/// <summary>
/// <para>Apply the transformation to a single-precision vector at the specified vertex.  If the transformation is a vtkLinearTransform, you can use TransformFloatVector() instead.</para>
/// </summary>
  array<float>^ TransformFloatVectorAtPoint(array<float>^ point, array<float>^ vector);


  // virtual void TransformPoints (vtkPoints *inPts, vtkPoints *outPts);
/// <summary>
/// <para>Apply the transformation to a series of points, and append the results to outPts.  </para>
/// </summary>
  void TransformPoints(vtkPoints^ inPts, vtkPoints^ outPts);


  // virtual void TransformPointsNormalsVectors (vtkPoints *inPts, vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms, vtkDataArray *inVrs, vtkDataArray *outVrs);
/// <summary>
/// <para>Apply the transformation to a combination of points, normals and vectors.  </para>
/// </summary>
  void TransformPointsNormalsVectors(vtkPoints^ inPts, vtkPoints^ outPts, vtkDataArray^ inNms, vtkDataArray^ outNms, vtkDataArray^ inVrs, vtkDataArray^ outVrs);


  // vtkAbstractTransform *GetInverse ();
/// <summary>
/// <para>Get the inverse of this transform.  If you modify this transform, the returned inverse transform will automatically update.  If you want the inverse of a vtkTransform, you might want to use GetLinearInverse() instead which will type cast the result from vtkAbstractTransform to vtkLinearTransform.</para>
/// </summary>
  vtkAbstractTransform^ GetInverse();


  // void SetInverse (vtkAbstractTransform *transform);
/// <summary>
/// <para>Set a transformation that this transform will be the inverse of. This transform will automatically update to agree with the  inverse transform that you set.</para>
/// </summary>
  void SetInverse(vtkAbstractTransform^ transform);


  // virtual void Inverse () = 0;
/// <summary>
/// <para>Invert the transformation.</para>
/// </summary>
  void Inverse();


  // void DeepCopy (vtkAbstractTransform *);
/// <summary>
/// <para>Copy this transform from another of the same type.</para>
/// </summary>
  void DeepCopy(vtkAbstractTransform^ arg0);


  // void Update ();
/// <summary>
/// <para>Update the transform to account for any changes which have been made.  You do not have to call this method  yourself, it is called automatically whenever the transform needs an update.</para>
/// </summary>
  void Update();


  // virtual void InternalTransformPoint (const float in[3], float out[3]) = 0;
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformPoint(array<float>^ in, array<float>^ out);


  // virtual void InternalTransformPoint (const double in[3], double out[3]) = 0;
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformPoint(array<double>^ in, array<double>^ out);


  // virtual void InternalTransformDerivative (const float in[3], float out[3], float derivative[3][3]) = 0;
/// <summary>
/// <para>This will transform a point and, at the same time, calculate a 3x3 Jacobian matrix that provides the partial derivatives of the transformation at that point.  This method does not call Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative);


  // virtual void InternalTransformDerivative (const double in[3], double out[3], double derivative[3][3]) = 0;
/// <summary>
/// <para>This will transform a point and, at the same time, calculate a 3x3 Jacobian matrix that provides the partial derivatives of the transformation at that point.  This method does not call Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative);


  // virtual vtkAbstractTransform *MakeTransform () = 0;
/// <summary>
/// <para>Make another transform of the same type.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


  // virtual int CircuitCheck (vtkAbstractTransform *transform);
/// <summary>
/// <para>Check for self-reference.  Will return true if concatenating with the specified transform, setting it to be our inverse, or setting it to be our input will create a circular reference. CircuitCheck is automatically called by SetInput(), SetInverse(), and Concatenate(vtkXTransform *).  Avoid using this function, it is experimental.</para>
/// </summary>
  int CircuitCheck(vtkAbstractTransform^ transform);


  // unsigned long GetMTime ();
/// <summary>
/// <para>Override GetMTime necessary because of inverse transforms.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void UnRegister (vtkObjectBase *O);
/// <summary>
/// <para>Needs a special UnRegister() implementation to avoid circular references.</para>
/// </summary>
  void UnRegister(vtkObjectBase^ O);


  // void Identity ();
/// <summary>
/// <para>@deprecated This method is deprecated in the base class.  It is  still valid to use it on many of the specialized classes.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void Identity();


// Did not wrap:  vtkAbstractTransform ();


// Did not wrap:  ~vtkAbstractTransform ();


// Did not wrap:  virtual void InternalUpdate ();


// Did not wrap:  virtual void InternalDeepCopy (vtkAbstractTransform *);


// Did not wrap:  vtkAbstractTransform (const vtkAbstractTransform &);


// Did not wrap:  void vtkAbstractTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAbstractTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAbstractTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAbstractTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAbstractTransform();


};

} // end vtkCommon
