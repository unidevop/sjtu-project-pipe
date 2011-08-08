#pragma once

// managed includes
#include "vtkInteractorStyleDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkInteractorStyleUnicam : public vtkInteractorStyle
{

public:
// Did not wrap:  static vtkInteractorStyleUnicam *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkInteractorStyleUnicam *NewInstance ();
  vtkInteractorStyleUnicam^ NewInstance();


  // vtkInteractorStyleUnicam *SafeDownCast (vtkObject* o);
  static vtkInteractorStyleUnicam^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetWorldUpVector (double a[3]);this SetWorldUpVector a a a 
  void SetWorldUpVector(array<double>^ a);


  // void SetWorldUpVector (double x, double y, double z);
  void SetWorldUpVector(double x, double y, double z);


  // double  *GetWorldUpVector ();
  array<double>^ GetWorldUpVector();


  // virtual void OnMouseMove ();
/// <summary>
/// <para>Concrete implementation of event bindings</para>
/// </summary>
  void OnMouseMove();


  // virtual void OnLeftButtonDown ();
/// <summary>
/// <para>Concrete implementation of event bindings</para>
/// </summary>
  void OnLeftButtonDown();


  // virtual void OnLeftButtonUp ();
/// <summary>
/// <para>Concrete implementation of event bindings</para>
/// </summary>
  void OnLeftButtonUp();


  // virtual void OnLeftButtonMove ();
/// <summary>
/// <para>Concrete implementation of event bindings</para>
/// </summary>
  void OnLeftButtonMove();


  // virtual void OnTimer ();
/// <summary>
/// <para>OnTimer calls RotateCamera, RotateActor etc which should be overridden by style subclasses.</para>
/// </summary>
  void OnTimer();


// Did not wrap:  vtkInteractorStyleUnicam ();


// Did not wrap:  virtual ~vtkInteractorStyleUnicam ();


// Did not wrap:  void ChooseXY (int X, int Y);


// Did not wrap:  void RotateXY (int X, int Y);


// Did not wrap:  void DollyXY (int X, int Y);


// Did not wrap:  void PanXY (int X, int Y);


// Did not wrap:  void MyTranslateCamera (double v[3]);


// Did not wrap:  void MyRotateCamera (double cx, double cy, double cz, double ax, double ay, double az, double angle);


// Did not wrap:  void GetRightVandUpV (double *p, vtkCamera *cam, double *rightV, double *upV);


// Did not wrap:  void NormalizeMouseXY (int X, int Y, double *NX, double *NY);


// Did not wrap:  double WindowAspect ();


// Did not wrap:  vtkInteractorStyleUnicam (const vtkInteractorStyleUnicam &);


// Did not wrap:  void vtkInteractorStyleUnicam 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkInteractorStyleUnicam(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkInteractorStyleUnicam(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkInteractorStyleUnicam();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkInteractorStyleUnicam();


};

} // end vtkRendering
