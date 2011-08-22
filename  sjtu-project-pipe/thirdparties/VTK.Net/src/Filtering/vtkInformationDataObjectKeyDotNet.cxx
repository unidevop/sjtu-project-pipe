

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationDataObjectKeyDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationDataObjectKey.h"
#include "vtkDataObject.h"
#include "vtkGarbageCollector.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationDataObjectKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationDataObjectKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationDataObjectKey^ vtkInformationDataObjectKey::NewInstance()
{
  ::vtkInformationDataObjectKey* retVal = static_cast<::vtkInformationDataObjectKey*>(vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->NewInstance());
  return gcnew vtkInformationDataObjectKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationDataObjectKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationDataObjectKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationDataObjectKey::Set(vtkInformation^ info, vtkDataObject^ arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->Set(infoWrap, arg1Wrap);
}



vtkDataObject^ vtkInformationDataObjectKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->Get(infoWrap));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



int vtkInformationDataObjectKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationDataObjectKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



void vtkInformationDataObjectKey::Report(vtkInformation^ info, vtkGarbageCollector^ collector)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkGarbageCollector* collectorWrap = vtk::ConvertManagedToNative<::vtkGarbageCollector>(collector->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationDataObjectKey>(m_instance)->Report(infoWrap, collectorWrap);
}



  vtkInformationDataObjectKey::vtkInformationDataObjectKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationDataObjectKey::vtkInformationDataObjectKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationDataObjectKey::vtkInformationDataObjectKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationDataObjectKey::New()));
}



  vtkInformationDataObjectKey::~vtkInformationDataObjectKey() { }





} // end namespace vtkFiltering
