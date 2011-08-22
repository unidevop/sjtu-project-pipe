#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkTriangularTCoords : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkTriangularTCoords *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTriangularTCoords *NewInstance ();
  vtkTriangularTCoords^ NewInstance();


  // vtkTriangularTCoords *SafeDownCast (vtkObject* o);
  static vtkTriangularTCoords^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  vtkTriangularTCoords ();


// Did not wrap:  ~vtkTriangularTCoords ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkTriangularTCoords (const vtkTriangularTCoords &);


// Did not wrap:  void vtkTriangularTCoords 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTriangularTCoords(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTriangularTCoords(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTriangularTCoords();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTriangularTCoords();


};

} // end vtkGraphics
