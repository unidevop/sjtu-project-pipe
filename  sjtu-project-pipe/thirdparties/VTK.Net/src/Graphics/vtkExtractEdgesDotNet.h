#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkExtractEdges : public vtkPolyDataAlgorithm
{

public:
// Did not wrap:  static vtkExtractEdges *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkExtractEdges *NewInstance ();
  vtkExtractEdges^ NewInstance();


  // vtkExtractEdges *SafeDownCast (vtkObject* o);
  static vtkExtractEdges^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Set / get a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified.</para>
/// </summary>
  void CreateDefaultLocator();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Return MTime also considering the locator.</para>
/// </summary>
  unsigned long GetMTime();


// Did not wrap:  vtkExtractEdges ();


// Did not wrap:  ~vtkExtractEdges ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkExtractEdges (const vtkExtractEdges &);


// Did not wrap:  void vtkExtractEdges 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkExtractEdges(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkExtractEdges(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkExtractEdges();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkExtractEdges();


};

} // end vtkGraphics
