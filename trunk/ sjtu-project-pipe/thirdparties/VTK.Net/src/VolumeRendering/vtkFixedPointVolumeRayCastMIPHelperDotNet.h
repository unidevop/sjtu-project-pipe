#pragma once

// managed includes
#include "vtkFixedPointVolumeRayCastHelperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointVolumeRayCastMapper;

public ref class vtkFixedPointVolumeRayCastMIPHelper : public vtkFixedPointVolumeRayCastHelper
{

public:
// Did not wrap:  static vtkFixedPointVolumeRayCastMIPHelper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFixedPointVolumeRayCastMIPHelper *NewInstance ();
  vtkFixedPointVolumeRayCastMIPHelper^ NewInstance();


  // vtkFixedPointVolumeRayCastMIPHelper *SafeDownCast (vtkObject* o);
  static vtkFixedPointVolumeRayCastMIPHelper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GenerateImage (int threadID, int threadCount, vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper);
  void GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper);


// Did not wrap:  vtkFixedPointVolumeRayCastMIPHelper ();


// Did not wrap:  ~vtkFixedPointVolumeRayCastMIPHelper ();


// Did not wrap:  vtkFixedPointVolumeRayCastMIPHelper (const vtkFixedPointVolumeRayCastMIPHelper &);


// Did not wrap:  void vtkFixedPointVolumeRayCastMIPHelper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFixedPointVolumeRayCastMIPHelper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFixedPointVolumeRayCastMIPHelper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFixedPointVolumeRayCastMIPHelper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFixedPointVolumeRayCastMIPHelper();


};

} // end vtkVolumeRendering
