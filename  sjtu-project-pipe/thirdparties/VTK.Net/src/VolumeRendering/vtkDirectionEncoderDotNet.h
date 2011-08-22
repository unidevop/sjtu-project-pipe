#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDirectionEncoder : public vtkObject
{

public:
  // const char *GetClassName ();
/// <summary>
/// <para>Get the name of this class</para>
/// </summary>
  System::String^ GetClassName();


  // int IsA (const char *name);
/// <summary>
/// <para>Get the name of this class</para>
/// </summary>
  int IsA(System::String^ name);


  // vtkDirectionEncoder *NewInstance ();
/// <summary>
/// <para>Get the name of this class</para>
/// </summary>
  vtkDirectionEncoder^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int GetEncodedDirection (float n[3]) = 0;
/// <summary>
/// <para>Given a normal vector n, return the encoded direction</para>
/// </summary>
  int GetEncodedDirection(array<float>^ n);


// Did not wrap:  virtual float *GetDecodedGradient (int value) = 0;


  // virtual int GetNumberOfEncodedDirections (void ) = 0;
/// <summary>
/// <para>Return the number of encoded directions</para>
/// </summary>
  int GetNumberOfEncodedDirections();


// Did not wrap:  virtual float *GetDecodedGradientTable (void ) = 0;


// Did not wrap:  vtkDirectionEncoder ();


// Did not wrap:  ~vtkDirectionEncoder ();


// Did not wrap:  vtkDirectionEncoder (const vtkDirectionEncoder &);


// Did not wrap:  void vtkDirectionEncoder 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDirectionEncoder(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDirectionEncoder(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDirectionEncoder();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDirectionEncoder();


};

} // end vtkVolumeRendering
