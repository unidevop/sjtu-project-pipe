

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCachedStreamingDemandDrivenPipelineDotNet.h"

// native includes
#include "strstream"
#include "vtkCachedStreamingDemandDrivenPipeline.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkCachedStreamingDemandDrivenPipeline::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCachedStreamingDemandDrivenPipeline::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCachedStreamingDemandDrivenPipeline^ vtkCachedStreamingDemandDrivenPipeline::NewInstance()
{
  ::vtkCachedStreamingDemandDrivenPipeline* retVal = static_cast<::vtkCachedStreamingDemandDrivenPipeline*>(vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->NewInstance());
  return gcnew vtkCachedStreamingDemandDrivenPipeline(IntPtr(retVal), false);
}



vtkCachedStreamingDemandDrivenPipeline^ vtkCachedStreamingDemandDrivenPipeline::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCachedStreamingDemandDrivenPipeline* retVal = static_cast<::vtkCachedStreamingDemandDrivenPipeline*>(::vtkCachedStreamingDemandDrivenPipeline::SafeDownCast(oWrap));
  return gcnew vtkCachedStreamingDemandDrivenPipeline(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCachedStreamingDemandDrivenPipeline::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCachedStreamingDemandDrivenPipeline::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkCachedStreamingDemandDrivenPipeline::Update()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->Update();
  return retVal;
}



int vtkCachedStreamingDemandDrivenPipeline::Update(int port)
{
  int retVal = vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->Update(port);
  return retVal;
}



void vtkCachedStreamingDemandDrivenPipeline::SetCacheSize(int size)
{
  vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->SetCacheSize(size);
}



int vtkCachedStreamingDemandDrivenPipeline::GetCacheSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkCachedStreamingDemandDrivenPipeline>(m_instance)->GetCacheSize();
  return retVal;
}



  vtkCachedStreamingDemandDrivenPipeline::vtkCachedStreamingDemandDrivenPipeline(System::IntPtr native, bool bConst) : vtkStreamingDemandDrivenPipeline(native, bConst) {}



  vtkCachedStreamingDemandDrivenPipeline::vtkCachedStreamingDemandDrivenPipeline(bool donothing) : vtkStreamingDemandDrivenPipeline(donothing) {}



  vtkCachedStreamingDemandDrivenPipeline::vtkCachedStreamingDemandDrivenPipeline() : vtkStreamingDemandDrivenPipeline(false) {
  this->SetNativePointer(IntPtr(::vtkCachedStreamingDemandDrivenPipeline::New()));
}



  vtkCachedStreamingDemandDrivenPipeline::~vtkCachedStreamingDemandDrivenPipeline() { }





} // end namespace vtkFiltering
