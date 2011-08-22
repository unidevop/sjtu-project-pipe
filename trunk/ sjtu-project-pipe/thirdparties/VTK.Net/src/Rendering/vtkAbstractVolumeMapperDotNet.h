#pragma once

// managed includes
#include "vtkAbstractMapper3DDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkAbstractVolumeMapper : public vtkAbstractMapper3D
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAbstractVolumeMapper *NewInstance ();
  vtkAbstractVolumeMapper^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void SetInput (vtkDataSet *);
/// <summary>
/// <para>Set/Get the input data</para>
/// </summary>
  void SetInput(vtkDataSet^ arg0);


  // vtkDataSet *GetDataSetInput ();
/// <summary>
/// <para>Set/Get the input data</para>
/// </summary>
  vtkDataSet^ GetDataSetInput();


// Did not wrap:  virtual double *GetBounds ();


  // virtual void GetBounds (double bounds[6]);this vtkAbstractMapper3D GetBounds bounds 
/// <summary>
/// <para>Return bounding box (array of six doubles) of data expressed as (xmin,xmax, ymin,ymax, zmin,zmax).</para>
/// </summary>
  void GetBounds(array<double>^ bounds);


// Did not wrap:  vtkAbstractVolumeMapper ();


// Did not wrap:  ~vtkAbstractVolumeMapper ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkAbstractVolumeMapper (const vtkAbstractVolumeMapper &);


// Did not wrap:  void vtkAbstractVolumeMapper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAbstractVolumeMapper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAbstractVolumeMapper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAbstractVolumeMapper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAbstractVolumeMapper();


};

} // end vtkRendering
