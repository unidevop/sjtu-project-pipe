#pragma once

// managed includes
#include "vtk3DWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkPolyDataSourceWidget : public vtk3DWidget
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkPolyDataSourceWidget *NewInstance ();
  vtkPolyDataSourceWidget^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void PlaceWidget ();
/// <summary>
/// <para>Overrides vtk3DWidget PlaceWidget() so that it doesn't complain if there's no Input and no Prop3D.</para>
/// </summary>
  void PlaceWidget();


  // virtual void PlaceWidget (double bounds[6]) = 0;
/// <summary>
/// <para>We have to redeclare this abstract, PlaceWidget() requires it.  You HAVE to override this in your concrete child classes.  If there's no Prop3D and no Input, your PlaceWidget must make use of the underlying  PolyDataSource to do its work.</para>
/// </summary>
  void PlaceWidget(array<double>^ bounds);


  // void PlaceWidget (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);this Superclass PlaceWidget xmin xmax ymin ymax zmin zmax 
/// <summary>
/// <para>Returns underlying vtkPolyDataSource that determines geometry.  This can be modified after which PlaceWidget() or UpdatePlacement() can be called.  UpdatePlacement() will always update the planewidget according to the geometry of the underlying PolyDataSource.  PlaceWidget() will only make use of this geometry if there is no Input and no Prop3D set.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // virtual vtkPolyDataSource *GetPolyDataSource ();
/// <summary>
/// <para>Returns underlying vtkPolyDataSource that determines geometry.  This can be modified after which PlaceWidget() or UpdatePlacement() can be called.  UpdatePlacement() will always update the planewidget according to the geometry of the underlying PolyDataSource.  PlaceWidget() will only make use of this geometry if there is no Input and no Prop3D set.</para>
/// </summary>
  vtkPolyDataSource^ GetPolyDataSource();


  // virtual vtkPolyDataAlgorithm *GetPolyDataAlgorithm () = 0;
/// <summary>
/// <para>Returns underlying vtkPolyDataSource that determines geometry.  This can be modified after which PlaceWidget() or UpdatePlacement() can be called.  UpdatePlacement() will always update the planewidget according to the geometry of the underlying PolyDataSource.  PlaceWidget() will only make use of this geometry if there is no Input and no Prop3D set.</para>
/// </summary>
  vtkPolyDataAlgorithm^ GetPolyDataAlgorithm();


  // virtual void UpdatePlacement () = 0;
/// <summary>
/// <para>If you've made changes to the underlying vtkPolyDataSource AFTER your initial call to PlaceWidget(), use this method to realise the changes in the widget.</para>
/// </summary>
  void UpdatePlacement();


// Did not wrap:  vtkPolyDataSourceWidget ();


// Did not wrap:  vtkPolyDataSourceWidget (const vtkPolyDataSourceWidget &);


// Did not wrap:  void vtkPolyDataSourceWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkPolyDataSourceWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkPolyDataSourceWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkPolyDataSourceWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkPolyDataSourceWidget();


};

} // end vtkWidgets
