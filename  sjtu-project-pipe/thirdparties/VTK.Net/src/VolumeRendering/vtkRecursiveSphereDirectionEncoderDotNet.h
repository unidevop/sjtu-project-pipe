#pragma once

// managed includes
#include "vtkDirectionEncoderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkRecursiveSphereDirectionEncoder : public vtkDirectionEncoder
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkRecursiveSphereDirectionEncoder *NewInstance ();
  vtkRecursiveSphereDirectionEncoder^ NewInstance();


  // vtkRecursiveSphereDirectionEncoder *SafeDownCast (vtkObject* o);
  static vtkRecursiveSphereDirectionEncoder^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkRecursiveSphereDirectionEncoder *New ();


  // int GetEncodedDirection (float n[3]);
/// <summary>
/// <para>Given a normal vector n, return the encoded direction  </para>
/// </summary>
  int GetEncodedDirection(array<float>^ n);


  // float *GetDecodedGradient (int value);
/// <summary>
/// <para>/ Given an encoded value, return a pointer to the normal vector</para>
/// </summary>
  array<float>^ GetDecodedGradient(int value);


  // int GetNumberOfEncodedDirections (void );
/// <summary>
/// <para>Return the number of encoded directions</para>
/// </summary>
  int GetNumberOfEncodedDirections();


// Did not wrap:  float *GetDecodedGradientTable (void );


  // void SetRecursionDepth (int );
/// <summary>
/// <para>Set / Get the recursion depth for the subdivision. This indicates how many time one triangle on the initial 8-sided sphere model is replaced by four triangles formed by connecting triangle edge midpoints. A recursion level of 0 yields 8 triangles with 6 unique vertices. The normals are the vectors from the sphere center through the vertices. The number of directions will be 11 since the four normals with 0 z values will be duplicated in the table - once with +0 values and the other time with -0 values, and an addition index will be used to represent the (0,0,0) normal. If we instead choose a recursion  level of 6 (the maximum that can fit within 2 bytes) the number of directions is 16643, with 16386 unique directions and a  zero normal.</para>
/// </summary>
  void SetRecursionDepth(int arg0);


  // int GetRecursionDepthMinValue ();
/// <summary>
/// <para>Set / Get the recursion depth for the subdivision. This indicates how many time one triangle on the initial 8-sided sphere model is replaced by four triangles formed by connecting triangle edge midpoints. A recursion level of 0 yields 8 triangles with 6 unique vertices. The normals are the vectors from the sphere center through the vertices. The number of directions will be 11 since the four normals with 0 z values will be duplicated in the table - once with +0 values and the other time with -0 values, and an addition index will be used to represent the (0,0,0) normal. If we instead choose a recursion  level of 6 (the maximum that can fit within 2 bytes) the number of directions is 16643, with 16386 unique directions and a  zero normal.</para>
/// </summary>
  int GetRecursionDepthMinValue();


  // int GetRecursionDepthMaxValue ();
/// <summary>
/// <para>Set / Get the recursion depth for the subdivision. This indicates how many time one triangle on the initial 8-sided sphere model is replaced by four triangles formed by connecting triangle edge midpoints. A recursion level of 0 yields 8 triangles with 6 unique vertices. The normals are the vectors from the sphere center through the vertices. The number of directions will be 11 since the four normals with 0 z values will be duplicated in the table - once with +0 values and the other time with -0 values, and an addition index will be used to represent the (0,0,0) normal. If we instead choose a recursion  level of 6 (the maximum that can fit within 2 bytes) the number of directions is 16643, with 16386 unique directions and a  zero normal.</para>
/// </summary>
  int GetRecursionDepthMaxValue();


  // int GetRecursionDepth ();
/// <summary>
/// <para>Set / Get the recursion depth for the subdivision. This indicates how many time one triangle on the initial 8-sided sphere model is replaced by four triangles formed by connecting triangle edge midpoints. A recursion level of 0 yields 8 triangles with 6 unique vertices. The normals are the vectors from the sphere center through the vertices. The number of directions will be 11 since the four normals with 0 z values will be duplicated in the table - once with +0 values and the other time with -0 values, and an addition index will be used to represent the (0,0,0) normal. If we instead choose a recursion  level of 6 (the maximum that can fit within 2 bytes) the number of directions is 16643, with 16386 unique directions and a  zero normal.</para>
/// </summary>
  int GetRecursionDepth();


// Did not wrap:  vtkRecursiveSphereDirectionEncoder ();


// Did not wrap:  ~vtkRecursiveSphereDirectionEncoder ();


// Did not wrap:  void InitializeIndexTable (void );


// Did not wrap:  vtkRecursiveSphereDirectionEncoder (const vtkRecursiveSphereDirectionEncoder &);


// Did not wrap:  void vtkRecursiveSphereDirectionEncoder 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkRecursiveSphereDirectionEncoder(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkRecursiveSphereDirectionEncoder(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkRecursiveSphereDirectionEncoder();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkRecursiveSphereDirectionEncoder();


};

} // end vtkVolumeRendering
