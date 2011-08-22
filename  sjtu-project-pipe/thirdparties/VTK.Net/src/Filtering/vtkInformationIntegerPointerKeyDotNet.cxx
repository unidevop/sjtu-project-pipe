

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationIntegerPointerKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationIntegerPointerKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationIntegerPointerKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationIntegerPointerKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationIntegerPointerKey^ vtkInformationIntegerPointerKey::NewInstance()
{
  ::vtkInformationIntegerPointerKey* retVal = static_cast<::vtkInformationIntegerPointerKey*>(vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->NewInstance());
  return gcnew vtkInformationIntegerPointerKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationIntegerPointerKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationIntegerPointerKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationIntegerPointerKey::Set(vtkInformation^ info, array<int>^ value, int length)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->Set(infoWrap, nativevaluePin, length);
}



void vtkInformationIntegerPointerKey::Get(vtkInformation^ info, array<int>^ value)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->Get(infoWrap, nativevaluePin);
}



int vtkInformationIntegerPointerKey::Length(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->Length(infoWrap);
  return retVal;
}



int vtkInformationIntegerPointerKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationIntegerPointerKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationIntegerPointerKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationIntegerPointerKey::vtkInformationIntegerPointerKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationIntegerPointerKey::vtkInformationIntegerPointerKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationIntegerPointerKey::vtkInformationIntegerPointerKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationIntegerPointerKey::New()));
}



  vtkInformationIntegerPointerKey::~vtkInformationIntegerPointerKey() { }





} // end namespace vtkFiltering
