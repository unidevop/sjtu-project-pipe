#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkAppendFilter : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkAppendFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAppendFilter *NewInstance ();
  vtkAppendFilter^ NewInstance();


  // vtkAppendFilter *SafeDownCast (vtkObject* o);
  static vtkAppendFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void RemoveInput (vtkDataSet *in);
/// <summary>
/// <para>Remove a dataset from the list of data to append.</para>
/// </summary>
  void RemoveInput(vtkDataSet^ in);


  // vtkDataSetCollection *GetInputList ();
/// <summary>
/// <para>Returns a copy of the input array.  Modifications to this list will not be reflected in the actual inputs.</para>
/// </summary>
  vtkDataSetCollection^ GetInputList();


// Did not wrap:  vtkAppendFilter ();


// Did not wrap:  ~vtkAppendFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkAppendFilter (const vtkAppendFilter &);


// Did not wrap:  void vtkAppendFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAppendFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAppendFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAppendFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAppendFilter();


};

} // end vtkGraphics
