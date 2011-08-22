#pragma once

// managed includes
#include "vtkCleanPolyDataDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkQuantizePolyDataPoints : public vtkCleanPolyData
{

public:
// Did not wrap:  static vtkQuantizePolyDataPoints *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkQuantizePolyDataPoints *NewInstance ();
  vtkQuantizePolyDataPoints^ NewInstance();


  // vtkQuantizePolyDataPoints *SafeDownCast (vtkObject* o);
  static vtkQuantizePolyDataPoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetQFactor (double );
/// <summary>
/// <para>Specify quantization grain size</para>
/// </summary>
  void SetQFactor(double arg0);


  // double GetQFactorMinValue ();
/// <summary>
/// <para>Specify quantization grain size</para>
/// </summary>
  double GetQFactorMinValue();


  // double GetQFactorMaxValue ();
/// <summary>
/// <para>Specify quantization grain size</para>
/// </summary>
  double GetQFactorMaxValue();


  // double GetQFactor ();
/// <summary>
/// <para>Specify quantization grain size</para>
/// </summary>
  double GetQFactor();


  // virtual void OperateOnPoint (double in[3], double out[3]);
/// <summary>
/// <para>Perform quantization on a point</para>
/// </summary>
  void OperateOnPoint(array<double>^ in, array<double>^ out);


  // virtual void OperateOnBounds (double in[6], double out[6]);
/// <summary>
/// <para>Perform quantization on bounds</para>
/// </summary>
  void OperateOnBounds(array<double>^ in, array<double>^ out);


// Did not wrap:  vtkQuantizePolyDataPoints ();


// Did not wrap:  ~vtkQuantizePolyDataPoints ();


// Did not wrap:  vtkQuantizePolyDataPoints (const vtkQuantizePolyDataPoints &);


// Did not wrap:  void vtkQuantizePolyDataPoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkQuantizePolyDataPoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkQuantizePolyDataPoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkQuantizePolyDataPoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkQuantizePolyDataPoints();


};

} // end vtkGraphics
