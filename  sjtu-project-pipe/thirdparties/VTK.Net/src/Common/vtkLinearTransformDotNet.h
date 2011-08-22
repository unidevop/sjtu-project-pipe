#pragma once

// managed includes
#include "vtkHomogeneousTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkPoints;

public ref class vtkLinearTransform : public vtkHomogeneousTransform
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLinearTransform *NewInstance ();
  vtkLinearTransform^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void TransformNormal (const float in[3], float out[3]);this Update this InternalTransformNormal in out 
/// <summary>
/// <para>Apply the transformation to a normal. You can use the same array to store both the input and output.</para>
/// </summary>
  void TransformNormal(array<float>^ in, array<float>^ out);


  // void TransformNormal (const double in[3], double out[3]);this Update this InternalTransformNormal in out 
/// <summary>
/// <para>Apply the transformation to a double-precision normal. You can use the same array to store both the input and output.</para>
/// </summary>
  void TransformNormal(array<double>^ in, array<double>^ out);


  // double *TransformNormal (double x, double y, double z);return this TransformDoubleNormal x y z 
/// <summary>
/// <para>Synonymous with TransformDoubleNormal(x,y,z). Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformNormal(double x, double y, double z);


  // double *TransformNormal (const double normal[3]);return this TransformDoubleNormal normal normal normal 
/// <summary>
/// <para>Synonymous with TransformDoubleNormal(x,y,z). Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformNormal(array<double>^ normal);


  // float *TransformFloatNormal (float x, float y, float z);this InternalFloatPoint x this InternalFloatPoint y this InternalFloatPoint z this TransformNormal this InternalFloatPoint this InternalFloatPoint return this InternalFloatPoint 
/// <summary>
/// <para>Apply the transformation to an (x,y,z) normal. Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<float>^ TransformFloatNormal(float x, float y, float z);


  // float *TransformFloatNormal (const float normal[3]);return this TransformFloatNormal normal normal normal 
/// <summary>
/// <para>Apply the transformation to an (x,y,z) normal. Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<float>^ TransformFloatNormal(array<float>^ normal);


  // double *TransformDoubleNormal (double x, double y, double z);this InternalDoublePoint x this InternalDoublePoint y this InternalDoublePoint z this TransformNormal this InternalDoublePoint this InternalDoublePoint return this InternalDoublePoint 
/// <summary>
/// <para>Apply the transformation to a double-precision (x,y,z) normal. Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformDoubleNormal(double x, double y, double z);


  // double *TransformDoubleNormal (const double normal[3]);return this TransformDoubleNormal normal normal normal 
/// <summary>
/// <para>Apply the transformation to a double-precision (x,y,z) normal. Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformDoubleNormal(array<double>^ normal);


  // double *TransformVector (double x, double y, double z);return this TransformDoubleVector x y z 
/// <summary>
/// <para>Synonymous with TransformDoubleVector(x,y,z). Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformVector(double x, double y, double z);


  // double *TransformVector (const double normal[3]);return this TransformDoubleVector normal normal normal 
/// <summary>
/// <para>Synonymous with TransformDoubleVector(x,y,z). Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformVector(array<double>^ normal);


  // void TransformVector (const float in[3], float out[3]);this Update this InternalTransformVector in out 
/// <summary>
/// <para>Apply the transformation to a vector. You can use the same array to store both the input and output.</para>
/// </summary>
  void TransformVector(array<float>^ in, array<float>^ out);


  // void TransformVector (const double in[3], double out[3]);this Update this InternalTransformVector in out 
/// <summary>
/// <para>Apply the transformation to a double-precision vector. You can use the same array to store both the input and output.</para>
/// </summary>
  void TransformVector(array<double>^ in, array<double>^ out);


  // float *TransformFloatVector (float x, float y, float z);this InternalFloatPoint x this InternalFloatPoint y this InternalFloatPoint z this TransformVector this InternalFloatPoint this InternalFloatPoint return this InternalFloatPoint 
/// <summary>
/// <para>Apply the transformation to an (x,y,z) vector. Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<float>^ TransformFloatVector(float x, float y, float z);


  // float *TransformFloatVector (const float vec[3]);return this TransformFloatVector vec vec vec 
/// <summary>
/// <para>Apply the transformation to an (x,y,z) vector. Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<float>^ TransformFloatVector(array<float>^ vec);


  // double *TransformDoubleVector (double x, double y, double z);this InternalDoublePoint x this InternalDoublePoint y this InternalDoublePoint z this TransformVector this InternalDoublePoint this InternalDoublePoint return this InternalDoublePoint 
/// <summary>
/// <para>Apply the transformation to a double-precision (x,y,z) vector. Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformDoubleVector(double x, double y, double z);


  // double *TransformDoubleVector (const double vec[3]);return this TransformDoubleVector vec vec vec 
/// <summary>
/// <para>Apply the transformation to a double-precision (x,y,z) vector. Use this if you are programming in python, tcl or Java.</para>
/// </summary>
  array<double>^ TransformDoubleVector(array<double>^ vec);


  // void TransformPoints (vtkPoints *inPts, vtkPoints *outPts);
/// <summary>
/// <para>Apply the transformation to a series of points, and append the results to outPts.  </para>
/// </summary>
  void TransformPoints(vtkPoints^ inPts, vtkPoints^ outPts);


  // virtual void TransformNormals (vtkDataArray *inNms, vtkDataArray *outNms);
/// <summary>
/// <para>Apply the transformation to a series of normals, and append the results to outNms.  </para>
/// </summary>
  void TransformNormals(vtkDataArray^ inNms, vtkDataArray^ outNms);


  // virtual void TransformVectors (vtkDataArray *inVrs, vtkDataArray *outVrs);
/// <summary>
/// <para>Apply the transformation to a series of vectors, and append the results to outVrs.  </para>
/// </summary>
  void TransformVectors(vtkDataArray^ inVrs, vtkDataArray^ outVrs);


  // void TransformPointsNormalsVectors (vtkPoints *inPts, vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms, vtkDataArray *inVrs, vtkDataArray *outVrs);
/// <summary>
/// <para>Apply the transformation to a combination of points, normals and vectors.  </para>
/// </summary>
  void TransformPointsNormalsVectors(vtkPoints^ inPts, vtkPoints^ outPts, vtkDataArray^ inNms, vtkDataArray^ outNms, vtkDataArray^ inVrs, vtkDataArray^ outVrs);


  // vtkLinearTransform *GetLinearInverse ();return vtkLinearTransform this GetInverse 
/// <summary>
/// <para>Just like GetInverse, but it includes a typecast to  vtkLinearTransform.</para>
/// </summary>
  vtkLinearTransform^ GetLinearInverse();


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


  // virtual void InternalTransformNormal (const float in[3], float out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformNormal(array<float>^ in, array<float>^ out);


  // virtual void InternalTransformNormal (const double in[3], double out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformNormal(array<double>^ in, array<double>^ out);


  // virtual void InternalTransformVector (const float in[3], float out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformVector(array<float>^ in, array<float>^ out);


  // virtual void InternalTransformVector (const double in[3], double out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformVector(array<double>^ in, array<double>^ out);


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


// Did not wrap:  vtkLinearTransform ();


// Did not wrap:  ~vtkLinearTransform ();


// Did not wrap:  vtkLinearTransform (const vtkLinearTransform &);


// Did not wrap:  void vtkLinearTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLinearTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLinearTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLinearTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLinearTransform();


};

} // end vtkCommon
