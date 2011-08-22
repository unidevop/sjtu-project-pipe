

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInformationInformationVectorKeyDotNet.h"
#include "vtkInformationDotNet.h"
#include "vtkInformationVectorDotNet.h"

// native includes
#include "strstream"
#include "vtkInformationInformationVectorKey.h"
#include "vtkGarbageCollector.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"

using namespace System;

namespace vtk {

System::String^ vtkInformationInformationVectorKey::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInformationInformationVectorKey::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInformationInformationVectorKey^ vtkInformationInformationVectorKey::NewInstance()
{
  ::vtkInformationInformationVectorKey* retVal = static_cast<::vtkInformationInformationVectorKey*>(vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->NewInstance());
  return gcnew vtkInformationInformationVectorKey(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInformationInformationVectorKey::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInformationInformationVectorKey::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInformationInformationVectorKey::Set(vtkInformation^ info, vtkInformationVector^ arg1)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkInformationVector* arg1Wrap = vtk::ConvertManagedToNative<::vtkInformationVector>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->Set(infoWrap, arg1Wrap);
}



vtkInformationVector^ vtkInformationInformationVectorKey::Get(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkInformationVector* retVal = static_cast<::vtkInformationVector*>(vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->Get(infoWrap));
  return gcnew vtkInformationVector(IntPtr(retVal), false);
}



int vtkInformationInformationVectorKey::Has(vtkInformation^ info)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->Has(infoWrap);
  return retVal;
}



void vtkInformationInformationVectorKey::ShallowCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->ShallowCopy(fromWrap, toWrap);
}



void vtkInformationInformationVectorKey::DeepCopy(vtkInformation^ from, vtkInformation^ to)
{
  ::vtkInformation* fromWrap = vtk::ConvertManagedToNative<::vtkInformation>(from->GetNativePointer());
  ::vtkInformation* toWrap = vtk::ConvertManagedToNative<::vtkInformation>(to->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->DeepCopy(fromWrap, toWrap);
}



void vtkInformationInformationVectorKey::Report(vtkInformation^ info, vtkGarbageCollector^ collector)
{
  ::vtkInformation* infoWrap = vtk::ConvertManagedToNative<::vtkInformation>(info->GetNativePointer());
  ::vtkGarbageCollector* collectorWrap = vtk::ConvertManagedToNative<::vtkGarbageCollector>(collector->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInformationInformationVectorKey>(m_instance)->Report(infoWrap, collectorWrap);
}



  vtkInformationInformationVectorKey::vtkInformationInformationVectorKey(System::IntPtr native, bool bConst) : vtkInformationKey(native, bConst) {}



  vtkInformationInformationVectorKey::vtkInformationInformationVectorKey(bool donothing) : vtkInformationKey(donothing) {}



  vtkInformationInformationVectorKey::vtkInformationInformationVectorKey() : vtkInformationKey(false) {
  this->SetNativePointer(IntPtr(::vtkInformationInformationVectorKey::New()));
}



  vtkInformationInformationVectorKey::~vtkInformationInformationVectorKey() { }





} // end namespace vtkFiltering
