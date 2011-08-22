

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRIBPropertyDotNet.h"

// native includes
#include "strstream"
#include "vtkRIBProperty.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkRIBProperty::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRIBProperty::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRIBProperty^ vtkRIBProperty::NewInstance()
{
  ::vtkRIBProperty* retVal = static_cast<::vtkRIBProperty*>(vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->NewInstance());
  return gcnew vtkRIBProperty(IntPtr(retVal), false);
}



vtkRIBProperty^ vtkRIBProperty::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRIBProperty* retVal = static_cast<::vtkRIBProperty*>(::vtkRIBProperty::SafeDownCast(oWrap));
  return gcnew vtkRIBProperty(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRIBProperty::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRIBProperty::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRIBProperty::SetSurfaceShader(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->SetSurfaceShader(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkRIBProperty::GetSurfaceShader()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->GetSurfaceShader();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRIBProperty::SetDisplacementShader(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->SetDisplacementShader(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkRIBProperty::GetDisplacementShader()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->GetDisplacementShader();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRIBProperty::SetVariable(System::String^ variable, System::String^ declaration)
{
  char* variableWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variable).ToPointer());
  char* declarationWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(declaration).ToPointer());
  vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->SetVariable(variableWrap, declarationWrap);
  variable->Remove(0,variable->Length);
  variable->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(variableWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableWrap));
  declaration->Remove(0,declaration->Length);
  declaration->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(declarationWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(declarationWrap));
}



void vtkRIBProperty::AddVariable(System::String^ variable, System::String^ declaration)
{
  char* variableWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(variable).ToPointer());
  char* declarationWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(declaration).ToPointer());
  vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->AddVariable(variableWrap, declarationWrap);
  variable->Remove(0,variable->Length);
  variable->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(variableWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(variableWrap));
  declaration->Remove(0,declaration->Length);
  declaration->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(declarationWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(declarationWrap));
}



System::String^ vtkRIBProperty::GetDeclarations()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->GetDeclarations();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkRIBProperty::SetParameter(System::String^ parameter, System::String^ value)
{
  char* parameterWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(parameter).ToPointer());
  char* valueWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(value).ToPointer());
  vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->SetParameter(parameterWrap, valueWrap);
  parameter->Remove(0,parameter->Length);
  parameter->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(parameterWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(parameterWrap));
  value->Remove(0,value->Length);
  value->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(valueWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(valueWrap));
}



void vtkRIBProperty::AddParameter(System::String^ parameter, System::String^ value)
{
  char* parameterWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(parameter).ToPointer());
  char* valueWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(value).ToPointer());
  vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->AddParameter(parameterWrap, valueWrap);
  parameter->Remove(0,parameter->Length);
  parameter->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(parameterWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(parameterWrap));
  value->Remove(0,value->Length);
  value->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(valueWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(valueWrap));
}



System::String^ vtkRIBProperty::GetParameters()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBProperty>(m_instance)->GetParameters();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkRIBProperty::vtkRIBProperty(System::IntPtr native, bool bConst) : vtkProperty(native, bConst) {}



  vtkRIBProperty::vtkRIBProperty(bool donothing) : vtkProperty(donothing) {}



  vtkRIBProperty::vtkRIBProperty() : vtkProperty(false) {
  this->SetNativePointer(IntPtr(::vtkRIBProperty::New()));
}



  vtkRIBProperty::~vtkRIBProperty() { }





} // end namespace vtkHybrid
