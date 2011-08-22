

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationUnsignedLongKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationUnsignedLongKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationUnsignedLongKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationUnsignedLongKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationUnsignedLongKey^ vtkInformationUnsignedLongKey::NewInstance()
{
  ::vtkInformationUnsignedLongKey* retVal = static_cast<::vtkInformationUnsignedLongKey*>(vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->NewInstance());
  return gcnew vtkInformationUnsignedLongKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationUnsignedLongKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationUnsignedLongKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationUnsignedLongKey::Set(vtkInformation^ info, unsigned long arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->Set(infoWrap, arg1);
}



unsigned long vtkInformationUnsignedLongKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->Get(infoWrap);
  return retVal;
}



int vtkInformationUnsignedLongKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationUnsignedLongKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationUnsignedLongKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationUnsignedLongKey::vtkInformationUnsignedLongKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationUnsignedLongKey::vtkInformationUnsignedLongKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationUnsignedLongKey::vtkInformationUnsignedLongKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationUnsignedLongKey::New()));
}



  vtkInformationUnsignedLongKey::~vtkInformationUnsignedLongKey() { }





} // end namespace vtkFiltering
