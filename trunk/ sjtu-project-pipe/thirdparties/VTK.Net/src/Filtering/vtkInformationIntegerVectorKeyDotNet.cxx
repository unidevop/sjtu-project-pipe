

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationIntegerVectorKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationIntegerVectorKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationIntegerVectorKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationIntegerVectorKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationIntegerVectorKey^ vtkInformationIntegerVectorKey::NewInstance()
{
  ::vtkInformationIntegerVectorKey* retVal = static_cast<::vtkInformationIntegerVectorKey*>(vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->NewInstance());
  return gcnew vtkInformationIntegerVectorKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationIntegerVectorKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationIntegerVectorKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationIntegerVectorKey::Append(vtkInformation^ info, int value)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->Append(infoWrap, value);
}



void vtkInformationIntegerVectorKey::Set(vtkInformation^ info, array<int>^ value, int length)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->Set(infoWrap, nativevaluePin, length);
}



void vtkInformationIntegerVectorKey::Get(vtkInformation^ info, array<int>^ value)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  pin_ptr<int> valuePin = &value[0];
  int* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->Get(infoWrap, nativevaluePin);
}



int vtkInformationIntegerVectorKey::Length(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->Length(infoWrap);
  return retVal;
}



int vtkInformationIntegerVectorKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationIntegerVectorKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationIntegerVectorKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationIntegerVectorKey::vtkInformationIntegerVectorKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationIntegerVectorKey::vtkInformationIntegerVectorKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationIntegerVectorKey::vtkInformationIntegerVectorKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationIntegerVectorKey::New()));
}



  vtkInformationIntegerVectorKey::~vtkInformationIntegerVectorKey() { }





} // end namespace vtkFiltering
