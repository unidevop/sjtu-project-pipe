#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProgrammableSource : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkProgrammableSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProgrammableSource *NewInstance ();
  vtkProgrammableSource^ NewInstance();


  // vtkProgrammableSource *SafeDownCast (vtkObject* o);
  static vtkProgrammableSource^ SafeDownCast(vtkObject^ o);


// Did not wrap:  void SetExecuteMethod (void (*func)(void *) , void *arg);


// Did not wrap:  void SetExecuteMethodArgDelete (void (*func)(void *) );


// Did not wrap:  void SetRequestInformationMethod (void (*func)(void *) );


  // vtkPolyData *GetPolyDataOutput ();
/// <summary>
/// <para>Get the output as a concrete type. This method is typically used by the writer of the source function to get the output as a particular type (i.e., it essentially does type casting). It is the users responsibility to know the correct type of the output data.</para>
/// </summary>
  vtkPolyData^ GetPolyDataOutput();


  // vtkStructuredPoints *GetStructuredPointsOutput ();
/// <summary>
/// <para>Get the output as a concrete type.</para>
/// </summary>
  vtkStructuredPoints^ GetStructuredPointsOutput();


  // vtkStructuredGrid *GetStructuredGridOutput ();
/// <summary>
/// <para>Get the output as a concrete type.</para>
/// </summary>
  vtkStructuredGrid^ GetStructuredGridOutput();


  // vtkUnstructuredGrid *GetUnstructuredGridOutput ();
/// <summary>
/// <para>Get the output as a concrete type.</para>
/// </summary>
  vtkUnstructuredGrid^ GetUnstructuredGridOutput();


  // vtkRectilinearGrid *GetRectilinearGridOutput ();
/// <summary>
/// <para>Get the output as a concrete type.</para>
/// </summary>
  vtkRectilinearGrid^ GetRectilinearGridOutput();


// Did not wrap:  vtkProgrammableSource ();


// Did not wrap:  ~vtkProgrammableSource ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestDataObject (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkProgrammableSource (const vtkProgrammableSource &);


// Did not wrap:  void vtkProgrammableSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProgrammableSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProgrammableSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProgrammableSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProgrammableSource();


};

} // end vtkGraphics
