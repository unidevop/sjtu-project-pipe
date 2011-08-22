

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationDoubleVectorKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationDoubleVectorKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationDoubleVectorKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationDoubleVectorKey^ vtkInformationDoubleVectorKey::NewInstance()
{
  ::vtkInformationDoubleVectorKey* retVal = static_cast<::vtkInformationDoubleVectorKey*>(vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->NewInstance());
  return gcnew vtkInformationDoubleVectorKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationDoubleVectorKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationDoubleVectorKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationDoubleVectorKey::Append(vtkInformation^ info, double value)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->Append(infoWrap, value);
}



void vtkInformationDoubleVectorKey::Set(vtkInformation^ info, array<double>^ value, int length)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->Set(infoWrap, nativevaluePin, length);
}



void vtkInformationDoubleVectorKey::Get(vtkInformation^ info, array<double>^ value)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  pin_ptr<double> valuePin = &value[0];
  double* nativevaluePin = valuePin;
  vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->Get(infoWrap, nativevaluePin);
}



int vtkInformationDoubleVectorKey::Length(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->Length(infoWrap);
  return retVal;
}



int vtkInformationDoubleVectorKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationDoubleVectorKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationDoubleVectorKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationDoubleVectorKey::vtkInformationDoubleVectorKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationDoubleVectorKey::vtkInformationDoubleVectorKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationDoubleVectorKey::vtkInformationDoubleVectorKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationDoubleVectorKey::New()));
}



  vtkInformationDoubleVectorKey::~vtkInformationDoubleVectorKey() { }





} // end namespace vtkFiltering
