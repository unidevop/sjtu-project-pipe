

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationInformationKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationInformationKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationInformationKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationInformationKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationInformationKey^ vtkInformationInformationKey::NewInstance()
{
  ::vtkInformationInformationKey* retVal = static_cast<::vtkInformationInformationKey*>(vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->NewInstance());
  return gcnew vtkInformationInformationKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationInformationKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationInformationKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationInformationKey::Set(vtkInformation^ info, vtkInformation^ arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkInformation* arg1Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->Set(infoWrap, arg1Wrap);
}



vtkInformation^ vtkInformationInformationKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkInformation* retVal = static_cast<::vtkInformation*>(vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->Get(infoWrap));
  return gcnew vtkInformation(IntPtr(retVal), false);
}



int vtkInformationInformationKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationInformationKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



void vtkInformationInformationKey::DeepCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationInformationKey>(m_instance)->DeepCopy(fromWrap, toWrap);
}



  vtkInformationInformationKey::vtkInformationInformationKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationInformationKey::vtkInformationInformationKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationInformationKey::vtkInformationInformationKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationInformationKey::New()));
}



  vtkInformationInformationKey::~vtkInformationInformationKey() { }





} // end namespace vtkFiltering
