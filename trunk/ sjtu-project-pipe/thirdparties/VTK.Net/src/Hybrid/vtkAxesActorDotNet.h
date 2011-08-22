#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkCaptionActor2D;

public ref class vtkAxesActor : public vtkProp3D
{

public:
// Did not wrap:  static vtkAxesActor *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAxesActor *NewInstance ();
  vtkAxesActor^ NewInstance();


  // vtkAxesActor *SafeDownCast (vtkObject* o);
  static vtkAxesActor^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GetActors (vtkPropCollection *);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. These methods are used in that process.</para>
/// </summary>
  void GetActors(vtkPropCollection^ arg0);


  // virtual int RenderOpaqueGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderOpaqueGeometry(vtkViewport^ viewport);


  // virtual int RenderTranslucentGeometry (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderTranslucentGeometry(vtkViewport^ viewport);


  // virtual int RenderOverlay (vtkViewport *viewport);
/// <summary>
/// <para>Support the standard render methods.</para>
/// </summary>
  int RenderOverlay(vtkViewport^ viewport);


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of an axes actor. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


  // void ReleaseGraphicsResources (vtkWindow *);
/// <summary>
/// <para>Release any graphics resources that are being consumed by this actor. The parameter window could be used to determine which graphic resources to release.</para>
/// </summary>
  void ReleaseGraphicsResources(vtkWindow^ arg0);


  // void GetBounds (double bounds[6]);
/// <summary>
/// <para>Get the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). (The method GetBounds(double bounds[6]) is available from the superclass.)</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // double *GetBounds ();
/// <summary>
/// <para>Get the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax). (The method GetBounds(double bounds[6]) is available from the superclass.)</para>
/// </summary>
  array<double>^ GetBounds();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Get the actors mtime plus consider its properties and texture if set.</para>
/// </summary>
  unsigned long GetMTime();


  // virtual unsigned long GetRedrawMTime ();
/// <summary>
/// <para>Return the mtime of anything that would cause the rendered image to  appear differently. Usually this involves checking the mtime of the  prop plus anything else it depends on such as properties, textures etc.</para>
/// </summary>
  unsigned long GetRedrawMTime();


  // void SetTotalLength (double v[3]);this SetTotalLength v v v 
/// <summary>
/// <para>Set the total length of the axes in 3 dimensions.</para>
/// </summary>
  void SetTotalLength(array<double>^ v);


  // void SetTotalLength (double x, double y, double z);
/// <summary>
/// <para>Set the total length of the axes in 3 dimensions.</para>
/// </summary>
  void SetTotalLength(double x, double y, double z);


  // double  *GetTotalLength ();
/// <summary>
/// <para>Set the total length of the axes in 3 dimensions.</para>
/// </summary>
  array<double>^ GetTotalLength();


  // void SetNormalizedShaftLength (double v[3]);this SetNormalizedShaftLength v v v 
/// <summary>
/// <para>Set the normalized (0-1) length of the shaft.</para>
/// </summary>
  void SetNormalizedShaftLength(array<double>^ v);


  // void SetNormalizedShaftLength (double x, double y, double z);
/// <summary>
/// <para>Set the normalized (0-1) length of the shaft.</para>
/// </summary>
  void SetNormalizedShaftLength(double x, double y, double z);


  // double  *GetNormalizedShaftLength ();
/// <summary>
/// <para>Set the normalized (0-1) length of the shaft.</para>
/// </summary>
  array<double>^ GetNormalizedShaftLength();


  // void SetNormalizedTipLength (double v[3]);this SetNormalizedTipLength v v v 
/// <summary>
/// <para>Set the normalized (0-1) length of the tip.  Normally, this would be 1 - the normalized length of the shaft.</para>
/// </summary>
  void SetNormalizedTipLength(array<double>^ v);


  // void SetNormalizedTipLength (double x, double y, double z);
/// <summary>
/// <para>Set the normalized (0-1) length of the tip.  Normally, this would be 1 - the normalized length of the shaft.</para>
/// </summary>
  void SetNormalizedTipLength(double x, double y, double z);


  // double  *GetNormalizedTipLength ();
/// <summary>
/// <para>Set the normalized (0-1) length of the tip.  Normally, this would be 1 - the normalized length of the shaft.</para>
/// </summary>
  array<double>^ GetNormalizedTipLength();


  // void SetNormalizedLabelPosition (double v[3]);this SetNormalizedLabelPosition v v v 
/// <summary>
/// <para>Set the normalized (0-1) position of the label along the length of the shaft.  A value &gt; 1 is permissible.</para>
/// </summary>
  void SetNormalizedLabelPosition(array<double>^ v);


  // void SetNormalizedLabelPosition (double x, double y, double z);
/// <summary>
/// <para>Set the normalized (0-1) position of the label along the length of the shaft.  A value &gt; 1 is permissible.</para>
/// </summary>
  void SetNormalizedLabelPosition(double x, double y, double z);


  // double  *GetNormalizedLabelPosition ();
/// <summary>
/// <para>Set the normalized (0-1) position of the label along the length of the shaft.  A value &gt; 1 is permissible.</para>
/// </summary>
  array<double>^ GetNormalizedLabelPosition();


  // void SetConeResolution (int );
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  void SetConeResolution(int arg0);


  // int GetConeResolutionMinValue ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetConeResolutionMinValue();


  // int GetConeResolutionMaxValue ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetConeResolutionMaxValue();


  // int GetConeResolution ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetConeResolution();


  // void SetSphereResolution (int );
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  void SetSphereResolution(int arg0);


  // int GetSphereResolutionMinValue ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetSphereResolutionMinValue();


  // int GetSphereResolutionMaxValue ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetSphereResolutionMaxValue();


  // int GetSphereResolution ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetSphereResolution();


  // void SetCylinderResolution (int );
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  void SetCylinderResolution(int arg0);


  // int GetCylinderResolutionMinValue ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetCylinderResolutionMinValue();


  // int GetCylinderResolutionMaxValue ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetCylinderResolutionMaxValue();


  // int GetCylinderResolution ();
/// <summary>
/// <para>Set/get the resolution of the pieces of the axes actor.</para>
/// </summary>
  int GetCylinderResolution();


  // void SetConeRadius (double );
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  void SetConeRadius(double arg0);


  // double GetConeRadiusMinValue ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetConeRadiusMinValue();


  // double GetConeRadiusMaxValue ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetConeRadiusMaxValue();


  // double GetConeRadius ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetConeRadius();


  // void SetSphereRadius (double );
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  void SetSphereRadius(double arg0);


  // double GetSphereRadiusMinValue ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetSphereRadiusMinValue();


  // double GetSphereRadiusMaxValue ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetSphereRadiusMaxValue();


  // double GetSphereRadius ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetSphereRadius();


  // void SetCylinderRadius (double );
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  void SetCylinderRadius(double arg0);


  // double GetCylinderRadiusMinValue ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetCylinderRadiusMinValue();


  // double GetCylinderRadiusMaxValue ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetCylinderRadiusMaxValue();


  // double GetCylinderRadius ();
/// <summary>
/// <para>Set/get the radius of the pieces of the axes actor.</para>
/// </summary>
  double GetCylinderRadius();


  // void SetShaftType (int type);
/// <summary>
/// <para>Set the type of the shaft to a cylinder, line, or user defined geometry.</para>
/// </summary>
  void SetShaftType(int type);


  // void SetShaftTypeToCylinder ();this SetShaftType vtkAxesActor CYLINDER_SHAFT 
/// <summary>
/// <para>Set the type of the shaft to a cylinder, line, or user defined geometry.</para>
/// </summary>
  void SetShaftTypeToCylinder();


  // void SetShaftTypeToLine ();this SetShaftType vtkAxesActor LINE_SHAFT 
/// <summary>
/// <para>Set the type of the shaft to a cylinder, line, or user defined geometry.</para>
/// </summary>
  void SetShaftTypeToLine();


  // void SetShaftTypeToUserDefined ();this SetShaftType vtkAxesActor USER_DEFINED_SHAFT 
/// <summary>
/// <para>Set the type of the shaft to a cylinder, line, or user defined geometry.</para>
/// </summary>
  void SetShaftTypeToUserDefined();


  // int GetShaftType ();
/// <summary>
/// <para>Set the type of the shaft to a cylinder, line, or user defined geometry.</para>
/// </summary>
  int GetShaftType();


  // void SetTipType (int type);
/// <summary>
/// <para>Set the type of the tip to a cone, sphere, or user defined geometry.</para>
/// </summary>
  void SetTipType(int type);


  // void SetTipTypeToCone ();this SetTipType vtkAxesActor CONE_TIP 
/// <summary>
/// <para>Set the type of the tip to a cone, sphere, or user defined geometry.</para>
/// </summary>
  void SetTipTypeToCone();


  // void SetTipTypeToSphere ();this SetTipType vtkAxesActor SPHERE_TIP 
/// <summary>
/// <para>Set the type of the tip to a cone, sphere, or user defined geometry.</para>
/// </summary>
  void SetTipTypeToSphere();


  // void SetTipTypeToUserDefined ();this SetTipType vtkAxesActor USER_DEFINED_TIP 
/// <summary>
/// <para>Set the type of the tip to a cone, sphere, or user defined geometry.</para>
/// </summary>
  void SetTipTypeToUserDefined();


  // int GetTipType ();
/// <summary>
/// <para>Set the type of the tip to a cone, sphere, or user defined geometry.</para>
/// </summary>
  int GetTipType();


  // void SetUserDefinedTip (vtkPolyData *);
/// <summary>
/// <para>Set the user defined tip polydata.</para>
/// </summary>
  void SetUserDefinedTip(vtkPolyData^ arg0);


  // vtkPolyData *GetUserDefinedTip ();
/// <summary>
/// <para>Set the user defined tip polydata.</para>
/// </summary>
  vtkPolyData^ GetUserDefinedTip();


  // void SetUserDefinedShaft (vtkPolyData *);
/// <summary>
/// <para>Set the user defined shaft polydata.</para>
/// </summary>
  void SetUserDefinedShaft(vtkPolyData^ arg0);


  // vtkPolyData *GetUserDefinedShaft ();
/// <summary>
/// <para>Set the user defined shaft polydata.</para>
/// </summary>
  vtkPolyData^ GetUserDefinedShaft();


  // vtkProperty *GetXAxisTipProperty ();
/// <summary>
/// <para>Get the tip properties.</para>
/// </summary>
  vtkProperty^ GetXAxisTipProperty();


  // vtkProperty *GetYAxisTipProperty ();
/// <summary>
/// <para>Get the tip properties.</para>
/// </summary>
  vtkProperty^ GetYAxisTipProperty();


  // vtkProperty *GetZAxisTipProperty ();
/// <summary>
/// <para>Get the tip properties.</para>
/// </summary>
  vtkProperty^ GetZAxisTipProperty();


  // vtkProperty *GetXAxisShaftProperty ();
/// <summary>
/// <para>Get the shaft properties.</para>
/// </summary>
  vtkProperty^ GetXAxisShaftProperty();


  // vtkProperty *GetYAxisShaftProperty ();
/// <summary>
/// <para>Get the shaft properties.</para>
/// </summary>
  vtkProperty^ GetYAxisShaftProperty();


  // vtkProperty *GetZAxisShaftProperty ();
/// <summary>
/// <para>Get the shaft properties.</para>
/// </summary>
  vtkProperty^ GetZAxisShaftProperty();


  // vtkCaptionActor2D *GetXAxisCaptionActor2D ();return this XAxisLabel 
/// <summary>
/// <para>Retrieve handles to the X, Y and Z axis (so that you can set their text properties for example)</para>
/// </summary>
  vtkCaptionActor2D^ GetXAxisCaptionActor2D();


  // vtkCaptionActor2D *GetYAxisCaptionActor2D ();return this YAxisLabel 
/// <summary>
/// <para>Retrieve handles to the X, Y and Z axis (so that you can set their text properties for example)</para>
/// </summary>
  vtkCaptionActor2D^ GetYAxisCaptionActor2D();


  // vtkCaptionActor2D *GetZAxisCaptionActor2D ();return this ZAxisLabel 
/// <summary>
/// <para>Set/get the label text.</para>
/// </summary>
  vtkCaptionActor2D^ GetZAxisCaptionActor2D();


  // void SetXAxisLabelText (char *);
/// <summary>
/// <para>Set/get the label text.</para>
/// </summary>
  void SetXAxisLabelText(System::String^ arg0);


  // char *GetXAxisLabelText ();
/// <summary>
/// <para>Set/get the label text.</para>
/// </summary>
  System::String^ GetXAxisLabelText();


  // void SetYAxisLabelText (char *);
/// <summary>
/// <para>Set/get the label text.</para>
/// </summary>
  void SetYAxisLabelText(System::String^ arg0);


  // char *GetYAxisLabelText ();
/// <summary>
/// <para>Set/get the label text.</para>
/// </summary>
  System::String^ GetYAxisLabelText();


  // void SetZAxisLabelText (char *);
/// <summary>
/// <para>Set/get the label text.</para>
/// </summary>
  void SetZAxisLabelText(System::String^ arg0);


  // char *GetZAxisLabelText ();
/// <summary>
/// <para>Set/get the label text.</para>
/// </summary>
  System::String^ GetZAxisLabelText();


  // void SetAxisLabels (int );
/// <summary>
/// <para>Enable/disable drawing the axis labels.</para>
/// </summary>
  void SetAxisLabels(int arg0);


  // int GetAxisLabels ();
/// <summary>
/// <para>Enable/disable drawing the axis labels.</para>
/// </summary>
  int GetAxisLabels();


  // void AxisLabelsOn ();
/// <summary>
/// <para>Enable/disable drawing the axis labels.</para>
/// </summary>
  void AxisLabelsOn();


  // void AxisLabelsOff ();
/// <summary>
/// <para>Enable/disable drawing the axis labels.</para>
/// </summary>
  void AxisLabelsOff();


// Did not wrap:  vtkAxesActor ();


// Did not wrap:  ~vtkAxesActor ();


// Did not wrap:  void UpdateProps ();


// Did not wrap:  vtkAxesActor (const vtkAxesActor &);


// Did not wrap:  void vtkAxesActor 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAxesActor(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAxesActor(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAxesActor();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAxesActor();


};

} // end vtkHybrid
