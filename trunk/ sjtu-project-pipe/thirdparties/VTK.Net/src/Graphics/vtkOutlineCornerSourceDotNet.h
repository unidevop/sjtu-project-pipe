#pragma once

// managed includes
#include "vtkOutlineSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkOutlineCornerSource : public vtkOutlineSource
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkOutlineCornerSource *NewInstance ();
  vtkOutlineCornerSource^ NewInstance();


  // vtkOutlineCornerSource *SafeDownCast (vtkObject* o);
  static vtkOutlineCornerSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkOutlineCornerSource *New ();


  // void SetCornerFactor (double );
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the corners to the length of the corresponding bounds</para>
/// </summary>
  void SetCornerFactor(double arg0);


  // double GetCornerFactorMinValue ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the corners to the length of the corresponding bounds</para>
/// </summary>
  double GetCornerFactorMinValue();


  // double GetCornerFactorMaxValue ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the corners to the length of the corresponding bounds</para>
/// </summary>
  double GetCornerFactorMaxValue();


  // double GetCornerFactor ();
/// <summary>
/// <para>Set/Get the factor that controls the relative size of the corners to the length of the corresponding bounds</para>
/// </summary>
  double GetCornerFactor();


// Did not wrap:  vtkOutlineCornerSource ();


// Did not wrap:  ~vtkOutlineCornerSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkOutlineCornerSource (const vtkOutlineCornerSource &);


// Did not wrap:  void vtkOutlineCornerSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkOutlineCornerSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkOutlineCornerSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkOutlineCornerSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkOutlineCornerSource();


};

} // end vtkGraphics
