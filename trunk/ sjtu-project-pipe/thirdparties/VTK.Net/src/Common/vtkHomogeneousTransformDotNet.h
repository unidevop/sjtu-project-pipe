#pragma once

// managed includes
#include "vtkAbstractTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataArray;
ref class vtkMatrix4x4;
ref class vtkPoints;

public ref class vtkHomogeneousTransform : public vtkAbstractTransform
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHomogeneousTransform *NewInstance ();
  vtkHomogeneousTransform^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void TransformPoints (vtkPoints *inPts, vtkPoints *outPts);
/// <summary>
/// <para>Apply the transformation to a series of points, and append the results to outPts.  </para>
/// </summary>
  void TransformPoints(vtkPoints^ inPts, vtkPoints^ outPts);


  // virtual void TransformPointsNormalsVectors (vtkPoints *inPts, vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms, vtkDataArray *inVrs, vtkDataArray *outVrs);
/// <summary>
/// <para>Apply the transformation to a combination of points, normals and vectors.  </para>
/// </summary>
  void TransformPointsNormalsVectors(vtkPoints^ inPts, vtkPoints^ outPts, vtkDataArray^ inNms, vtkDataArray^ outNms, vtkDataArray^ inVrs, vtkDataArray^ outVrs);


  // void GetMatrix (vtkMatrix4x4 *m);
/// <summary>
/// <para>Get a copy of the internal transformation matrix.  The transform is Updated first, to guarantee that the matrix is valid.</para>
/// </summary>
  void GetMatrix(vtkMatrix4x4^ m);


  // vtkMatrix4x4 *GetMatrix ();this Update return this Matrix 
/// <summary>
/// <para>Get a pointer to an internal vtkMatrix4x4 that represents the transformation.  An Update() is called on the transform to ensure that the matrix is up-to-date when you get it. You should not store the matrix pointer anywhere because it might become stale.</para>
/// </summary>
  vtkMatrix4x4^ GetMatrix();


  // vtkHomogeneousTransform *GetHomogeneousInverse ();return vtkHomogeneousTransform this GetInverse 
/// <summary>
/// <para>Just like GetInverse(), but includes typecast to vtkHomogeneousTransform.</para>
/// </summary>
  vtkHomogeneousTransform^ GetHomogeneousInverse();


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


// Did not wrap:  vtkHomogeneousTransform ();


// Did not wrap:  ~vtkHomogeneousTransform ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *transform);


// Did not wrap:  vtkHomogeneousTransform (const vtkHomogeneousTransform &);


// Did not wrap:  void vtkHomogeneousTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHomogeneousTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHomogeneousTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHomogeneousTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHomogeneousTransform();


};

} // end vtkCommon
