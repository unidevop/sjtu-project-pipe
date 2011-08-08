#pragma once

// managed includes
#include "vtkStreamerDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkStreamPoints : public vtkStreamer
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStreamPoints *NewInstance ();
  vtkStreamPoints^ NewInstance();


  // vtkStreamPoints *SafeDownCast (vtkObject* o);
  static vtkStreamPoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkStreamPoints *New ();


  // void SetTimeIncrement (double );
/// <summary>
/// <para>Specify the separation of points in terms of absolute time.</para>
/// </summary>
  void SetTimeIncrement(double arg0);


  // double GetTimeIncrementMinValue ();
/// <summary>
/// <para>Specify the separation of points in terms of absolute time.</para>
/// </summary>
  double GetTimeIncrementMinValue();


  // double GetTimeIncrementMaxValue ();
/// <summary>
/// <para>Specify the separation of points in terms of absolute time.</para>
/// </summary>
  double GetTimeIncrementMaxValue();


  // double GetTimeIncrement ();
/// <summary>
/// <para>Specify the separation of points in terms of absolute time.</para>
/// </summary>
  double GetTimeIncrement();


// Did not wrap:  vtkStreamPoints ();


// Did not wrap:  ~vtkStreamPoints ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkStreamPoints (const vtkStreamPoints &);


// Did not wrap:  void vtkStreamPoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStreamPoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStreamPoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStreamPoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStreamPoints();


};

} // end vtkGraphics
