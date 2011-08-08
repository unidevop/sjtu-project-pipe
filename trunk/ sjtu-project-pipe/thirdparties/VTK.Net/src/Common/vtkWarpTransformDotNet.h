#pragma once

// managed includes
#include "vtkAbstractTransformDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkWarpTransform : public vtkAbstractTransform
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkWarpTransform *NewInstance ();
  vtkWarpTransform^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Inverse ();
/// <summary>
/// <para>Invert the transformation.  Warp transformations are usually inverted using an iterative technique such as Newton's method. The inverse transform is usually around five or six times as computationally expensive as the forward transform.</para>
/// </summary>
  void Inverse();


  // int GetInverseFlag ();
/// <summary>
/// <para>Get the inverse flag of the transformation.  This flag is set to zero when the transformation is first created, and is flipped each time Inverse() is called.</para>
/// </summary>
  int GetInverseFlag();


  // void SetInverseTolerance (double );
/// <summary>
/// <para>Set the tolerance for inverse transformation. The default is 0.001.</para>
/// </summary>
  void SetInverseTolerance(double arg0);


  // double GetInverseTolerance ();
/// <summary>
/// <para>Set the tolerance for inverse transformation. The default is 0.001.</para>
/// </summary>
  double GetInverseTolerance();


  // void SetInverseIterations (int );
/// <summary>
/// <para>Set the maximum number of iterations for the inverse transformation.  The default is 500, but usually only  2 to 5 iterations are used.  The inversion method is fairly robust, and it should converge for nearly all smooth transformations that do not fold back on themselves.</para>
/// </summary>
  void SetInverseIterations(int arg0);


  // int GetInverseIterations ();
/// <summary>
/// <para>Set the maximum number of iterations for the inverse transformation.  The default is 500, but usually only  2 to 5 iterations are used.  The inversion method is fairly robust, and it should converge for nearly all smooth transformations that do not fold back on themselves.</para>
/// </summary>
  int GetInverseIterations();


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
/// <para>This will calculate the transformation, as well as its derivative without calling Update.  Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformDerivative(array<float>^ in, array<float>^ out, array<float,2>^ derivative);


  // void InternalTransformDerivative (const double in[3], double out[3], double derivative[3][3]);
/// <summary>
/// <para>This will calculate the transformation, as well as its derivative without calling Update.  Meant for use only within other VTK classes.</para>
/// </summary>
  void InternalTransformDerivative(array<double>^ in, array<double>^ out, array<double,2>^ derivative);


  // void TemplateTransformPoint (const float in[3], float out[3]);this ForwardTransformPoint in out 
/// <summary>
/// <para>Do not use these methods.  They exists only as a work-around for internal templated functions (I really didn't want to make the Forward/Inverse methods public, is there a decent work around for this sort of thing?)</para>
/// </summary>
  void TemplateTransformPoint(array<float>^ in, array<float>^ out);


  // void TemplateTransformPoint (const double in[3], double out[3]);this ForwardTransformPoint in out 
/// <summary>
/// <para>Do not use these methods.  They exists only as a work-around for internal templated functions (I really didn't want to make the Forward/Inverse methods public, is there a decent work around for this sort of thing?)</para>
/// </summary>
  void TemplateTransformPoint(array<double>^ in, array<double>^ out);


  // void TemplateTransformPoint (const float in[3], float out[3], float derivative[3][3]);this ForwardTransformDerivative in out derivative 
/// <summary>
/// <para>Do not use these methods.  They exists only as a work-around for internal templated functions (I really didn't want to make the Forward/Inverse methods public, is there a decent work around for this sort of thing?)</para>
/// </summary>
  void TemplateTransformPoint(array<float>^ in, array<float>^ out, array<float,2>^ derivative);


  // void TemplateTransformPoint (const double in[3], double out[3], double derivative[3][3]);this ForwardTransformDerivative in out derivative 
/// <summary>
/// <para>Do not use these methods.  They exists only as a work-around for internal templated functions (I really didn't want to make the Forward/Inverse methods public, is there a decent work around for this sort of thing?)</para>
/// </summary>
  void TemplateTransformPoint(array<double>^ in, array<double>^ out, array<double,2>^ derivative);


  // void TemplateTransformInverse (const float in[3], float out[3]);this InverseTransformPoint in out 
/// <summary>
/// <para>Do not use these methods.  They exists only as a work-around for internal templated functions (I really didn't want to make the Forward/Inverse methods public, is there a decent work around for this sort of thing?)</para>
/// </summary>
  void TemplateTransformInverse(array<float>^ in, array<float>^ out);


  // void TemplateTransformInverse (const double in[3], double out[3]);this InverseTransformPoint in out 
/// <summary>
/// <para>Do not use these methods.  They exists only as a work-around for internal templated functions (I really didn't want to make the Forward/Inverse methods public, is there a decent work around for this sort of thing?)</para>
/// </summary>
  void TemplateTransformInverse(array<double>^ in, array<double>^ out);


  // void TemplateTransformInverse (const float in[3], float out[3], float derivative[3][3]);this InverseTransformDerivative in out derivative 
/// <summary>
/// <para>Do not use these methods.  They exists only as a work-around for internal templated functions (I really didn't want to make the Forward/Inverse methods public, is there a decent work around for this sort of thing?)</para>
/// </summary>
  void TemplateTransformInverse(array<float>^ in, array<float>^ out, array<float,2>^ derivative);


  // void TemplateTransformInverse (const double in[3], double out[3], double derivative[3][3]);this InverseTransformDerivative in out derivative 
/// <summary>
/// <para>Do not use these methods.  They exists only as a work-around for internal templated functions (I really didn't want to make the Forward/Inverse methods public, is there a decent work around for this sort of thing?)</para>
/// </summary>
  void TemplateTransformInverse(array<double>^ in, array<double>^ out, array<double,2>^ derivative);


// Did not wrap:  vtkWarpTransform ();


// Did not wrap:  ~vtkWarpTransform ();


// Did not wrap:  virtual void ForwardTransformPoint (const float in[3], float out[3]) = 0;


// Did not wrap:  virtual void ForwardTransformPoint (const double in[3], double out[3]) = 0;


// Did not wrap:  virtual void ForwardTransformDerivative (const float in[3], float out[3], float derivative[3][3]) = 0;


// Did not wrap:  virtual void ForwardTransformDerivative (const double in[3], double out[3], double derivative[3][3]) = 0;


// Did not wrap:  virtual void InverseTransformPoint (const float in[3], float out[3]);


// Did not wrap:  virtual void InverseTransformPoint (const double in[3], double out[3]);


// Did not wrap:  virtual void InverseTransformDerivative (const float in[3], float out[3], float derivative[3][3]);


// Did not wrap:  virtual void InverseTransformDerivative (const double in[3], double out[3], double derivative[3][3]);


// Did not wrap:  vtkWarpTransform (const vtkWarpTransform &);


// Did not wrap:  void vtkWarpTransform 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkWarpTransform(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkWarpTransform(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkWarpTransform();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkWarpTransform();


};

} // end vtkCommon
