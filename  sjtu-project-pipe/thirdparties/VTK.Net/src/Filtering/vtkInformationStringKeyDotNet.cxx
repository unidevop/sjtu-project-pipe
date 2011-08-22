

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationStringKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationStringKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationStringKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationStringKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationStringKey^ vtkInformationStringKey::NewInstance()
{
  ::vtkInformationStringKey* retVal = static_cast<::vtkInformationStringKey*>(vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->NewInstance());
  return gcnew vtkInformationStringKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationStringKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationStringKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationStringKey::Set(vtkInformation^ info, System::String^ arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  char* arg1Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg1).ToPointer());
  vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->Set(infoWrap, arg1Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg1Wrap));
}



System::String^ vtkInformationStringKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->Get(infoWrap);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationStringKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationStringKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationStringKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationStringKey::vtkInformationStringKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationStringKey::vtkInformationStringKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationStringKey::vtkInformationStringKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationStringKey::New()));
}



  vtkInformationStringKey::~vtkInformationStringKey() { }





} // end namespace vtkFiltering
