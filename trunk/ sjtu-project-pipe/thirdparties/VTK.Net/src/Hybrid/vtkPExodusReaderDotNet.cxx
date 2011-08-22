

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPExodusReaderDotNet.h"
#include "vtkDSPFilterDefinitionDotNet.h"

// native includes
#include "strstream"
#include "vtkPExodusReader.h"
#include "vtkDSPFilterDefinition.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPExodusReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPExodusReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPExodusReader^ vtkPExodusReader::NewInstance()
{
  ::vtkPExodusReader* retVal = static_cast<::vtkPExodusReader*>(vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->NewInstance());
  return gcnew vtkPExodusReader(IntPtr(retVal), false);
}



vtkPExodusReader^ vtkPExodusReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPExodusReader* retVal = static_cast<::vtkPExodusReader*>(::vtkPExodusReader::SafeDownCast(oWrap));
  return gcnew vtkPExodusReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPExodusReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPExodusReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPExodusReader::SetFilePattern(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->SetFilePattern(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkPExodusReader::GetFilePattern()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetFilePattern();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPExodusReader::SetFilePrefix(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->SetFilePrefix(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkPExodusReader::GetFilePrefix()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetFilePrefix();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPExodusReader::SetFileRange(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->SetFileRange(arg0, arg1);
}



void vtkPExodusReader::SetFileRange(array<int>^ r)
{
  pin_ptr<int> rPin = &r[0];
  int* nativerPin = rPin;
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->SetFileRange(nativerPin);
}



array<int>^ vtkPExodusReader::GetFileRange()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetFileRange();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkPExodusReader::SetFileName(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->SetFileName(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



int vtkPExodusReader::GetNumberOfFileNames()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetNumberOfFileNames();
  return retVal;
}



int vtkPExodusReader::GetNumberOfFiles()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetNumberOfFiles();
  return retVal;
}



void vtkPExodusReader::SetGenerateFileIdArray(int flag)
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->SetGenerateFileIdArray(flag);
}



int vtkPExodusReader::GetGenerateFileIdArray()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetGenerateFileIdArray();
  return retVal;
}



void vtkPExodusReader::GenerateFileIdArrayOn()
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GenerateFileIdArrayOn();
}



void vtkPExodusReader::GenerateFileIdArrayOff()
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GenerateFileIdArrayOff();
}



int vtkPExodusReader::GetNumberOfVariableArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetNumberOfVariableArrays();
  return retVal;
}



System::String^ vtkPExodusReader::GetVariableArrayName(int a_which)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->GetVariableArrayName(a_which);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkPExodusReader::EnableDSPFiltering()
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->EnableDSPFiltering();
}



void vtkPExodusReader::AddFilter(vtkDSPFilterDefinition^ a_filter)
{
  ::vtkDSPFilterDefinition* a_filterWrap = vtk::ConvertManagedToNative<::vtkDSPFilterDefinition>(a_filter->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->AddFilter(a_filterWrap);
}



void vtkPExodusReader::StartAddingFilter()
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->StartAddingFilter();
}



void vtkPExodusReader::AddFilterInputVar(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->AddFilterInputVar(nameWrap);
  name->Remove(0,name->Length);
  name->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(nameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkPExodusReader::AddFilterOutputVar(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->AddFilterOutputVar(nameWrap);
  name->Remove(0,name->Length);
  name->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(nameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkPExodusReader::AddFilterNumeratorWeight(double weight)
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->AddFilterNumeratorWeight(weight);
}



void vtkPExodusReader::AddFilterForwardNumeratorWeight(double weight)
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->AddFilterForwardNumeratorWeight(weight);
}



void vtkPExodusReader::AddFilterDenominatorWeight(double weight)
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->AddFilterDenominatorWeight(weight);
}



void vtkPExodusReader::FinishAddingFilter()
{
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->FinishAddingFilter();
}



void vtkPExodusReader::RemoveFilter(System::String^ a_outputVariableName)
{
  char* a_outputVariableNameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(a_outputVariableName).ToPointer());
  vtk::ConvertManagedToNative<::vtkPExodusReader>(m_instance)->RemoveFilter(a_outputVariableNameWrap);
  a_outputVariableName->Remove(0,a_outputVariableName->Length);
  a_outputVariableName->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(a_outputVariableNameWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(a_outputVariableNameWrap));
}



  vtkPExodusReader::vtkPExodusReader(System::IntPtr native, bool bConst) : vtkExodusReader(native, bConst) {}



  vtkPExodusReader::vtkPExodusReader(bool donothing) : vtkExodusReader(donothing) {}



  vtkPExodusReader::vtkPExodusReader() : vtkExodusReader(false) {
  this->SetNativePointer(IntPtr(::vtkPExodusReader::New()));
}



  vtkPExodusReader::~vtkPExodusReader() { }





} // end namespace vtkHybrid
