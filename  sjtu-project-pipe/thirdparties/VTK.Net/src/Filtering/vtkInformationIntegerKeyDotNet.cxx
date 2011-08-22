

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationIntegerKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationIntegerKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationIntegerKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationIntegerKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationIntegerKey^ vtkInformationIntegerKey::NewInstance()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->NewInstance());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationIntegerKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationIntegerKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationIntegerKey::Set(vtkInformation^ info, int arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->Set(infoWrap, arg1);
}



int vtkInformationIntegerKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->Get(infoWrap);
  return retVal;
}



int vtkInformationIntegerKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationIntegerKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationIntegerKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationIntegerKey::vtkInformationIntegerKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationIntegerKey::vtkInformationIntegerKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationIntegerKey::vtkInformationIntegerKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationIntegerKey::New()));
}



  vtkInformationIntegerKey::~vtkInformationIntegerKey() { }





} // end namespace vtkFiltering
