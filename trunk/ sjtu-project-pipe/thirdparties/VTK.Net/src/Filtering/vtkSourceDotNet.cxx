

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSourceDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkExecutiveDotNet.h"

// native includes
#include "strstream"
#include "vtkSource.h"
#include "vtkDataObject.h"
#include "vtkExecutive.h"

using namespace System;

namespace vtk {

System::String^ vtkSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSource^ vtkSource::NewInstance()
{
  ::vtkSource* retVal = static_cast<::vtkSource*>(vtk::ConvertManagedToNative<::vtkSource>(m_instance)->NewInstance());
  return gcnew vtkSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSource::Update()
{
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->Update();
}



void vtkSource::UpdateWholeExtent()
{
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->UpdateWholeExtent();
}



void vtkSource::UpdateInformation()
{
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->UpdateInformation();
}



void vtkSource::PropagateUpdateExtent(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->PropagateUpdateExtent(outputWrap);
}



void vtkSource::TriggerAsynchronousUpdate()
{
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->TriggerAsynchronousUpdate();
}



void vtkSource::UpdateData(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->UpdateData(outputWrap);
}



void vtkSource::ComputeInputUpdateExtents(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->ComputeInputUpdateExtents(outputWrap);
}



void vtkSource::SetReleaseDataFlag(int arg0)
{
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->SetReleaseDataFlag(arg0);
}



int vtkSource::GetReleaseDataFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSource>(m_instance)->GetReleaseDataFlag();
  return retVal;
}



void vtkSource::ReleaseDataFlagOn()
{
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->ReleaseDataFlagOn();
}



void vtkSource::ReleaseDataFlagOff()
{
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->ReleaseDataFlagOff();
}



int vtkSource::GetNumberOfOutputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSource>(m_instance)->GetNumberOfOutputs();
  return retVal;
}



void vtkSource::UnRegisterAllOutputs()
{
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->UnRegisterAllOutputs();
}



int vtkSource::GetOutputIndex(vtkDataObject^ out)
{
  ::vtkDataObject* outWrap = vtk::ConvertManagedToNative<::vtkDataObject>(out->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSource>(m_instance)->GetOutputIndex(outWrap);
  return retVal;
}



void vtkSource::SetExecutive(vtkExecutive^ executive)
{
  ::vtkExecutive* executiveWrap = vtk::ConvertManagedToNative<::vtkExecutive>(executive->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkSource>(m_instance)->SetExecutive(executiveWrap);
}



  vtkSource::vtkSource(System::IntPtr native, bool bConst) : vtkProcessObject(native, bConst) {}



  vtkSource::vtkSource(bool donothing) : vtkProcessObject(donothing) {}



  vtkSource::vtkSource() : vtkProcessObject(false) {
  this->SetNativePointer(IntPtr(::vtkSource::New()));
}



  vtkSource::~vtkSource() { }





} // end namespace vtkFiltering
