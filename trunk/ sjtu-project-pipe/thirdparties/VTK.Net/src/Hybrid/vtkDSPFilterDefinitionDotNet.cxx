

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDSPFilterDefinitionDotNet.h"

// native includes
#include "strstream"
#include "vtkDSPFilterDefinition.h"

using namespace System;

namespace vtk {

System::String^ vtkDSPFilterDefinition::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDSPFilterDefinition::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDSPFilterDefinition^ vtkDSPFilterDefinition::NewInstance()
{
  ::vtkDSPFilterDefinition* retVal = static_cast<::vtkDSPFilterDefinition*>(vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->NewInstance());
  return gcnew vtkDSPFilterDefinition(IntPtr(retVal), false);
}



vtkDSPFilterDefinition^ vtkDSPFilterDefinition::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDSPFilterDefinition* retVal = static_cast<::vtkDSPFilterDefinition*>(::vtkDSPFilterDefinition::SafeDownCast(oWrap));
  return gcnew vtkDSPFilterDefinition(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDSPFilterDefinition::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDSPFilterDefinition::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDSPFilterDefinition::Copy(vtkDSPFilterDefinition^ other)
{
  ::vtkDSPFilterDefinition* otherWrap = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(other->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->Copy(otherWrap);
}



void vtkDSPFilterDefinition::Clear()
{
  vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->Clear();
}



void vtkDSPFilterDefinition::PushBackNumeratorWeight(double a_value)
{
  vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->PushBackNumeratorWeight(a_value);
}



void vtkDSPFilterDefinition::PushBackDenominatorWeight(double a_value)
{
  vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->PushBackDenominatorWeight(a_value);
}



void vtkDSPFilterDefinition::PushBackForwardNumeratorWeight(double a_value)
{
  vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->PushBackForwardNumeratorWeight(a_value);
}



void vtkDSPFilterDefinition::SetInputVariableName(System::String^ a_value)
{
  char* a_valueWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(a_value).ToPointer());
  vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->SetInputVariableName(a_valueWrap);
  a_value->Remove(0,a_value->Length);
  a_value->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(a_valueWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(a_valueWrap));
}



void vtkDSPFilterDefinition::SetOutputVariableName(System::String^ a_value)
{
  char* a_valueWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(a_value).ToPointer());
  vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->SetOutputVariableName(a_valueWrap);
  a_value->Remove(0,a_value->Length);
  a_value->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(a_valueWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(a_valueWrap));
}



System::String^ vtkDSPFilterDefinition::GetInputVariableName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetInputVariableName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDSPFilterDefinition::GetOutputVariableName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetOutputVariableName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDSPFilterDefinition::GetNumNumeratorWeights()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetNumNumeratorWeights();
  return retVal;
}



int vtkDSPFilterDefinition::GetNumDenominatorWeights()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetNumDenominatorWeights();
  return retVal;
}



int vtkDSPFilterDefinition::GetNumForwardNumeratorWeights()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetNumForwardNumeratorWeights();
  return retVal;
}



double vtkDSPFilterDefinition::GetNumeratorWeight(int a_which)
{
  double retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetNumeratorWeight(a_which);
  return retVal;
}



double vtkDSPFilterDefinition::GetDenominatorWeight(int a_which)
{
  double retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetDenominatorWeight(a_which);
  return retVal;
}



double vtkDSPFilterDefinition::GetForwardNumeratorWeight(int a_which)
{
  double retVal = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(m_instance)->GetForwardNumeratorWeight(a_which);
  return retVal;
}



  vtkDSPFilterDefinition::vtkDSPFilterDefinition(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDSPFilterDefinition::vtkDSPFilterDefinition(bool donothing) : vtkObject(donothing) {}



  vtkDSPFilterDefinition::vtkDSPFilterDefinition() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDSPFilterDefinition::New()));
}



  vtkDSPFilterDefinition::~vtkDSPFilterDefinition() { }





} // end namespace vtkHybrid
