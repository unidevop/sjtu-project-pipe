

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDemandDrivenPipelineDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkInformationIntegerKeyDotNet.h"
#include "vtkInformationRequestKeyDotNet.h"

// native includes
#include "strstream"
#include "vtkDemandDrivenPipeline.h"
#include "vtkDataObject.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationRequestKey.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDemandDrivenPipeline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDemandDrivenPipeline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDemandDrivenPipeline^ vtkDemandDrivenPipeline::NewInstance()
{
  ::vtkDemandDrivenPipeline* retVal = static_cast<::vtkDemandDrivenPipeline*>(vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->NewInstance());
  return gcnew vtkDemandDrivenPipeline(IntPtr(retVal), false);
}



vtkDemandDrivenPipeline^ vtkDemandDrivenPipeline::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDemandDrivenPipeline* retVal = static_cast<::vtkDemandDrivenPipeline*>(::vtkDemandDrivenPipeline::SafeDownCast(oWrap));
  return gcnew vtkDemandDrivenPipeline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDemandDrivenPipeline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDemandDrivenPipeline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkDemandDrivenPipeline::Update()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->Update();
  return retVal;
}



int vtkDemandDrivenPipeline::Update(int port)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->Update(port);
  return retVal;
}



unsigned long vtkDemandDrivenPipeline::GetPipelineMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->GetPipelineMTime();
  return retVal;
}



int vtkDemandDrivenPipeline::SetReleaseDataFlag(int port, int n)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->SetReleaseDataFlag(port, n);
  return retVal;
}



int vtkDemandDrivenPipeline::GetReleaseDataFlag(int port)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->GetReleaseDataFlag(port);
  return retVal;
}



int vtkDemandDrivenPipeline::UpdatePipelineMTime()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->UpdatePipelineMTime();
  return retVal;
}



int vtkDemandDrivenPipeline::UpdateDataObject()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->UpdateDataObject();
  return retVal;
}



int vtkDemandDrivenPipeline::UpdateInformation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->UpdateInformation();
  return retVal;
}



int vtkDemandDrivenPipeline::UpdateData(int outputPort)
{
  int retVal = vtk::ConvertManagedToNative<::vtkDemandDrivenPipeline>(m_instance)->UpdateData(outputPort);
  return retVal;
}



vtkInformationRequestKey^ vtkDemandDrivenPipeline::REQUEST_DATA_OBJECT()
{
  ::vtkInformationRequestKey* retVal = static_cast<::vtkInformationRequestKey*>(::vtkDemandDrivenPipeline::REQUEST_DATA_OBJECT());
  return gcnew vtkInformationRequestKey(IntPtr(retVal), false);
}



vtkInformationRequestKey^ vtkDemandDrivenPipeline::REQUEST_INFORMATION()
{
  ::vtkInformationRequestKey* retVal = static_cast<::vtkInformationRequestKey*>(::vtkDemandDrivenPipeline::REQUEST_INFORMATION());
  return gcnew vtkInformationRequestKey(IntPtr(retVal), false);
}



vtkInformationRequestKey^ vtkDemandDrivenPipeline::REQUEST_DATA()
{
  ::vtkInformationRequestKey* retVal = static_cast<::vtkInformationRequestKey*>(::vtkDemandDrivenPipeline::REQUEST_DATA());
  return gcnew vtkInformationRequestKey(IntPtr(retVal), false);
}



vtkInformationRequestKey^ vtkDemandDrivenPipeline::REQUEST_DATA_NOT_GENERATED()
{
  ::vtkInformationRequestKey* retVal = static_cast<::vtkInformationRequestKey*>(::vtkDemandDrivenPipeline::REQUEST_DATA_NOT_GENERATED());
  return gcnew vtkInformationRequestKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDemandDrivenPipeline::RELEASE_DATA()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDemandDrivenPipeline::RELEASE_DATA());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkInformationIntegerKey^ vtkDemandDrivenPipeline::DATA_NOT_GENERATED()
{
  ::vtkInformationIntegerKey* retVal = static_cast<::vtkInformationIntegerKey*>(::vtkDemandDrivenPipeline::DATA_NOT_GENERATED());
  return gcnew vtkInformationIntegerKey(IntPtr(retVal), false);
}



vtkDataObject^ vtkDemandDrivenPipeline::NewDataObject(System::String^ type)
{
  char* typeWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(type).ToPointer());
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(::vtkDemandDrivenPipeline::NewDataObject(typeWrap));
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(typeWrap));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



  vtkDemandDrivenPipeline::vtkDemandDrivenPipeline(System::IntPtr native, bool bConst) : vtkExecutive(native, bConst) {}



  vtkDemandDrivenPipeline::vtkDemandDrivenPipeline(bool donothing) : vtkExecutive(donothing) {}



  vtkDemandDrivenPipeline::vtkDemandDrivenPipeline() : vtkExecutive(false) {
  this->SetNativePointer(IntPtr(::vtkDemandDrivenPipeline::New()));
}



  vtkDemandDrivenPipeline::~vtkDemandDrivenPipeline() { }





} // end namespace vtkFiltering
