#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCoordinate;
ref class vtkMapper2D;
ref class vtkViewport;

public ref class vtkActor2D : public vtkProp
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkActor2D *NewInstance ();
  vtkActor2D^ NewInstance();


  // vtkActor2D *SafeDownCast (vtkObject* o);
  static vtkActor2D^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkActor2D *New ();


  // int RenderOverlay (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderOverlay(vtkViewport^ viewport);


  // int RenderOpaqueGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ viewport);


  // int RenderTranslucentGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ viewport);


  // virtual void SetMapper (vtkMapper2D *mapper);
/// <summary>
/// <para>Set/Get the vtkMapper2D which defines the data to be drawn.</para>
/// </summary>
  void SetMapper(vtkMapper2D^ mapper);


  // vtkMapper2D *GetMapper ();
/// <summary>
/// <para>Set/Get the vtkMapper2D which defines the data to be drawn.</para>
/// </summary>
  vtkMapper2D^ GetMapper();


  // void SetLayerNumber (int );
/// <summary>
/// <para>Set/Get the layer number in the overlay planes into which to render.</para>
/// </summary>
  void SetLayerNumber(int arg0);


  // int GetLayerNumber ();
/// <summary>
/// <para>Set/Get the layer number in the overlay planes into which to render.</para>
/// </summary>
  int GetLayerNumber();


  // vtkProperty2D *GetProperty ();
/// <summary>
/// <para>Returns this actor's vtkProperty2D.  Creates a property if one doesn't already exist.</para>
/// </summary>
  vtkProperty2D^ GetProperty();


  // virtual void SetProperty (vtkProperty2D *);
/// <summary>
/// <para>Set this vtkProp's vtkProperty2D.</para>
/// </summary>
  void SetProperty(vtkProperty2D^ arg0);


  // vtkCoordinate *GetPositionCoordinate ();
/// <summary>
/// <para>Get the PositionCoordinate instance of vtkCoordinate. This is used for for complicated or relative positioning. The position variable controls the lower left corner of the Actor2D</para>
/// </summary>
  vtkCoordinate^ GetPositionCoordinate();


  // void SetPosition (double, double);
/// <summary>
/// <para>Get the PositionCoordinate instance of vtkCoordinate. This is used for for complicated or relative positioning. The position variable controls the lower left corner of the Actor2D</para>
/// </summary>
  void SetPosition(double arg0, double arg1);


  // void SetPosition (double a[2]);
/// <summary>
/// <para>Get the PositionCoordinate instance of vtkCoordinate. This is used for for complicated or relative positioning. The position variable controls the lower left corner of the Actor2D</para>
/// </summary>
  void SetPosition(array<double>^ a);


  // double *GetPosition ();
/// <summary>
/// <para>Get the PositionCoordinate instance of vtkCoordinate. This is used for for complicated or relative positioning. The position variable controls the lower left corner of the Actor2D</para>
/// </summary>
  array<double>^ GetPosition();


  // void SetDisplayPosition (int , int );
/// <summary>
/// <para>Set the Prop2D's position in display coordinates.</para>
/// </summary>
  void SetDisplayPosition(int arg0, int arg1);


  // vtkCoordinate *GetPosition2Coordinate ();
/// <summary>
/// <para>Access the Position2 instance variable. This variable controls the upper right corner of the Actor2D. It is by default relative to Position and in normalized viewport coordinates. Some 2D actor subclasses ignore the position2 variable</para>
/// </summary>
  vtkCoordinate^ GetPosition2Coordinate();


  // void SetPosition2 (double, double);
/// <summary>
/// <para>Access the Position2 instance variable. This variable controls the upper right corner of the Actor2D. It is by default relative to Position and in normalized viewport coordinates. Some 2D actor subclasses ignore the position2 variable</para>
/// </summary>
  void SetPosition2(double arg0, double arg1);


  // void SetPosition2 (double a[2]);
/// <summary>
/// <para>Access the Position2 instance variable. This variable controls the upper right corner of the Actor2D. It is by default relative to Position and in normalized viewport coordinates. Some 2D actor subclasses ignore the position2 variable</para>
/// </summary>
  void SetPosition2(array<double>^ a);


  // double *GetPosition2 ();
/// <summary>
/// <para>Access the Position2 instance variable. This variable controls the upper right corner of the Actor2D. It is by default relative to Position and in normalized viewport coordinates. Some 2D actor subclasses ignore the position2 variable</para>
/// </summary>
  array<double>^ GetPosition2();


  // void SetWidth (double w);
/// <summary>
/// <para>Set/Get the height and width of the Actor2D. The value is expressed as a fraction of the viewport. This really is just another way of setting the Position2 instance variable.</para>
/// </summary>
  void SetWidth(double w);


  // double GetWidth ();
/// <summary>
/// <para>Set/Get the height and width of the Actor2D. The value is expressed as a fraction of the viewport. This really is just another way of setting the Position2 instance variable.</para>
/// </summary>
  double GetWidth();


  // void SetHeight (double h);
/// <summary>
/// <para>Set/Get the height and width of the Actor2D. The value is expressed as a fraction of the viewport. This really is just another way of setting the Position2 instance variable.</para>
/// </summary>
  void SetHeight(double h);


  // double GetHeight ();
/// <summary>
/// <para>Set/Get the height and width of the Actor2D. The value is expressed as a fraction of the viewport. This really is just another way of setting the Position2 instance variable.</para>
/// </summary>
  double GetHeight();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return this objects MTime.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual void GetActors2D (vtkPropCollection *pc);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetActors2D(vtkPropCollection^ pc);


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this vtkActor2D. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


  // virtual void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // virtual vtkCoordinate *GetActualPositionCoordinate (void );return this PositionCoordinate 
/// <summary>
/// <para>Return the actual vtkCoordinate reference that the mapper should use to position the actor. This is used internally by the mappers and should be overridden in specialized subclasses and otherwise ignored.</para>
/// </summary>
  vtkCoordinate^ GetActualPositionCoordinate();


  // virtual vtkCoordinate *GetActualPosition2Coordinate (void );return this Position2Coordinate 
  vtkCoordinate^ GetActualPosition2Coordinate();


// Did not wrap:  vtkActor2D ();


// Did not wrap:  ~vtkActor2D ();


// Did not wrap:  vtkActor2D (const vtkActor2D &);


// Did not wrap:  void vtkActor2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkActor2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkActor2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkActor2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkActor2D();


};

} // end vtkFiltering
