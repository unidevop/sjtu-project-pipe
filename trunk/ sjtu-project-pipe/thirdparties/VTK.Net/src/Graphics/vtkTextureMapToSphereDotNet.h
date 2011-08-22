#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTextureMapToSphere : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTextureMapToSphere *NewInstance ();
  vtkTextureMapToSphere^ NewInstance();


  // vtkTextureMapToSphere *SafeDownCast (vtkObject* o);
  static vtkTextureMapToSphere^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkTextureMapToSphere *New ();


  // void SetCenter (double , double , double );
/// <summary>
/// <para>Specify a point defining the center of the sphere.</para>
/// </summary>
  void SetCenter(double arg0, double arg1, double arg2);


  // void SetCenter (double  a[3]);
/// <summary>
/// <para>Specify a point defining the center of the sphere.</para>
/// </summary>
  void SetCenter(array<double>^ a);


  // double  *GetCenter ();
/// <summary>
/// <para>Specify a point defining the center of the sphere.</para>
/// </summary>
  array<double>^ GetCenter();


  // void SetAutomaticSphereGeneration (int );
/// <summary>
/// <para>Turn on/off automatic sphere generation. This means it automatically finds the sphere center.</para>
/// </summary>
  void SetAutomaticSphereGeneration(int arg0);


  // int GetAutomaticSphereGeneration ();
/// <summary>
/// <para>Turn on/off automatic sphere generation. This means it automatically finds the sphere center.</para>
/// </summary>
  int GetAutomaticSphereGeneration();


  // void AutomaticSphereGenerationOn ();
/// <summary>
/// <para>Turn on/off automatic sphere generation. This means it automatically finds the sphere center.</para>
/// </summary>
  void AutomaticSphereGenerationOn();


  // void AutomaticSphereGenerationOff ();
/// <summary>
/// <para>Turn on/off automatic sphere generation. This means it automatically finds the sphere center.</para>
/// </summary>
  void AutomaticSphereGenerationOff();


  // void SetPreventSeam (int );
/// <summary>
/// <para>Control how the texture coordinates are generated. If PreventSeam is set, the s-coordinate ranges from 0-&gt;1 and 1-&gt;0 corresponding to the theta angle variation between 0-&gt;180 and 180-&gt;0 degrees. Otherwise, the s-coordinate ranges from 0-&gt;1 between 0-&gt;360 degrees.</para>
/// </summary>
  void SetPreventSeam(int arg0);


  // int GetPreventSeam ();
/// <summary>
/// <para>Control how the texture coordinates are generated. If PreventSeam is set, the s-coordinate ranges from 0-&gt;1 and 1-&gt;0 corresponding to the theta angle variation between 0-&gt;180 and 180-&gt;0 degrees. Otherwise, the s-coordinate ranges from 0-&gt;1 between 0-&gt;360 degrees.</para>
/// </summary>
  int GetPreventSeam();


  // void PreventSeamOn ();
/// <summary>
/// <para>Control how the texture coordinates are generated. If PreventSeam is set, the s-coordinate ranges from 0-&gt;1 and 1-&gt;0 corresponding to the theta angle variation between 0-&gt;180 and 180-&gt;0 degrees. Otherwise, the s-coordinate ranges from 0-&gt;1 between 0-&gt;360 degrees.</para>
/// </summary>
  void PreventSeamOn();


  // void PreventSeamOff ();
/// <summary>
/// <para>Control how the texture coordinates are generated. If PreventSeam is set, the s-coordinate ranges from 0-&gt;1 and 1-&gt;0 corresponding to the theta angle variation between 0-&gt;180 and 180-&gt;0 degrees. Otherwise, the s-coordinate ranges from 0-&gt;1 between 0-&gt;360 degrees.</para>
/// </summary>
  void PreventSeamOff();


// Did not wrap:  vtkTextureMapToSphere ();


// Did not wrap:  ~vtkTextureMapToSphere ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTextureMapToSphere (const vtkTextureMapToSphere &);


// Did not wrap:  void vtkTextureMapToSphere 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTextureMapToSphere(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTextureMapToSphere(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTextureMapToSphere();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTextureMapToSphere();


};

} // end vtkGraphics
