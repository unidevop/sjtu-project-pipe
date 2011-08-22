

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationKeyVectorKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationKeyVectorKey.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationKeyVectorKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationKeyVectorKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationKeyVectorKey^ vtkInformationKeyVectorKey::NewInstance()
{
  ::vtkInformationKeyVectorKey* retVal = static_cast<::vtkInformationKeyVectorKey*>(vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->NewInstance());
  return gcnew vtkInformationKeyVectorKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationKeyVectorKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationKeyVectorKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationKeyVectorKey::Append(vtkInformation^ info, vtkInformationKey^ value)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkInformationKey* valueWrap = vtk::ConvertManagedToNative<::vtkInformationKey>(value->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->Append(infoWrap, valueWrap);
}



void vtkInformationKeyVectorKey::AppendUnique(vtkInformation^ info, vtkInformationKey^ value)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkInformationKey* valueWrap = vtk::ConvertManagedToNative<::vtkInformationKey>(value->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->AppendUnique(infoWrap, valueWrap);
}



void vtkInformationKeyVectorKey::RemoveItem(vtkInformation^ info, vtkInformationKey^ value)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkInformationKey* valueWrap = vtk::ConvertManagedToNative<::vtkInformationKey>(value->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->RemoveItem(infoWrap, valueWrap);
}



int vtkInformationKeyVectorKey::Length(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->Length(infoWrap);
  return retVal;
}



int vtkInformationKeyVectorKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationKeyVectorKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKeyVectorKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



  vtkInformationKeyVectorKey::vtkInformationKeyVectorKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationKeyVectorKey::vtkInformationKeyVectorKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationKeyVectorKey::vtkInformationKeyVectorKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationKeyVectorKey::New()));
}



  vtkInformationKeyVectorKey::~vtkInformationKeyVectorKey() { }





} // end namespace vtkFiltering
