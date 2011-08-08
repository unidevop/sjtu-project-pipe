#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkMatrix4x4 : public vtkObject
{

public:
// Did not wrap:  static vtkMatrix4x4 *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMatrix4x4 *NewInstance ();
  vtkMatrix4x4^ NewInstance();


  // vtkMatrix4x4 *SafeDownCast (vtkObject* o);
  static vtkMatrix4x4^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void DeepCopy (vtkMatrix4x4 *source);vtkMatrix4x4 DeepCopy this Element source this Modified 
/// <summary>
/// <para>Non-static member function. Assigns *from* elements array</para>
/// </summary>
  void DeepCopy(vtkMatrix4x4^ source);


  // void DeepCopy (const double Elements[16]);this DeepCopy this Element Elements this Modified 
/// <summary>
/// <para>Set all of the elements to zero.</para>
/// </summary>
  void DeepCopy(array<double>^ Elements);


  // void Zero ();vtkMatrix4x4 Zero this Element this Modified 
/// <summary>
/// <para>Set equal to Identity matrix</para>
/// </summary>
  void Zero();


  // void Identity ();vtkMatrix4x4 Identity this Element this Modified 
/// <summary>
/// <para>Matrix Inversion (adapted from Richard Carling in &quot;Graphics Gems,&quot;  Academic Press, 1990).</para>
/// </summary>
  void Identity();


  // static void Invert (vtkMatrix4x4 *in, vtkMatrix4x4 *out);vtkMatrix4x4 Invert in Element out Element out Modified 
/// <summary>
/// <para>Matrix Inversion (adapted from Richard Carling in &quot;Graphics Gems,&quot;  Academic Press, 1990).</para>
/// </summary>
  static void Invert(vtkMatrix4x4^ in, vtkMatrix4x4^ out);


  // void Invert ();vtkMatrix4x4 Invert this this 
/// <summary>
/// <para>Transpose the matrix and put it into out. </para>
/// </summary>
  void Invert();


  // static void Transpose (vtkMatrix4x4 *in, vtkMatrix4x4 *out);vtkMatrix4x4 Transpose in Element out Element out Modified 
/// <summary>
/// <para>Transpose the matrix and put it into out. </para>
/// </summary>
  static void Transpose(vtkMatrix4x4^ in, vtkMatrix4x4^ out);


  // void Transpose ();vtkMatrix4x4 Transpose this this 
/// <summary>
/// <para>Multiply a homogeneous coordinate by this matrix, i.e. out = A*in. The in[4] and out[4] can be the same array.</para>
/// </summary>
  void Transpose();


  // void MultiplyPoint (const float in[4], float out[4]);vtkMatrix4x4 MultiplyPoint this Element in out 
/// <summary>
/// <para>Multiply a homogeneous coordinate by this matrix, i.e. out = A*in. The in[4] and out[4] can be the same array.</para>
/// </summary>
  void MultiplyPoint(array<float>^ in, array<float>^ out);


  // void MultiplyPoint (const double in[4], double out[4]);vtkMatrix4x4 MultiplyPoint this Element in out 
/// <summary>
/// <para>For use in Java, Python or Tcl.  The default MultiplyPoint() uses a single-precision point.</para>
/// </summary>
  void MultiplyPoint(array<double>^ in, array<double>^ out);


  // float *MultiplyPoint (const float in[4]);return this MultiplyFloatPoint in 
/// <summary>
/// <para>For use in Java, Python or Tcl.  The default MultiplyPoint() uses a single-precision point.</para>
/// </summary>
  array<float>^ MultiplyPoint(array<float>^ in);


  // float *MultiplyFloatPoint (const float in[4]);this MultiplyPoint in this FloatPoint return this FloatPoint 
/// <summary>
/// <para>For use in Java, Python or Tcl.  The default MultiplyPoint() uses a single-precision point.</para>
/// </summary>
  array<float>^ MultiplyFloatPoint(array<float>^ in);


  // double *MultiplyDoublePoint (const double in[4]);this MultiplyPoint in this DoublePoint return this DoublePoint 
/// <summary>
/// <para>Multiplies matrices a and b and stores the result in c.</para>
/// </summary>
  array<double>^ MultiplyDoublePoint(array<double>^ in);


  // static void Multiply4x4 (vtkMatrix4x4 *a, vtkMatrix4x4 *b, vtkMatrix4x4 *c);vtkMatrix4x4 Multiply4x4 a Element b Element c Element 
/// <summary>
/// <para>Multiplies matrices a and b and stores the result in c.</para>
/// </summary>
  static void Multiply4x4(vtkMatrix4x4^ a, vtkMatrix4x4^ b, vtkMatrix4x4^ c);


  // void Adjoint (vtkMatrix4x4 *in, vtkMatrix4x4 *out);vtkMatrix4x4 Adjoint in Element out Element 
/// <summary>
/// <para>Compute the determinant of the matrix and return it.</para>
/// </summary>
  void Adjoint(vtkMatrix4x4^ in, vtkMatrix4x4^ out);


  // double Determinant ();return vtkMatrix4x4 Determinant this Element 
/// <summary>
/// <para>Sets the element i,j in the matrix.</para>
/// </summary>
  double Determinant();


  // void SetElement (int i, int j, double value);
/// <summary>
/// <para>Sets the element i,j in the matrix.</para>
/// </summary>
  void SetElement(int i, int j, double value);


  // double GetElement (int i, int j) const;return this Element i j 
  double GetElement(int i, int j);


// Did not wrap:  vtkMatrix4x4 ();vtkMatrix4x4 Identity this Element 


// Did not wrap:  ~vtkMatrix4x4 ();


// Did not wrap:  vtkMatrix4x4 (const vtkMatrix4x4 &);


// Did not wrap:  void vtkMatrix4x4 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMatrix4x4(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMatrix4x4(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMatrix4x4();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMatrix4x4();


};

} // end vtkCommon
