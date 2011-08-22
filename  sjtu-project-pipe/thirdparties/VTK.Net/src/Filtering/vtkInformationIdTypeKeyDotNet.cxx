

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationIdTypeKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationIdTypeKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationIdTypeKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationIdTypeKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationIdTypeKey^ vtkInformationIdTypeKey::NewInstance()
{
  ::vtkInformationIdTypeKey* retVal = static_cast<::vtkInformationIdTypeKey*>(vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->NewInstance());
  return gcnew vtkInformationIdTypeKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationIdTypeKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationIdTypeKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationIdTypeKey::Set(vtkInformation^ info, int arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->Set(infoWrap, arg1);
}



int vtkInformationIdTypeKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->Get(infoWrap);
  return retVal;
}



int vtkInformationIdTypeKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationIdTypeKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationIdTypeKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationIdTypeKey::vtkInformationIdTypeKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationIdTypeKey::vtkInformationIdTypeKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationIdTypeKey::vtkInformationIdTypeKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationIdTypeKey::New()));
}



  vtkInformationIdTypeKey::~vtkInformationIdTypeKey() { }





} // end namespace vtkFiltering
