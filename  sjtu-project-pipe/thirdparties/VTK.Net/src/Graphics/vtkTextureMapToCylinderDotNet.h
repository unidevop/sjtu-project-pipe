#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTextureMapToCylinder : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTextureMapToCylinder *NewInstance ();
  vtkTextureMapToCylinder^ NewInstance();


  // vtkTextureMapToCylinder *SafeDownCast (vtkObject* o);
  static vtkTextureMapToCylinder^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTextureMapToCylinder *New ();


  // void SetPoint1 (double , double , double );
/// <summary>
/// <para>Specify the first point defining the cylinder axis,</para>
/// </summary>
  void SetPoint1(double arg0, double arg1, double arg2);


  // void SetPoint1 (double  a[3]);
/// <summary>
/// <para>Specify the first point defining the cylinder axis,</para>
/// </summary>
  void SetPoint1(array<double>^ a);


  // double  *GetPoint1 ();
/// <summary>
/// <para>Specify the first point defining the cylinder axis,</para>
/// </summary>
  array<double>^ GetPoint1();


  // void SetPoint2 (double , double , double );
/// <summary>
/// <para>Specify the second point defining the cylinder axis,</para>
/// </summary>
  void SetPoint2(double arg0, double arg1, double arg2);


  // void SetPoint2 (double  a[3]);
/// <summary>
/// <para>Specify the second point defining the cylinder axis,</para>
/// </summary>
  void SetPoint2(array<double>^ a);


  // double  *GetPoint2 ();
/// <summary>
/// <para>Specify the second point defining the cylinder axis,</para>
/// </summary>
  array<double>^ GetPoint2();


  // void SetAutomaticCylinderGeneration (int );
/// <summary>
/// <para>Turn on/off automatic cylinder generation. This means it automatically finds the cylinder center and axis.</para>
/// </summary>
  void SetAutomaticCylinderGeneration(int arg0);


  // int GetAutomaticCylinderGeneration ();
/// <summary>
/// <para>Turn on/off automatic cylinder generation. This means it automatically finds the cylinder center and axis.</para>
/// </summary>
  int GetAutomaticCylinderGeneration();


  // void AutomaticCylinderGenerationOn ();
/// <summary>
/// <para>Turn on/off automatic cylinder generation. This means it automatically finds the cylinder center and axis.</para>
/// </summary>
  void AutomaticCylinderGenerationOn();


  // void AutomaticCylinderGenerationOff ();
/// <summary>
/// <para>Turn on/off automatic cylinder generation. This means it automatically finds the cylinder center and axis.</para>
/// </summary>
  void AutomaticCylinderGenerationOff();


  // void SetPreventSeam (int );
/// <summary>
/// <para>Control how the texture coordinates are generated. If PreventSeam is set, the s-coordinate ranges from 0-&gt;1 and 1-&gt;0 corresponding to the angle variation from 0-&gt;180 and 180-&gt;0. Otherwise, the s-coordinate ranges from 0-&gt;1 from 0-&gt;360 degrees.</para>
/// </summary>
  void SetPreventSeam(int arg0);


  // int GetPreventSeam ();
/// <summary>
/// <para>Control how the texture coordinates are generated. If PreventSeam is set, the s-coordinate ranges from 0-&gt;1 and 1-&gt;0 corresponding to the angle variation from 0-&gt;180 and 180-&gt;0. Otherwise, the s-coordinate ranges from 0-&gt;1 from 0-&gt;360 degrees.</para>
/// </summary>
  int GetPreventSeam();


  // void PreventSeamOn ();
/// <summary>
/// <para>Control how the texture coordinates are generated. If PreventSeam is set, the s-coordinate ranges from 0-&gt;1 and 1-&gt;0 corresponding to the angle variation from 0-&gt;180 and 180-&gt;0. Otherwise, the s-coordinate ranges from 0-&gt;1 from 0-&gt;360 degrees.</para>
/// </summary>
  void PreventSeamOn();


  // void PreventSeamOff ();
/// <summary>
/// <para>Control how the texture coordinates are generated. If PreventSeam is set, the s-coordinate ranges from 0-&gt;1 and 1-&gt;0 corresponding to the angle variation from 0-&gt;180 and 180-&gt;0. Otherwise, the s-coordinate ranges from 0-&gt;1 from 0-&gt;360 degrees.</para>
/// </summary>
  void PreventSeamOff();


// Did not wrap:  vtkTextureMapToCylinder ();


// Did not wrap:  ~vtkTextureMapToCylinder ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTextureMapToCylinder (const vtkTextureMapToCylinder &);


// Did not wrap:  void vtkTextureMapToCylinder 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTextureMapToCylinder(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTextureMapToCylinder(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTextureMapToCylinder();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTextureMapToCylinder();


};

} // end vtkGraphics
