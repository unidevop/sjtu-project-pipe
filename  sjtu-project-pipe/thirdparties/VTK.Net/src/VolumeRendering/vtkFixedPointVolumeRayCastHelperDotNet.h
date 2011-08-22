#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkFixedPointVolumeRayCastMapper;

public ref class vtkFixedPointVolumeRayCastHelper : public vtkObject
{

public:
// Did not wrap:  static vtkFixedPointVolumeRayCastHelper *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFixedPointVolumeRayCastHelper *NewInstance ();
  vtkFixedPointVolumeRayCastHelper^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // virtual void GenerateImage (int , int , vtkVolume *, vtkFixedPointVolumeRayCastMapper *);
  void GenerateImage(int arg0, int arg1, vtkVolume^ arg2, vtkFixedPointVolumeRayCastMapper^ arg3);


// Did not wrap:  vtkFixedPointVolumeRayCastHelper ();


// Did not wrap:  ~vtkFixedPointVolumeRayCastHelper ();


// Did not wrap:  vtkFixedPointVolumeRayCastHelper (const vtkFixedPointVolumeRayCastHelper &);


// Did not wrap:  void vtkFixedPointVolumeRayCastHelper 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFixedPointVolumeRayCastHelper(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFixedPointVolumeRayCastHelper(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFixedPointVolumeRayCastHelper();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFixedPointVolumeRayCastHelper();


};

} // end vtkVolumeRendering
