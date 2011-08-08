#pragma once

// managed includes
#include "vtkFixedPointVolumeRayCastHelperDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointVolumeRayCastMapper;

public ref class vtkFixedPointVolumeRayCastCompositeHelper : public vtkFixedPointVolumeRayCastHelper
{

public:
// Did not wrap:  static vtkFixedPointVolumeRayCastCompositeHelper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFixedPointVolumeRayCastCompositeHelper *NewInstance ();
  vtkFixedPointVolumeRayCastCompositeHelper^ NewInstance();


  // vtkFixedPointVolumeRayCastCompositeHelper *SafeDownCast (vtkObject* o);
  static vtkFixedPointVolumeRayCastCompositeHelper^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GenerateImage (int threadID, int threadCount, vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper);
  void GenerateImage(int threadID, int threadCount, vtkVolume^ vol, vtkFixedPointVolumeRayCastMapper^ mapper);


// Did not wrap:  vtkFixedPointVolumeRayCastCompositeHelper ();


// Did not wrap:  ~vtkFixedPointVolumeRayCastCompositeHelper ();


// Did not wrap:  vtkFixedPointVolumeRayCastCompositeHelper (const vtkFixedPointVolumeRayCastCompositeHelper &);


// Did not wrap:  void vtkFixedPointVolumeRayCastCompositeHelper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFixedPointVolumeRayCastCompositeHelper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFixedPointVolumeRayCastCompositeHelper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFixedPointVolumeRayCastCompositeHelper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFixedPointVolumeRayCastCompositeHelper();


};

} // end vtkVolumeRendering
