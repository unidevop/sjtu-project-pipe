#pragma once

// managed includes
#include "vtkProp3DDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkAbstractVolumeMapper;
ref class vtkVolumeProperty;

public ref class vtkVolume : public vtkProp3D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVolume *NewInstance ();
  vtkVolume^ NewInstance();


  // vtkVolume *SafeDownCast (vtkObject* o);
  static vtkVolume^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkVolume *New ();


  // void SetMapper (vtkAbstractVolumeMapper *mapper);
/// <summary>
/// <para>Set/Get the volume mapper.</para>
/// </summary>
  void SetMapper(vtkAbstractVolumeMapper^ mapper);


  // vtkAbstractVolumeMapper *GetMapper ();
/// <summary>
/// <para>Set/Get the volume mapper.</para>
/// </summary>
  vtkAbstractVolumeMapper^ GetMapper();


  // void SetProperty (vtkVolumeProperty *property);
/// <summary>
/// <para>Set/Get the volume property.</para>
/// </summary>
  void SetProperty(vtkVolumeProperty^ property);


  // vtkVolumeProperty *GetProperty ();
/// <summary>
/// <para>Set/Get the volume property.</para>
/// </summary>
  vtkVolumeProperty^ GetProperty();


  // void GetVolumes (vtkPropCollection *vc);
/// <summary>
/// <para>For some exporters and other other operations we must be able to collect all the actors or volumes. This method is used in that process.</para>
/// </summary>
  void GetVolumes(vtkPropCollection^ vc);


  // void Update ();
/// <summary>
/// <para>Update the volume rendering pipeline by updating the volume mapper</para>
/// </summary>
  void Update();


  // double *GetBounds ();
/// <summary>
/// <para>Get the bounds - either all six at once  (xmin, xmax, ymin, ymax, zmin, zmax) or one at a time.</para>
/// </summary>
  array<double>^ GetBounds();


  // void GetBounds (double bounds[6]);this vtkProp3D GetBounds bounds 
/// <summary>
/// <para>Get the bounds - either all six at once  (xmin, xmax, ymin, ymax, zmin, zmax) or one at a time.</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


  // double GetMinXBound ();
/// <summary>
/// <para>Get the bounds - either all six at once  (xmin, xmax, ymin, ymax, zmin, zmax) or one at a time.</para>
/// </summary>
  double GetMinXBound();


  // double GetMaxXBound ();
/// <summary>
/// <para>Get the bounds - either all six at once  (xmin, xmax, ymin, ymax, zmin, zmax) or one at a time.</para>
/// </summary>
  double GetMaxXBound();


  // double GetMinYBound ();
/// <summary>
/// <para>Get the bounds - either all six at once  (xmin, xmax, ymin, ymax, zmin, zmax) or one at a time.</para>
/// </summary>
  double GetMinYBound();


  // double GetMaxYBound ();
/// <summary>
/// <para>Get the bounds - either all six at once  (xmin, xmax, ymin, ymax, zmin, zmax) or one at a time.</para>
/// </summary>
  double GetMaxYBound();


  // double GetMinZBound ();
/// <summary>
/// <para>Get the bounds - either all six at once  (xmin, xmax, ymin, ymax, zmin, zmax) or one at a time.</para>
/// </summary>
  double GetMinZBound();


  // double GetMaxZBound ();
/// <summary>
/// <para>Get the bounds - either all six at once  (xmin, xmax, ymin, ymax, zmin, zmax) or one at a time.</para>
/// </summary>
  double GetMaxZBound();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return the MTime also considering the property etc.</para>
/// </summary>
  unsigned long GetMTime();


  // unsigned long GetRedrawMTime ();
/// <summary>
/// <para>Return the mtime of anything that would cause the rendered image to  appear differently. Usually this involves checking the mtime of the  prop plus anything else it depends on such as properties, mappers, etc.</para>
/// </summary>
  unsigned long GetRedrawMTime();


  // void ShallowCopy (vtkProp *prop);
/// <summary>
/// <para>Shallow copy of this vtkVolume. Overloads the virtual vtkProp method.</para>
/// </summary>
  void ShallowCopy(vtkProp^ prop);


// Did not wrap:  vtkVolume ();


// Did not wrap:  ~vtkVolume ();


// Did not wrap:  float ComputeScreenCoverage (vtkViewport *vp);


// Did not wrap:  vtkVolume (const vtkVolume &);


// Did not wrap:  void vtkVolume 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVolume(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVolume(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVolume();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVolume();


};

} // end vtkRendering
