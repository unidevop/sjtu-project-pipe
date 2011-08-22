#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkXYPlotWidget : public vtkInteractorObserver
{

public:
// Did not wrap:  static vtkXYPlotWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkXYPlotWidget *NewInstance ();
  vtkXYPlotWidget^ NewInstance();


  // vtkXYPlotWidget *SafeDownCast (vtkObject* o);
  static vtkXYPlotWidget^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetXYPlotActor (vtkXYPlotActor *);
/// <summary>
/// <para>Get the XY plot used by this Widget. One is created automatically.</para>
/// </summary>
  void SetXYPlotActor(vtkXYPlotActor^ arg0);


  // vtkXYPlotActor *GetXYPlotActor ();
/// <summary>
/// <para>Get the XY plot used by this Widget. One is created automatically.</para>
/// </summary>
  vtkXYPlotActor^ GetXYPlotActor();


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Methods for turning the interactor observer on and off.</para>
/// </summary>
  void SetEnabled(int arg0);


// Did not wrap:  vtkXYPlotWidget ();


// Did not wrap:  ~vtkXYPlotWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnMouseMove ();


// Did not wrap:  int ComputeStateBasedOnPosition (int X, int Y, int *pos1, int *pos2);


// Did not wrap:  void SetCursor (int State);


// Did not wrap:  vtkXYPlotWidget (const vtkXYPlotWidget &);


// Did not wrap:  void vtkXYPlotWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkXYPlotWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkXYPlotWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkXYPlotWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkXYPlotWidget();


};

} // end vtkWidgets
