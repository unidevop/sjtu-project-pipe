#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkSubdivideTetra : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkSubdivideTetra *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkSubdivideTetra *NewInstance ();
  vtkSubdivideTetra^ NewInstance();


  // vtkSubdivideTetra *SafeDownCast (vtkObject* o);
  static vtkSubdivideTetra^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkSubdivideTetra ();


// Did not wrap:  ~vtkSubdivideTetra ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkSubdivideTetra (const vtkSubdivideTetra &);


// Did not wrap:  void vtkSubdivideTetra 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkSubdivideTetra(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkSubdivideTetra(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkSubdivideTetra();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkSubdivideTetra();


};

} // end vtkGraphics
