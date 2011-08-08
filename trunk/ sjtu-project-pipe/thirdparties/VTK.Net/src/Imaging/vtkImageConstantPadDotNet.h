#pragma once

// managed includes
#include "vtkImagePadFilterDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageConstantPad : public vtkImagePadFilter
{

public:
// Did not wrap:  static vtkImageConstantPad *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageConstantPad *NewInstance ();
  vtkImageConstantPad^ NewInstance();


  // vtkImageConstantPad *SafeDownCast (vtkObject* o);
  static vtkImageConstantPad^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetConstant (double );
/// <summary>
/// <para>Set/Get the pad value.</para>
/// </summary>
  void SetConstant(double arg0);


  // double GetConstant ();
/// <summary>
/// <para>Set/Get the pad value.</para>
/// </summary>
  double GetConstant();


// Did not wrap:  vtkImageConstantPad ();


// Did not wrap:  ~vtkImageConstantPad ();


// Did not wrap:  void ThreadedRequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector, vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageConstantPad (const vtkImageConstantPad &);


// Did not wrap:  void vtkImageConstantPad 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageConstantPad(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageConstantPad(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageConstantPad();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageConstantPad();


};

} // end vtkImaging
