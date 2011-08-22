#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkScalarBarWidget : public vtkInteractorObserver
{

public:
// Did not wrap:  static vtkScalarBarWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkScalarBarWidget *NewInstance ();
  vtkScalarBarWidget^ NewInstance();


  // vtkScalarBarWidget *SafeDownCast (vtkObject* o);
  static vtkScalarBarWidget^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetScalarBarActor (vtkScalarBarActor *scalarbar);
/// <summary>
/// <para>Get the ScalarBar used by this Widget. One is created automatically.</para>
/// </summary>
  void SetScalarBarActor(vtkScalarBarActor^ scalarbar);


  // vtkScalarBarActor *GetScalarBarActor ();
/// <summary>
/// <para>Get the ScalarBar used by this Widget. One is created automatically.</para>
/// </summary>
  vtkScalarBarActor^ GetScalarBarActor();


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Methods for turning the interactor observer on and off.</para>
/// </summary>
  void SetEnabled(int arg0);


// Did not wrap:  vtkScalarBarWidget ();


// Did not wrap:  ~vtkScalarBarWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnRightButtonDown ();


// Did not wrap:  void OnRightButtonUp ();


// Did not wrap:  void OnMouseMove ();


// Did not wrap:  int ComputeStateBasedOnPosition (int X, int Y, int *pos1, int *pos2);


// Did not wrap:  void SetCursor (int State);


// Did not wrap:  vtkScalarBarWidget (const vtkScalarBarWidget &);


// Did not wrap:  void vtkScalarBarWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkScalarBarWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkScalarBarWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkScalarBarWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkScalarBarWidget();


};

} // end vtkWidgets
