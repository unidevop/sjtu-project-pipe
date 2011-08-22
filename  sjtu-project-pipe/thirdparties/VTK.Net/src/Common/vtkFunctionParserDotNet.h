#pragma once

// managed includes
#include "vtkObjectDotNet.h"
#include "vtkObjectDotNet.h"

// native includes

using namespace System;

namespace vtk {


public ref class vtkFunctionParser : public vtkObject
{

public:
// Did not wrap:  static vtkFunctionParser *New ();


  // const char *GetClassName ();
  System::String^ GetClassName();


  // int IsA (const char *name);
  int IsA(System::String^ name);


  // vtkFunctionParser *NewInstance ();
  vtkFunctionParser^ NewInstance();


  // vtkFunctionParser *SafeDownCast (vtkObject* o);
  static vtkFunctionParser^ SafeDownCast(vtkObject^ o);


  void PrintSelf(System::IO::TextWriter^ writer, int indentLevel);

  virtual System::String^ ToString() override;


  // void SetFunction (const char *function);
  void SetFunction(System::String^ function);


  // char *GetFunction ();
  System::String^ GetFunction();


  // int IsScalarResult ();
/// <summary>
/// <para>Check whether the result is a scalar result.  If it isn't, then either the result is a vector or an error has occurred.</para>
/// </summary>
  int IsScalarResult();


  // int IsVectorResult ();
/// <summary>
/// <para>Check whether the result is a vector result.  If it isn't, then either the result is scalar or an error has occurred.</para>
/// </summary>
  int IsVectorResult();


  // double GetScalarResult ();
/// <summary>
/// <para>Get a scalar result from evaluating the input function.</para>
/// </summary>
  double GetScalarResult();


  // double *GetVectorResult ();
/// <summary>
/// <para>Get a vector result from evaluating the input function.</para>
/// </summary>
  array<double>^ GetVectorResult();


  // void GetVectorResult (double result[3]);double r this GetVectorResult result r result r result r 
/// <summary>
/// <para>Get a vector result from evaluating the input function.</para>
/// </summary>
  void GetVectorResult(array<double>^ result);


  // void SetScalarVariableValue (const char *variableName, double value);
/// <summary>
/// <para>Set the value of a scalar variable.  If a variable with this name exists, then its value will be set to the new value.  If there is not already a variable with this name, variableName will be added to the list of variables, and its value will be set to the new value.</para>
/// </summary>
  void SetScalarVariableValue(System::String^ variableName, double value);


  // void SetScalarVariableValue (int i, double value);
/// <summary>
/// <para>Set the value of a scalar variable.  If a variable with this name exists, then its value will be set to the new value.  If there is not already a variable with this name, variableName will be added to the list of variables, and its value will be set to the new value.</para>
/// </summary>
  void SetScalarVariableValue(int i, double value);


  // double GetScalarVariableValue (const char *variableName);
/// <summary>
/// <para>Get the value of a scalar variable.</para>
/// </summary>
  double GetScalarVariableValue(System::String^ variableName);


  // double GetScalarVariableValue (int i);
/// <summary>
/// <para>Get the value of a scalar variable.</para>
/// </summary>
  double GetScalarVariableValue(int i);


  // void SetVectorVariableValue (const char *variableName, double xValue, double yValue, double zValue);
/// <summary>
/// <para>Set the value of a vector variable.  If a variable with this name exists, then its value will be set to the new value.  If there is not already a variable with this name, variableName will be added to the list of variables, and its value will be set to the new value.</para>
/// </summary>
  void SetVectorVariableValue(System::String^ variableName, double xValue, double yValue, double zValue);


  // void SetVectorVariableValue (const char *variableName, const double values[3]);this SetVectorVariableValue variableName values values values 
/// <summary>
/// <para>Set the value of a vector variable.  If a variable with this name exists, then its value will be set to the new value.  If there is not already a variable with this name, variableName will be added to the list of variables, and its value will be set to the new value.</para>
/// </summary>
  void SetVectorVariableValue(System::String^ variableName, array<double>^ values);


  // void SetVectorVariableValue (int i, double xValue, double yValue, double zValue);
/// <summary>
/// <para>Set the value of a vector variable.  If a variable with this name exists, then its value will be set to the new value.  If there is not already a variable with this name, variableName will be added to the list of variables, and its value will be set to the new value.</para>
/// </summary>
  void SetVectorVariableValue(int i, double xValue, double yValue, double zValue);


  // void SetVectorVariableValue (int i, const double values[3]);this SetVectorVariableValue i values values values 
/// <summary>
/// <para>Set the value of a vector variable.  If a variable with this name exists, then its value will be set to the new value.  If there is not already a variable with this name, variableName will be added to the list of variables, and its value will be set to the new value.</para>
/// </summary>
  void SetVectorVariableValue(int i, array<double>^ values);


  // double *GetVectorVariableValue (const char *variableName);
/// <summary>
/// <para>Get the value of a vector variable.</para>
/// </summary>
  array<double>^ GetVectorVariableValue(System::String^ variableName);


  // void GetVectorVariableValue (const char *variableName, double value[3]);double r this GetVectorVariableValue variableName value r value r value r 
/// <summary>
/// <para>Get the value of a vector variable.</para>
/// </summary>
  void GetVectorVariableValue(System::String^ variableName, array<double>^ value);


  // double *GetVectorVariableValue (int i);
/// <summary>
/// <para>Get the value of a vector variable.</para>
/// </summary>
  array<double>^ GetVectorVariableValue(int i);


  // void GetVectorVariableValue (int i, double value[3]);double r this GetVectorVariableValue i value r value r value r 
/// <summary>
/// <para>Get the value of a vector variable.</para>
/// </summary>
  void GetVectorVariableValue(int i, array<double>^ value);


  // int GetNumberOfScalarVariables ();
/// <summary>
/// <para>Get the number of scalar variables.</para>
/// </summary>
  int GetNumberOfScalarVariables();


  // int GetNumberOfVectorVariables ();
/// <summary>
/// <para>Get the number of vector variables.</para>
/// </summary>
  int GetNumberOfVectorVariables();


  // char *GetScalarVariableName (int i);
/// <summary>
/// <para>Get the ith scalar variable name.</para>
/// </summary>
  System::String^ GetScalarVariableName(int i);


  // char *GetVectorVariableName (int i);
/// <summary>
/// <para>Get the ith vector variable name.</para>
/// </summary>
  System::String^ GetVectorVariableName(int i);


  // void RemoveAllVariables ();
/// <summary>
/// <para>Remove all the current variables.</para>
/// </summary>
  void RemoveAllVariables();


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


// Did not wrap:  vtkFunctionParser ();


// Did not wrap:  ~vtkFunctionParser ();


// Did not wrap:  int Parse ();


// Did not wrap:  void Evaluate ();


// Did not wrap:  int CheckSyntax ();


// Did not wrap:  void RemoveSpaces ();


// Did not wrap:  char *RemoveSpacesFrom (const char *variableName);


// Did not wrap:  int OperatorWithinVariable (int idx);


// Did not wrap:  int BuildInternalFunctionStructure ();


// Did not wrap:  void BuildInternalSubstringStructure (int beginIndex, int endIndex);


// Did not wrap:  void AddInternalByte (unsigned char newByte);


// Did not wrap:  int IsSubstringCompletelyEnclosed (int beginIndex, int endIndex);


// Did not wrap:  int FindEndOfMathFunction (int beginIndex);


// Did not wrap:  int FindEndOfMathConstant (int beginIndex);


// Did not wrap:  int IsVariableName (int currentIndex);


// Did not wrap:  int IsElementaryOperator (int op);


// Did not wrap:  int GetMathFunctionNumber (int currentIndex);


// Did not wrap:  int GetMathFunctionStringLength (int mathFunctionNumber);


// Did not wrap:  int GetMathConstantNumber (int currentIndex);


// Did not wrap:  int GetMathConstantStringLength (int mathConstantNumber);


// Did not wrap:  int GetElementaryOperatorNumber (char op);


// Did not wrap:  int GetOperandNumber (int currentIndex);


// Did not wrap:  int GetVariableNameLength (int variableNumber);


// Did not wrap:  int DisambiguateOperators ();


// Did not wrap:  vtkFunctionParser (const vtkFunctionParser &);


// Did not wrap:  void vtkFunctionParser 


  /// <summary>
  /// This constructor is used to convert native pointers into managed wrapper classes.
  /// </summary>
  vtkFunctionParser(System::IntPtr native, bool bConst);

  /// <summary>
  /// This constructor is called only by derived classes. It asks base classes not allocate a native instance.
  /// </summary>
  vtkFunctionParser(bool donothing);

  /// <summary>
  /// This constructor creates a wrapper class. It is the one to call.  /// </summary>
  vtkFunctionParser();

  /// <summary>
  /// This method calls Delete() on the native instance.
  /// Use it to release resources in a timely fashion.
  /// </summary>
  /// <remarks>
  /// If this method is not called, then the finalizer will 
  /// call Delete on this instance.
  /// </remarks>
  virtual ~vtkFunctionParser();


};

} // end vtkCommon
