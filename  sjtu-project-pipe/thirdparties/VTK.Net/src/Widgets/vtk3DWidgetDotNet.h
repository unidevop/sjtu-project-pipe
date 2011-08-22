#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtk3DWidget : public vtkInteractorObserver
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtk3DWidget *NewInstance ();
  vtk3DWidget^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void PlaceWidget (double bounds[6]) = 0;
/// <summary>
/// <para>This method is used to initially place the widget.  The placement of the widget depends on whether a Prop3D or input dataset is provided. If one of these two is provided, they will be used to obtain a bounding box, around which the widget is placed. Otherwise, you can manually specify a bounds with the PlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required by all subclasses; the other methods are provided as convenience methods.</para>
/// </summary>
  void PlaceWidget(array<double>^ bounds);


  // virtual void PlaceWidget ();
/// <summary>
/// <para>This method is used to initially place the widget.  The placement of the widget depends on whether a Prop3D or input dataset is provided. If one of these two is provided, they will be used to obtain a bounding box, around which the widget is placed. Otherwise, you can manually specify a bounds with the PlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required by all subclasses; the other methods are provided as convenience methods.</para>
/// </summary>
  void PlaceWidget();


  // virtual void PlaceWidget (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);
/// <summary>
/// <para>This method is used to initially place the widget.  The placement of the widget depends on whether a Prop3D or input dataset is provided. If one of these two is provided, they will be used to obtain a bounding box, around which the widget is placed. Otherwise, you can manually specify a bounds with the PlaceWidget(bounds) method. Note: PlaceWidget(bounds) is required by all subclasses; the other methods are provided as convenience methods.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // virtual void SetProp3D (vtkProp3D *);
/// <summary>
/// <para>Specify a vtkProp3D around which to place the widget. This  is not required, but if supplied, it is used to initially  position the widget.</para>
/// </summary>
  void SetProp3D(vtkProp3D^ arg0);


  // vtkProp3D *GetProp3D ();
/// <summary>
/// <para>Specify a vtkProp3D around which to place the widget. This  is not required, but if supplied, it is used to initially  position the widget.</para>
/// </summary>
  vtkProp3D^ GetProp3D();


  // virtual void SetInput (vtkDataSet *);
/// <summary>
/// <para>Specify the input dataset. This is not required, but if supplied, and no vtkProp3D is specified, it is used to initially position  the widget.</para>
/// </summary>
  void SetInput(vtkDataSet^ arg0);


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Specify the input dataset. This is not required, but if supplied, and no vtkProp3D is specified, it is used to initially position  the widget.</para>
/// </summary>
  vtkDataSet^ GetInput();


  // void SetPlaceFactor (double );
/// <summary>
/// <para>Set/Get a factor representing the scaling of the widget upon placement (via the PlaceWidget() method). Normally the widget is placed so that it just fits within the bounding box defined in PlaceWidget(bounds). The PlaceFactor will make the widget larger (PlaceFactor &gt; 1) or smaller (PlaceFactor &lt; 1). By default, PlaceFactor is set to 0.5.</para>
/// </summary>
  void SetPlaceFactor(double arg0);


  // double GetPlaceFactorMinValue ();
/// <summary>
/// <para>Set/Get a factor representing the scaling of the widget upon placement (via the PlaceWidget() method). Normally the widget is placed so that it just fits within the bounding box defined in PlaceWidget(bounds). The PlaceFactor will make the widget larger (PlaceFactor &gt; 1) or smaller (PlaceFactor &lt; 1). By default, PlaceFactor is set to 0.5.</para>
/// </summary>
  double GetPlaceFactorMinValue();


  // double GetPlaceFactorMaxValue ();
/// <summary>
/// <para>Set/Get a factor representing the scaling of the widget upon placement (via the PlaceWidget() method). Normally the widget is placed so that it just fits within the bounding box defined in PlaceWidget(bounds). The PlaceFactor will make the widget larger (PlaceFactor &gt; 1) or smaller (PlaceFactor &lt; 1). By default, PlaceFactor is set to 0.5.</para>
/// </summary>
  double GetPlaceFactorMaxValue();


  // double GetPlaceFactor ();
/// <summary>
/// <para>Set/Get a factor representing the scaling of the widget upon placement (via the PlaceWidget() method). Normally the widget is placed so that it just fits within the bounding box defined in PlaceWidget(bounds). The PlaceFactor will make the widget larger (PlaceFactor &gt; 1) or smaller (PlaceFactor &lt; 1). By default, PlaceFactor is set to 0.5.</para>
/// </summary>
  double GetPlaceFactor();


  // void SetHandleSize (double );
/// <summary>
/// <para>Set/Get the factor that controls the size of the handles that appear as part of the widget. These handles (like spheres, etc.) are used to manipulate the widget, and are sized as a fraction of the screen diagonal.</para>
/// </summary>
  void SetHandleSize(double arg0);


  // double GetHandleSizeMinValue ();
/// <summary>
/// <para>Set/Get the factor that controls the size of the handles that appear as part of the widget. These handles (like spheres, etc.) are used to manipulate the widget, and are sized as a fraction of the screen diagonal.</para>
/// </summary>
  double GetHandleSizeMinValue();


  // double GetHandleSizeMaxValue ();
/// <summary>
/// <para>Set/Get the factor that controls the size of the handles that appear as part of the widget. These handles (like spheres, etc.) are used to manipulate the widget, and are sized as a fraction of the screen diagonal.</para>
/// </summary>
  double GetHandleSizeMaxValue();


  // double GetHandleSize ();
/// <summary>
/// <para>Set/Get the factor that controls the size of the handles that appear as part of the widget. These handles (like spheres, etc.) are used to manipulate the widget, and are sized as a fraction of the screen diagonal.</para>
/// </summary>
  double GetHandleSize();


// Did not wrap:  vtk3DWidget ();


// Did not wrap:  ~vtk3DWidget ();


// Did not wrap:  void AdjustBounds (double bounds[6], double newBounds[6], double center[3]);


// Did not wrap:  double SizeHandles (double factor);


// Did not wrap:  virtual void SizeHandles ();


// Did not wrap:  vtk3DWidget (const vtk3DWidget &);


// Did not wrap:  void vtk3DWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtk3DWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtk3DWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtk3DWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtk3DWidget();


};

} // end vtkWidgets
