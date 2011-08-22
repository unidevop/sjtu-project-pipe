#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVectorText : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkVectorText *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVectorText *NewInstance ();
  vtkVectorText^ NewInstance();


  // vtkVectorText *SafeDownCast (vtkObject* o);
  static vtkVectorText^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetText (char *);
/// <summary>
/// <para>Set/Get the text to be drawn.</para>
/// </summary>
  void SetText(System::String^ arg0);


  // char *GetText ();
/// <summary>
/// <para>Set/Get the text to be drawn.</para>
/// </summary>
  System::String^ GetText();


// Did not wrap:  vtkVectorText ();


// Did not wrap:  ~vtkVectorText ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkVectorText (const vtkVectorText &);


// Did not wrap:  void vtkVectorText 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVectorText(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVectorText(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVectorText();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVectorText();


};

} // end vtkHybrid
