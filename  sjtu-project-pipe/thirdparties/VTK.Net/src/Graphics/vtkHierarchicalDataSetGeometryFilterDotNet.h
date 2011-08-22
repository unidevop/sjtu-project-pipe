#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkHierarchicalDataSetGeometryFilter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkHierarchicalDataSetGeometryFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkHierarchicalDataSetGeometryFilter *NewInstance ();
  vtkHierarchicalDataSetGeometryFilter^ NewInstance();


  // vtkHierarchicalDataSetGeometryFilter *SafeDownCast (vtkObject* o);
  static vtkHierarchicalDataSetGeometryFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual int ProcessRequest (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  vtkHierarchicalDataSetGeometryFilter ();


// Did not wrap:  ~vtkHierarchicalDataSetGeometryFilter ();


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  virtual vtkExecutive *CreateDefaultExecutive ();


// Did not wrap:  virtual int RequestCompositeData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkHierarchicalDataSetGeometryFilter (const vtkHierarchicalDataSetGeometryFilter &);


// Did not wrap:  void vtkHierarchicalDataSetGeometryFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkHierarchicalDataSetGeometryFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkHierarchicalDataSetGeometryFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkHierarchicalDataSetGeometryFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkHierarchicalDataSetGeometryFilter();


};

} // end vtkGraphics
