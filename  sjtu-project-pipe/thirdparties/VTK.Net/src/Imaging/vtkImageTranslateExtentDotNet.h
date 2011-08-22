#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageTranslateExtent : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageTranslateExtent *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageTranslateExtent *NewInstance ();
  vtkImageTranslateExtent^ NewInstance();


  // vtkImageTranslateExtent *SafeDownCast (vtkObject* o);
  static vtkImageTranslateExtent^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetTranslation (int , int , int );
/// <summary>
/// <para>Delta to change &quot;WholeExtent&quot;. -1 changes 0-&gt;10 to -1-&gt;9.</para>
/// </summary>
  void SetTranslation(int arg0, int arg1, int arg2);


  // void SetTranslation (int  a[3]);
/// <summary>
/// <para>Delta to change &quot;WholeExtent&quot;. -1 changes 0-&gt;10 to -1-&gt;9.</para>
/// </summary>
  void SetTranslation(array<int>^ a);


  // int  *GetTranslation ();
/// <summary>
/// <para>Delta to change &quot;WholeExtent&quot;. -1 changes 0-&gt;10 to -1-&gt;9.</para>
/// </summary>
  array<int>^ GetTranslation();


// Did not wrap:  vtkImageTranslateExtent ();


// Did not wrap:  ~vtkImageTranslateExtent ();


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageTranslateExtent (const vtkImageTranslateExtent &);


// Did not wrap:  void vtkImageTranslateExtent 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageTranslateExtent(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageTranslateExtent(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageTranslateExtent();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageTranslateExtent();


};

} // end vtkImaging
