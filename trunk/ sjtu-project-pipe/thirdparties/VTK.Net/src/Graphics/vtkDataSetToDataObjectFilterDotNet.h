#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkDataSetToDataObjectFilter : public vtkDataObjectAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkDataSetToDataObjectFilter *NewInstance ();
  vtkDataSetToDataObjectFilter^ NewInstance();


  // vtkDataSetToDataObjectFilter *SafeDownCast (vtkObject* o);
  static vtkDataSetToDataObjectFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkDataSetToDataObjectFilter *New ();


  // void SetGeometry (int );
/// <summary>
/// <para>Turn on/off the conversion of dataset geometry to a data object.</para>
/// </summary>
  void SetGeometry(int arg0);


  // int GetGeometry ();
/// <summary>
/// <para>Turn on/off the conversion of dataset geometry to a data object.</para>
/// </summary>
  int GetGeometry();


  // void GeometryOn ();
/// <summary>
/// <para>Turn on/off the conversion of dataset geometry to a data object.</para>
/// </summary>
  void GeometryOn();


  // void GeometryOff ();
/// <summary>
/// <para>Turn on/off the conversion of dataset geometry to a data object.</para>
/// </summary>
  void GeometryOff();


  // void SetTopology (int );
/// <summary>
/// <para>Turn on/off the conversion of dataset topology to a data object.</para>
/// </summary>
  void SetTopology(int arg0);


  // int GetTopology ();
/// <summary>
/// <para>Turn on/off the conversion of dataset topology to a data object.</para>
/// </summary>
  int GetTopology();


  // void TopologyOn ();
/// <summary>
/// <para>Turn on/off the conversion of dataset topology to a data object.</para>
/// </summary>
  void TopologyOn();


  // void TopologyOff ();
/// <summary>
/// <para>Turn on/off the conversion of dataset topology to a data object.</para>
/// </summary>
  void TopologyOff();


  // void SetFieldData (int );
/// <summary>
/// <para>Turn on/off the conversion of dataset field data to a data object.</para>
/// </summary>
  void SetFieldData(int arg0);


  // int GetFieldData ();
/// <summary>
/// <para>Turn on/off the conversion of dataset field data to a data object.</para>
/// </summary>
  int GetFieldData();


  // void FieldDataOn ();
/// <summary>
/// <para>Turn on/off the conversion of dataset field data to a data object.</para>
/// </summary>
  void FieldDataOn();


  // void FieldDataOff ();
/// <summary>
/// <para>Turn on/off the conversion of dataset field data to a data object.</para>
/// </summary>
  void FieldDataOff();


  // void SetPointData (int );
/// <summary>
/// <para>Turn on/off the conversion of dataset point data to a data object.</para>
/// </summary>
  void SetPointData(int arg0);


  // int GetPointData ();
/// <summary>
/// <para>Turn on/off the conversion of dataset point data to a data object.</para>
/// </summary>
  int GetPointData();


  // void PointDataOn ();
/// <summary>
/// <para>Turn on/off the conversion of dataset point data to a data object.</para>
/// </summary>
  void PointDataOn();


  // void PointDataOff ();
/// <summary>
/// <para>Turn on/off the conversion of dataset point data to a data object.</para>
/// </summary>
  void PointDataOff();


  // void SetCellData (int );
/// <summary>
/// <para>Turn on/off the conversion of dataset cell data to a data object.</para>
/// </summary>
  void SetCellData(int arg0);


  // int GetCellData ();
/// <summary>
/// <para>Turn on/off the conversion of dataset cell data to a data object.</para>
/// </summary>
  int GetCellData();


  // void CellDataOn ();
/// <summary>
/// <para>Turn on/off the conversion of dataset cell data to a data object.</para>
/// </summary>
  void CellDataOn();


  // void CellDataOff ();
/// <summary>
/// <para>Turn on/off the conversion of dataset cell data to a data object.</para>
/// </summary>
  void CellDataOff();


// Did not wrap:  vtkDataSetToDataObjectFilter ();


// Did not wrap:  ~vtkDataSetToDataObjectFilter ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int , vtkInformation *);


// Did not wrap:  vtkDataSetToDataObjectFilter (const vtkDataSetToDataObjectFilter &);


// Did not wrap:  void vtkDataSetToDataObjectFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkDataSetToDataObjectFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkDataSetToDataObjectFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkDataSetToDataObjectFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkDataSetToDataObjectFilter();


};

} // end vtkGraphics
