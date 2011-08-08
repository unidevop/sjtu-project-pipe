#pragma once

// managed includes
#include "vtkFixedPointVolumeRayCastHelperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointVolumeRayCastMapper;

public ref class vtkFixedPointVolumeRayCastCompositeGOHelper : public vtkFixedPointVolumeRayCastHelper
{

public:
// Did not wrap:  static vtkFixedPointVolumeRayCastCompositeGOHelper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFixedPointVolumeRayCastCompositeGOHelper *NewInstance ();
  vtkFixedPointVolumeRayCastCompositeGOHelper^ NewInstance();


  // vtkFixedPointVolumeRayCastCompositeGOHelper *SafeDownCast (vtkObject* o);
  static vtkFixedPointVolumeRayCastCompositeGOHelper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GenerateImage (int threadID, int threadCount, vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper);
  void GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper);


// Did not wrap:  vtkFixedPointVolumeRayCastCompositeGOHelper ();


// Did not wrap:  ~vtkFixedPointVolumeRayCastCompositeGOHelper ();


// Did not wrap:  vtkFixedPointVolumeRayCastCompositeGOHelper (const vtkFixedPointVolumeRayCastCompositeGOHelper &);


// Did not wrap:  void vtkFixedPointVolumeRayCastCompositeGOHelper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFixedPointVolumeRayCastCompositeGOHelper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFixedPointVolumeRayCastCompositeGOHelper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFixedPointVolumeRayCastCompositeGOHelper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFixedPointVolumeRayCastCompositeGOHelper();


};

} // end vtkVolumeRendering
