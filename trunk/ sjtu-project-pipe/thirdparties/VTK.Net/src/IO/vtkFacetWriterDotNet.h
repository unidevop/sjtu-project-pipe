#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkFacetWriter : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkFacetWriter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFacetWriter *NewInstance ();
  vtkFacetWriter^ NewInstance();


  // vtkFacetWriter *SafeDownCast (vtkObject* o);
  static vtkFacetWriter^ SafeDownCast(vtkObject^ o);


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


  // void Write ();
/// <summary>
/// <para>Write data</para>
/// </summary>
  void Write();


// Did not wrap:  void WriteToStream (ostream *ost);


// Did not wrap:  vtkFacetWriter ();


// Did not wrap:  ~vtkFacetWriter ();


// Did not wrap:  virtual int RequestData (vtkInformation *request, vtkInformationVector *inputVector, vtkInformationVector *outputVector);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  int WriteDataToStream (ostream *ost, vtkPolyData *data);


// Did not wrap:  vtkFacetWriter (const vtkFacetWriter &);


// Did not wrap:  void vtkFacetWriter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFacetWriter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFacetWriter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFacetWriter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFacetWriter();


};

} // end vtkIO
