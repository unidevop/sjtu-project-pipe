#pragma once

// managed includes
#include "vtk3DWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkLineWidget : public vtk3DWidget
{

public:
// Did not wrap:  static vtkLineWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkLineWidget *NewInstance ();
  vtkLineWidget^ NewInstance();


  // vtkLineWidget *SafeDownCast (vtkObject* o);
  static vtkLineWidget^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetEnabled (int );
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void SetEnabled(int arg0);


  // virtual void PlaceWidget (double bounds[6]);
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void PlaceWidget(array<double>^ bounds);


  // void PlaceWidget ();this Superclass PlaceWidget 
/// <summary>
/// <para>Methods that satisfy the superclass' API.</para>
/// </summary>
  void PlaceWidget();


  // void PlaceWidget (double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);this Superclass PlaceWidget xmin xmax ymin ymax zmin zmax 
/// <summary>
/// <para>Set/Get the resolution (number of subdivisions) of the line.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetResolution (int r);this LineSource SetResolution r 
/// <summary>
/// <para>Set/Get the resolution (number of subdivisions) of the line.</para>
/// </summary>
  void SetResolution(int r);


  // int GetResolution ();return this LineSource GetResolution 
/// <summary>
/// <para>Set/Get the position of first end point.</para>
/// </summary>
  int GetResolution();


  // void SetPoint1 (double x, double y, double z);
/// <summary>
/// <para>Set/Get the position of first end point.</para>
/// </summary>
  void SetPoint1(double x, double y, double z);


  // void SetPoint1 (double x[3]);this SetPoint1 x x x 
/// <summary>
/// <para>Set/Get the position of first end point.</para>
/// </summary>
  void SetPoint1(array<double>^ x);


  // double *GetPoint1 ();return this LineSource GetPoint1 
/// <summary>
/// <para>Set/Get the position of first end point.</para>
/// </summary>
  array<double>^ GetPoint1();


  // void GetPoint1 (double xyz[3]);this LineSource GetPoint1 xyz 
/// <summary>
/// <para>Set position of other end point.</para>
/// </summary>
  void GetPoint1(array<double>^ xyz);


  // void SetPoint2 (double x, double y, double z);
/// <summary>
/// <para>Set position of other end point.</para>
/// </summary>
  void SetPoint2(double x, double y, double z);


  // void SetPoint2 (double x[3]);this SetPoint2 x x x 
/// <summary>
/// <para>Set position of other end point.</para>
/// </summary>
  void SetPoint2(array<double>^ x);


  // double *GetPoint2 ();return this LineSource GetPoint2 
/// <summary>
/// <para>Set position of other end point.</para>
/// </summary>
  array<double>^ GetPoint2();


  // void GetPoint2 (double xyz[3]);this LineSource GetPoint2 xyz 
/// <summary>
/// <para>Force the line widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the line to the axes if it is orginally not aligned.</para>
/// </summary>
  void GetPoint2(array<double>^ xyz);


  // void SetAlign (int );
/// <summary>
/// <para>Force the line widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the line to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetAlign(int arg0);


  // int GetAlignMinValue ();
/// <summary>
/// <para>Force the line widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the line to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetAlignMinValue();


  // int GetAlignMaxValue ();
/// <summary>
/// <para>Force the line widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the line to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetAlignMaxValue();


  // int GetAlign ();
/// <summary>
/// <para>Force the line widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the line to the axes if it is orginally not aligned.</para>
/// </summary>
  int GetAlign();


  // void SetAlignToXAxis ();this SetAlign XAxis 
/// <summary>
/// <para>Force the line widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the line to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetAlignToXAxis();


  // void SetAlignToYAxis ();this SetAlign YAxis 
/// <summary>
/// <para>Force the line widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the line to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetAlignToYAxis();


  // void SetAlignToZAxis ();this SetAlign ZAxis 
/// <summary>
/// <para>Force the line widget to be aligned with one of the x-y-z axes. Remember that when the state changes, a ModifiedEvent is invoked. This can be used to snap the line to the axes if it is orginally not aligned.</para>
/// </summary>
  void SetAlignToZAxis();


  // void SetAlignToNone ();this SetAlign None 
/// <summary>
/// <para>Enable/disable clamping of the point end points to the bounding box of the data. The bounding box is defined from the last PlaceWidget() invocation, and includes the effect of the PlaceFactor which is used to gram/shrink the bounding box.</para>
/// </summary>
  void SetAlignToNone();


  // void SetClampToBounds (int );
/// <summary>
/// <para>Enable/disable clamping of the point end points to the bounding box of the data. The bounding box is defined from the last PlaceWidget() invocation, and includes the effect of the PlaceFactor which is used to gram/shrink the bounding box.</para>
/// </summary>
  void SetClampToBounds(int arg0);


  // int GetClampToBounds ();
/// <summary>
/// <para>Enable/disable clamping of the point end points to the bounding box of the data. The bounding box is defined from the last PlaceWidget() invocation, and includes the effect of the PlaceFactor which is used to gram/shrink the bounding box.</para>
/// </summary>
  int GetClampToBounds();


  // void ClampToBoundsOn ();
/// <summary>
/// <para>Enable/disable clamping of the point end points to the bounding box of the data. The bounding box is defined from the last PlaceWidget() invocation, and includes the effect of the PlaceFactor which is used to gram/shrink the bounding box.</para>
/// </summary>
  void ClampToBoundsOn();


  // void ClampToBoundsOff ();
/// <summary>
/// <para>Enable/disable clamping of the point end points to the bounding box of the data. The bounding box is defined from the last PlaceWidget() invocation, and includes the effect of the PlaceFactor which is used to gram/shrink the bounding box.</para>
/// </summary>
  void ClampToBoundsOff();


  // void GetPolyData (vtkPolyData *pd);
/// <summary>
/// <para>Grab the polydata (including points) that defines the line.  The polydata consists of n+1 points, where n is the resolution of the line. These point values are guaranteed to be up-to-date when either the InteractionEvent or EndInteraction events are invoked. The user provides the vtkPolyData and the points and polyline are added to it.</para>
/// </summary>
  void GetPolyData(vtkPolyData^ pd);


  // vtkProperty *GetHandleProperty ();
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  manipulated.</para>
/// </summary>
  vtkProperty^ GetHandleProperty();


  // vtkProperty *GetSelectedHandleProperty ();
/// <summary>
/// <para>Get the handle properties (the little balls are the handles). The  properties of the handles when selected and normal can be  manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedHandleProperty();


  // vtkProperty *GetLineProperty ();
/// <summary>
/// <para>Get the line properties. The properties of the line when selected  and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetLineProperty();


  // vtkProperty *GetSelectedLineProperty ();
/// <summary>
/// <para>Get the line properties. The properties of the line when selected  and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedLineProperty();


// Did not wrap:  vtkLineWidget ();


// Did not wrap:  ~vtkLineWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnMiddleButtonDown ();


// Did not wrap:  void OnMiddleButtonUp ();


// Did not wrap:  void OnRightButtonDown ();


// Did not wrap:  void OnRightButtonUp ();


// Did not wrap:  virtual void OnMouseMove ();


// Did not wrap:  void HighlightLine (int highlight);


// Did not wrap:  void BuildRepresentation ();


// Did not wrap:  virtual void SizeHandles ();


// Did not wrap:  void HandlesOn (double length);


// Did not wrap:  void HandlesOff ();


// Did not wrap:  int HighlightHandle (vtkProp *prop);


// Did not wrap:  void HighlightHandles (int highlight);


// Did not wrap:  void SetLinePosition (double x[3]);


// Did not wrap:  void Scale (double *p1, double *p2, int X, int Y);


// Did not wrap:  void ClampPosition (double x[3]);


// Did not wrap:  int InBounds (double x[3]);


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  void GenerateLine ();


// Did not wrap:  void EnablePointWidget ();


// Did not wrap:  void DisablePointWidget ();


// Did not wrap:  int ForwardEvent (unsigned long event);


// Did not wrap:  vtkLineWidget (const vtkLineWidget &);


// Did not wrap:  void vtkLineWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkLineWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkLineWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkLineWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkLineWidget();


};

} // end vtkWidgets
