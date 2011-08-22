#pragma once

// managed includes
#include "vtkDirectionEncoderDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSphericalDirectionEncoder : public vtkDirectionEncoder
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSphericalDirectionEncoder *NewInstance ();
  vtkSphericalDirectionEncoder^ NewInstance();


  // vtkSphericalDirectionEncoder *SafeDownCast (vtkObject* o);
  static vtkSphericalDirectionEncoder^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkSphericalDirectionEncoder *New ();


  // int GetEncodedDirection (float n[3]);
/// <summary>
/// <para>Given a normal vector n, return the encoded direction  </para>
/// </summary>
  int GetEncodedDirection(array<float>^ n);


// Did not wrap:  float *GetDecodedGradient (int value);


  // int GetNumberOfEncodedDirections (void );return 
/// <summary>
/// <para>Get the decoded gradient table. There are  this-&gt;GetNumberOfEncodedDirections() entries in the table, each containing a normal (direction) vector. This is a flat structure -  3 times the number of directions floats in an array.</para>
/// </summary>
  int GetNumberOfEncodedDirections();


// Did not wrap:  float *GetDecodedGradientTable (void );return this DecodedGradientTable 


// Did not wrap:  vtkSphericalDirectionEncoder ();


// Did not wrap:  ~vtkSphericalDirectionEncoder ();


// Did not wrap:  static void InitializeDecodedGradientTable ();


// Did not wrap:  vtkSphericalDirectionEncoder (const vtkSphericalDirectionEncoder &);


// Did not wrap:  void vtkSphericalDirectionEncoder 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSphericalDirectionEncoder(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSphericalDirectionEncoder(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSphericalDirectionEncoder();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSphericalDirectionEncoder();


};

} // end vtkVolumeRendering
