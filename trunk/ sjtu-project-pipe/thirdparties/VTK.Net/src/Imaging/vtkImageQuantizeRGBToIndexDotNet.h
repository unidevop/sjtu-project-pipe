#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkImageQuantizeRGBToIndex : public vtkImageAlgorithm
{

public:
// Did not wrap:  static vtkImageQuantizeRGBToIndex *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkImageQuantizeRGBToIndex *NewInstance ();
  vtkImageQuantizeRGBToIndex^ NewInstance();


  // vtkImageQuantizeRGBToIndex *SafeDownCast (vtkObject* o);
  static vtkImageQuantizeRGBToIndex^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetNumberOfColors (int );
/// <summary>
/// <para>Set / Get the number of color index values to produce - must be  a number between 2 and 65536.</para>
/// </summary>
  void SetNumberOfColors(int arg0);


  // int GetNumberOfColorsMinValue ();
/// <summary>
/// <para>Set / Get the number of color index values to produce - must be  a number between 2 and 65536.</para>
/// </summary>
  int GetNumberOfColorsMinValue();


  // int GetNumberOfColorsMaxValue ();
/// <summary>
/// <para>Set / Get the number of color index values to produce - must be  a number between 2 and 65536.</para>
/// </summary>
  int GetNumberOfColorsMaxValue();


  // int GetNumberOfColors ();
/// <summary>
/// <para>Set / Get the number of color index values to produce - must be  a number between 2 and 65536.</para>
/// </summary>
  int GetNumberOfColors();


  // vtkLookupTable *GetLookupTable ();
/// <summary>
/// <para>Get the resulting lookup table that contains the color definitions corresponding to the index values in the output image.</para>
/// </summary>
  vtkLookupTable^ GetLookupTable();


  // double GetInitializeExecuteTime ();
  double GetInitializeExecuteTime();


  // double GetBuildTreeExecuteTime ();
  double GetBuildTreeExecuteTime();


  // double GetLookupIndexExecuteTime ();
  double GetLookupIndexExecuteTime();


// Did not wrap:  vtkImageQuantizeRGBToIndex ();


// Did not wrap:  ~vtkImageQuantizeRGBToIndex ();


// Did not wrap:  virtual int RequestInformation (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkImageQuantizeRGBToIndex (const vtkImageQuantizeRGBToIndex &);


// Did not wrap:  void vtkImageQuantizeRGBToIndex 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkImageQuantizeRGBToIndex(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkImageQuantizeRGBToIndex(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkImageQuantizeRGBToIndex();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkImageQuantizeRGBToIndex();


};

} // end vtkImaging
