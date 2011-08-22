#pragma once

// managed includes
#include "vtkImageAlgorithmDotNet.h"

// native includes

using namespace System;

namespace vtk {

ref class vtkImageData;

public ref class vtkImageToStructuredPoints : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageToStructuredPoints *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageToStructuredPoints *NewInstance ();
  vtkImageToStructuredPoints^ NewInstance();


  // vtkImageToStructuredPoints *SafeDownCast (vtkObject* o);
  static vtkImageToStructuredPoints^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetVectorInput (vtkImageData *input);
/// <summary>
/// <para>Set/Get the input object from the image pipeline.</para>
/// </summary>
  void SetVectorInput(vtkImageData^ input);


  // vtkImageData *GetVectorInput ();
/// <summary>
/// <para>Set/Get the input object from the image pipeline.</para>
/// </summary>
  vtkImageData^ GetVectorInput();


// Did not wrap:  vtkImageToStructuredPoints ();


// Did not wrap:  ~vtkImageToStructuredPoints ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillOutputPortInformation (int , vtkInformation *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkImageToStructuredPoints (const vtkImageToStructuredPoints &);


// Did not wrap:  void vtkImageToStructuredPoints 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageToStructuredPoints(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageToStructuredPoints(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageToStructuredPoints();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageToStructuredPoints();


};

} // end vtkFiltering
