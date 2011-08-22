#pragma once

// managed includes
#include "vtkFixedPointVolumeRayCastHelperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointVolumeRayCastMapper;

public ref class vtkFixedPointVolumeRayCastCompositeShadeHelper : public vtkFixedPointVolumeRayCastHelper
{

public:
// Did not wrap:  static vtkFixedPointVolumeRayCastCompositeShadeHelper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFixedPointVolumeRayCastCompositeShadeHelper *NewInstance ();
  vtkFixedPointVolumeRayCastCompositeShadeHelper^ NewInstance();


  // vtkFixedPointVolumeRayCastCompositeShadeHelper *SafeDownCast (vtkObject* o);
  static vtkFixedPointVolumeRayCastCompositeShadeHelper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GenerateImage (int threadID, int threadCount, vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper);
  void GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper);


// Did not wrap:  vtkFixedPointVolumeRayCastCompositeShadeHelper ();


// Did not wrap:  ~vtkFixedPointVolumeRayCastCompositeShadeHelper ();


// Did not wrap:  vtkFixedPointVolumeRayCastCompositeShadeHelper (const vtkFixedPointVolumeRayCastCompositeShadeHelper &);


// Did not wrap:  void vtkFixedPointVolumeRayCastCompositeShadeHelper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFixedPointVolumeRayCastCompositeShadeHelper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFixedPointVolumeRayCastCompositeShadeHelper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFixedPointVolumeRayCastCompositeShadeHelper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFixedPointVolumeRayCastCompositeShadeHelper();


};

} // end vtkVolumeRendering
