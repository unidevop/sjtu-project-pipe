#pragma once

// managed includes
#include "vtkPiecewiseFunctionAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPiecewiseFunctionShiftScale : public vtkPiecewiseFunctionAlgorithm
{

public:
// Did not wrap:  static vtkPiecewiseFunctionShiftScale *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPiecewiseFunctionShiftScale *NewInstance ();
  vtkPiecewiseFunctionShiftScale^ NewInstance();


  // vtkPiecewiseFunctionShiftScale *SafeDownCast (vtkObject* o);
  static vtkPiecewiseFunctionShiftScale^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetPositionShift (double );
  void SetPositionShift(double arg0);


  // void SetPositionScale (double );
  void SetPositionScale(double arg0);


  // void SetValueShift (double );
  void SetValueShift(double arg0);


  // void SetValueScale (double );
  void SetValueScale(double arg0);


  // double GetPositionShift ();
  double GetPositionShift();


  // double GetPositionScale ();
  double GetPositionScale();


  // double GetValueShift ();
  double GetValueShift();


  // double GetValueScale ();
  double GetValueScale();


// Did not wrap:  vtkPiecewiseFunctionShiftScale ();


// Did not wrap:  ~vtkPiecewiseFunctionShiftScale ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkPiecewiseFunctionShiftScale (const vtkPiecewiseFunctionShiftScale &);


// Did not wrap:  void vtkPiecewiseFunctionShiftScale 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPiecewiseFunctionShiftScale(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPiecewiseFunctionShiftScale(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPiecewiseFunctionShiftScale();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPiecewiseFunctionShiftScale();


};

} // end vtkFiltering
