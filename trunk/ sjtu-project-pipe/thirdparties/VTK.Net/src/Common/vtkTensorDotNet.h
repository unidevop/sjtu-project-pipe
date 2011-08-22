#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkTensor : public vtkObject
{

public:
// Did not wrap:  static vtkTensor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTensor *NewInstance ();
  vtkTensor^ NewInstance();


  // vtkTensor *SafeDownCast (vtkObject* o);
  static vtkTensor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void Initialize ();
/// <summary>
/// <para>Initialize tensor components to 0.0.</para>
/// </summary>
  void Initialize();


  // double GetComponent (int i, int j);return this T i j 
/// <summary>
/// <para>Get the tensor component (i,j).</para>
/// </summary>
  double GetComponent(int i, int j);


  // void SetComponent (int i, int j, double v);if i j vtkErrorMacro i j return this T i j v 
/// <summary>
/// <para>Set the value of the tensor component (i,j).</para>
/// </summary>
  void SetComponent(int i, int j, double v);


  // void AddComponent (int i, int j, double v);if i j vtkErrorMacro i j return this T i j v 
/// <summary>
/// <para>Add to the value of the tensor component at location (i,j).</para>
/// </summary>
  void AddComponent(int i, int j, double v);


// Did not wrap:  double *GetColumn (int j);if j vtkErrorMacro j return NULL return this T j 


  // void DeepCopy (vtkTensor *t);
/// <summary>
/// <para>Deep copy of one tensor to another tensor.</para>
/// </summary>
  void DeepCopy(vtkTensor^ t);


// Did not wrap:  double return this T 


// Did not wrap:  vtkTensor ();


// Did not wrap:  ~vtkTensor ();


// Did not wrap:  vtkTensor (const vtkTensor &);


// Did not wrap:  void vtkTensor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTensor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTensor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTensor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTensor();


};

} // end vtkCommon
