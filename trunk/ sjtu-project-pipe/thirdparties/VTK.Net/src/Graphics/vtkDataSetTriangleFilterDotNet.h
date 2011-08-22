#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataSetTriangleFilter : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkDataSetTriangleFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetTriangleFilter *NewInstance ();
  vtkDataSetTriangleFilter^ NewInstance();


  // vtkDataSetTriangleFilter *SafeDownCast (vtkObject* o);
  static vtkDataSetTriangleFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkDataSetTriangleFilter ();


// Did not wrap:  ~vtkDataSetTriangleFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  void StructuredExecute (vtkDataSet *, vtkUnstructuredGrid *);


// Did not wrap:  void UnstructuredExecute (vtkDataSet *, vtkUnstructuredGrid *);


// Did not wrap:  vtkDataSetTriangleFilter (const vtkDataSetTriangleFilter &);


// Did not wrap:  void vtkDataSetTriangleFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetTriangleFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetTriangleFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetTriangleFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetTriangleFilter();


};

} // end vtkGraphics
