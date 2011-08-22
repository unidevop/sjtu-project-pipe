#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProgrammableDataObjectSource : public vtkDataObjectAlgorithm
{

public:
// Did not wrap:  static vtkProgrammableDataObjectSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProgrammableDataObjectSource *NewInstance ();
  vtkProgrammableDataObjectSource^ NewInstance();


  // vtkProgrammableDataObjectSource *SafeDownCast (vtkObject* o);
  static vtkProgrammableDataObjectSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  void SetExecuteMethod (void (*func)(void *) , void *arg);


// Did not wrap:  void SetExecuteMethodArgDelete (void (*func)(void *) );


// Did not wrap:  vtkProgrammableDataObjectSource ();


// Did not wrap:  ~vtkProgrammableDataObjectSource ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkProgrammableDataObjectSource (const vtkProgrammableDataObjectSource &);


// Did not wrap:  void vtkProgrammableDataObjectSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProgrammableDataObjectSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProgrammableDataObjectSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProgrammableDataObjectSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProgrammableDataObjectSource();


};

} // end vtkGraphics
