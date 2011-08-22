

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationDoubleKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationDoubleKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationDoubleKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationDoubleKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationDoubleKey^ vtkInformationDoubleKey::NewInstance()
{
  ::vtkInformationDoubleKey* retVal = static_cast<::vtkInformationDoubleKey*>(vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->NewInstance());
  return gcnew vtkInformationDoubleKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationDoubleKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationDoubleKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationDoubleKey::Set(vtkInformation^ info, double arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->Set(infoWrap, arg1);
}



double vtkInformationDoubleKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  double retVal = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->Get(infoWrap);
  return retVal;
}



int vtkInformationDoubleKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationDoubleKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationDoubleKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationDoubleKey::vtkInformationDoubleKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationDoubleKey::vtkInformationDoubleKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationDoubleKey::vtkInformationDoubleKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationDoubleKey::New()));
}



  vtkInformationDoubleKey::~vtkInformationDoubleKey() { }





} // end namespace vtkFiltering
