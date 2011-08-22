#pragma once

// managed includes
#include "vtkPickerDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkCellPicker : public vtkPicker
{

public:
// Did not wrap:  static vtkCellPicker *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCellPicker *NewInstance ();
  vtkCellPicker^ NewInstance();


  // vtkCellPicker *SafeDownCast (vtkObject* o);
  static vtkCellPicker^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // vtkIdType GetCellId ();
/// <summary>
/// <para>Get the id of the picked cell. If CellId = -1, nothing was picked.</para>
/// </summary>
  int GetCellId();


  // int GetSubId ();
/// <summary>
/// <para>Get the subId of the picked cell. If SubId = -1, nothing was picked.</para>
/// </summary>
  int GetSubId();


  // double  *GetPCoords ();
/// <summary>
/// <para>Get the parametric coordinates of the picked cell. Only valid if  pick was made.</para>
/// </summary>
  array<double>^ GetPCoords();


// Did not wrap:  vtkCellPicker ();


// Did not wrap:  ~vtkCellPicker ();


// Did not wrap:  virtual double IntersectWithLine (double p1[3], double p2[3], double tol, vtkAssemblyPath *path, vtkProp3D *p, vtkAbstractMapper3D *m);


// Did not wrap:  void Initialize ();


// Did not wrap:  vtkCellPicker (const vtkCellPicker &);


// Did not wrap:  void vtkCellPicker 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCellPicker(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCellPicker(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCellPicker();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCellPicker();


};

} // end vtkRendering
