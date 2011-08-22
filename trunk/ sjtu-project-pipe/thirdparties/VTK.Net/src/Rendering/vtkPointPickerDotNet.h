#pragma once

// managed includes
#include "vtkPickerDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPointPicker : public vtkPicker
{

public:
// Did not wrap:  static vtkPointPicker *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPointPicker *NewInstance ();
  vtkPointPicker^ NewInstance();


  // vtkPointPicker *SafeDownCast (vtkObject* o);
  static vtkPointPicker^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkIdType GetPointId ();
/// <summary>
/// <para>Get the id of the picked point. If PointId = -1, nothing was picked.</para>
/// </summary>
  int GetPointId();


// Did not wrap:  vtkPointPicker ();


// Did not wrap:  ~vtkPointPicker ();


// Did not wrap:  double IntersectWithLine (double p1[3], double p2[3], double tol, vtkAssemblyPath *path, vtkProp3D *p, vtkAbstractMapper3D *m);


// Did not wrap:  void Initialize ();


// Did not wrap:  vtkPointPicker (const vtkPointPicker &);


// Did not wrap:  void vtkPointPicker 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPointPicker(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPointPicker(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPointPicker();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPointPicker();


};

} // end vtkRendering
