#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkAttributeDataToFieldDataFilter : public vtkDataSetAlgorithm
{

public:
  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkAttributeDataToFieldDataFilter *NewInstance ();
  vtkAttributeDataToFieldDataFilter^ NewInstance();


  // vtkAttributeDataToFieldDataFilter *SafeDownCast (vtkObject* o);
  static vtkAttributeDataToFieldDataFilter^ SafeDownCast(vtkObject^ o);


// Did not wrap:  static vtkAttributeDataToFieldDataFilter *New ();


  // void SetPassAttributeData (int );
/// <summary>
/// <para>Turn on/off the passing of point and cell non-field attribute data to the output of the filter.</para>
/// </summary>
  void SetPassAttributeData(int arg0);


  // int GetPassAttributeData ();
/// <summary>
/// <para>Turn on/off the passing of point and cell non-field attribute data to the output of the filter.</para>
/// </summary>
  int GetPassAttributeData();


  // void PassAttributeDataOn ();
/// <summary>
/// <para>Turn on/off the passing of point and cell non-field attribute data to the output of the filter.</para>
/// </summary>
  void PassAttributeDataOn();


  // void PassAttributeDataOff ();
/// <summary>
/// <para>Turn on/off the passing of point and cell non-field attribute data to the output of the filter.</para>
/// </summary>
  void PassAttributeDataOff();


// Did not wrap:  vtkAttributeDataToFieldDataFilter ();


// Did not wrap:  ~vtkAttributeDataToFieldDataFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkAttributeDataToFieldDataFilter (const vtkAttributeDataToFieldDataFilter &);


// Did not wrap:  void vtkAttributeDataToFieldDataFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkAttributeDataToFieldDataFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkAttributeDataToFieldDataFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkAttributeDataToFieldDataFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkAttributeDataToFieldDataFilter();


};

} // end vtkGraphics
