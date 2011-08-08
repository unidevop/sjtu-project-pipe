#pragma once

// managed includes

// native includes

using namespace System;

namespace vtk {


public ref class vtkArrayCalculator : public vtkDataSetAlgorithm
{

public:
  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkArrayCalculator *NewInstance ();
  vtkArrayCalculator^ NewInstance();


  // vtkArrayCalculator *SafeDownCast (vtkObject* o);
  static vtkArrayCalculator^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


// Did not wrap:  static vtkArrayCalculator *New ();


  // void SetFunction (const char *function);
/// <summary>
/// <para>Set/Get the function to be evaluated.</para>
/// </summary>
  void SetFunction(System::String^ function);


  // char *GetFunction ();
/// <summary>
/// <para>Set/Get the function to be evaluated.</para>
/// </summary>
  System::String^ GetFunction();


  // void AddScalarArrayName (const char *arrayName, int component);
/// <summary>
/// <para>Add an array name to the list of arrays used in the function and specify which components of the array to use in evaluating the function.  The array name must match the name in the function.  Use AddScalarVariable or AddVectorVariable to use a variable name different from the array name.</para>
/// </summary>
  void AddScalarArrayName(System::String^ arrayName, int component);


  // void AddVectorArrayName (const char *arrayName, int component0, int component1, int component2);
/// <summary>
/// <para>Add an array name to the list of arrays used in the function and specify which components of the array to use in evaluating the function.  The array name must match the name in the function.  Use AddScalarVariable or AddVectorVariable to use a variable name different from the array name.</para>
/// </summary>
  void AddVectorArrayName(System::String^ arrayName, int component0, int component1, int component2);


  // void AddScalarVariable (const char *variableName, const char *arrayName, int component);
/// <summary>
/// <para>Add a variable name, a corresponding array name, and which components of the array to use.</para>
/// </summary>
  void AddScalarVariable(System::String^ variableName, System::String^ arrayName, int component);


  // void AddVectorVariable (const char *variableName, const char *arrayName, int component0, int component1, int component2);
/// <summary>
/// <para>Add a variable name, a corresponding array name, and which components of the array to use.</para>
/// </summary>
  void AddVectorVariable(System::String^ variableName, System::String^ arrayName, int component0, int component1, int component2);


  // void SetResultArrayName (const char *name);
/// <summary>
/// <para>Set the name of the array in which to store the result of evaluating this function.  If this is the name of an existing array, that array will be overwritten.  Otherwise a new array will be created with the specified name.</para>
/// </summary>
  void SetResultArrayName(System::String^ name);


  // char *GetResultArrayName ();
/// <summary>
/// <para>Set the name of the array in which to store the result of evaluating this function.  If this is the name of an existing array, that array will be overwritten.  Otherwise a new array will be created with the specified name.</para>
/// </summary>
  System::String^ GetResultArrayName();


  // void SetAttributeMode (int );
/// <summary>
/// <para>Control whether the filter operates on point data or cell data. By default (AttributeModeToDefault), the filter uses point data. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeMode(int arg0);


  // int GetAttributeMode ();
/// <summary>
/// <para>Control whether the filter operates on point data or cell data. By default (AttributeModeToDefault), the filter uses point data. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  int GetAttributeMode();


  // void SetAttributeModeToDefault ();this SetAttributeMode VTK_ATTRIBUTE_MODE_DEFAULT 
/// <summary>
/// <para>Control whether the filter operates on point data or cell data. By default (AttributeModeToDefault), the filter uses point data. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToDefault();


  // void SetAttributeModeToUsePointData ();this SetAttributeMode VTK_ATTRIBUTE_MODE_USE_POINT_DATA 
/// <summary>
/// <para>Control whether the filter operates on point data or cell data. By default (AttributeModeToDefault), the filter uses point data. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToUsePointData();


  // void SetAttributeModeToUseCellData ();this SetAttributeMode VTK_ATTRIBUTE_MODE_USE_CELL_DATA 
/// <summary>
/// <para>Control whether the filter operates on point data or cell data. By default (AttributeModeToDefault), the filter uses point data. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  void SetAttributeModeToUseCellData();


  // const char *GetAttributeModeAsString ();
/// <summary>
/// <para>Control whether the filter operates on point data or cell data. By default (AttributeModeToDefault), the filter uses point data. Alternatively you can explicitly set the filter to use point data (AttributeModeToUsePointData) or cell data (AttributeModeToUseCellData).</para>
/// </summary>
  System::String^ GetAttributeModeAsString();


  // void RemoveAllVariables ();
/// <summary>
/// <para>Remove all the variable names and their associated array names.</para>
/// </summary>
  void RemoveAllVariables();


// Did not wrap:  char *GetScalarArrayNames ();return this ScalarArrayNames 


  // char *GetScalarArrayName (int i);
/// <summary>
/// <para>Methods to get information about the current variables.</para>
/// </summary>
  System::String^ GetScalarArrayName(int i);


// Did not wrap:  char *GetVectorArrayNames ();return this VectorArrayNames 


  // char *GetVectorArrayName (int i);
/// <summary>
/// <para>Methods to get information about the current variables.</para>
/// </summary>
  System::String^ GetVectorArrayName(int i);


// Did not wrap:  char *GetScalarVariableNames ();return this ScalarVariableNames 


  // char *GetScalarVariableName (int i);
/// <summary>
/// <para>Methods to get information about the current variables.</para>
/// </summary>
  System::String^ GetScalarVariableName(int i);


// Did not wrap:  char *GetVectorVariableNames ();return this VectorVariableNames 


  // char *GetVectorVariableName (int i);
/// <summary>
/// <para>Methods to get information about the current variables.</para>
/// </summary>
  System::String^ GetVectorVariableName(int i);


// Did not wrap:  int *GetSelectedScalarComponents ();return this SelectedScalarComponents 


  // int GetSelectedScalarComponent (int i);
/// <summary>
/// <para>Methods to get information about the current variables.</para>
/// </summary>
  int GetSelectedScalarComponent(int i);


// Did not wrap:  int *GetSelectedVectorComponents ();return this SelectedVectorComponents 


// Did not wrap:  int *GetSelectedVectorComponents (int i);


  // int GetNumberOfScalarArrays ();
/// <summary>
/// <para>Methods to get information about the current variables.</para>
/// </summary>
  int GetNumberOfScalarArrays();


  // int GetNumberOfVectorArrays ();
/// <summary>
/// <para>Methods to get information about the current variables.</para>
/// </summary>
  int GetNumberOfVectorArrays();


  // void SetReplaceInvalidValues (int );
/// <summary>
/// <para>When ReplaceInvalidValues is on, all invalid values (such as sqrt(-2), note that function parser does not handle complex numbers) will be replaced by ReplacementValue. Otherwise an error will be reported</para>
/// </summary>
  void SetReplaceInvalidValues(int arg0);


  // int GetReplaceInvalidValues ();
/// <summary>
/// <para>When ReplaceInvalidValues is on, all invalid values (such as sqrt(-2), note that function parser does not handle complex numbers) will be replaced by ReplacementValue. Otherwise an error will be reported</para>
/// </summary>
  int GetReplaceInvalidValues();


  // void ReplaceInvalidValuesOn ();
/// <summary>
/// <para>When ReplaceInvalidValues is on, all invalid values (such as sqrt(-2), note that function parser does not handle complex numbers) will be replaced by ReplacementValue. Otherwise an error will be reported</para>
/// </summary>
  void ReplaceInvalidValuesOn();


  // void ReplaceInvalidValuesOff ();
/// <summary>
/// <para>When ReplaceInvalidValues is on, all invalid values (such as sqrt(-2), note that function parser does not handle complex numbers) will be replaced by ReplacementValue. Otherwise an error will be reported</para>
/// </summary>
  void ReplaceInvalidValuesOff();


  // void SetReplacementValue (double );
/// <summary>
/// <para>When ReplaceInvalidValues is on, all invalid values (such as sqrt(-2), note that function parser does not handle complex numbers) will be replaced by ReplacementValue. Otherwise an error will be reported</para>
/// </summary>
  void SetReplacementValue(double arg0);


  // double GetReplacementValue ();
/// <summary>
/// <para>When ReplaceInvalidValues is on, all invalid values (such as sqrt(-2), note that function parser does not handle complex numbers) will be replaced by ReplacementValue. Otherwise an error will be reported</para>
/// </summary>
  double GetReplacementValue();


// Did not wrap:  vtkArrayCalculator ();


// Did not wrap:  ~vtkArrayCalculator ();


// Did not wrap:  virtual int RequestData (vtkInformation *, vtkInformationVector *, vtkInformationVector *);


// Did not wrap:  vtkArrayCalculator (const vtkArrayCalculator &);


// Did not wrap:  void vtkArrayCalculator 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkArrayCalculator(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkArrayCalculator(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkArrayCalculator();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkArrayCalculator();


};

} // end vtkGraphics
