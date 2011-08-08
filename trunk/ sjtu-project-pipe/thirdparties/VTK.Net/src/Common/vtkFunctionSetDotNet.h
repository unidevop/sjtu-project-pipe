#pragma once

// managed includes
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkFunctionSet : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFunctionSet *NewInstance ();
  vtkFunctionSet^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual int FunctionValues (double *x, double *f) = 0;
/// <summary>
/// <para>Evaluate functions at x_j. x and f have to point to valid double arrays of appropriate  sizes obtained with GetNumberOfFunctions() and GetNumberOfIndependentVariables.</para>
/// </summary>
  int FunctionValues(array<double>^ x, array<double>^ f);


  // virtual int GetNumberOfFunctions ();return this NumFuncs 
/// <summary>
/// <para>Return the number of independent variables. Note that this is  constant for a given type of set of functions and can not be changed   at run time.</para>
/// </summary>
  int GetNumberOfFunctions();


  // virtual int GetNumberOfIndependentVariables ();return this NumIndepVars 
  int GetNumberOfIndependentVariables();


// Did not wrap:  vtkFunctionSet ();


// Did not wrap:  ~vtkFunctionSet ();


// Did not wrap:  vtkFunctionSet (const vtkFunctionSet &);


// Did not wrap:  void vtkFunctionSet 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFunctionSet(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFunctionSet(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFunctionSet();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFunctionSet();


};

} // end vtkCommon
