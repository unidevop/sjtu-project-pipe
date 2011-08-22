

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRendererSourceDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkRendererSource.h"
#include "vtkImageData.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkRendererSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRendererSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRendererSource^ vtkRendererSource::NewInstance()
{
  ::vtkRendererSource* retVal = static_cast<::vtkRendererSource*>(vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->NewInstance());
  return gcnew vtkRendererSource(IntPtr(retVal), false);
}



vtkRendererSource^ vtkRendererSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRendererSource* retVal = static_cast<::vtkRendererSource*>(::vtkRendererSource::SafeDownCast(oWrap));
  return gcnew vtkRendererSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRendererSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRendererSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




unsigned long vtkRendererSource::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->GetMTime();
  return retVal;
}



void vtkRendererSource::SetInput(vtkRenderer^ arg0)
{
  ::vtkRenderer* arg0Wrap = vtk::ConvertManagedToNative<::vtkRenderer>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->SetInput(arg0Wrap);
}



vtkRenderer^ vtkRendererSource::GetInput()
{
  ::vtkRenderer* retVal = static_cast<::vtkRenderer*>(vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->GetInput());
  return gcnew vtkRenderer(IntPtr(retVal), false);
}



void vtkRendererSource::SetWholeWindow(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->SetWholeWindow(arg0);
}



int vtkRendererSource::GetWholeWindow()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->GetWholeWindow();
  return retVal;
}



void vtkRendererSource::WholeWindowOn()
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->WholeWindowOn();
}



void vtkRendererSource::WholeWindowOff()
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->WholeWindowOff();
}



void vtkRendererSource::SetRenderFlag(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->SetRenderFlag(arg0);
}



int vtkRendererSource::GetRenderFlag()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->GetRenderFlag();
  return retVal;
}



void vtkRendererSource::RenderFlagOn()
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->RenderFlagOn();
}



void vtkRendererSource::RenderFlagOff()
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->RenderFlagOff();
}



void vtkRendererSource::SetDepthValues(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->SetDepthValues(arg0);
}



int vtkRendererSource::GetDepthValues()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->GetDepthValues();
  return retVal;
}



void vtkRendererSource::DepthValuesOn()
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->DepthValuesOn();
}



void vtkRendererSource::DepthValuesOff()
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->DepthValuesOff();
}



void vtkRendererSource::SetDepthValuesInScalars(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->SetDepthValuesInScalars(arg0);
}



int vtkRendererSource::GetDepthValuesInScalars()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->GetDepthValuesInScalars();
  return retVal;
}



void vtkRendererSource::DepthValuesInScalarsOn()
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->DepthValuesInScalarsOn();
}



void vtkRendererSource::DepthValuesInScalarsOff()
{
  vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->DepthValuesInScalarsOff();
}



vtkImageData^ vtkRendererSource::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkRendererSource>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkRendererSource::vtkRendererSource(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkRendererSource::vtkRendererSource(bool donothing) : vtkAlgorithm(donothing) {}



  vtkRendererSource::vtkRendererSource() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRendererSource::New()));
}



  vtkRendererSource::~vtkRendererSource() { }





} // end namespace vtkRendering
