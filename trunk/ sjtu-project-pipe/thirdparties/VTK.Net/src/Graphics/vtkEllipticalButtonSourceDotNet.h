#pragma once

// managed includes
#include "vtkButtonSourceDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkEllipticalButtonSource : public vtkButtonSource
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkEllipticalButtonSource *NewInstance ();
  vtkEllipticalButtonSource^ NewInstance();


  // vtkEllipticalButtonSource *SafeDownCast (vtkObject* o);
  static vtkEllipticalButtonSource^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkEllipticalButtonSource *New ();


  // void SetWidth (double );
/// <summary>
/// <para>Set/Get the width of the button (the x-ellipsoid axis length * 2).</para>
/// </summary>
  void SetWidth(double arg0);


  // double GetWidthMinValue ();
/// <summary>
/// <para>Set/Get the width of the button (the x-ellipsoid axis length * 2).</para>
/// </summary>
  double GetWidthMinValue();


  // double GetWidthMaxValue ();
/// <summary>
/// <para>Set/Get the width of the button (the x-ellipsoid axis length * 2).</para>
/// </summary>
  double GetWidthMaxValue();


  // double GetWidth ();
/// <summary>
/// <para>Set/Get the width of the button (the x-ellipsoid axis length * 2).</para>
/// </summary>
  double GetWidth();


  // void SetHeight (double );
/// <summary>
/// <para>Set/Get the height of the button (the y-ellipsoid axis length * 2).</para>
/// </summary>
  void SetHeight(double arg0);


  // double GetHeightMinValue ();
/// <summary>
/// <para>Set/Get the height of the button (the y-ellipsoid axis length * 2).</para>
/// </summary>
  double GetHeightMinValue();


  // double GetHeightMaxValue ();
/// <summary>
/// <para>Set/Get the height of the button (the y-ellipsoid axis length * 2).</para>
/// </summary>
  double GetHeightMaxValue();


  // double GetHeight ();
/// <summary>
/// <para>Set/Get the height of the button (the y-ellipsoid axis length * 2).</para>
/// </summary>
  double GetHeight();


  // void SetDepth (double );
/// <summary>
/// <para>Set/Get the depth of the button (the z-eliipsoid axis length).</para>
/// </summary>
  void SetDepth(double arg0);


  // double GetDepthMinValue ();
/// <summary>
/// <para>Set/Get the depth of the button (the z-eliipsoid axis length).</para>
/// </summary>
  double GetDepthMinValue();


  // double GetDepthMaxValue ();
/// <summary>
/// <para>Set/Get the depth of the button (the z-eliipsoid axis length).</para>
/// </summary>
  double GetDepthMaxValue();


  // double GetDepth ();
/// <summary>
/// <para>Set/Get the depth of the button (the z-eliipsoid axis length).</para>
/// </summary>
  double GetDepth();


  // void SetCircumferentialResolution (int );
/// <summary>
/// <para>Specify the resolution of the button in the circumferential direction.</para>
/// </summary>
  void SetCircumferentialResolution(int arg0);


  // int GetCircumferentialResolutionMinValue ();
/// <summary>
/// <para>Specify the resolution of the button in the circumferential direction.</para>
/// </summary>
  int GetCircumferentialResolutionMinValue();


  // int GetCircumferentialResolutionMaxValue ();
/// <summary>
/// <para>Specify the resolution of the button in the circumferential direction.</para>
/// </summary>
  int GetCircumferentialResolutionMaxValue();


  // int GetCircumferentialResolution ();
/// <summary>
/// <para>Specify the resolution of the button in the circumferential direction.</para>
/// </summary>
  int GetCircumferentialResolution();


  // void SetTextureResolution (int );
/// <summary>
/// <para>Specify the resolution of the texture in the radial direction in the texture region.</para>
/// </summary>
  void SetTextureResolution(int arg0);


  // int GetTextureResolutionMinValue ();
/// <summary>
/// <para>Specify the resolution of the texture in the radial direction in the texture region.</para>
/// </summary>
  int GetTextureResolutionMinValue();


  // int GetTextureResolutionMaxValue ();
/// <summary>
/// <para>Specify the resolution of the texture in the radial direction in the texture region.</para>
/// </summary>
  int GetTextureResolutionMaxValue();


  // int GetTextureResolution ();
/// <summary>
/// <para>Specify the resolution of the texture in the radial direction in the texture region.</para>
/// </summary>
  int GetTextureResolution();


  // void SetShoulderResolution (int );
/// <summary>
/// <para>Specify the resolution of the texture in the radial direction in the shoulder region.</para>
/// </summary>
  void SetShoulderResolution(int arg0);


  // int GetShoulderResolutionMinValue ();
/// <summary>
/// <para>Specify the resolution of the texture in the radial direction in the shoulder region.</para>
/// </summary>
  int GetShoulderResolutionMinValue();


  // int GetShoulderResolutionMaxValue ();
/// <summary>
/// <para>Specify the resolution of the texture in the radial direction in the shoulder region.</para>
/// </summary>
  int GetShoulderResolutionMaxValue();


  // int GetShoulderResolution ();
/// <summary>
/// <para>Specify the resolution of the texture in the radial direction in the shoulder region.</para>
/// </summary>
  int GetShoulderResolution();


  // void SetRadialRatio (double );
/// <summary>
/// <para>Set/Get the radial ratio. This is the measure of the radius of the outer ellipsoid to the inner ellipsoid of the button. The outer ellipsoid is the boundary of the button defined by the height and width. The inner ellipsoid circumscribes the texture region. Larger RadialRatio's cause the button to be more rounded (and the texture region to be smaller); smaller ratios produce sharply curved shoulders with a larger texture region.</para>
/// </summary>
  void SetRadialRatio(double arg0);


  // double GetRadialRatioMinValue ();
/// <summary>
/// <para>Set/Get the radial ratio. This is the measure of the radius of the outer ellipsoid to the inner ellipsoid of the button. The outer ellipsoid is the boundary of the button defined by the height and width. The inner ellipsoid circumscribes the texture region. Larger RadialRatio's cause the button to be more rounded (and the texture region to be smaller); smaller ratios produce sharply curved shoulders with a larger texture region.</para>
/// </summary>
  double GetRadialRatioMinValue();


  // double GetRadialRatioMaxValue ();
/// <summary>
/// <para>Set/Get the radial ratio. This is the measure of the radius of the outer ellipsoid to the inner ellipsoid of the button. The outer ellipsoid is the boundary of the button defined by the height and width. The inner ellipsoid circumscribes the texture region. Larger RadialRatio's cause the button to be more rounded (and the texture region to be smaller); smaller ratios produce sharply curved shoulders with a larger texture region.</para>
/// </summary>
  double GetRadialRatioMaxValue();


  // double GetRadialRatio ();
/// <summary>
/// <para>Set/Get the radial ratio. This is the measure of the radius of the outer ellipsoid to the inner ellipsoid of the button. The outer ellipsoid is the boundary of the button defined by the height and width. The inner ellipsoid circumscribes the texture region. Larger RadialRatio's cause the button to be more rounded (and the texture region to be smaller); smaller ratios produce sharply curved shoulders with a larger texture region.</para>
/// </summary>
  double GetRadialRatio();


// Did not wrap:  vtkEllipticalButtonSource ();


// Did not wrap:  ~vtkEllipticalButtonSource ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkEllipticalButtonSource (const vtkEllipticalButtonSource &);


// Did not wrap:  void vtkEllipticalButtonSource 


// Did not wrap:  double ComputeDepth (int inTextureRegion, double x, double y, double n[3]);


// Did not wrap:  void InterpolateCurve (int inTextureRegion, vtkPoints *newPts, int numPts, vtkFloatArray *normals, vtkFloatArray *tcoords, int res, int c1StartPoint, int c1Incr, int c2StartPoint, int s2Incr, int startPoint, int incr);


// Did not wrap:  void CreatePolygons (vtkCellArray *newPolys, int num, int res, int startIdx);


// Did not wrap:  void IntersectEllipseWithLine (double a2, double b2, double dX, double dY, double &xe, double &ye);


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkEllipticalButtonSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkEllipticalButtonSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkEllipticalButtonSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkEllipticalButtonSource();


};

} // end vtkGraphics
