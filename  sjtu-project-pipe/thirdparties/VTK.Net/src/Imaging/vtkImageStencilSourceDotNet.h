#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {

ref class vtkImageStencilData;

public ref class vtkImageStencilSource : public vtkAlgorithm
{

public:
// Did not wrap:  static vtkImageStencilSource *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageStencilSource *NewInstance ();
  vtkImageStencilSource^ NewInstance();


  // vtkImageStencilSource *SafeDownCast (vtkObject* o);
  static vtkImageStencilSource^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetOutput (vtkImageStencilData *output);
/// <summary>
/// <para>Get or set the output for this source.</para>
/// </summary>
  void SetOutput(vtkImageStencilData^ output);


  // vtkImageStencilData *GetOutput ();
/// <summary>
/// <para>Get or set the output for this source.</para>
/// </summary>
  vtkImageStencilData^ GetOutput();


// Did not wrap:  virtual int ProcessRequest (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageStencilSource ();


// Did not wrap:  ~vtkImageStencilSource ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);return 


// Did not wrap:  vtkImageStencilData *AllocateOutputData (vtkDataObject *out, int *updateExt);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImageStencilSource (const vtkImageStencilSource &);


// Did not wrap:  void vtkImageStencilSource 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageStencilSource(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageStencilSource(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageStencilSource();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageStencilSource();


};

} // end vtkImaging
