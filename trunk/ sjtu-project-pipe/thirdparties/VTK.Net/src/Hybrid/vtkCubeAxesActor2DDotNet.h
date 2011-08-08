#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkCubeAxesActor2D : public vtkActor2D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCubeAxesActor2D *NewInstance ();
  vtkCubeAxesActor2D^ NewInstance();


  // vtkCubeAxesActor2D *SafeDownCast (vtkObject* o);
  static vtkCubeAxesActor2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCubeAxesActor2D *New ();


  // int RenderOverlay (vtkViewport *);
/// <summary>
/// <para>Draw the axes as per the vtkProp superclass' API.</para>
/// </summary>
  int RenderOverlay(vtkViewport^ arg0);


  // int RenderOpaqueGeometry (vtkViewport *);
/// <summary>
/// <para>Draw the axes as per the vtkProp superclass' API.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ arg0);


  // int RenderTranslucentGeometry (vtkViewport *);return 
/// <summary>
/// <para>Use the bounding box of this input dataset to draw the cube axes. If this is not specified, then the class will attempt to determine the bounds from the defined Prop or Bounds.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ arg0);


  // virtual void SetInput (vtkDataSet *);
/// <summary>
/// <para>Use the bounding box of this input dataset to draw the cube axes. If this is not specified, then the class will attempt to determine the bounds from the defined Prop or Bounds.</para>
/// </summary>
  void SetInput(vtkDataSet^ arg0);


  // vtkDataSet *GetInput ();
/// <summary>
/// <para>Use the bounding box of this input dataset to draw the cube axes. If this is not specified, then the class will attempt to determine the bounds from the defined Prop or Bounds.</para>
/// </summary>
  vtkDataSet^ GetInput();


  // void SetViewProp (vtkProp *prop);
/// <summary>
/// <para>Use the bounding box of this prop to draw the cube axes. The ViewProp is used to determine the bounds only if the Input is not defined.</para>
/// </summary>
  void SetViewProp(vtkProp^ prop);


  // vtkProp *GetViewProp ();
/// <summary>
/// <para>Use the bounding box of this prop to draw the cube axes. The ViewProp is used to determine the bounds only if the Input is not defined.</para>
/// </summary>
  vtkProp^ GetViewProp();


  // void SetBounds (double , double , double , double , double , double );
/// <summary>
/// <para>Explicitly specify the region in space around which to draw the bounds. The bounds is used only when no Input or Prop is specified. The bounds are specified according to (xmin,xmax, ymin,ymax, zmin,zmax), making sure that the min's are less than the max's.</para>
/// </summary>
  void SetBounds(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetBounds (double  a[6]);
/// <summary>
/// <para>Explicitly specify the region in space around which to draw the bounds. The bounds is used only when no Input or Prop is specified. The bounds are specified according to (xmin,xmax, ymin,ymax, zmin,zmax), making sure that the min's are less than the max's.</para>
/// </summary>
  void SetBounds(array<double>^ a);


  // double *GetBounds ();
/// <summary>
/// <para>Explicitly specify the region in space around which to draw the bounds. The bounds is used only when no Input or Prop is specified. The bounds are specified according to (xmin,xmax, ymin,ymax, zmin,zmax), making sure that the min's are less than the max's.</para>
/// </summary>
  array<double>^ GetBounds();


  // void GetBounds (double &xmin, double &xmax, double &ymin, double &ymax, double &zmin, double &zmax);
/// <summary>
/// <para>Explicitly specify the region in space around which to draw the bounds. The bounds is used only when no Input or Prop is specified. The bounds are specified according to (xmin,xmax, ymin,ymax, zmin,zmax), making sure that the min's are less than the max's.</para>
/// </summary>
  void GetBounds(double% xmin, double% xmax, double% ymin, double% ymax, double% zmin, double% zmax);


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Explicitly specify the region in space around which to draw the bounds. The bounds is used only when no Input or Prop is specified. The bounds are specified according to (xmin,xmax, ymin,ymax, zmin,zmax), making sure that the min's are less than the max's.</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // void SetRanges (double , double , double , double , double , double );
/// <summary>
/// <para>Explicitly specify the range of values used on the bounds. The ranges are specified according to (xmin,xmax, ymin,ymax, zmin,zmax),  making sure that the min's are less than the max's.</para>
/// </summary>
  void SetRanges(double arg0, double arg1, double arg2, double arg3, double arg4, double arg5);


  // void SetRanges (double  a[6]);
/// <summary>
/// <para>Explicitly specify the range of values used on the bounds. The ranges are specified according to (xmin,xmax, ymin,ymax, zmin,zmax),  making sure that the min's are less than the max's.</para>
/// </summary>
  void SetRanges(array<double>^ a);


  // double *GetRanges ();
/// <summary>
/// <para>Explicitly specify the range of values used on the bounds. The ranges are specified according to (xmin,xmax, ymin,ymax, zmin,zmax),  making sure that the min's are less than the max's.</para>
/// </summary>
  array<double>^ GetRanges();


  // void GetRanges (double &xmin, double &xmax, double &ymin, double &ymax, double &zmin, double &zmax);
/// <summary>
/// <para>Explicitly specify the range of values used on the bounds. The ranges are specified according to (xmin,xmax, ymin,ymax, zmin,zmax),  making sure that the min's are less than the max's.</para>
/// </summary>
  void GetRanges(double% xmin, double% xmax, double% ymin, double% ymax, double% zmin, double% zmax);


  // void GetRanges (double ranges[6]);
/// <summary>
/// <para>Explicitly specify the range of values used on the bounds. The ranges are specified according to (xmin,xmax, ymin,ymax, zmin,zmax),  making sure that the min's are less than the max's.</para>
/// </summary>
  void GetRanges(array<double>^ ranges);


  // void SetUseRanges (int );
/// <summary>
/// <para>Set/Get a flag that controls whether the axes use the data ranges or the ranges set by SetRanges. By default the axes use the data ranges.</para>
/// </summary>
  void SetUseRanges(int arg0);


  // int GetUseRanges ();
/// <summary>
/// <para>Set/Get a flag that controls whether the axes use the data ranges or the ranges set by SetRanges. By default the axes use the data ranges.</para>
/// </summary>
  int GetUseRanges();


  // void UseRangesOn ();
/// <summary>
/// <para>Set/Get a flag that controls whether the axes use the data ranges or the ranges set by SetRanges. By default the axes use the data ranges.</para>
/// </summary>
  void UseRangesOn();


  // void UseRangesOff ();
/// <summary>
/// <para>Set/Get a flag that controls whether the axes use the data ranges or the ranges set by SetRanges. By default the axes use the data ranges.</para>
/// </summary>
  void UseRangesOff();


  // virtual void SetCamera (vtkCamera *);
/// <summary>
/// <para>Set/Get the camera to perform scaling and translation of the  vtkCubeAxesActor2D.</para>
/// </summary>
  void SetCamera(vtkCamera^ arg0);


  // vtkCamera *GetCamera ();
/// <summary>
/// <para>Set/Get the camera to perform scaling and translation of the  vtkCubeAxesActor2D.</para>
/// </summary>
  vtkCamera^ GetCamera();


  // void SetFlyMode (int );
/// <summary>
/// <para>Specify a mode to control how the axes are drawn: either outer edges or closest triad to the camera position.</para>
/// </summary>
  void SetFlyMode(int arg0);


  // int GetFlyModeMinValue ();
/// <summary>
/// <para>Specify a mode to control how the axes are drawn: either outer edges or closest triad to the camera position.</para>
/// </summary>
  int GetFlyModeMinValue();


  // int GetFlyModeMaxValue ();
/// <summary>
/// <para>Specify a mode to control how the axes are drawn: either outer edges or closest triad to the camera position.</para>
/// </summary>
  int GetFlyModeMaxValue();


  // int GetFlyMode ();
/// <summary>
/// <para>Specify a mode to control how the axes are drawn: either outer edges or closest triad to the camera position.</para>
/// </summary>
  int GetFlyMode();


  // void SetFlyModeToOuterEdges ();this SetFlyMode VTK_FLY_OUTER_EDGES 
/// <summary>
/// <para>Specify a mode to control how the axes are drawn: either outer edges or closest triad to the camera position.</para>
/// </summary>
  void SetFlyModeToOuterEdges();


  // void SetFlyModeToClosestTriad ();this SetFlyMode VTK_FLY_CLOSEST_TRIAD 
/// <summary>
/// <para>Specify a mode to control how the axes are drawn: either outer edges or closest triad to the camera position.</para>
/// </summary>
  void SetFlyModeToClosestTriad();


  // void SetScaling (int );
/// <summary>
/// <para>Set/Get a flag that controls whether the axes are scaled to fit in the viewport. If off, the axes size remains constant (i.e., stay the size of the bounding box). By default scaling is on so the axes are scaled to fit inside the viewport.</para>
/// </summary>
  void SetScaling(int arg0);


  // int GetScaling ();
/// <summary>
/// <para>Set/Get a flag that controls whether the axes are scaled to fit in the viewport. If off, the axes size remains constant (i.e., stay the size of the bounding box). By default scaling is on so the axes are scaled to fit inside the viewport.</para>
/// </summary>
  int GetScaling();


  // void ScalingOn ();
/// <summary>
/// <para>Set/Get a flag that controls whether the axes are scaled to fit in the viewport. If off, the axes size remains constant (i.e., stay the size of the bounding box). By default scaling is on so the axes are scaled to fit inside the viewport.</para>
/// </summary>
  void ScalingOn();


  // void ScalingOff ();
/// <summary>
/// <para>Set/Get a flag that controls whether the axes are scaled to fit in the viewport. If off, the axes size remains constant (i.e., stay the size of the bounding box). By default scaling is on so the axes are scaled to fit inside the viewport.</para>
/// </summary>
  void ScalingOff();


  // void SetNumberOfLabels (int );
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x, y, and  z axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data.</para>
/// </summary>
  void SetNumberOfLabels(int arg0);


  // int GetNumberOfLabelsMinValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x, y, and  z axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data.</para>
/// </summary>
  int GetNumberOfLabelsMinValue();


  // int GetNumberOfLabelsMaxValue ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x, y, and  z axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data.</para>
/// </summary>
  int GetNumberOfLabelsMaxValue();


  // int GetNumberOfLabels ();
/// <summary>
/// <para>Set/Get the number of annotation labels to show along the x, y, and  z axes. This values is a suggestion: the number of labels may vary depending on the particulars of the data.</para>
/// </summary>
  int GetNumberOfLabels();


  // void SetXLabel (char *);
/// <summary>
/// <para>Set/Get the labels for the x, y, and z axes. By default,  use &quot;X&quot;, &quot;Y&quot; and &quot;Z&quot;.</para>
/// </summary>
  void SetXLabel(System::String^ arg0);


  // char *GetXLabel ();
/// <summary>
/// <para>Set/Get the labels for the x, y, and z axes. By default,  use &quot;X&quot;, &quot;Y&quot; and &quot;Z&quot;.</para>
/// </summary>
  System::String^ GetXLabel();


  // void SetYLabel (char *);
/// <summary>
/// <para>Set/Get the labels for the x, y, and z axes. By default,  use &quot;X&quot;, &quot;Y&quot; and &quot;Z&quot;.</para>
/// </summary>
  void SetYLabel(System::String^ arg0);


  // char *GetYLabel ();
/// <summary>
/// <para>Set/Get the labels for the x, y, and z axes. By default,  use &quot;X&quot;, &quot;Y&quot; and &quot;Z&quot;.</para>
/// </summary>
  System::String^ GetYLabel();


  // void SetZLabel (char *);
/// <summary>
/// <para>Set/Get the labels for the x, y, and z axes. By default,  use &quot;X&quot;, &quot;Y&quot; and &quot;Z&quot;.</para>
/// </summary>
  void SetZLabel(System::String^ arg0);


  // char *GetZLabel ();
/// <summary>
/// <para>Set/Get the labels for the x, y, and z axes. By default,  use &quot;X&quot;, &quot;Y&quot; and &quot;Z&quot;.</para>
/// </summary>
  System::String^ GetZLabel();


  // vtkAxisActor2D *GetXAxisActor2D ();return this XAxis 
/// <summary>
/// <para>Retrieve handles to the X, Y and Z axis (so that you can set their text properties for example)</para>
/// </summary>
  vtkAxisActor2D^ GetXAxisActor2D();


  // vtkAxisActor2D *GetYAxisActor2D ();return this YAxis 
/// <summary>
/// <para>Retrieve handles to the X, Y and Z axis (so that you can set their text properties for example)</para>
/// </summary>
  vtkAxisActor2D^ GetYAxisActor2D();


  // vtkAxisActor2D *GetZAxisActor2D ();return this ZAxis 
/// <summary>
/// <para>Set/Get the title text property of all axes. Note that each axis can be controlled individually through the GetX/Y/ZAxisActor2D() methods.</para>
/// </summary>
  vtkAxisActor2D^ GetZAxisActor2D();


  // virtual void SetAxisTitleTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the title text property of all axes. Note that each axis can be controlled individually through the GetX/Y/ZAxisActor2D() methods.</para>
/// </summary>
  void SetAxisTitleTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetAxisTitleTextProperty ();
/// <summary>
/// <para>Set/Get the title text property of all axes. Note that each axis can be controlled individually through the GetX/Y/ZAxisActor2D() methods.</para>
/// </summary>
  vtkTextProperty^ GetAxisTitleTextProperty();


  // virtual void SetAxisLabelTextProperty (vtkTextProperty *p);
/// <summary>
/// <para>Set/Get the labels text property of all axes. Note that each axis can be controlled individually through the GetX/Y/ZAxisActor2D() methods.</para>
/// </summary>
  void SetAxisLabelTextProperty(vtkTextProperty^ p);


  // vtkTextProperty *GetAxisLabelTextProperty ();
/// <summary>
/// <para>Set/Get the labels text property of all axes. Note that each axis can be controlled individually through the GetX/Y/ZAxisActor2D() methods.</para>
/// </summary>
  vtkTextProperty^ GetAxisLabelTextProperty();


  // void SetLabelFormat (char *);
/// <summary>
/// <para>Set/Get the format with which to print the labels on each of the x-y-z axes.</para>
/// </summary>
  void SetLabelFormat(System::String^ arg0);


  // char *GetLabelFormat ();
/// <summary>
/// <para>Set/Get the format with which to print the labels on each of the x-y-z axes.</para>
/// </summary>
  System::String^ GetLabelFormat();


  // void SetFontFactor (double );
/// <summary>
/// <para>Set/Get the factor that controls the overall size of the fonts used to label and title the axes. </para>
/// </summary>
  void SetFontFactor(double arg0);


  // double GetFontFactorMinValue ();
/// <summary>
/// <para>Set/Get the factor that controls the overall size of the fonts used to label and title the axes. </para>
/// </summary>
  double GetFontFactorMinValue();


  // double GetFontFactorMaxValue ();
/// <summary>
/// <para>Set/Get the factor that controls the overall size of the fonts used to label and title the axes. </para>
/// </summary>
  double GetFontFactorMaxValue();


  // double GetFontFactor ();
/// <summary>
/// <para>Set/Get the factor that controls the overall size of the fonts used to label and title the axes. </para>
/// </summary>
  double GetFontFactor();


  // void SetInertia (int );
/// <summary>
/// <para>Set/Get the inertial factor that controls how often (i.e, how many renders) the axes can switch position (jump from one axes  to another).</para>
/// </summary>
  void SetInertia(int arg0);


  // int GetInertiaMinValue ();
/// <summary>
/// <para>Set/Get the inertial factor that controls how often (i.e, how many renders) the axes can switch position (jump from one axes  to another).</para>
/// </summary>
  int GetInertiaMinValue();


  // int GetInertiaMaxValue ();
/// <summary>
/// <para>Set/Get the inertial factor that controls how often (i.e, how many renders) the axes can switch position (jump from one axes  to another).</para>
/// </summary>
  int GetInertiaMaxValue();


  // int GetInertia ();
/// <summary>
/// <para>Set/Get the inertial factor that controls how often (i.e, how many renders) the axes can switch position (jump from one axes  to another).</para>
/// </summary>
  int GetInertia();


  // void SetShowActualBounds (int );
/// <summary>
/// <para>Set/Get the variable that controls whether the actual bounds of the dataset are always shown. Setting this variable to 1 means that clipping is disabled and that the actual value of the bounds is displayed even with corner offsets Setting this variable to 0 means these axis will clip themselves and show variable bounds (legacy mode)</para>
/// </summary>
  void SetShowActualBounds(int arg0);


  // int GetShowActualBoundsMinValue ();
/// <summary>
/// <para>Set/Get the variable that controls whether the actual bounds of the dataset are always shown. Setting this variable to 1 means that clipping is disabled and that the actual value of the bounds is displayed even with corner offsets Setting this variable to 0 means these axis will clip themselves and show variable bounds (legacy mode)</para>
/// </summary>
  int GetShowActualBoundsMinValue();


  // int GetShowActualBoundsMaxValue ();
/// <summary>
/// <para>Set/Get the variable that controls whether the actual bounds of the dataset are always shown. Setting this variable to 1 means that clipping is disabled and that the actual value of the bounds is displayed even with corner offsets Setting this variable to 0 means these axis will clip themselves and show variable bounds (legacy mode)</para>
/// </summary>
  int GetShowActualBoundsMaxValue();


  // int GetShowActualBounds ();
/// <summary>
/// <para>Set/Get the variable that controls whether the actual bounds of the dataset are always shown. Setting this variable to 1 means that clipping is disabled and that the actual value of the bounds is displayed even with corner offsets Setting this variable to 0 means these axis will clip themselves and show variable bounds (legacy mode)</para>
/// </summary>
  int GetShowActualBounds();


  // void SetCornerOffset (double );
/// <summary>
/// <para>Specify an offset value to &quot;pull back&quot; the axes from the corner at which they are joined to avoid overlap of axes labels. The  &quot;CornerOffset&quot; is the fraction of the axis length to pull back.</para>
/// </summary>
  void SetCornerOffset(double arg0);


  // double GetCornerOffset ();
/// <summary>
/// <para>Specify an offset value to &quot;pull back&quot; the axes from the corner at which they are joined to avoid overlap of axes labels. The  &quot;CornerOffset&quot; is the fraction of the axis length to pull back.</para>
/// </summary>
  double GetCornerOffset();


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // void SetXAxisVisibility (int );
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void SetXAxisVisibility(int arg0);


  // int GetXAxisVisibility ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  int GetXAxisVisibility();


  // void XAxisVisibilityOn ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void XAxisVisibilityOn();


  // void XAxisVisibilityOff ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void XAxisVisibilityOff();


  // void SetYAxisVisibility (int );
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void SetYAxisVisibility(int arg0);


  // int GetYAxisVisibility ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  int GetYAxisVisibility();


  // void YAxisVisibilityOn ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void YAxisVisibilityOn();


  // void YAxisVisibilityOff ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void YAxisVisibilityOff();


  // void SetZAxisVisibility (int );
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void SetZAxisVisibility(int arg0);


  // int GetZAxisVisibility ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  int GetZAxisVisibility();


  // void ZAxisVisibilityOn ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void ZAxisVisibilityOn();


  // void ZAxisVisibilityOff ();
/// <summary>
/// <para>Turn on and off the visibility of each axis.</para>
/// </summary>
  void ZAxisVisibilityOff();


  // void ShallowCopy (vtkCubeAxesActor2D *actor);
/// <summary>
/// <para>Shallow copy of a CubeAxesActor2D.</para>
/// </summary>
  void ShallowCopy(vtkCubeAxesActor2D^ actor);


  // virtual void SetProp (vtkProp *prop);
/// <summary>
/// <para>@deprecated Replaced by vtkCubeAxesActor2D::SetViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void SetProp(vtkProp^ prop);


  // virtual vtkProp *GetProp ();
/// <summary>
/// <para>@deprecated Replaced by vtkCubeAxesActor2D::GetViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  vtkProp^ GetProp();


// Did not wrap:  vtkCubeAxesActor2D ();


// Did not wrap:  ~vtkCubeAxesActor2D ();


// Did not wrap:  void TransformBounds (vtkViewport *viewport, double bounds[6], double pts[8][3]);


// Did not wrap:  int ClipBounds (vtkViewport *viewport, double pts[8][3], double bounds[6]);


// Did not wrap:  double EvaluatePoint (double planes[24], double x[3]);


// Did not wrap:  double EvaluateBounds (double planes[24], double bounds[6]);


// Did not wrap:  void AdjustAxes (double pts[8][3], double bounds[6], int idx, int xIdx, int yIdx, int zIdx, int zIdx2, int xAxes, int yAxes, int zAxes, double xCoords[4], double yCoords[4], double zCoords[4], double xRange[2], double yRange[2], double zRange[2]);


// Did not wrap:  void ShallowCopy (vtkProp *prop);this vtkProp ShallowCopy prop 


// Did not wrap:  vtkCubeAxesActor2D (const vtkCubeAxesActor2D &);


// Did not wrap:  void vtkCubeAxesActor2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCubeAxesActor2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCubeAxesActor2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCubeAxesActor2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCubeAxesActor2D();


};

} // end vtkHybrid
