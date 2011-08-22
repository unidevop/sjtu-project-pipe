#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkGenericOutlineFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkGenericOutlineFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkGenericOutlineFilter *NewInstance ();
  vtkGenericOutlineFilter^ NewInstance();


  // vtkGenericOutlineFilter *SafeDownCast (vtkObject* o);
  static vtkGenericOutlineFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkGenericOutlineFilter ();


// Did not wrap:  ~vtkGenericOutlineFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkGenericOutlineFilter (const vtkGenericOutlineFilter &);


// Did not wrap:  void vtkGenericOutlineFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkGenericOutlineFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkGenericOutlineFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkGenericOutlineFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkGenericOutlineFilter();


};

} // end vtkGenericFiltering
