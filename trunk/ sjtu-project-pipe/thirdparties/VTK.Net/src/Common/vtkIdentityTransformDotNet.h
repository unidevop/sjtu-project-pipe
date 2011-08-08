#pragma once

// managed includes
#include "vtkLinearTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractTransform;
ref class vtkDataArray;
ref class vtkObject;
ref class vtkPoints;

public ref class vtkIdentityTransform : public vtkLinearTransform
{

public:
// Did not wrap:  static vtkIdentityTransform *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkIdentityTransform *NewInstance ();
  vtkIdentityTransform^ NewInstance();


  // vtkIdentityTransform *SafeDownCast (vtkObject* o);
  static vtkIdentityTransform^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void TransformPoints (vtkPoints *inPts, vtkPoints *outPts);
/// <summary>
/// <para>Apply the transformation to a series of points, and append the results to outPts.  </para>
/// </summary>
  void TransformPoints(vtkPoints^ inPts, vtkPoints^ outPts);


  // void TransformNormals (vtkDataArray *inNms, vtkDataArray *outNms);
/// <summary>
/// <para>Apply the transformation to a series of normals, and append the results to outNms.  </para>
/// </summary>
  void TransformNormals(vtkDataArray^ inNms, vtkDataArray^ outNms);


  // void TransformVectors (vtkDataArray *inVrs, vtkDataArray *outVrs);
/// <summary>
/// <para>Apply the transformation to a series of vectors, and append the results to outVrs.  </para>
/// </summary>
  void TransformVectors(vtkDataArray^ inVrs, vtkDataArray^ outVrs);


  // void TransformPointsNormalsVectors (vtkPoints *inPts, vtkPoints *outPts, vtkDataArray *inNms, vtkDataArray *outNms, vtkDataArray *inVrs, vtkDataArray *outVrs);
/// <summary>
/// <para>Apply the transformation to a combination of points, normals and vectors.  </para>
/// </summary>
  void TransformPointsNormalsVectors(vtkPoints^ inPts, vtkPoints^ outPts, vtkDataArray^ inNms, vtkDataArray^ outNms, vtkDataArray^ inVrs, vtkDataArray^ outVrs);


  // void Inverse ();
  void Inverse();


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


  // void InternalTransformNormal (const float in[3], float out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformNormal(array<float>^ in, array<float>^ out);


  // void InternalTransformNormal (const double in[3], double out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformNormal(array<double>^ in, array<double>^ out);


  // void InternalTransformVector (const float in[3], float out[3]);
/// <summary>
/// <para>This will calculate the transformation without calling Update. Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformVector(array<float>^ in, array<float>^ out);


  // void InternalTransformVector (const double in[3], double out[3]);
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


  // vtkAbstractTransform *MakeTransform ();
/// <summary>
/// <para>Make a transform of the same type.  This will actually return the same transform.</para>
/// </summary>
  vtkAbstractTransform^ MakeTransform();


// Did not wrap:  vtkIdentityTransform ();


// Did not wrap:  ~vtkIdentityTransform ();


// Did not wrap:  void InternalDeepCopy (vtkAbstractTransform *t);


// Did not wrap:  vtkIdentityTransform (const vtkIdentityTransform &);


// Did not wrap:  void vtkIdentityTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkIdentityTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkIdentityTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkIdentityTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkIdentityTransform();


};

} // end vtkCommon
