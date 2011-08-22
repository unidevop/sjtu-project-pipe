#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkStructuredGridOutlineFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkStructuredGridOutlineFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkStructuredGridOutlineFilter *NewInstance ();
  vtkStructuredGridOutlineFilter^ NewInstance();


  // vtkStructuredGridOutlineFilter *SafeDownCast (vtkObject* o);
  static vtkStructuredGridOutlineFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  vtkStructuredGridOutlineFilter ();


// Did not wrap:  ~vtkStructuredGridOutlineFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkStructuredGridOutlineFilter (const vtkStructuredGridOutlineFilter &);


// Did not wrap:  void vtkStructuredGridOutlineFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkStructuredGridOutlineFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkStructuredGridOutlineFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkStructuredGridOutlineFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkStructuredGridOutlineFilter();


};

} // end vtkGraphics
