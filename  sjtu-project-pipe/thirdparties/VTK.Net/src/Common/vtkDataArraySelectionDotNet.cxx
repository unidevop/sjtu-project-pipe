

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataArraySelectionDotNet.h"

// native includes
#include "strstream"
#include "vtkDataArraySelection.h"

using namespace System;

namespace vtk {

System::String^ vtkDataArraySelection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataArraySelection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataArraySelection^ vtkDataArraySelection::NewInstance()
{
  ::vtkDataArraySelection* retVal = static_cast<::vtkDataArraySelection*>(vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->NewInstance());
  return gcnew vtkDataArraySelection(IntPtr(retVal), false);
}



vtkDataArraySelection^ vtkDataArraySelection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataArraySelection* retVal = static_cast<::vtkDataArraySelection*>(::vtkDataArraySelection::SafeDownCast(oWrap));
  return gcnew vtkDataArraySelection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataArraySelection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataArraySelection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataArraySelection::EnableArray(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->EnableArray(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



void vtkDataArraySelection::DisableArray(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->DisableArray(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
}



int vtkDataArraySelection::ArrayIsEnabled(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->ArrayIsEnabled(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkDataArraySelection::ArrayExists(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->ArrayExists(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



void vtkDataArraySelection::EnableAllArrays()
{
  vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->EnableAllArrays();
}



void vtkDataArraySelection::DisableAllArrays()
{
  vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->DisableAllArrays();
}



int vtkDataArraySelection::GetNumberOfArrays()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->GetNumberOfArrays();
  return retVal;
}



int vtkDataArraySelection::GetNumberOfArraysEnabled()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->GetNumberOfArraysEnabled();
  return retVal;
}



System::String^ vtkDataArraySelection::GetArrayName(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->GetArrayName(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataArraySelection::GetArrayIndex(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->GetArrayIndex(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkDataArraySelection::GetEnabledArrayIndex(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->GetEnabledArrayIndex(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



int vtkDataArraySelection::GetArraySetting(int index)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->GetArraySetting(index);
  return retVal;
}



void vtkDataArraySelection::RemoveAllArrays()
{
  vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->RemoveAllArrays();
}



void vtkDataArraySelection::CopySelections(vtkDataArraySelection^ selections)
{
  ::vtkDataArraySelection* selectionsWrap = vtk::ConvertManagedToNative<::vtkDataArraySelection>(selections->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataArraySelection>(m_instance)->CopySelections(selectionsWrap);
}



  vtkDataArraySelection::vtkDataArraySelection(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDataArraySelection::vtkDataArraySelection(bool donothing) : vtkObject(donothing) {}



  vtkDataArraySelection::vtkDataArraySelection() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDataArraySelection::New()));
}



  vtkDataArraySelection::~vtkDataArraySelection() { }





} // end namespace vtkCommon
