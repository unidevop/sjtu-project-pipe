#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageExtractComponents : public vtkThreadedImageAlgorithm
{

public:
// Did not wrap:  static vtkImageExtractComponents *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageExtractComponents *NewInstance ();
  vtkImageExtractComponents^ NewInstance();


  // vtkImageExtractComponents *SafeDownCast (vtkObject* o);
  static vtkImageExtractComponents^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetComponents (int c1);
/// <summary>
/// <para>Set/Get the components to extract.</para>
/// </summary>
  void SetComponents(int c1);


  // void SetComponents (int c1, int c2);
/// <summary>
/// <para>Set/Get the components to extract.</para>
/// </summary>
  void SetComponents(int c1, int c2);


  // void SetComponents (int c1, int c2, int c3);
/// <summary>
/// <para>Set/Get the components to extract.</para>
/// </summary>
  void SetComponents(int c1, int c2, int c3);


  // int  *GetComponents ();
/// <summary>
/// <para>Set/Get the components to extract.</para>
/// </summary>
  array<int>^ GetComponents();


  // int GetNumberOfComponents ();
/// <summary>
/// <para>Get the number of components to extract. This is set implicitly by the  SetComponents() method.</para>
/// </summary>
  int GetNumberOfComponents();


// Did not wrap:  vtkImageExtractComponents ();


// Did not wrap:  ~vtkImageExtractComponents ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  void ThreadedExecute (vtkImageData *inData, vtkImageData *outData, int ext[6], int id);


// Did not wrap:  vtkImageExtractComponents (const vtkImageExtractComponents &);


// Did not wrap:  void vtkImageExtractComponents 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageExtractComponents(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageExtractComponents(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageExtractComponents();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageExtractComponents();


};

} // end vtkImaging
