#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSimpleImageFilterExample : public vtkSimpleImageToImageFilter
{

public:
// Did not wrap:  static vtkSimpleImageFilterExample *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSimpleImageFilterExample *NewInstance ();
  vtkSimpleImageFilterExample^ NewInstance();


  // vtkSimpleImageFilterExample *SafeDownCast (vtkObject* o);
  static vtkSimpleImageFilterExample^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkSimpleImageFilterExample ();


// Did not wrap:  ~vtkSimpleImageFilterExample ();


// Did not wrap:  virtual void SimpleExecute (vtkImageData *input, vtkImageData *output);


// Did not wrap:  vtkSimpleImageFilterExample (const vtkSimpleImageFilterExample &);


// Did not wrap:  void vtkSimpleImageFilterExample 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSimpleImageFilterExample(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSimpleImageFilterExample(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSimpleImageFilterExample();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSimpleImageFilterExample();


};

} // end vtkImaging
