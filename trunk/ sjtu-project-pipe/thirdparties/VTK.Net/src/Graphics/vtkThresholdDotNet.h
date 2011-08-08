#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkThreshold : public vtkUnstructuredGridAlgorithm
{

public:
// Did not wrap:  static vtkThreshold *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkThreshold *NewInstance ();
  vtkThreshold^ NewInstance();


  // vtkThreshold *SafeDownCast (vtkObject* o);
  static vtkThreshold^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void ThresholdByLower (double lower);
/// <summary>
/// <para>Criterion is cells whose scalars are less or equal to lower threshold.</para>
/// </summary>
  void ThresholdByLower(double lower);


  // void ThresholdByUpper (double upper);
/// <summary>
/// <para>Criterion is cells whose scalars are greater or equal to upper threshold.</para>
/// </summary>
  void ThresholdByUpper(double upper);


  // void ThresholdBetween (double lower, double upper);
/// <summary>
/// <para>Criterion is cells whose scalars are between lower and upper thresholds (inclusive of the end values).</para>
/// </summary>
  void ThresholdBetween(double lower, double upper);


  // double GetUpperThreshold ();
/// <summary>
/// <para>Get the Upper and Lower thresholds.</para>
/// </summary>
  double GetUpperThreshold();


  // double GetLowerThreshold ();
/// <summary>
/// <para>Get the Upper and Lower thresholds.</para>
/// </summary>
  double GetLowerThreshold();


  // void SetAttributeMode (int );
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (AttributeModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeMode(int arg0);


  // int GetAttributeMode ();
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (AttributeModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  int GetAttributeMode();


  // void SetAttributeModeToDefault ();this SetAttributeMode VTK_ATTRIBUTE_MODE_DEFAULT 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (AttributeModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToDefault();


  // void SetAttributeModeToUsePointData ();this SetAttributeMode VTK_ATTRIBUTE_MODE_USE_POINT_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (AttributeModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToUsePointData();


  // void SetAttributeModeToUseCellData ();this SetAttributeMode VTK_ATTRIBUTE_MODE_USE_CELL_DATA 
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (AttributeModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToUseCellData();


  // const char *GetAttributeModeAsString ();
/// <summary>
/// <para>Control how the filter works with scalar point data and cell attribute data.  By default (AttributeModeToDefault), the filter will use point data, and if no point data is available, then cell data is used. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  System::String^ GetAttributeModeAsString();


  // void SetComponentMode (int );
/// <summary>
/// <para>Control how the decision of in / out is made with multi-component data. The choices are to use the selected component (specified in the SelectedComponent ivar), or to look at all components. When looking at all components, the evaluation can pass if all the components satisfy the rule (UseAll) or if any satisfy is (UseAny). The default value is UseSelected.</para>
/// </summary>
  void SetComponentMode(int arg0);


  // int GetComponentModeMinValue ();
/// <summary>
/// <para>Control how the decision of in / out is made with multi-component data. The choices are to use the selected component (specified in the SelectedComponent ivar), or to look at all components. When looking at all components, the evaluation can pass if all the components satisfy the rule (UseAll) or if any satisfy is (UseAny). The default value is UseSelected.</para>
/// </summary>
  int GetComponentModeMinValue();


  // int GetComponentModeMaxValue ();
/// <summary>
/// <para>Control how the decision of in / out is made with multi-component data. The choices are to use the selected component (specified in the SelectedComponent ivar), or to look at all components. When looking at all components, the evaluation can pass if all the components satisfy the rule (UseAll) or if any satisfy is (UseAny). The default value is UseSelected.</para>
/// </summary>
  int GetComponentModeMaxValue();


  // int GetComponentMode ();
/// <summary>
/// <para>Control how the decision of in / out is made with multi-component data. The choices are to use the selected component (specified in the SelectedComponent ivar), or to look at all components. When looking at all components, the evaluation can pass if all the components satisfy the rule (UseAll) or if any satisfy is (UseAny). The default value is UseSelected.</para>
/// </summary>
  int GetComponentMode();


  // void SetComponentModeToUseSelected ();this SetComponentMode VTK_COMPONENT_MODE_USE_SELECTED 
/// <summary>
/// <para>Control how the decision of in / out is made with multi-component data. The choices are to use the selected component (specified in the SelectedComponent ivar), or to look at all components. When looking at all components, the evaluation can pass if all the components satisfy the rule (UseAll) or if any satisfy is (UseAny). The default value is UseSelected.</para>
/// </summary>
  void SetComponentModeToUseSelected();


  // void SetComponentModeToUseAll ();this SetComponentMode VTK_COMPONENT_MODE_USE_ALL 
/// <summary>
/// <para>Control how the decision of in / out is made with multi-component data. The choices are to use the selected component (specified in the SelectedComponent ivar), or to look at all components. When looking at all components, the evaluation can pass if all the components satisfy the rule (UseAll) or if any satisfy is (UseAny). The default value is UseSelected.</para>
/// </summary>
  void SetComponentModeToUseAll();


  // void SetComponentModeToUseAny ();this SetComponentMode VTK_COMPONENT_MODE_USE_ANY 
/// <summary>
/// <para>Control how the decision of in / out is made with multi-component data. The choices are to use the selected component (specified in the SelectedComponent ivar), or to look at all components. When looking at all components, the evaluation can pass if all the components satisfy the rule (UseAll) or if any satisfy is (UseAny). The default value is UseSelected.</para>
/// </summary>
  void SetComponentModeToUseAny();


  // const char *GetComponentModeAsString ();
/// <summary>
/// <para>Control how the decision of in / out is made with multi-component data. The choices are to use the selected component (specified in the SelectedComponent ivar), or to look at all components. When looking at all components, the evaluation can pass if all the components satisfy the rule (UseAll) or if any satisfy is (UseAny). The default value is UseSelected.</para>
/// </summary>
  System::String^ GetComponentModeAsString();


  // void SetSelectedComponent (int );
/// <summary>
/// <para>When the component mode is UseSelected, this ivar indicated the selected component. The default value is 0.</para>
/// </summary>
  void SetSelectedComponent(int arg0);


  // int GetSelectedComponentMinValue ();
/// <summary>
/// <para>When the component mode is UseSelected, this ivar indicated the selected component. The default value is 0.</para>
/// </summary>
  int GetSelectedComponentMinValue();


  // int GetSelectedComponentMaxValue ();
/// <summary>
/// <para>When the component mode is UseSelected, this ivar indicated the selected component. The default value is 0.</para>
/// </summary>
  int GetSelectedComponentMaxValue();


  // int GetSelectedComponent ();
/// <summary>
/// <para>When the component mode is UseSelected, this ivar indicated the selected component. The default value is 0.</para>
/// </summary>
  int GetSelectedComponent();


  // void SetAllScalars (int );
/// <summary>
/// <para>If using scalars from point data, all scalars for all points in a cell  must satisfy the threshold criterion if AllScalars is set. Otherwise,  just a single scalar value satisfying the threshold criterion enables will extract the cell.</para>
/// </summary>
  void SetAllScalars(int arg0);


  // int GetAllScalars ();
/// <summary>
/// <para>If using scalars from point data, all scalars for all points in a cell  must satisfy the threshold criterion if AllScalars is set. Otherwise,  just a single scalar value satisfying the threshold criterion enables will extract the cell.</para>
/// </summary>
  int GetAllScalars();


  // void AllScalarsOn ();
/// <summary>
/// <para>If using scalars from point data, all scalars for all points in a cell  must satisfy the threshold criterion if AllScalars is set. Otherwise,  just a single scalar value satisfying the threshold criterion enables will extract the cell.</para>
/// </summary>
  void AllScalarsOn();


  // void AllScalarsOff ();
/// <summary>
/// <para>If using scalars from point data, all scalars for all points in a cell  must satisfy the threshold criterion if AllScalars is set. Otherwise,  just a single scalar value satisfying the threshold criterion enables will extract the cell.</para>
/// </summary>
  void AllScalarsOff();


// Did not wrap:  vtkThreshold ();


// Did not wrap:  ~vtkThreshold ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  virtual int FillInputPortInformation (int port, vtkInformation *info);


// Did not wrap:  int Lower (double s);return s this LowerThreshold 


// Did not wrap:  int Upper (double s);return s this UpperThreshold 


// Did not wrap:  int Between (double s);return s this LowerThreshold s this UpperThreshold 


// Did not wrap:  int EvaluateComponents (vtkDataArray *scalars, vtkIdType id);


// Did not wrap:  vtkThreshold (const vtkThreshold &);


// Did not wrap:  void vtkThreshold 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkThreshold(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkThreshold(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkThreshold();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkThreshold();


};

} // end vtkGraphics
