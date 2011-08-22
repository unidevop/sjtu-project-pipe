#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkActor2DCollection;

public ref class vtkViewport : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkViewport *NewInstance ();
  vtkViewport^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddViewProp (vtkProp *);
/// <summary>
/// <para>Add a prop to the list of props. Prop is the superclass of all  actors, volumes, 2D actors, composite props etc.</para>
/// </summary>
  void AddViewProp(vtkProp^ arg0);


  // vtkPropCollection *GetViewProps ();return this Props 
/// <summary>
/// <para>Return any props in this viewport.</para>
/// </summary>
  vtkPropCollection^ GetViewProps();


  // int HasViewProp (vtkProp *);
/// <summary>
/// <para>Query if a prop is in the list of props.</para>
/// </summary>
  int HasViewProp(vtkProp^ arg0);


  // void RemoveViewProp (vtkProp *);
/// <summary>
/// <para>Remove an actor from the list of actors.</para>
/// </summary>
  void RemoveViewProp(vtkProp^ arg0);


  // void RemoveAllViewProps (void );
/// <summary>
/// <para>Remove all actors from the list of actors.</para>
/// </summary>
  void RemoveAllViewProps();


  // void AddActor2D (vtkProp *p);
/// <summary>
/// <para>Add/Remove different types of props to the renderer. These methods are all synonyms to AddViewProp and RemoveViewProp. They are here for convenience and backwards compatibility.</para>
/// </summary>
  void AddActor2D(vtkProp^ p);


  // void RemoveActor2D (vtkProp *p);
/// <summary>
/// <para>Add/Remove different types of props to the renderer. These methods are all synonyms to AddViewProp and RemoveViewProp. They are here for convenience and backwards compatibility.</para>
/// </summary>
  void RemoveActor2D(vtkProp^ p);


  // vtkActor2DCollection *GetActors2D ();
/// <summary>
/// <para>Add/Remove different types of props to the renderer. These methods are all synonyms to AddViewProp and RemoveViewProp. They are here for convenience and backwards compatibility.</para>
/// </summary>
  vtkActor2DCollection^ GetActors2D();


  // void SetBackground (double , double , double );
/// <summary>
/// <para>Set/Get the background color of the rendering screen using an rgb color specification.</para>
/// </summary>
  void SetBackground(double arg0, double arg1, double arg2);


  // void SetBackground (double  a[3]);
/// <summary>
/// <para>Set/Get the background color of the rendering screen using an rgb color specification.</para>
/// </summary>
  void SetBackground(array<double>^ a);


  // double  *GetBackground ();
/// <summary>
/// <para>Set/Get the background color of the rendering screen using an rgb color specification.</para>
/// </summary>
  array<double>^ GetBackground();


  // void SetAspect (double , double );
/// <summary>
/// <para>Set the aspect ratio of the rendered image. This is computed  automatically and should not be set by the user.</para>
/// </summary>
  void SetAspect(double arg0, double arg1);


  // void SetAspect (double  a[2]);
/// <summary>
/// <para>Set the aspect ratio of the rendered image. This is computed  automatically and should not be set by the user.</para>
/// </summary>
  void SetAspect(array<double>^ a);


  // double  *GetAspect ();
/// <summary>
/// <para>Set the aspect ratio of the rendered image. This is computed  automatically and should not be set by the user.</para>
/// </summary>
  array<double>^ GetAspect();


  // virtual void ComputeAspect ();
/// <summary>
/// <para>Set the aspect ratio of the rendered image. This is computed  automatically and should not be set by the user.</para>
/// </summary>
  void ComputeAspect();


  // void SetPixelAspect (double , double );
/// <summary>
/// <para>Set the aspect ratio of a pixel in the rendered image.  This factor permits the image to rendered anisotropically (i.e., stretched in one direction or the other).</para>
/// </summary>
  void SetPixelAspect(double arg0, double arg1);


  // void SetPixelAspect (double  a[2]);
/// <summary>
/// <para>Set the aspect ratio of a pixel in the rendered image.  This factor permits the image to rendered anisotropically (i.e., stretched in one direction or the other).</para>
/// </summary>
  void SetPixelAspect(array<double>^ a);


  // double  *GetPixelAspect ();
/// <summary>
/// <para>Set the aspect ratio of a pixel in the rendered image.  This factor permits the image to rendered anisotropically (i.e., stretched in one direction or the other).</para>
/// </summary>
  array<double>^ GetPixelAspect();


  // void SetViewport (double , double , double , double );
/// <summary>
/// <para>Specify the viewport for the Viewport to draw in the rendering window.  Coordinates are expressed as (xmin,ymin,xmax,ymax), where each coordinate is 0 &lt;= coordinate &lt;= 1.0.</para>
/// </summary>
  void SetViewport(double arg0, double arg1, double arg2, double arg3);


  // void SetViewport (double  a[4]);
/// <summary>
/// <para>Specify the viewport for the Viewport to draw in the rendering window.  Coordinates are expressed as (xmin,ymin,xmax,ymax), where each coordinate is 0 &lt;= coordinate &lt;= 1.0.</para>
/// </summary>
  void SetViewport(array<double>^ a);


  // double  *GetViewport ();
/// <summary>
/// <para>Specify the viewport for the Viewport to draw in the rendering window.  Coordinates are expressed as (xmin,ymin,xmax,ymax), where each coordinate is 0 &lt;= coordinate &lt;= 1.0.</para>
/// </summary>
  array<double>^ GetViewport();


  // void SetDisplayPoint (double , double , double );
/// <summary>
/// <para>Set/get a point location in display (or screen) coordinates. The lower left corner of the window is the origin and y increases as you go up the screen.</para>
/// </summary>
  void SetDisplayPoint(double arg0, double arg1, double arg2);


  // void SetDisplayPoint (double  a[3]);
/// <summary>
/// <para>Set/get a point location in display (or screen) coordinates. The lower left corner of the window is the origin and y increases as you go up the screen.</para>
/// </summary>
  void SetDisplayPoint(array<double>^ a);


  // double  *GetDisplayPoint ();
/// <summary>
/// <para>Set/get a point location in display (or screen) coordinates. The lower left corner of the window is the origin and y increases as you go up the screen.</para>
/// </summary>
  array<double>^ GetDisplayPoint();


  // void SetViewPoint (double , double , double );
/// <summary>
/// <para>Specify a point location in view coordinates. The origin is in the  middle of the viewport and it extends from -1 to 1 in all three dimensions.</para>
/// </summary>
  void SetViewPoint(double arg0, double arg1, double arg2);


  // void SetViewPoint (double  a[3]);
/// <summary>
/// <para>Specify a point location in view coordinates. The origin is in the  middle of the viewport and it extends from -1 to 1 in all three dimensions.</para>
/// </summary>
  void SetViewPoint(array<double>^ a);


  // double  *GetViewPoint ();
/// <summary>
/// <para>Specify a point location in view coordinates. The origin is in the  middle of the viewport and it extends from -1 to 1 in all three dimensions.</para>
/// </summary>
  array<double>^ GetViewPoint();


  // void SetWorldPoint (double , double , double , double );
/// <summary>
/// <para>Specify a point location in world coordinates. This method takes  homogeneous coordinates. </para>
/// </summary>
  void SetWorldPoint(double arg0, double arg1, double arg2, double arg3);


  // void SetWorldPoint (double  a[4]);
/// <summary>
/// <para>Specify a point location in world coordinates. This method takes  homogeneous coordinates. </para>
/// </summary>
  void SetWorldPoint(array<double>^ a);


  // double  *GetWorldPoint ();
/// <summary>
/// <para>Specify a point location in world coordinates. This method takes  homogeneous coordinates. </para>
/// </summary>
  array<double>^ GetWorldPoint();


  // virtual double *GetCenter ();
/// <summary>
/// <para>Return the center of this viewport in display coordinates.</para>
/// </summary>
  array<double>^ GetCenter();


  // virtual int IsInViewport (int x, int y);
/// <summary>
/// <para>Is a given display point in this Viewport's viewport.</para>
/// </summary>
  int IsInViewport(int x, int y);


  // virtual vtkWindow *GetVTKWindow () = 0;
/// <summary>
/// <para>Return the vtkWindow that owns this vtkViewport.</para>
/// </summary>
  vtkWindow^ GetVTKWindow();


  // virtual void DisplayToView ();
/// <summary>
/// <para>Convert display coordinates to view coordinates.</para>
/// </summary>
  void DisplayToView();


  // virtual void ViewToDisplay ();
/// <summary>
/// <para>Convert view coordinates to display coordinates.</para>
/// </summary>
  void ViewToDisplay();


  // virtual void WorldToView ();
/// <summary>
/// <para>Convert world point coordinates to view coordinates.</para>
/// </summary>
  void WorldToView();


  // virtual void ViewToWorld ();
/// <summary>
/// <para>Convert view point coordinates to world coordinates.</para>
/// </summary>
  void ViewToWorld();


  // void DisplayToWorld ();this DisplayToView this ViewToWorld 
/// <summary>
/// <para>Convert display (or screen) coordinates to world coordinates.</para>
/// </summary>
  void DisplayToWorld();


  // void WorldToDisplay ();this WorldToView this ViewToDisplay 
/// <summary>
/// <para>Convert world point coordinates to display (or screen) coordinates.</para>
/// </summary>
  void WorldToDisplay();


  // virtual void LocalDisplayToDisplay (double &x, double &y);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void LocalDisplayToDisplay(double% x, double% y);


  // virtual void DisplayToNormalizedDisplay (double &u, double &v);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void DisplayToNormalizedDisplay(double% u, double% v);


  // virtual void NormalizedDisplayToViewport (double &x, double &y);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void NormalizedDisplayToViewport(double% x, double% y);


  // virtual void ViewportToNormalizedViewport (double &u, double &v);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void ViewportToNormalizedViewport(double% u, double% v);


  // virtual void NormalizedViewportToView (double &x, double &y, double &z);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void NormalizedViewportToView(double% x, double% y, double% z);


  // virtual void ViewToWorld (double &, double &, double &);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void ViewToWorld(double% arg0, double% arg1, double% arg2);


  // virtual void DisplayToLocalDisplay (double &x, double &y);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void DisplayToLocalDisplay(double% x, double% y);


  // virtual void NormalizedDisplayToDisplay (double &u, double &v);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void NormalizedDisplayToDisplay(double% u, double% v);


  // virtual void ViewportToNormalizedDisplay (double &x, double &y);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void ViewportToNormalizedDisplay(double% x, double% y);


  // virtual void NormalizedViewportToViewport (double &u, double &v);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void NormalizedViewportToViewport(double% u, double% v);


  // virtual void ViewToNormalizedViewport (double &x, double &y, double &z);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void ViewToNormalizedViewport(double% x, double% y, double% z);


  // virtual void WorldToView (double &, double &, double &);
/// <summary>
/// <para>These methods map from one coordinate system to another. They are primarily used by the vtkCoordinate object and are often strung together. These methods return valid information only if the window has been realized (e.g., GetSize() returns something other than (0,0)).</para>
/// </summary>
  void WorldToView(double% arg0, double% arg1, double% arg2);


  // int *GetSize ();
/// <summary>
/// <para>Get the size and origin of the viewport in display coordinates. Note: if the window has not yet been realized, GetSize() and GetOrigin()  return (0,0).</para>
/// </summary>
  array<int>^ GetSize();


  // int *GetOrigin ();
/// <summary>
/// <para>Get the size and origin of the viewport in display coordinates. Note: if the window has not yet been realized, GetSize() and GetOrigin()  return (0,0).</para>
/// </summary>
  array<int>^ GetOrigin();


  // void GetTiledSize (int *width, int *height);
/// <summary>
/// <para>Get the size and origin of the viewport in display coordinates. Note: if the window has not yet been realized, GetSize() and GetOrigin()  return (0,0).</para>
/// </summary>
  void GetTiledSize(array<int>^ width, array<int>^ height);


  // void GetTiledSizeAndOrigin (int *width, int *height, int *lowerLeftX, int *lowerLeftY);
/// <summary>
/// <para>Get the size and origin of the viewport in display coordinates. Note: if the window has not yet been realized, GetSize() and GetOrigin()  return (0,0).</para>
/// </summary>
  void GetTiledSizeAndOrigin(array<int>^ width, array<int>^ height, array<int>^ lowerLeftX, array<int>^ lowerLeftY);


  // virtual vtkAssemblyPath *PickProp (double selectionX, double selectionY) = 0;
/// <summary>
/// <para>Return the Prop that has the highest z value at the given x, y position in the viewport.  Basically, the top most prop that renders the pixel at selectionX, selectionY will be returned.  If no Props are there NULL is returned.  This method selects from the Viewports Prop list.</para>
/// </summary>
  vtkAssemblyPath^ PickProp(double selectionX, double selectionY);


  // vtkAssemblyPath *PickPropFrom (double selectionX, double selectionY, vtkPropCollection *);
/// <summary>
/// <para>Same as PickProp with two arguments, but selects from the given collection of Props instead of the Renderers props.  Make sure the Props in the collection are in this renderer.</para>
/// </summary>
  vtkAssemblyPath^ PickPropFrom(double selectionX, double selectionY, vtkPropCollection^ arg2);


  // double GetPickX ();
/// <summary>
/// <para>Methods used to return the pick (x,y) in local display coordinates (i.e., it's that same as selectionX and selectionY).</para>
/// </summary>
  double GetPickX();


  // double GetPickY ();
/// <summary>
/// <para>Methods used to return the pick (x,y) in local display coordinates (i.e., it's that same as selectionX and selectionY).</para>
/// </summary>
  double GetPickY();


  // int GetIsPicking ();
/// <summary>
/// <para>Methods used to return the pick (x,y) in local display coordinates (i.e., it's that same as selectionX and selectionY).</para>
/// </summary>
  int GetIsPicking();


  // virtual double GetPickedZ () = 0;
/// <summary>
/// <para>Return the Z value for the last picked Prop.</para>
/// </summary>
  double GetPickedZ();


  // void RemoveProp (vtkProp *);
/// <summary>
/// <para>@deprecated Replaced by vtkViewport::RemoveViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void RemoveProp(vtkProp^ arg0);


  // void AddProp (vtkProp *);
/// <summary>
/// <para>@deprecated Replaced by vtkViewport::AddViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void AddProp(vtkProp^ arg0);


  // vtkPropCollection *GetProps ();
/// <summary>
/// <para>@deprecated Replaced by vtkViewport::GetViewProps() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  vtkPropCollection^ GetProps();


  // int HasProp (vtkProp *);
/// <summary>
/// <para>@deprecated Replaced by vtkViewport::HasViewProp() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  int HasProp(vtkProp^ arg0);


  // void RemoveAllProps ();
/// <summary>
/// <para>@deprecated Replaced by vtkViewport::RemoveAllViewProps() as of VTK 5.0.</para>
/// </summary>
  [Obsolete("This method declared deprecated")]
  void RemoveAllProps();


// Did not wrap:  vtkViewport ();


// Did not wrap:  ~vtkViewport ();


// Did not wrap:  vtkViewport (const vtkViewport &);


// Did not wrap:  void vtkViewport 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkViewport(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkViewport(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkViewport();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkViewport();


};

} // end vtkFiltering
