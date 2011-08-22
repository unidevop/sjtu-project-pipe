

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationRequestKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationRequestKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationRequestKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationRequestKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationRequestKey^ vtkInformationRequestKey::NewInstance()
{
  ::vtkInformationRequestKey* retVal = static_cast<::vtkInformationRequestKey*>(vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->NewInstance());
  return gcnew vtkInformationRequestKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationRequestKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationRequestKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationRequestKey::Set(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->Set(infoWrap);
}



void vtkInformationRequestKey::Remove(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->Remove(infoWrap);
}



int vtkInformationRequestKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationRequestKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationRequestKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationRequestKey::vtkInformationRequestKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationRequestKey::vtkInformationRequestKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationRequestKey::vtkInformationRequestKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationRequestKey::New()));
}



  vtkInformationRequestKey::~vtkInformationRequestKey() { }





} // end namespace vtkFiltering
