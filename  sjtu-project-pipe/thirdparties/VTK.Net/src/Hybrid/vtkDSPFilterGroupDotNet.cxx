

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDSPFilterGroupDotNet.h"
#include "vtkDSPFilterDefinitionDotNet.h"

// native includes
#include "strstream"
#include "vtkDSPFilterGroup.h"
#include "vtkDSPFilterDefinition.h"
#include "vtkFloatArray.h"

using namespace System;

namespace vtk {

System::String^ vtkDSPFilterGroup::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDSPFilterGroup::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDSPFilterGroup^ vtkDSPFilterGroup::NewInstance()
{
  ::vtkDSPFilterGroup* retVal = static_cast<::vtkDSPFilterGroup*>(vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->NewInstance());
  return gcnew vtkDSPFilterGroup(IntPtr(retVal), false);
}



vtkDSPFilterGroup^ vtkDSPFilterGroup::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDSPFilterGroup* retVal = static_cast<::vtkDSPFilterGroup*>(::vtkDSPFilterGroup::SafeDownCast(oWrap));
  return gcnew vtkDSPFilterGroup(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDSPFilterGroup::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDSPFilterGroup::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDSPFilterGroup::AddFilter(vtkDSPFilterDefinition^ filter)
{
  ::vtkDSPFilterDefinition* filterWrap = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(filter->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->AddFilter(filterWrap);
}



void vtkDSPFilterGroup::RemoveFilter(System::String^ a_outputVariableName)
{
  char* a_outputVariableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(a_outputVariableName).ToPointer());
  vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->RemoveFilter(a_outputVariableNameWrap);
  a_outputVariableName->Remove(0,a_outputVariableName->Length);
  a_outputVariableName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(a_outputVariableNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(a_outputVariableNameWrap));
}



void vtkDSPFilterGroup::AddInputVariableInstance(System::String^ a_name, int a_timestep, vtkFloatArray^ a_data)
{
  char* a_nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(a_name).ToPointer());
  ::vtkFloatArray* a_dataWrap = vtk::ConvertManagedToNative<::vtkFloatArray>(a_data->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->AddInputVariableInstance(a_nameWrap, a_timestep, a_dataWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(a_nameWrap));
}



vtkFloatArray^ vtkDSPFilterGroup::GetOutput(int a_whichFilter, int a_whichTimestep, int% a_instancesCalculated)
{
  pin_ptr<int> a_instancesCalculatedPin = &a_instancesCalculated;
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->GetOutput(a_whichFilter, a_whichTimestep, *a_instancesCalculatedPin));
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



vtkFloatArray^ vtkDSPFilterGroup::GetCachedInput(int a_whichFilter, int a_whichTimestep)
{
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->GetCachedInput(a_whichFilter, a_whichTimestep));
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



vtkFloatArray^ vtkDSPFilterGroup::GetCachedOutput(int a_whichFilter, int a_whichTimestep)
{
  ::vtkFloatArray* retVal = static_cast<::vtkFloatArray*>(vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->GetCachedOutput(a_whichFilter, a_whichTimestep));
  return gcnew vtkFloatArray(IntPtr(retVal), false);
}



System::String^ vtkDSPFilterGroup::GetInputVariableName(int a_whichFilter)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->GetInputVariableName(a_whichFilter);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDSPFilterGroup::GetNumFilters()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->GetNumFilters();
  return retVal;
}



void vtkDSPFilterGroup::Copy(vtkDSPFilterGroup^ other)
{
  ::vtkDSPFilterGroup* otherWrap = vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(other->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->Copy(otherWrap);
}



vtkDSPFilterDefinition^ vtkDSPFilterGroup::GetFilter(int a_whichFilter)
{
  ::vtkDSPFilterDefinition* retVal = static_cast<::vtkDSPFilterDefinition*>(vtk::ConvertManagedToNative<::vtkDSPFilterGroup>(m_instance)->GetFilter(a_whichFilter));
  return gcnew vtkDSPFilterDefinition(IntPtr(retVal), false);
}



  vtkDSPFilterGroup::vtkDSPFilterGroup(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDSPFilterGroup::vtkDSPFilterGroup(bool donothing) : vtkObject(donothing) {}



  vtkDSPFilterGroup::vtkDSPFilterGroup() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDSPFilterGroup::New()));
}



  vtkDSPFilterGroup::~vtkDSPFilterGroup() { }





} // end namespace vtkHybrid
