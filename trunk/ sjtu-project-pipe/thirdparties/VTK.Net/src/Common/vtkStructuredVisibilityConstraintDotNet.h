#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkUnsignedCharArray;

public ref class vtkStructuredVisibilityConstraint : public vtkObject
{

public:
// Did not wrap:  static vtkStructuredVisibilityConstraint *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredVisibilityConstraint *NewInstance ();
  vtkStructuredVisibilityConstraint^ NewInstance();


  // vtkStructuredVisibilityConstraint *SafeDownCast (vtkObject* o);
  static vtkStructuredVisibilityConstraint^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // unsigned char IsVisible (vtkIdType id);
/// <summary>
/// <para>Returns 1 is the point/cell is visible, 0 otherwise.</para>
/// </summary>
  unsigned char IsVisible(int id);


  // void Blank (vtkIdType id);
/// <summary>
/// <para>Sets the visibility flag of the given point/cell off. The first time blank is called, a new visibility array is created if it doesn't exist.</para>
/// </summary>
  void Blank(int id);


  // void UnBlank (vtkIdType id);
/// <summary>
/// <para>Sets the visibility flag of the given point/cell on.</para>
/// </summary>
  void UnBlank(int id);


  // int  *GetDimensions ();
/// <summary>
/// <para>Get the dimensions used to initialize the object.</para>
/// </summary>
  array<int>^ GetDimensions();


  // void Initialize (int dims[3]);
/// <summary>
/// <para>Set the dimensions and set the Initialized flag to 1. Once an object is initialized, it's dimensions can not be changed anymore.</para>
/// </summary>
  void Initialize(array<int>^ dims);


  // void SetVisibilityById (vtkUnsignedCharArray *vis);
/// <summary>
/// <para>Set/Get the array used to store the visibility flags.</para>
/// </summary>
  void SetVisibilityById(vtkUnsignedCharArray^ vis);


  // vtkUnsignedCharArray *GetVisibilityById ();
/// <summary>
/// <para>Set/Get the array used to store the visibility flags.</para>
/// </summary>
  vtkUnsignedCharArray^ GetVisibilityById();


  // void ShallowCopy (vtkStructuredVisibilityConstraint *src);
/// <summary>
/// <para>Copies the dimensions, the visibility array pointer and the initialized flag.</para>
/// </summary>
  void ShallowCopy(vtkStructuredVisibilityConstraint^ src);


  // void DeepCopy (vtkStructuredVisibilityConstraint *src);
/// <summary>
/// <para>Copies the dimensions, the visibility array  and the initialized flag.</para>
/// </summary>
  void DeepCopy(vtkStructuredVisibilityConstraint^ src);


  // unsigned char IsConstrained ();return this VisibilityById 
  unsigned char IsConstrained();


// Did not wrap:  vtkStructuredVisibilityConstraint ();


// Did not wrap:  ~vtkStructuredVisibilityConstraint ();


// Did not wrap:  vtkStructuredVisibilityConstraint (const vtkStructuredVisibilityConstraint &);


// Did not wrap:  void vtkStructuredVisibilityConstraint 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredVisibilityConstraint(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredVisibilityConstraint(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredVisibilityConstraint();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredVisibilityConstraint();


};

} // end vtkCommon
