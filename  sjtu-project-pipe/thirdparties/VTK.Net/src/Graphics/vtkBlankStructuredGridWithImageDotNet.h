#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkBlankStructuredGridWithImage : public vtkStructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkBlankStructuredGridWithImage *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkBlankStructuredGridWithImage *NewInstance ();
  vtkBlankStructuredGridWithImage^ NewInstance();


  // vtkBlankStructuredGridWithImage *SafeDownCast (vtkObject* o);
  static vtkBlankStructuredGridWithImage^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetBlankingInput (vtkImageData *input);
/// <summary>
/// <para>Set / get the input image used to perform the blanking.</para>
/// </summary>
  void SetBlankingInput(vtkImageData^ input);


  // vtkImageData *GetBlankingInput ();
/// <summary>
/// <para>Set / get the input image used to perform the blanking.</para>
/// </summary>
  vtkImageData^ GetBlankingInput();


// Did not wrap:  vtkBlankStructuredGridWithImage ();


// Did not wrap:  ~vtkBlankStructuredGridWithImage ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkBlankStructuredGridWithImage (const vtkBlankStructuredGridWithImage &);


// Did not wrap:  void vtkBlankStructuredGridWithImage 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkBlankStructuredGridWithImage(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkBlankStructuredGridWithImage(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkBlankStructuredGridWithImage();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkBlankStructuredGridWithImage();


};

} // end vtkGraphics
