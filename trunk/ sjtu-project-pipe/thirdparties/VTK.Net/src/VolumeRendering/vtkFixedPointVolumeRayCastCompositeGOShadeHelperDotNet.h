#pragma once

// managed includes
#include "vtkFixedPointVolumeRayCastHelperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointVolumeRayCastMapper;

public ref class vtkFixedPointVolumeRayCastCompositeGOShadeHelper : public vtkFixedPointVolumeRayCastHelper
{

public:
// Did not wrap:  static vtkFixedPointVolumeRayCastCompositeGOShadeHelper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFixedPointVolumeRayCastCompositeGOShadeHelper *NewInstance ();
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper^ NewInstance();


  // vtkFixedPointVolumeRayCastCompositeGOShadeHelper *SafeDownCast (vtkObject* o);
  static vtkFixedPointVolumeRayCastCompositeGOShadeHelper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GenerateImage (int threadID, int threadCount, vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper);
  void GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper);


// Did not wrap:  vtkFixedPointVolumeRayCastCompositeGOShadeHelper ();


// Did not wrap:  ~vtkFixedPointVolumeRayCastCompositeGOShadeHelper ();


// Did not wrap:  vtkFixedPointVolumeRayCastCompositeGOShadeHelper (const vtkFixedPointVolumeRayCastCompositeGOShadeHelper &);


// Did not wrap:  void vtkFixedPointVolumeRayCastCompositeGOShadeHelper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFixedPointVolumeRayCastCompositeGOShadeHelper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFixedPointVolumeRayCastCompositeGOShadeHelper();


};

} // end vtkVolumeRendering
