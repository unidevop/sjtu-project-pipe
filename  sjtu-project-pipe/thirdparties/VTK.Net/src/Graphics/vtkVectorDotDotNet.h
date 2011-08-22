#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVectorDot : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVectorDot *NewInstance ();
  vtkVectorDot^ NewInstance();


  // vtkVectorDot *SafeDownCast (vtkObject* o);
  static vtkVectorDot^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkVectorDot *New ();


  // void SetScalarRange (double , double );
/// <summary>
/// <para>Specify range to map scalars into.</para>
/// </summary>
  void SetScalarRange(double arg0, double arg1);


  // void SetScalarRange (double  a[2]);
/// <summary>
/// <para>Specify range to map scalars into.</para>
/// </summary>
  void SetScalarRange(array<double>^ a);


  // double  *GetScalarRange ();
/// <summary>
/// <para>Get the range that scalars map into.</para>
/// </summary>
  array<double>^ GetScalarRange();


// Did not wrap:  vtkVectorDot ();


// Did not wrap:  ~vtkVectorDot ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkVectorDot (const vtkVectorDot &);


// Did not wrap:  void vtkVectorDot 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVectorDot(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVectorDot(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVectorDot();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVectorDot();


};

} // end vtkGraphics
