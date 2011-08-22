

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkArrayCalculatorDotNet.h"

// native includes
#include "strstream"
#include "vtkArrayCalculator.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkArrayCalculator::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkArrayCalculator::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkArrayCalculator^ vtkArrayCalculator::NewInstance()
{
  ::vtkArrayCalculator* retVal = static_cast<::vtkArrayCalculator*>(vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->NewInstance());
  return gcnew vtkArrayCalculator(IntPtr(retVal), false);
}



vtkArrayCalculator^ vtkArrayCalculator::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkArrayCalculator* retVal = static_cast<::vtkArrayCalculator*>(::vtkArrayCalculator::SafeDownCast(oWrap));
  return gcnew vtkArrayCalculator(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkArrayCalculator::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkArrayCalculator::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkArrayCalculator::SetFunction(System::String^ function)
{
  char* functionWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(function).ToPointer());
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->SetFunction(functionWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(functionWrap));
}



System::String^ vtkArrayCalculator::GetFunction()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetFunction();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkArrayCalculator::AddScalarArrayName(System::String^ arrayName, int component)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->AddScalarArrayName(arrayNameWrap, component);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkArrayCalculator::AddVectorArrayName(System::String^ arrayName, int component0, int component1, int component2)
{
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->AddVectorArrayName(arrayNameWrap, component0, component1, component2);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkArrayCalculator::AddScalarVariable(System::String^ variableName, System::String^ arrayName, int component)
{
  char* variableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variableName).ToPointer());
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->AddScalarVariable(variableNameWrap, arrayNameWrap, component);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkArrayCalculator::AddVectorVariable(System::String^ variableName, System::String^ arrayName, int component0, int component1, int component2)
{
  char* variableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variableName).ToPointer());
  char* arrayNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arrayName).ToPointer());
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->AddVectorVariable(variableNameWrap, arrayNameWrap, component0, component1, component2);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableNameWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arrayNameWrap));
}



void vtkArrayCalculator::SetResultArrayName(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->SetResultArrayName(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



System::String^ vtkArrayCalculator::GetResultArrayName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetResultArrayName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkArrayCalculator::SetAttributeMode(int arg0)
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->SetAttributeMode(arg0);
}



int vtkArrayCalculator::GetAttributeMode()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetAttributeMode();
  return retVal;
}



void vtkArrayCalculator::SetAttributeModeToDefault()
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->SetAttributeModeToDefault();
}



void vtkArrayCalculator::SetAttributeModeToUsePointData()
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->SetAttributeModeToUsePointData();
}



void vtkArrayCalculator::SetAttributeModeToUseCellData()
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->SetAttributeModeToUseCellData();
}



System::String^ vtkArrayCalculator::GetAttributeModeAsString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetAttributeModeAsString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkArrayCalculator::RemoveAllVariables()
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->RemoveAllVariables();
}



System::String^ vtkArrayCalculator::GetScalarArrayName(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetScalarArrayName(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkArrayCalculator::GetVectorArrayName(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetVectorArrayName(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkArrayCalculator::GetScalarVariableName(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetScalarVariableName(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkArrayCalculator::GetVectorVariableName(int i)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetVectorVariableName(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkArrayCalculator::GetSelectedScalarComponent(int i)
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetSelectedScalarComponent(i);
  return retVal;
}



int vtkArrayCalculator::GetNumberOfScalarArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetNumberOfScalarArrays();
  return retVal;
}



int vtkArrayCalculator::GetNumberOfVectorArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetNumberOfVectorArrays();
  return retVal;
}



void vtkArrayCalculator::SetReplaceInvalidValues(int arg0)
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->SetReplaceInvalidValues(arg0);
}



int vtkArrayCalculator::GetReplaceInvalidValues()
{
  int retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetReplaceInvalidValues();
  return retVal;
}



void vtkArrayCalculator::ReplaceInvalidValuesOn()
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->ReplaceInvalidValuesOn();
}



void vtkArrayCalculator::ReplaceInvalidValuesOff()
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->ReplaceInvalidValuesOff();
}



void vtkArrayCalculator::SetReplacementValue(double arg0)
{
  vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->SetReplacementValue(arg0);
}



double vtkArrayCalculator::GetReplacementValue()
{
  double retVal = vtk::ConvertManagedToNative<::vtkArrayCalculator>(m_instance)->GetReplacementValue();
  return retVal;
}



  vtkArrayCalculator::vtkArrayCalculator(System::IntPtr native, bool bConst) : vtkDataSetAlgorithm(native, bConst) {}



  vtkArrayCalculator::vtkArrayCalculator(bool donothing) : vtkDataSetAlgorithm(donothing) {}



  vtkArrayCalculator::vtkArrayCalculator() : vtkDataSetAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkArrayCalculator::New()));
}



  vtkArrayCalculator::~vtkArrayCalculator() { }





} // end namespace vtkGraphics
