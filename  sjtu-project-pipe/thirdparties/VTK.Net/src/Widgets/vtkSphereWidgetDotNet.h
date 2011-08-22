#pragma once

// managed includes
#include "vtk3DWidgetDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkSphereWidget : public vtk3DWidget
{

public:
// Did not wrap:  static vtkSphereWidget *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSphereWidget *NewInstance ();
  vtkSphereWidget^ NewInstance();


  // vtkSphereWidget *SafeDownCast (vtkObject* o);
  static vtkSphereWidget^ SafeDownCast(vtkObject^ o);


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
/// <para>Set the representation of the sphere. Different representations are useful depending on the application.</para>
/// </summary>
  void PlaceWidget(double xmin, double xmax, double ymin, double ymax, double zmin, double zmax);


  // void SetRepresentation (int );
/// <summary>
/// <para>Set the representation of the sphere. Different representations are useful depending on the application.</para>
/// </summary>
  void SetRepresentation(int arg0);


  // int GetRepresentationMinValue ();
/// <summary>
/// <para>Set the representation of the sphere. Different representations are useful depending on the application.</para>
/// </summary>
  int GetRepresentationMinValue();


  // int GetRepresentationMaxValue ();
/// <summary>
/// <para>Set the representation of the sphere. Different representations are useful depending on the application.</para>
/// </summary>
  int GetRepresentationMaxValue();


  // int GetRepresentation ();
/// <summary>
/// <para>Set the representation of the sphere. Different representations are useful depending on the application.</para>
/// </summary>
  int GetRepresentation();


  // void SetRepresentationToOff ();this SetRepresentation VTK_SPHERE_OFF 
/// <summary>
/// <para>Set the representation of the sphere. Different representations are useful depending on the application.</para>
/// </summary>
  void SetRepresentationToOff();


  // void SetRepresentationToWireframe ();this SetRepresentation VTK_SPHERE_WIREFRAME 
/// <summary>
/// <para>Set the representation of the sphere. Different representations are useful depending on the application.</para>
/// </summary>
  void SetRepresentationToWireframe();


  // void SetRepresentationToSurface ();this SetRepresentation VTK_SPHERE_SURFACE 
/// <summary>
/// <para>Set/Get the resolution of the sphere in the Theta direction.</para>
/// </summary>
  void SetRepresentationToSurface();


  // void SetThetaResolution (int r);this SphereSource SetThetaResolution r 
/// <summary>
/// <para>Set/Get the resolution of the sphere in the Theta direction.</para>
/// </summary>
  void SetThetaResolution(int r);


  // int GetThetaResolution ();return this SphereSource GetThetaResolution 
/// <summary>
/// <para>Set/Get the resolution of the sphere in the Phi direction.</para>
/// </summary>
  int GetThetaResolution();


  // void SetPhiResolution (int r);this SphereSource SetPhiResolution r 
/// <summary>
/// <para>Set/Get the resolution of the sphere in the Phi direction.</para>
/// </summary>
  void SetPhiResolution(int r);


  // int GetPhiResolution ();return this SphereSource GetPhiResolution 
/// <summary>
/// <para>Set/Get the radius of sphere. Default is .5.</para>
/// </summary>
  int GetPhiResolution();


  // void SetRadius (double r);if r r this SphereSource SetRadius r 
/// <summary>
/// <para>Set/Get the radius of sphere. Default is .5.</para>
/// </summary>
  void SetRadius(double r);


  // double GetRadius ();return this SphereSource GetRadius 
/// <summary>
/// <para>Set/Get the center of the sphere.</para>
/// </summary>
  double GetRadius();


  // void SetCenter (double x, double y, double z);this SphereSource SetCenter x y z 
/// <summary>
/// <para>Set/Get the center of the sphere.</para>
/// </summary>
  void SetCenter(double x, double y, double z);


  // void SetCenter (double x[3]);this SetCenter x x x 
/// <summary>
/// <para>Set/Get the center of the sphere.</para>
/// </summary>
  void SetCenter(array<double>^ x);


  // double *GetCenter ();return this SphereSource GetCenter 
/// <summary>
/// <para>Set/Get the center of the sphere.</para>
/// </summary>
  array<double>^ GetCenter();


  // void GetCenter (double xyz[3]);this SphereSource GetCenter xyz 
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  void GetCenter(array<double>^ xyz);


  // void SetTranslation (int );
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  void SetTranslation(int arg0);


  // int GetTranslation ();
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  int GetTranslation();


  // void TranslationOn ();
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  void TranslationOn();


  // void TranslationOff ();
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  void TranslationOff();


  // void SetScale (int );
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  void SetScale(int arg0);


  // int GetScale ();
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  int GetScale();


  // void ScaleOn ();
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  void ScaleOn();


  // void ScaleOff ();
/// <summary>
/// <para>Enable translation and scaling of the widget. By default, the widget can be translated and rotated.</para>
/// </summary>
  void ScaleOff();


  // void SetHandleVisibility (int );
/// <summary>
/// <para>The handle sits on the surface of the sphere and may be moved around the surface by picking (left mouse) and then moving. The position of the handle can be retrieved, this is useful for positioning cameras and lights. By default, the handle is turned off.</para>
/// </summary>
  void SetHandleVisibility(int arg0);


  // int GetHandleVisibility ();
/// <summary>
/// <para>The handle sits on the surface of the sphere and may be moved around the surface by picking (left mouse) and then moving. The position of the handle can be retrieved, this is useful for positioning cameras and lights. By default, the handle is turned off.</para>
/// </summary>
  int GetHandleVisibility();


  // void HandleVisibilityOn ();
/// <summary>
/// <para>The handle sits on the surface of the sphere and may be moved around the surface by picking (left mouse) and then moving. The position of the handle can be retrieved, this is useful for positioning cameras and lights. By default, the handle is turned off.</para>
/// </summary>
  void HandleVisibilityOn();


  // void HandleVisibilityOff ();
/// <summary>
/// <para>The handle sits on the surface of the sphere and may be moved around the surface by picking (left mouse) and then moving. The position of the handle can be retrieved, this is useful for positioning cameras and lights. By default, the handle is turned off.</para>
/// </summary>
  void HandleVisibilityOff();


  // void SetHandleDirection (double , double , double );
/// <summary>
/// <para>Set/Get the direction vector of the handle relative to the center of the sphere.</para>
/// </summary>
  void SetHandleDirection(double arg0, double arg1, double arg2);


  // void SetHandleDirection (double  a[3]);
/// <summary>
/// <para>Set/Get the direction vector of the handle relative to the center of the sphere.</para>
/// </summary>
  void SetHandleDirection(array<double>^ a);


  // double  *GetHandleDirection ();
/// <summary>
/// <para>Set/Get the direction vector of the handle relative to the center of the sphere.</para>
/// </summary>
  array<double>^ GetHandleDirection();


  // double  *GetHandlePosition ();
/// <summary>
/// <para>Get the position of the handle.</para>
/// </summary>
  array<double>^ GetHandlePosition();


  // void GetPolyData (vtkPolyData *pd);
/// <summary>
/// <para>Grab the polydata (including points) that defines the sphere.  The polydata consists of n+1 points, where n is the resolution of the sphere. These point values are guaranteed to be up-to-date when either the InteractionEvent or EndInteraction events are invoked. The user provides the vtkPolyData and the points and polysphere are added to it.</para>
/// </summary>
  void GetPolyData(vtkPolyData^ pd);


  // void GetSphere (vtkSphere *sphere);
/// <summary>
/// <para>Get the spherical implicit function defined by this widget.  Note that vtkPlanes is a subclass of vtkImplicitFunction, meaning that it can be used by a variety of filters to perform clipping, cutting, and selection of data.</para>
/// </summary>
  void GetSphere(vtkSphere^ sphere);


  // vtkProperty *GetSphereProperty ();
/// <summary>
/// <para>Get the sphere properties. The properties of the sphere when selected  and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetSphereProperty();


  // vtkProperty *GetSelectedSphereProperty ();
/// <summary>
/// <para>Get the sphere properties. The properties of the sphere when selected  and unselected can be manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedSphereProperty();


  // vtkProperty *GetHandleProperty ();
/// <summary>
/// <para>Get the handle properties (the little ball on the sphere is the handle). The properties of the handle when selected and unselected can be  manipulated.</para>
/// </summary>
  vtkProperty^ GetHandleProperty();


  // vtkProperty *GetSelectedHandleProperty ();
/// <summary>
/// <para>Get the handle properties (the little ball on the sphere is the handle). The properties of the handle when selected and unselected can be  manipulated.</para>
/// </summary>
  vtkProperty^ GetSelectedHandleProperty();


// Did not wrap:  vtkSphereWidget ();


// Did not wrap:  ~vtkSphereWidget ();


// Did not wrap:  static void ProcessEvents (vtkObject *object, unsigned long event, void *clientdata, void *calldata);


// Did not wrap:  void OnLeftButtonDown ();


// Did not wrap:  void OnLeftButtonUp ();


// Did not wrap:  void OnRightButtonDown ();


// Did not wrap:  void OnRightButtonUp ();


// Did not wrap:  void OnMouseMove ();


// Did not wrap:  void HighlightSphere (int highlight);


// Did not wrap:  void SelectRepresentation ();


// Did not wrap:  void Translate (double *p1, double *p2);


// Did not wrap:  void ScaleSphere (double *p1, double *p2, int X, int Y);


// Did not wrap:  void MoveHandle (double *p1, double *p2, int X, int Y);


// Did not wrap:  void PlaceHandle (double *center, double radius);


// Did not wrap:  void CreateDefaultProperties ();


// Did not wrap:  void HighlightHandle (int );


// Did not wrap:  virtual void SizeHandles ();


// Did not wrap:  vtkSphereWidget (const vtkSphereWidget &);


// Did not wrap:  void vtkSphereWidget 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSphereWidget(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSphereWidget(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSphereWidget();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSphereWidget();


};

} // end vtkWidgets
