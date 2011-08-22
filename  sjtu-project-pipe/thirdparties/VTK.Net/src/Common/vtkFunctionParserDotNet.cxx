

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFunctionParserDotNet.h"

// native includes
#include "strstream"
#include "vtkFunctionParser.h"

using namespace System;

namespace vtk {

System::String^ vtkFunctionParser::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFunctionParser::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFunctionParser^ vtkFunctionParser::NewInstance()
{
  ::vtkFunctionParser* retVal = static_cast<::vtkFunctionParser*>(vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->NewInstance());
  return gcnew vtkFunctionParser(IntPtr(retVal), false);
}



vtkFunctionParser^ vtkFunctionParser::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFunctionParser* retVal = static_cast<::vtkFunctionParser*>(::vtkFunctionParser::SafeDownCast(oWrap));
  return gcnew vtkFunctionParser(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFunctionParser::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFunctionParser::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFunctionParser::SetFunction(System::String^ function)
{
  char* functionWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(function).ToPointer());
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetFunction(functionWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(functionWrap));
}



System::String^ vtkFunctionParser::GetFunction()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetFunction();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFunctionParser::IsScalarResult()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->IsScalarResult();
  return retVal;
}



int vtkFunctionParser::IsVectorResult()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->IsVectorResult();
  return retVal;
}



double vtkFunctionParser::GetScalarResult()
{
  double retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetScalarResult();
  return retVal;
}



array<double>^ vtkFunctionParser::GetVectorResult()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetVectorResult();
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFunctionParser::GetVectorResult(array<double>^ result)
{
  pin_ptr<double> resultPin = &result[0];
  double* nativeresultPin = resultPin;
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetVectorResult(nativeresultPin);
}



void vtkFunctionParser::SetScalarVariableValue(System::String^ variableName, double value)
{
  char* variableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variableName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetScalarVariableValue(variableNameWrap, value);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableNameWrap));
}



void vtkFunctionParser::SetScalarVariableValue(int i, double value)
{
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetScalarVariableValue(i, value);
}



double vtkFunctionParser::GetScalarVariableValue(System::String^ variableName)
{
  char* variableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variableName).ToPointer());
  double retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetScalarVariableValue(variableNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableNameWrap));
  return retVal;
}



double vtkFunctionParser::GetScalarVariableValue(int i)
{
  double retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetScalarVariableValue(i);
  return retVal;
}



void vtkFunctionParser::SetVectorVariableValue(System::String^ variableName, double xValue, double yValue, double zValue)
{
  char* variableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variableName).ToPointer());
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetVectorVariableValue(variableNameWrap, xValue, yValue, zValue);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableNameWrap));
}



void vtkFunctionParser::SetVectorVariableValue(System::String^ variableName, array<double>^ values)
{
  char* variableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variableName).ToPointer());
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetVectorVariableValue(variableNameWrap, nativevaluesPin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableNameWrap));
}



void vtkFunctionParser::SetVectorVariableValue(int i, double xValue, double yValue, double zValue)
{
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetVectorVariableValue(i, xValue, yValue, zValue);
}



void vtkFunctionParser::SetVectorVariableValue(int i, array<double>^ values)
{
  pin_ptr<double> valuesPin = &values[0];
  double* nativevaluesPin = valuesPin;
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetVectorVariableValue(i, nativevaluesPin);
}



array<double>^ vtkFunctionParser::GetVectorVariableValue(System::String^ variableName)
{
  char* variableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variableName).ToPointer());
  const double* retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetVectorVariableValue(variableNameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableNameWrap));
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFunctionParser::GetVectorVariableValue(System::String^ variableName, array<double>^ value)
{
  char* variableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variableName).ToPointer());
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetVectorVariableValue(variableNameWrap, nativevaluePin);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableNameWrap));
}



array<double>^ vtkFunctionParser::GetVectorVariableValue(int i)
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetVectorVariableValue(i);
  array<double>^ mRetVal = gcnew array<double>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkFunctionParser::GetVectorVariableValue(int i, array<double>^ value)
{
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetVectorVariableValue(i, nativevaluePin);
}



int vtkFunctionParser::GetNumberOfScalarVariables()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetNumberOfScalarVariables();
  return retVal;
}



int vtkFunctionParser::GetNumberOfVectorVariables()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetNumberOfVectorVariables();
  return retVal;
}



System::String^ vtkFunctionParser::GetScalarVariableName(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetScalarVariableName(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkFunctionParser::GetVectorVariableName(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetVectorVariableName(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkFunctionParser::RemoveAllVariables()
{
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->RemoveAllVariables();
}



void vtkFunctionParser::SetReplaceInvalidValues(int arg0)
{
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetReplaceInvalidValues(arg0);
}



int vtkFunctionParser::GetReplaceInvalidValues()
{
  int retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetReplaceInvalidValues();
  return retVal;
}



void vtkFunctionParser::ReplaceInvalidValuesOn()
{
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->ReplaceInvalidValuesOn();
}



void vtkFunctionParser::ReplaceInvalidValuesOff()
{
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->ReplaceInvalidValuesOff();
}



void vtkFunctionParser::SetReplacementValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->SetReplacementValue(arg0);
}



double vtkFunctionParser::GetReplacementValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkFunctionParser>(m_instance)->GetReplacementValue();
  return retVal;
}



  vtkFunctionParser::vtkFunctionParser(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkFunctionParser::vtkFunctionParser(bool donothing) : vtkObject(donothing) {}



  vtkFunctionParser::vtkFunctionParser() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkFunctionParser::New()));
}



  vtkFunctionParser::~vtkFunctionParser() { }





} // end namespace vtkCommon
