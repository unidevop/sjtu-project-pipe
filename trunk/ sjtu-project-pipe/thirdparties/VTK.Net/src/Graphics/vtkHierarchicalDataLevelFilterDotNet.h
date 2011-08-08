#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkHierarchicalDataLevelFilter : public vtkHierarchicalDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalDataLevelFilter *NewInstance ();
  vtkHierarchicalDataLevelFilter^ NewInstance();


  // vtkHierarchicalDataLevelFilter *SafeDownCast (vtkObject* o);
  static vtkHierarchicalDataLevelFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkHierarchicalDataLevelFilter *New ();


// Did not wrap:  vtkHierarchicalDataLevelFilter ();


// Did not wrap:  ~vtkHierarchicalDataLevelFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkHierarchicalDataLevelFilter (const vtkHierarchicalDataLevelFilter &);


// Did not wrap:  void vtkHierarchicalDataLevelFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalDataLevelFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalDataLevelFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalDataLevelFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalDataLevelFilter();


};

} // end vtkGraphics
