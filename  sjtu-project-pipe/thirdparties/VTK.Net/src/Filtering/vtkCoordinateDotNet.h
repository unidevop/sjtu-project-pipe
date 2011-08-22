#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkViewport;

public ref class vtkCoordinate : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkCoordinate *NewInstance ();
  vtkCoordinate^ NewInstance();


  // vtkCoordinate *SafeDownCast (vtkObject* o);
  static vtkCoordinate^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkCoordinate *New ();


  // void SetCoordinateSystem (int );
/// <summary>
/// <para>Set/get the coordinate system which this coordinate is defined in. The options are Display, Normalized Display, Viewport, Normalized Viewport, View, and World.</para>
/// </summary>
  void SetCoordinateSystem(int arg0);


  // int GetCoordinateSystem ();
/// <summary>
/// <para>Set/get the coordinate system which this coordinate is defined in. The options are Display, Normalized Display, Viewport, Normalized Viewport, View, and World.</para>
/// </summary>
  int GetCoordinateSystem();


  // void SetCoordinateSystemToDisplay ();this SetCoordinateSystem VTK_DISPLAY 
/// <summary>
/// <para>Set/get the coordinate system which this coordinate is defined in. The options are Display, Normalized Display, Viewport, Normalized Viewport, View, and World.</para>
/// </summary>
  void SetCoordinateSystemToDisplay();


  // void SetCoordinateSystemToNormalizedDisplay ();this SetCoordinateSystem VTK_NORMALIZED_DISPLAY 
/// <summary>
/// <para>Set/get the coordinate system which this coordinate is defined in. The options are Display, Normalized Display, Viewport, Normalized Viewport, View, and World.</para>
/// </summary>
  void SetCoordinateSystemToNormalizedDisplay();


  // void SetCoordinateSystemToViewport ();this SetCoordinateSystem VTK_VIEWPORT 
/// <summary>
/// <para>Set/get the coordinate system which this coordinate is defined in. The options are Display, Normalized Display, Viewport, Normalized Viewport, View, and World.</para>
/// </summary>
  void SetCoordinateSystemToViewport();


  // void SetCoordinateSystemToNormalizedViewport ();this SetCoordinateSystem VTK_NORMALIZED_VIEWPORT 
/// <summary>
/// <para>Set/get the coordinate system which this coordinate is defined in. The options are Display, Normalized Display, Viewport, Normalized Viewport, View, and World.</para>
/// </summary>
  void SetCoordinateSystemToNormalizedViewport();


  // void SetCoordinateSystemToView ();this SetCoordinateSystem VTK_VIEW 
/// <summary>
/// <para>Set/get the coordinate system which this coordinate is defined in. The options are Display, Normalized Display, Viewport, Normalized Viewport, View, and World.</para>
/// </summary>
  void SetCoordinateSystemToView();


  // void SetCoordinateSystemToWorld ();this SetCoordinateSystem VTK_WORLD 
  void SetCoordinateSystemToWorld();


  // const char *GetCoordinateSystemAsString ();
  System::String^ GetCoordinateSystemAsString();


  // void SetValue (double , double , double );
/// <summary>
/// <para>Set/get the value of this coordinate. This can be thought of as the position of this coordinate in its coordinate system.</para>
/// </summary>
  void SetValue(double arg0, double arg1, double arg2);


  // void SetValue (double  a[3]);
/// <summary>
/// <para>Set/get the value of this coordinate. This can be thought of as the position of this coordinate in its coordinate system.</para>
/// </summary>
  void SetValue(array<double>^ a);


  // double  *GetValue ();
/// <summary>
/// <para>Set/get the value of this coordinate. This can be thought of as the position of this coordinate in its coordinate system.</para>
/// </summary>
  array<double>^ GetValue();


  // void SetValue (double a, double b);this SetValue a b 
/// <summary>
/// <para>If this coordinate is relative to another coordinate, then specify that coordinate as the ReferenceCoordinate. If this is NULL the coordinate is assumed to be absolute.</para>
/// </summary>
  void SetValue(double a, double b);


  // virtual void SetReferenceCoordinate (vtkCoordinate *);
/// <summary>
/// <para>If this coordinate is relative to another coordinate, then specify that coordinate as the ReferenceCoordinate. If this is NULL the coordinate is assumed to be absolute.</para>
/// </summary>
  void SetReferenceCoordinate(vtkCoordinate^ arg0);


  // vtkCoordinate *GetReferenceCoordinate ();
/// <summary>
/// <para>If this coordinate is relative to another coordinate, then specify that coordinate as the ReferenceCoordinate. If this is NULL the coordinate is assumed to be absolute.</para>
/// </summary>
  vtkCoordinate^ GetReferenceCoordinate();


  // void SetViewport (vtkViewport *viewport);
/// <summary>
/// <para>If you want this coordinate to be relative to a specific vtkViewport (vtkRenderer) then you can specify that here.</para>
/// </summary>
  void SetViewport(vtkViewport^ viewport);


  // vtkViewport *GetViewport ();
/// <summary>
/// <para>If you want this coordinate to be relative to a specific vtkViewport (vtkRenderer) then you can specify that here.</para>
/// </summary>
  vtkViewport^ GetViewport();


  // double *GetComputedWorldValue (vtkViewport *);
/// <summary>
/// <para>Return the computed value in a specified coordinate system.</para>
/// </summary>
  array<double>^ GetComputedWorldValue(vtkViewport^ arg0);


  // int *GetComputedViewportValue (vtkViewport *);
/// <summary>
/// <para>Return the computed value in a specified coordinate system.</para>
/// </summary>
  array<int>^ GetComputedViewportValue(vtkViewport^ arg0);


  // int *GetComputedDisplayValue (vtkViewport *);
/// <summary>
/// <para>Return the computed value in a specified coordinate system.</para>
/// </summary>
  array<int>^ GetComputedDisplayValue(vtkViewport^ arg0);


  // int *GetComputedLocalDisplayValue (vtkViewport *);
/// <summary>
/// <para>Return the computed value in a specified coordinate system.</para>
/// </summary>
  array<int>^ GetComputedLocalDisplayValue(vtkViewport^ arg0);


  // double *GetComputedDoubleViewportValue (vtkViewport *);
  array<double>^ GetComputedDoubleViewportValue(vtkViewport^ arg0);


  // double *GetComputedDoubleDisplayValue (vtkViewport *);
  array<double>^ GetComputedDoubleDisplayValue(vtkViewport^ arg0);


// Did not wrap:  double *GetComputedValue (vtkViewport *);


// Did not wrap:  virtual double *GetComputedUserDefinedValue (vtkViewport *);return this Value 


// Did not wrap:  vtkCoordinate ();


// Did not wrap:  ~vtkCoordinate ();


// Did not wrap:  vtkCoordinate (const vtkCoordinate &);


// Did not wrap:  void vtkCoordinate 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkCoordinate(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkCoordinate(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkCoordinate();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkCoordinate();


};

} // end vtkFiltering
