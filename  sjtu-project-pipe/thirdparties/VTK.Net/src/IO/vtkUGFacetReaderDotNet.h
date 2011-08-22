#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkUGFacetReader : public vtkPolyDataAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkUGFacetReader *NewInstance ();
  vtkUGFacetReader^ NewInstance();


  // vtkUGFacetReader *SafeDownCast (vtkObject* o);
  static vtkUGFacetReader^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkUGFacetReader *New ();


  // unsigned long GetMTime ();
/// <summary>
/// <para>Overload standard modified time function. If locator is modified, then this object is modified as well.</para>
/// </summary>
  unsigned long GetMTime();


  // void SetFileName (char *);
/// <summary>
/// <para>Specify Unigraphics file name.</para>
/// </summary>
  void SetFileName(System::String^ arg0);


  // char *GetFileName ();
/// <summary>
/// <para>Specify Unigraphics file name.</para>
/// </summary>
  System::String^ GetFileName();


  // int GetNumberOfParts ();
/// <summary>
/// <para>Special methods for interrogating the data file.</para>
/// </summary>
  int GetNumberOfParts();


  // short GetPartColorIndex (int partId);
/// <summary>
/// <para>Retrieve color index for the parts in the file.</para>
/// </summary>
  short GetPartColorIndex(int partId);


  // void SetPartNumber (int );
/// <summary>
/// <para>Specify the desired part to extract. The part number must range between [0,NumberOfParts-1]. If the value is =(-1), then all parts will be  extracted. If the value is &lt;(-1), then no parts will be  extracted but  the part colors will be updated.</para>
/// </summary>
  void SetPartNumber(int arg0);


  // int GetPartNumber ();
/// <summary>
/// <para>Specify the desired part to extract. The part number must range between [0,NumberOfParts-1]. If the value is =(-1), then all parts will be  extracted. If the value is &lt;(-1), then no parts will be  extracted but  the part colors will be updated.</para>
/// </summary>
  int GetPartNumber();


  // void SetMerging (int );
/// <summary>
/// <para>Turn on/off merging of points/triangles.</para>
/// </summary>
  void SetMerging(int arg0);


  // int GetMerging ();
/// <summary>
/// <para>Turn on/off merging of points/triangles.</para>
/// </summary>
  int GetMerging();


  // void MergingOn ();
/// <summary>
/// <para>Turn on/off merging of points/triangles.</para>
/// </summary>
  void MergingOn();


  // void MergingOff ();
/// <summary>
/// <para>Turn on/off merging of points/triangles.</para>
/// </summary>
  void MergingOff();


  // void SetLocator (vtkPointLocator *locator);
/// <summary>
/// <para>Specify a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  void SetLocator(vtkPointLocator^ locator);


  // vtkPointLocator *GetLocator ();
/// <summary>
/// <para>Specify a spatial locator for merging points. By default an instance of vtkMergePoints is used.</para>
/// </summary>
  vtkPointLocator^ GetLocator();


  // void CreateDefaultLocator ();
/// <summary>
/// <para>Create default locator. Used to create one when none is specified.</para>
/// </summary>
  void CreateDefaultLocator();


// Did not wrap:  vtkUGFacetReader ();


// Did not wrap:  ~vtkUGFacetReader ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkUGFacetReader (const vtkUGFacetReader &);


// Did not wrap:  void vtkUGFacetReader 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkUGFacetReader(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkUGFacetReader(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkUGFacetReader();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkUGFacetReader();


};

} // end vtkIO
