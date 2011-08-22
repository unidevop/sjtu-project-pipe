

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationExecutivePortKeyDotNet.h"
#include "vtkExecutiveDotNet.h"
#include "vtkInformationDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationExecutivePortKey.h"
#include "vtkExecutive.h"
#include "vtkGarbageCollector.h"
#include "vtkInformation.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationExecutivePortKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationExecutivePortKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationExecutivePortKey^ vtkInformationExecutivePortKey::NewInstance()
{
  ::vtkInformationExecutivePortKey* retVal = static_cast<::vtkInformationExecutivePortKey*>(vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->NewInstance());
  return gcnew vtkInformationExecutivePortKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationExecutivePortKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationExecutivePortKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationExecutivePortKey::Set(vtkInformation^ info, vtkExecutive^ arg1, int arg2)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkExecutive* arg1Wrap = vtk::ConvertManagedToNative<::vtkExecutive>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->Set(infoWrap, arg1Wrap, arg2);
}



vtkExecutive^ vtkInformationExecutivePortKey::GetExecutive(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkExecutive* retVal = static_cast<::vtkExecutive*>(vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->GetExecutive(infoWrap));
  return gcnew vtkExecutive(IntPtr(retVal), false);
}



int vtkInformationExecutivePortKey::GetPort(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->GetPort(infoWrap);
  return retVal;
}



int vtkInformationExecutivePortKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationExecutivePortKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



void vtkInformationExecutivePortKey::Report(vtkInformation^ info, vtkGarbageCollector^ collector)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkGarbageCollector* collectorWrap = vtk::ConvertManagedToNative<::vtkGarbageCollector>(collector->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationExecutivePortKey>(m_instance)->Report(infoWrap, collectorWrap);
}



  vtkInformationExecutivePortKey::vtkInformationExecutivePortKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationExecutivePortKey::vtkInformationExecutivePortKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationExecutivePortKey::vtkInformationExecutivePortKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationExecutivePortKey::New()));
}



  vtkInformationExecutivePortKey::~vtkInformationExecutivePortKey() { }





} // end namespace vtkFiltering
