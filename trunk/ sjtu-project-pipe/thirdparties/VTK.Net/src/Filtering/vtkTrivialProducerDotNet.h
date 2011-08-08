#pragma once

// managed includes
#include "vtkAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkDataObject;

public ref class vtkTrivialProducer : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkTrivialProducer *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkTrivialProducer *NewInstance ();
  vtkTrivialProducer^ NewInstance();


  // vtkTrivialProducer *SafeDownCast (vtkObject* o);
  static vtkTrivialProducer^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


  // virtual void SetOutput (vtkDataObject *output);
/// <summary>
/// <para>Set the data object that is &quot;produced&quot; by this producer.  It is never really modified.</para>
/// </summary>
  void SetOutput(vtkDataObject^ output);


  // virtual unsigned long GetMTime ();
/// <summary>
/// <para>The modified time of this producer is the newer of this object or the assigned output.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkTrivialProducer ();


// Did not wrap:  ~vtkTrivialProducer ();


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  virtual vtkExecutive *CreateDefaultExecutive ();


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  vtkTrivialProducer (const vtkTrivialProducer &);


// Did not wrap:  void vtkTrivialProducer 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkTrivialProducer(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkTrivialProducer(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkTrivialProducer();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkTrivialProducer();


};

} // end vtkFiltering
