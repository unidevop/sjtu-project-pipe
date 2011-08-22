

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationKeyDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationKey.h"
#include "vtkGarbageCollector.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationKey^ vtkInformationKey::NewInstance()
{
  ::vtkInformationKey* retVal = static_cast<::vtkInformationKey*>(vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->NewInstance());
  return gcnew vtkInformationKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationKey::Register(vtkObjectBase^ arg0)
{
  ::vtkObjectBase* arg0Wrap = static_cast<::vtkObjectBase*>(arg0->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->Register(arg0Wrap);
}



void vtkInformationKey::UnRegister(vtkObjectBase^ arg0)
{
  ::vtkObjectBase* arg0Wrap = static_cast<::vtkObjectBase*>(arg0->GetNativePointer().ToPointer());
  vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->UnRegister(arg0Wrap);
}



System::String^ vtkInformationKey::GetName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->GetName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkInformationKey::GetLocation()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->GetLocation();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkInformationKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



void vtkInformationKey::DeepCopy(vtkInformation^ arg0, vtkInformation^ arg1)
{
  ::vtkInformation* arg0Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg0->GetNativePointer());
  ::vtkInformation* arg1Wrap = vtk::ConvertManagedToNative<::vtkInformation>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->DeepCopy(arg0Wrap, arg1Wrap);
}



void vtkInformationKey::Remove(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->Remove(infoWrap);
}



void vtkInformationKey::Report(vtkInformation^ info, vtkGarbageCollector^ collector)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkGarbageCollector* collectorWrap = vtk::ConvertManagedToNative<::vtkGarbageCollector>(collector->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->Report(infoWrap, collectorWrap);
}



void vtkInformationKey::Print(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationKey>(m_instance)->Print(infoWrap);
}



  vtkInformationKey::vtkInformationKey(System::IntPtr native, bool bConst) : vtkObjectBase(native, bConst) {}



  vtkInformationKey::vtkInformationKey(bool donothing) : vtkObjectBase(donothing) {}



  vtkInformationKey::vtkInformationKey() : vtkObjectBase(false) {
  this->SetNativePointer(IntPtr(::vtkInformationKey::New()));
}



  vtkInformationKey::~vtkInformationKey() { }





} // end namespace vtkFiltering
