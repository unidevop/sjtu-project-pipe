#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkUnstructuredGridVolumeRayCastFunction : public vtkObject
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUnstructuredGridVolumeRayCastFunction *NewInstance ();
  vtkUnstructuredGridVolumeRayCastFunction^ NewInstance();


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkUnstructuredGridVolumeRayCastFunction ();


// Did not wrap:  ~vtkUnstructuredGridVolumeRayCastFunction ();


// Did not wrap:  vtkUnstructuredGridVolumeRayCastFunction (const vtkUnstructuredGridVolumeRayCastFunction &);


// Did not wrap:  void vtkUnstructuredGridVolumeRayCastFunction 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUnstructuredGridVolumeRayCastFunction(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUnstructuredGridVolumeRayCastFunction(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUnstructuredGridVolumeRayCastFunction();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUnstructuredGridVolumeRayCastFunction();


};

} // end vtkVolumeRendering
