#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageImportExecutive : public vtkStreamingDemandDrivenPipeline
{

public:
// Did not wrap:  static vtkImageImportExecutive *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageImportExecutive *NewInstance ();
  vtkImageImportExecutive^ NewInstance();


  // vtkImageImportExecutive *SafeDownCast (vtkObject* o);
  static vtkImageImportExecutive^ SafeDownCast(vtkObject^ o);


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inInfo, vtkInformationVector *outInfo);


// Did not wrap:  vtkImageImportExecutive ();


// Did not wrap:  ~vtkImageImportExecutive ();


// Did not wrap:  vtkImageImportExecutive (const vtkImageImportExecutive &);


// Did not wrap:  void vtkImageImportExecutive 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageImportExecutive(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageImportExecutive(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageImportExecutive();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageImportExecutive();


};

} // end vtkImaging
