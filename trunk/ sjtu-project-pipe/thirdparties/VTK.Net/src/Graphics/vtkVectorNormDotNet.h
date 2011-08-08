#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkVectorNorm : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkVectorNorm *NewInstance ();
  vtkVectorNorm^ NewInstance();


  // vtkVectorNorm *SafeDownCast (vtkObject* o);
  static vtkVectorNorm^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkVectorNorm *New ();


  // void SetNormalize (int );
/// <summary>
/// <para>Specify whether to normalize scalar values.</para>
/// </summary>
  void SetNormalize(int arg0);


  // int GetNormalize ();
/// <summary>
/// <para>Specify whether to normalize scalar values.</para>
/// </summary>
  int GetNormalize();


  // void NormalizeOn ();
/// <summary>
/// <para>Specify whether to normalize scalar values.</para>
/// </summary>
  void NormalizeOn();


  // void NormalizeOff ();
/// <summary>
/// <para>Specify whether to normalize scalar values.</para>
/// </summary>
  void NormalizeOff();


  // void SetAttributeMode (int );
/// <summary>
/// <para>Control how the filter works to generate scalar data from the input vector data. By default, (AttributeModeToDefault) the filter will generate the scalar norm for point and cell data (if vector data present in the input). Alternatively, you can explicitly set the filter to generate point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeMode(int arg0);


  // int GetAttributeMode ();
/// <summary>
/// <para>Control how the filter works to generate scalar data from the input vector data. By default, (AttributeModeToDefault) the filter will generate the scalar norm for point and cell data (if vector data present in the input). Alternatively, you can explicitly set the filter to generate point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  int GetAttributeMode();


  // void SetAttributeModeToDefault ();this SetAttributeMode VTK_ATTRIBUTE_MODE_DEFAULT 
/// <summary>
/// <para>Control how the filter works to generate scalar data from the input vector data. By default, (AttributeModeToDefault) the filter will generate the scalar norm for point and cell data (if vector data present in the input). Alternatively, you can explicitly set the filter to generate point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToDefault();


  // void SetAttributeModeToUsePointData ();this SetAttributeMode VTK_ATTRIBUTE_MODE_USE_POINT_DATA 
/// <summary>
/// <para>Control how the filter works to generate scalar data from the input vector data. By default, (AttributeModeToDefault) the filter will generate the scalar norm for point and cell data (if vector data present in the input). Alternatively, you can explicitly set the filter to generate point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToUsePointData();


  // void SetAttributeModeToUseCellData ();this SetAttributeMode VTK_ATTRIBUTE_MODE_USE_CELL_DATA 
/// <summary>
/// <para>Control how the filter works to generate scalar data from the input vector data. By default, (AttributeModeToDefault) the filter will generate the scalar norm for point and cell data (if vector data present in the input). Alternatively, you can explicitly set the filter to generate point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToUseCellData();


  // const char *GetAttributeModeAsString ();
/// <summary>
/// <para>Control how the filter works to generate scalar data from the input vector data. By default, (AttributeModeToDefault) the filter will generate the scalar norm for point and cell data (if vector data present in the input). Alternatively, you can explicitly set the filter to generate point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  System::String^ GetAttributeModeAsString();


// Did not wrap:  vtkVectorNorm ();


// Did not wrap:  ~vtkVectorNorm ();


// Did not wrap:  int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkVectorNorm (const vtkVectorNorm &);


// Did not wrap:  void vtkVectorNorm 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkVectorNorm(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkVectorNorm(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkVectorNorm();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkVectorNorm();


};

} // end vtkGraphics
