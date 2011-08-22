#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkFacetReader : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkFacetReader *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFacetReader *NewInstance ();
  vtkFacetReader^ NewInstance();


  // vtkFacetReader *SafeDownCast (vtkObject* o);
  static vtkFacetReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFileName (char *);
/// <summary>
/// <para>Specify file name of Facet datafile to read</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify file name of Facet datafile to read</para>
/// </summary>
  System::String^ GetFileName();


// Did not wrap:  vtkFacetReader ();


// Did not wrap:  ~vtkFacetReader ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkFacetReader (const vtkFacetReader &);


// Did not wrap:  void vtkFacetReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFacetReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFacetReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFacetReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFacetReader();


};

} // end vtkHybrid
