#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkAlgorithm;

public ref class vtkAlgorithmOutput : public vtkObject
{

public:
// Did not wrap:  static vtkAlgorithmOutput *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAlgorithmOutput *NewInstance ();
  vtkAlgorithmOutput^ NewInstance();


  // vtkAlgorithmOutput *SafeDownCast (vtkObject* o);
  static vtkAlgorithmOutput^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetIndex (int index);
  void SetIndex(int index);


  // int GetIndex ();
  int GetIndex();


  // vtkAlgorithm *GetProducer ();
  vtkAlgorithm^ GetProducer();


  // void SetProducer (vtkAlgorithm *producer);
  void SetProducer(vtkAlgorithm^ producer);


// Did not wrap:  vtkAlgorithmOutput ();


// Did not wrap:  ~vtkAlgorithmOutput ();


// Did not wrap:  vtkAlgorithmOutput (const vtkAlgorithmOutput &);


// Did not wrap:  void vtkAlgorithmOutput 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAlgorithmOutput(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAlgorithmOutput(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAlgorithmOutput();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAlgorithmOutput();


};

} // end vtkFiltering
