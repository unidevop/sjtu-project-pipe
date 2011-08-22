#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkProgrammableAttributeDataFilter : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkProgrammableAttributeDataFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkProgrammableAttributeDataFilter *NewInstance ();
  vtkProgrammableAttributeDataFilter^ NewInstance();


  // vtkProgrammableAttributeDataFilter *SafeDownCast (vtkObject* o);
  static vtkProgrammableAttributeDataFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void AddInput (vtkDataSet *in);
/// <summary>
/// <para>Add a dataset to the list of data to process.</para>
/// </summary>
  void AddInput(vtkDataSet^ in);


  // void RemoveInput (vtkDataSet *in);
/// <summary>
/// <para>Remove a dataset from the list of data to process.</para>
/// </summary>
  void RemoveInput(vtkDataSet^ in);


  // vtkDataSetCollection *GetInputList ();return this InputList 
/// <summary>
/// <para>Return the list of inputs.</para>
/// </summary>
  vtkDataSetCollection^ GetInputList();


// Did not wrap:  void SetExecuteMethod (void (*func)(void *) , void *arg);


// Did not wrap:  void SetExecuteMethodArgDelete (void (*func)(void *) );


// Did not wrap:  vtkProgrammableAttributeDataFilter ();


// Did not wrap:  ~vtkProgrammableAttributeDataFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual void ReportReferences (vtkGarbageCollector *);


// Did not wrap:  void AddInput (vtkDataObject *);vtkErrorMacro 


// Did not wrap:  vtkProgrammableAttributeDataFilter (const vtkProgrammableAttributeDataFilter &);


// Did not wrap:  void vtkProgrammableAttributeDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkProgrammableAttributeDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkProgrammableAttributeDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkProgrammableAttributeDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkProgrammableAttributeDataFilter();


};

} // end vtkGraphics
