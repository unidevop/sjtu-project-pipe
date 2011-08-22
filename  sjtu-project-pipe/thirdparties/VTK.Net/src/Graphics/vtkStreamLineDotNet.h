#pragma once

// managed includes
#include "vtkStreamerDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkStreamLine : public vtkStreamer
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStreamLine *NewInstance ();
  vtkStreamLine^ NewInstance();


  // vtkStreamLine *SafeDownCast (vtkObject* o);
  static vtkStreamLine^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkStreamLine *New ();


  // void SetStepLength (double );
/// <summary>
/// <para>Specify the length of a line segment. The length is expressed in terms of elapsed time. Smaller values result in smoother appearing streamlines, but greater numbers of line primitives.</para>
/// </summary>
  void SetStepLength(double arg0);


  // double GetStepLengthMinValue ();
/// <summary>
/// <para>Specify the length of a line segment. The length is expressed in terms of elapsed time. Smaller values result in smoother appearing streamlines, but greater numbers of line primitives.</para>
/// </summary>
  double GetStepLengthMinValue();


  // double GetStepLengthMaxValue ();
/// <summary>
/// <para>Specify the length of a line segment. The length is expressed in terms of elapsed time. Smaller values result in smoother appearing streamlines, but greater numbers of line primitives.</para>
/// </summary>
  double GetStepLengthMaxValue();


  // double GetStepLength ();
/// <summary>
/// <para>Specify the length of a line segment. The length is expressed in terms of elapsed time. Smaller values result in smoother appearing streamlines, but greater numbers of line primitives.</para>
/// </summary>
  double GetStepLength();


// Did not wrap:  vtkStreamLine ();


// Did not wrap:  ~vtkStreamLine ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkStreamLine (const vtkStreamLine &);


// Did not wrap:  void vtkStreamLine 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStreamLine(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStreamLine(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStreamLine();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStreamLine();


};

} // end vtkGraphics
