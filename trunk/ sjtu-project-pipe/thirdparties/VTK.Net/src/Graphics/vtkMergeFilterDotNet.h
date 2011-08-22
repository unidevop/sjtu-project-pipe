#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkMergeFilter : public vtkDataSetAlgorithm
{

public:
// Did not wrap:  static vtkMergeFilter *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkMergeFilter *NewInstance ();
  vtkMergeFilter^ NewInstance();


  // vtkMergeFilter *SafeDownCast (vtkObject* o);
  static vtkMergeFilter^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetGeometry (vtkDataSet *input);this SetInput input 
/// <summary>
/// <para>Specify object from which to extract geometry information. Old style. Use SetGeometryConnection() instead.</para>
/// </summary>
  void SetGeometry(vtkDataSet^ input);


  // vtkDataSet *GetGeometry ();
/// <summary>
/// <para>Specify object from which to extract geometry information. Old style. Use SetGeometryConnection() instead.</para>
/// </summary>
  vtkDataSet^ GetGeometry();


  // void SetGeometryConnection (vtkAlgorithmOutput *algOutput);this SetInputConnection algOutput 
/// <summary>
/// <para>Specify object from which to extract scalar information. Old style. Use SetScalarsConnection() instead.</para>
/// </summary>
  void SetGeometryConnection(vtkAlgorithmOutput^ algOutput);


  // void SetScalars (vtkDataSet *);
/// <summary>
/// <para>Specify object from which to extract scalar information. Old style. Use SetScalarsConnection() instead.</para>
/// </summary>
  void SetScalars(vtkDataSet^ arg0);


  // vtkDataSet *GetScalars ();
/// <summary>
/// <para>Specify object from which to extract scalar information. Old style. Use SetScalarsConnection() instead.</para>
/// </summary>
  vtkDataSet^ GetScalars();


  // void SetScalarsConnection (vtkAlgorithmOutput *algOutput);this SetInputConnection algOutput 
/// <summary>
/// <para>Set / get the object from which to extract vector information. Old style. Use SetVectorsConnection() instead.</para>
/// </summary>
  void SetScalarsConnection(vtkAlgorithmOutput^ algOutput);


  // void SetVectors (vtkDataSet *);
/// <summary>
/// <para>Set / get the object from which to extract vector information. Old style. Use SetVectorsConnection() instead.</para>
/// </summary>
  void SetVectors(vtkDataSet^ arg0);


  // vtkDataSet *GetVectors ();
/// <summary>
/// <para>Set / get the object from which to extract vector information. Old style. Use SetVectorsConnection() instead.</para>
/// </summary>
  vtkDataSet^ GetVectors();


  // void SetVectorsConnection (vtkAlgorithmOutput *algOutput);this SetInputConnection algOutput 
/// <summary>
/// <para>Set / get the object from which to extract normal information. Old style. Use SetNormalsConnection() instead.</para>
/// </summary>
  void SetVectorsConnection(vtkAlgorithmOutput^ algOutput);


  // void SetNormals (vtkDataSet *);
/// <summary>
/// <para>Set / get the object from which to extract normal information. Old style. Use SetNormalsConnection() instead.</para>
/// </summary>
  void SetNormals(vtkDataSet^ arg0);


  // vtkDataSet *GetNormals ();
/// <summary>
/// <para>Set / get the object from which to extract normal information. Old style. Use SetNormalsConnection() instead.</para>
/// </summary>
  vtkDataSet^ GetNormals();


  // void SetNormalsConnection (vtkAlgorithmOutput *algOutput);this SetInputConnection algOutput 
/// <summary>
/// <para>Set / get the object from which to extract texture coordinates information. Old style. Use SetTCoordsConnection() instead.</para>
/// </summary>
  void SetNormalsConnection(vtkAlgorithmOutput^ algOutput);


  // void SetTCoords (vtkDataSet *);
/// <summary>
/// <para>Set / get the object from which to extract texture coordinates information. Old style. Use SetTCoordsConnection() instead.</para>
/// </summary>
  void SetTCoords(vtkDataSet^ arg0);


  // vtkDataSet *GetTCoords ();
/// <summary>
/// <para>Set / get the object from which to extract texture coordinates information. Old style. Use SetTCoordsConnection() instead.</para>
/// </summary>
  vtkDataSet^ GetTCoords();


  // void SetTCoordsConnection (vtkAlgorithmOutput *algOutput);this SetInputConnection algOutput 
/// <summary>
/// <para>Set / get the object from which to extract tensor data. Old style. Use SetTensorsConnection() instead.</para>
/// </summary>
  void SetTCoordsConnection(vtkAlgorithmOutput^ algOutput);


  // void SetTensors (vtkDataSet *);
/// <summary>
/// <para>Set / get the object from which to extract tensor data. Old style. Use SetTensorsConnection() instead.</para>
/// </summary>
  void SetTensors(vtkDataSet^ arg0);


  // vtkDataSet *GetTensors ();
/// <summary>
/// <para>Set / get the object from which to extract tensor data. Old style. Use SetTensorsConnection() instead.</para>
/// </summary>
  vtkDataSet^ GetTensors();


  // void SetTensorsConnection (vtkAlgorithmOutput *algOutput);this SetInputConnection algOutput 
/// <summary>
/// <para>Set the object from which to extract a field and the name of the field. Note that this does not create pipeline connectivity.</para>
/// </summary>
  void SetTensorsConnection(vtkAlgorithmOutput^ algOutput);


  // void AddField (const char *name, vtkDataSet *input);
/// <summary>
/// <para>Set the object from which to extract a field and the name of the field. Note that this does not create pipeline connectivity.</para>
/// </summary>
  void AddField(System::String^ name, vtkDataSet^ input);


// Did not wrap:  vtkMergeFilter ();


// Did not wrap:  ~vtkMergeFilter ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int RequestUpdateExtent (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  vtkMergeFilter (const vtkMergeFilter &);


// Did not wrap:  void vtkMergeFilter 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkMergeFilter(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkMergeFilter(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkMergeFilter();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkMergeFilter();


};

} // end vtkGraphics
