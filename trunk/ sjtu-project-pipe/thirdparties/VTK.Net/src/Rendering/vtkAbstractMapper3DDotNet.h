#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkAbstractMapper3D : public vtkAbstractMapper
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAbstractMapper3D *NewInstance ();
  vtkAbstractMapper3D^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual double *GetBounds () = 0;
/// <summary>
/// <para>Return bounding box (array of six doubles) of data expressed as (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  array<double>^ GetBounds();


  // virtual void GetBounds (double bounds[6]);
/// <summary>
/// <para>Get the bounds for this mapper as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // double *GetCenter ();
/// <summary>
/// <para>Return the Center of this mapper's data.</para>
/// </summary>
  array<double>^ GetCenter();


  // void GetCenter (double center[3]);double rc this GetCenter center rc center rc center rc 
/// <summary>
/// <para>Return the Center of this mapper's data.</para>
/// </summary>
  void GetCenter(array<double>^ center);


  // double GetLength ();
/// <summary>
/// <para>Return the diagonal length of this mappers bounding box.</para>
/// </summary>
  double GetLength();


  // virtual int IsARayCastMapper ();return 
/// <summary>
/// <para>Is this a ray cast mapper? A subclass would return 1 if the ray caster is needed to generate an image from this mapper.</para>
/// </summary>
  int IsARayCastMapper();


  // virtual int IsARenderIntoImageMapper ();return 
/// <summary>
/// <para>Is this a &quot;render into image&quot; mapper? A subclass would return 1 if the mapper produces an image by rendering into a software image buffer.</para>
/// </summary>
  int IsARenderIntoImageMapper();


// Did not wrap:  vtkAbstractMapper3D ();


// Did not wrap:  ~vtkAbstractMapper3D ();


// Did not wrap:  vtkAbstractMapper3D (const vtkAbstractMapper3D &);


// Did not wrap:  void vtkAbstractMapper3D 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAbstractMapper3D(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAbstractMapper3D(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAbstractMapper3D();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAbstractMapper3D();


};

} // end vtkRendering
