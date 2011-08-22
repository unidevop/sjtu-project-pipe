

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationExecutivePortVectorKeyDotNet.h"
#include "vtkExecutiveDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationExecutivePortVectorKey.h"
#include "vtkExecutive.h"
#include "vtkGarbageCollector.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationExecutivePortVectorKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationExecutivePortVectorKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationExecutivePortVectorKey^ vtkInformationExecutivePortVectorKey::NewInstance()
{
  ::vtkInformationExecutivePortVectorKey* retVal = static_cast<::vtkInformationExecutivePortVectorKey*>(vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->NewInstance());
  return gcnew vtkInformationExecutivePortVectorKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationExecutivePortVectorKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationExecutivePortVectorKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationExecutivePortVectorKey::Append(vtkInformation^ info, vtkExecutive^ executive, int port)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkExecutive* executiveWrap = vtk::ConvertManagedToNative<::vtkExecutive>(executive->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->Append(infoWrap, executiveWrap, port);
}



void vtkInformationExecutivePortVectorKey::Remove(vtkInformation^ info, vtkExecutive^ executive, int port)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkExecutive* executiveWrap = vtk::ConvertManagedToNative<::vtkExecutive>(executive->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->Remove(infoWrap, executiveWrap, port);
}



int vtkInformationExecutivePortVectorKey::Length(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->Length(infoWrap);
  return retVal;
}



int vtkInformationExecutivePortVectorKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationExecutivePortVectorKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



void vtkInformationExecutivePortVectorKey::Remove(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->Remove(infoWrap);
}



void vtkInformationExecutivePortVectorKey::Report(vtkInformation^ info, vtkGarbageCollector^ collector)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkGarbageCollector* collectorWrap = vtk::ConvertManagedToNative<::vtkGarbageCollector>(collector->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationExecutivePortVectorKey>(m_instance)->Report(infoWrap, collectorWrap);
}



  vtkInformationExecutivePortVectorKey::vtkInformationExecutivePortVectorKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationExecutivePortVectorKey::vtkInformationExecutivePortVectorKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationExecutivePortVectorKey::vtkInformationExecutivePortVectorKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationExecutivePortVectorKey::New()));
}



  vtkInformationExecutivePortVectorKey::~vtkInformationExecutivePortVectorKey() { }





} // end namespace vtkFiltering
