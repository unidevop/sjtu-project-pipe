

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationObjectBaseKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationObjectBaseKey.h"
#include "vtkGarbageCollector.h"
#include "vtkInformation.h"
#include "vtkObjectBase.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationObjectBaseKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationObjectBaseKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationObjectBaseKey^ vtkInformationObjectBaseKey::NewInstance()
{
  ::vtkInformationObjectBaseKey* retVal = static_cast<::vtkInformationObjectBaseKey*>(vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->NewInstance());
  return gcnew vtkInformationObjectBaseKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationObjectBaseKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationObjectBaseKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationObjectBaseKey::Set(vtkInformation^ info, vtkObjectBase^ arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkObjectBase* arg1Wrap = static_cast<::vtkObjectBase*>(arg1->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->Set(infoWrap, arg1Wrap);
}



vtkObjectBase^ vtkInformationObjectBaseKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkObjectBase* retVal = static_cast<::vtkObjectBase*>(vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->Get(infoWrap));
  return gcnew vtkObjectBase(IntPtr(retVal), false);
}



int vtkInformationObjectBaseKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationObjectBaseKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



void vtkInformationObjectBaseKey::Report(vtkInformation^ info, vtkGarbageCollector^ collector)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkGarbageCollector* collectorWrap = vtk::ConvertManagedToNative<::vtkGarbageCollector>(collector->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationObjectBaseKey>(m_instance)->Report(infoWrap, collectorWrap);
}



  vtkInformationObjectBaseKey::vtkInformationObjectBaseKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationObjectBaseKey::vtkInformationObjectBaseKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationObjectBaseKey::vtkInformationObjectBaseKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationObjectBaseKey::New()));
}



  vtkInformationObjectBaseKey::~vtkInformationObjectBaseKey() { }





} // end namespace vtkFiltering
