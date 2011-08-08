#pragma once

// managed includes
#include "vtkStreamLineDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkDashedStreamLine : public vtkStreamLine
{

public:
// Did not wrap:  static vtkDashedStreamLine *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDashedStreamLine *NewInstance ();
  vtkDashedStreamLine^ NewInstance();


  // vtkDashedStreamLine *SafeDownCast (vtkObject* o);
  static vtkDashedStreamLine^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDashFactor (double );
/// <summary>
/// <para>For each dash, specify the fraction of the dash that is &quot;on&quot;. A factor of 1.0 will result in a continuous line, a factor of 0.5 will result in  dashed that are half on and half off.</para>
/// </summary>
  void SetDashFactor(double arg0);


  // double GetDashFactorMinValue ();
/// <summary>
/// <para>For each dash, specify the fraction of the dash that is &quot;on&quot;. A factor of 1.0 will result in a continuous line, a factor of 0.5 will result in  dashed that are half on and half off.</para>
/// </summary>
  double GetDashFactorMinValue();


  // double GetDashFactorMaxValue ();
/// <summary>
/// <para>For each dash, specify the fraction of the dash that is &quot;on&quot;. A factor of 1.0 will result in a continuous line, a factor of 0.5 will result in  dashed that are half on and half off.</para>
/// </summary>
  double GetDashFactorMaxValue();


  // double GetDashFactor ();
/// <summary>
/// <para>For each dash, specify the fraction of the dash that is &quot;on&quot;. A factor of 1.0 will result in a continuous line, a factor of 0.5 will result in  dashed that are half on and half off.</para>
/// </summary>
  double GetDashFactor();


// Did not wrap:  vtkDashedStreamLine ();


// Did not wrap:  ~vtkDashedStreamLine ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkDashedStreamLine (const vtkDashedStreamLine &);


// Did not wrap:  void vtkDashedStreamLine 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDashedStreamLine(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDashedStreamLine(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDashedStreamLine();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDashedStreamLine();


};

} // end vtkGraphics
