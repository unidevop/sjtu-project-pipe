#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkIdFilter : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkIdFilter *NewInstance ();
  vtkIdFilter^ NewInstance();


  // vtkIdFilter *SafeDownCast (vtkObject* o);
  static vtkIdFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkIdFilter *New ();


  // void SetPointIds (int );
/// <summary>
/// <para>Enable/disable the generation of point ids.</para>
/// </summary>
  void SetPointIds(int arg0);


  // int GetPointIds ();
/// <summary>
/// <para>Enable/disable the generation of point ids.</para>
/// </summary>
  int GetPointIds();


  // void PointIdsOn ();
/// <summary>
/// <para>Enable/disable the generation of point ids.</para>
/// </summary>
  void PointIdsOn();


  // void PointIdsOff ();
/// <summary>
/// <para>Enable/disable the generation of point ids.</para>
/// </summary>
  void PointIdsOff();


  // void SetCellIds (int );
/// <summary>
/// <para>Enable/disable the generation of point ids.</para>
/// </summary>
  void SetCellIds(int arg0);


  // int GetCellIds ();
/// <summary>
/// <para>Enable/disable the generation of point ids.</para>
/// </summary>
  int GetCellIds();


  // void CellIdsOn ();
/// <summary>
/// <para>Enable/disable the generation of point ids.</para>
/// </summary>
  void CellIdsOn();


  // void CellIdsOff ();
/// <summary>
/// <para>Enable/disable the generation of point ids.</para>
/// </summary>
  void CellIdsOff();


  // void SetFieldData (int );
/// <summary>
/// <para>Set/Get the flag which controls whether to generate scalar data or field data. If this flag is off, scalar data is generated. Otherwise, field data is generated.</para>
/// </summary>
  void SetFieldData(int arg0);


  // int GetFieldData ();
/// <summary>
/// <para>Set/Get the flag which controls whether to generate scalar data or field data. If this flag is off, scalar data is generated. Otherwise, field data is generated.</para>
/// </summary>
  int GetFieldData();


  // void FieldDataOn ();
/// <summary>
/// <para>Set/Get the flag which controls whether to generate scalar data or field data. If this flag is off, scalar data is generated. Otherwise, field data is generated.</para>
/// </summary>
  void FieldDataOn();


  // void FieldDataOff ();
/// <summary>
/// <para>Set/Get the flag which controls whether to generate scalar data or field data. If this flag is off, scalar data is generated. Otherwise, field data is generated.</para>
/// </summary>
  void FieldDataOff();


  // void SetIdsArrayName (char *);
/// <summary>
/// <para>Set/Get the name of the Ids array if generated. By default the Ids are named &quot;vtkIdFilter_Ids&quot;, but this can be changed with this function.</para>
/// </summary>
  void SetIdsArrayName(System::String^ arg0);


  // char *GetIdsArrayName ();
/// <summary>
/// <para>Set/Get the name of the Ids array if generated. By default the Ids are named &quot;vtkIdFilter_Ids&quot;, but this can be changed with this function.</para>
/// </summary>
  System::String^ GetIdsArrayName();


// Did not wrap:  vtkIdFilter ();


// Did not wrap:  ~vtkIdFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkIdFilter (const vtkIdFilter &);


// Did not wrap:  void vtkIdFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkIdFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkIdFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkIdFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkIdFilter();


};

} // end vtkGraphics
