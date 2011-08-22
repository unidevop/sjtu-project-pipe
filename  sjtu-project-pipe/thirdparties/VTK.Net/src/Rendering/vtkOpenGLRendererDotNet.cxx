

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLRenderer.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLRenderer::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLRenderer::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLRenderer^ vtkOpenGLRenderer::NewInstance()
{
  ::vtkOpenGLRenderer* retVal = static_cast<::vtkOpenGLRenderer*>(vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->NewInstance());
  return gcnew vtkOpenGLRenderer(IntPtr(retVal), false);
}



vtkOpenGLRenderer^ vtkOpenGLRenderer::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLRenderer* retVal = static_cast<::vtkOpenGLRenderer*>(::vtkOpenGLRenderer::SafeDownCast(oWrap));
  return gcnew vtkOpenGLRenderer(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLRenderer::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLRenderer::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLRenderer::DeviceRender()
{
  vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->DeviceRender();
}



void vtkOpenGLRenderer::ClearLights()
{
  vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->ClearLights();
}



void vtkOpenGLRenderer::Clear()
{
  vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->Clear();
}



int vtkOpenGLRenderer::UpdateLights()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderer>(m_instance)->UpdateLights();
  return retVal;
}



  vtkOpenGLRenderer::vtkOpenGLRenderer(System::IntPtr native, bool bConst) : vtkRenderer(native, bConst) {}



  vtkOpenGLRenderer::vtkOpenGLRenderer(bool donothing) : vtkRenderer(donothing) {}



  vtkOpenGLRenderer::vtkOpenGLRenderer() : vtkRenderer(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLRenderer::New()));
}



  vtkOpenGLRenderer::~vtkOpenGLRenderer() { }





} // end namespace vtkRendering
