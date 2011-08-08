#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMergeDataObjectFilter : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkMergeDataObjectFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMergeDataObjectFilter *NewInstance ();
  vtkMergeDataObjectFilter^ NewInstance();


  // vtkMergeDataObjectFilter *SafeDownCast (vtkObject* o);
  static vtkMergeDataObjectFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetDataObject (vtkDataObject *object);
/// <summary>
/// <para>Specify the data object to merge with the input dataset.</para>
/// </summary>
  void SetDataObject(vtkDataObject^ object);


  // vtkDataObject *GetDataObject ();
/// <summary>
/// <para>Specify the data object to merge with the input dataset.</para>
/// </summary>
  vtkDataObject^ GetDataObject();


  // void SetOutputField (int );
/// <summary>
/// <para>Specify where to place the field data during the merge process.  There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  void SetOutputField(int arg0);


  // int GetOutputField ();
/// <summary>
/// <para>Specify where to place the field data during the merge process.  There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  int GetOutputField();


  // void SetOutputFieldToDataObjectField ();
/// <summary>
/// <para>Specify where to place the field data during the merge process.  There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  void SetOutputFieldToDataObjectField();


  // void SetOutputFieldToPointDataField ();
/// <summary>
/// <para>Specify where to place the field data during the merge process.  There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  void SetOutputFieldToPointDataField();


  // void SetOutputFieldToCellDataField ();
/// <summary>
/// <para>Specify where to place the field data during the merge process.  There are three choices: the field data associated with the vtkDataObject superclass; the point field attribute data; and the cell field attribute data.</para>
/// </summary>
  void SetOutputFieldToCellDataField();


// Did not wrap:  vtkMergeDataObjectFilter ();


// Did not wrap:  ~vtkMergeDataObjectFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkMergeDataObjectFilter (const vtkMergeDataObjectFilter &);


// Did not wrap:  void vtkMergeDataObjectFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMergeDataObjectFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMergeDataObjectFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMergeDataObjectFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMergeDataObjectFilter();


};

} // end vtkGraphics
