#pragma once

// managed includes
#include "vtkImageResliceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImagePermute : public vtkImageReslice
{

public:
// Did not wrap:  static vtkImagePermute *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImagePermute *NewInstance ();
  vtkImagePermute^ NewInstance();


  // vtkImagePermute *SafeDownCast (vtkObject* o);
  static vtkImagePermute^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFilteredAxes (int x, int y, int z);
/// <summary>
/// <para>The filtered axes are the input axes that get relabeled to X,Y,Z.</para>
/// </summary>
  void SetFilteredAxes(int x, int y, int z);


  // void SetFilteredAxes (const int xyz[3]);this SetFilteredAxes xyz xyz xyz 
/// <summary>
/// <para>The filtered axes are the input axes that get relabeled to X,Y,Z.</para>
/// </summary>
  void SetFilteredAxes(array<int>^ arg0);


  // int  *GetFilteredAxes ();
/// <summary>
/// <para>The filtered axes are the input axes that get relabeled to X,Y,Z.</para>
/// </summary>
  array<int>^ GetFilteredAxes();


// Did not wrap:  vtkImagePermute ();


// Did not wrap:  ~vtkImagePermute ();


// Did not wrap:  vtkImagePermute (const vtkImagePermute &);


// Did not wrap:  void vtkImagePermute 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImagePermute(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImagePermute(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImagePermute();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImagePermute();


};

} // end vtkImaging
