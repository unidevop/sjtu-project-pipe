#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMassProperties : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkMassProperties *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMassProperties *NewInstance ();
  vtkMassProperties^ NewInstance();


  // vtkMassProperties *SafeDownCast (vtkObject* o);
  static vtkMassProperties^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // double GetVolume ();this Update return this Volume 
/// <summary>
/// <para>Compute and return the volume projected on to each axis aligned plane.</para>
/// </summary>
  double GetVolume();


  // double GetVolumeX ();this Update return this VolumeX 
/// <summary>
/// <para>Compute and return the volume projected on to each axis aligned plane.</para>
/// </summary>
  double GetVolumeX();


  // double GetVolumeY ();this Update return this VolumeY 
/// <summary>
/// <para>Compute and return the volume projected on to each axis aligned plane.</para>
/// </summary>
  double GetVolumeY();


  // double GetVolumeZ ();this Update return this VolumeZ 
/// <summary>
/// <para>Compute and return the weighting factors for the maximum unit normal component (MUNC).</para>
/// </summary>
  double GetVolumeZ();


  // double GetKx ();this Update return this Kx 
/// <summary>
/// <para>Compute and return the weighting factors for the maximum unit normal component (MUNC).</para>
/// </summary>
  double GetKx();


  // double GetKy ();this Update return this Ky 
/// <summary>
/// <para>Compute and return the weighting factors for the maximum unit normal component (MUNC).</para>
/// </summary>
  double GetKy();


  // double GetKz ();this Update return this Kz 
/// <summary>
/// <para>Compute and return the area.</para>
/// </summary>
  double GetKz();


  // double GetSurfaceArea ();this Update return this SurfaceArea 
/// <summary>
/// <para>Compute and return the normalized shape index. This characterizes the deviation of the shape of an object from a sphere. A sphere's NSI is one. This number is always &gt;= 1.0.</para>
/// </summary>
  double GetSurfaceArea();


  // double GetNormalizedShapeIndex ();this Update return this NormalizedShapeIndex 
  double GetNormalizedShapeIndex();


// Did not wrap:  vtkMassProperties ();


// Did not wrap:  ~vtkMassProperties ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkMassProperties (const vtkMassProperties &);


// Did not wrap:  void vtkMassProperties 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMassProperties(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMassProperties(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMassProperties();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMassProperties();


};

} // end vtkGraphics
