#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkProperty2D : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProperty2D *NewInstance ();
  vtkProperty2D^ NewInstance();


  // vtkProperty2D *SafeDownCast (vtkObject* o);
  static vtkProperty2D^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkProperty2D *New ();


  // void DeepCopy (vtkProperty2D *p);
/// <summary>
/// <para>Assign one property to another. </para>
/// </summary>
  void DeepCopy(vtkProperty2D^ p);


  // void SetColor (double , double , double );
/// <summary>
/// <para>Set/Get the RGB color of this property.</para>
/// </summary>
  void SetColor(double arg0, double arg1, double arg2);


  // void SetColor (double  a[3]);
/// <summary>
/// <para>Set/Get the RGB color of this property.</para>
/// </summary>
  void SetColor(array<double>^ a);


  // double  *GetColor ();
/// <summary>
/// <para>Set/Get the RGB color of this property.</para>
/// </summary>
  array<double>^ GetColor();


  // double GetOpacity ();
/// <summary>
/// <para>Set/Get the Opacity of this property.</para>
/// </summary>
  double GetOpacity();


  // void SetOpacity (double );
/// <summary>
/// <para>Set/Get the Opacity of this property.</para>
/// </summary>
  void SetOpacity(double arg0);


  // void SetPointSize (float );
/// <summary>
/// <para>Set/Get the diameter of a Point. The size is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  void SetPointSize(float arg0);


  // float GetPointSizeMinValue ();
/// <summary>
/// <para>Set/Get the diameter of a Point. The size is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetPointSizeMinValue();


  // float GetPointSizeMaxValue ();
/// <summary>
/// <para>Set/Get the diameter of a Point. The size is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetPointSizeMaxValue();


  // float GetPointSize ();
/// <summary>
/// <para>Set/Get the diameter of a Point. The size is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetPointSize();


  // void SetLineWidth (float );
/// <summary>
/// <para>Set/Get the width of a Line. The width is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  void SetLineWidth(float arg0);


  // float GetLineWidthMinValue ();
/// <summary>
/// <para>Set/Get the width of a Line. The width is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetLineWidthMinValue();


  // float GetLineWidthMaxValue ();
/// <summary>
/// <para>Set/Get the width of a Line. The width is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetLineWidthMaxValue();


  // float GetLineWidth ();
/// <summary>
/// <para>Set/Get the width of a Line. The width is expressed in screen units. This is only implemented for OpenGL. The default is 1.0.</para>
/// </summary>
  float GetLineWidth();


  // void SetLineStipplePattern (int );
/// <summary>
/// <para>Set/Get the stippling pattern of a Line, as a 16-bit binary pattern  (1 = pixel on, 0 = pixel off). This is only implemented for OpenGL. The default is 0xFFFF.</para>
/// </summary>
  void SetLineStipplePattern(int arg0);


  // int GetLineStipplePattern ();
/// <summary>
/// <para>Set/Get the stippling pattern of a Line, as a 16-bit binary pattern  (1 = pixel on, 0 = pixel off). This is only implemented for OpenGL. The default is 0xFFFF.</para>
/// </summary>
  int GetLineStipplePattern();


  // void SetLineStippleRepeatFactor (int );
/// <summary>
/// <para>Set/Get the stippling repeat factor of a Line, which specifies how many times each bit in the pattern is to be repeated. This is only implemented for OpenGL. The default is 1.</para>
/// </summary>
  void SetLineStippleRepeatFactor(int arg0);


  // int GetLineStippleRepeatFactorMinValue ();
/// <summary>
/// <para>Set/Get the stippling repeat factor of a Line, which specifies how many times each bit in the pattern is to be repeated. This is only implemented for OpenGL. The default is 1.</para>
/// </summary>
  int GetLineStippleRepeatFactorMinValue();


  // int GetLineStippleRepeatFactorMaxValue ();
/// <summary>
/// <para>Set/Get the stippling repeat factor of a Line, which specifies how many times each bit in the pattern is to be repeated. This is only implemented for OpenGL. The default is 1.</para>
/// </summary>
  int GetLineStippleRepeatFactorMaxValue();


  // int GetLineStippleRepeatFactor ();
/// <summary>
/// <para>Set/Get the stippling repeat factor of a Line, which specifies how many times each bit in the pattern is to be repeated. This is only implemented for OpenGL. The default is 1.</para>
/// </summary>
  int GetLineStippleRepeatFactor();


  // void SetDisplayLocation (int );
/// <summary>
/// <para>The DisplayLocation is either background or foreground. If it is background, then this 2D actor will be drawn behind all 3D props or foreground 2D actors. If it is background, then this 2D actor will be drawn in front of all 3D props and background 2D actors. Within 2D actors of the same DisplayLocation type, order is determined by the order in which the 2D actors were added to the viewport.</para>
/// </summary>
  void SetDisplayLocation(int arg0);


  // int GetDisplayLocationMinValue ();
/// <summary>
/// <para>The DisplayLocation is either background or foreground. If it is background, then this 2D actor will be drawn behind all 3D props or foreground 2D actors. If it is background, then this 2D actor will be drawn in front of all 3D props and background 2D actors. Within 2D actors of the same DisplayLocation type, order is determined by the order in which the 2D actors were added to the viewport.</para>
/// </summary>
  int GetDisplayLocationMinValue();


  // int GetDisplayLocationMaxValue ();
/// <summary>
/// <para>The DisplayLocation is either background or foreground. If it is background, then this 2D actor will be drawn behind all 3D props or foreground 2D actors. If it is background, then this 2D actor will be drawn in front of all 3D props and background 2D actors. Within 2D actors of the same DisplayLocation type, order is determined by the order in which the 2D actors were added to the viewport.</para>
/// </summary>
  int GetDisplayLocationMaxValue();


  // int GetDisplayLocation ();
/// <summary>
/// <para>The DisplayLocation is either background or foreground. If it is background, then this 2D actor will be drawn behind all 3D props or foreground 2D actors. If it is background, then this 2D actor will be drawn in front of all 3D props and background 2D actors. Within 2D actors of the same DisplayLocation type, order is determined by the order in which the 2D actors were added to the viewport.</para>
/// </summary>
  int GetDisplayLocation();


  // void SetDisplayLocationToBackground ();this DisplayLocation VTK_BACKGROUND_LOCATION 
/// <summary>
/// <para>The DisplayLocation is either background or foreground. If it is background, then this 2D actor will be drawn behind all 3D props or foreground 2D actors. If it is background, then this 2D actor will be drawn in front of all 3D props and background 2D actors. Within 2D actors of the same DisplayLocation type, order is determined by the order in which the 2D actors were added to the viewport.</para>
/// </summary>
  void SetDisplayLocationToBackground();


  // void SetDisplayLocationToForeground ();this DisplayLocation VTK_FOREGROUND_LOCATION 
/// <summary>
/// <para>The DisplayLocation is either background or foreground. If it is background, then this 2D actor will be drawn behind all 3D props or foreground 2D actors. If it is background, then this 2D actor will be drawn in front of all 3D props and background 2D actors. Within 2D actors of the same DisplayLocation type, order is determined by the order in which the 2D actors were added to the viewport.</para>
/// </summary>
  void SetDisplayLocationToForeground();


// Did not wrap:  virtual void Render (vtkViewport *);


// Did not wrap:  vtkProperty2D ();


// Did not wrap:  ~vtkProperty2D ();


// Did not wrap:  vtkProperty2D (const vtkProperty2D &);


// Did not wrap:  void vtkProperty2D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProperty2D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProperty2D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProperty2D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProperty2D();


};

} // end vtkCommon
