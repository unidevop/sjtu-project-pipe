

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLCameraDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLCamera.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLCamera::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLCamera>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLCamera::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLCamera>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLCamera^ vtkOpenGLCamera::NewInstance()
{
  ::vtkOpenGLCamera* retVal = static_cast<::vtkOpenGLCamera*>(vtk::ConvertManagedToNative<::vtkOpenGLCamera>(m_instance)->NewInstance());
  return gcnew vtkOpenGLCamera(IntPtr(retVal), false);
}



vtkOpenGLCamera^ vtkOpenGLCamera::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLCamera* retVal = static_cast<::vtkOpenGLCamera*>(::vtkOpenGLCamera::SafeDownCast(oWrap));
  return gcnew vtkOpenGLCamera(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLCamera::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLCamera>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLCamera::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLCamera>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLCamera::Render(vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLCamera>(m_instance)->Render(renWrap);
}



void vtkOpenGLCamera::UpdateViewport(vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLCamera>(m_instance)->UpdateViewport(renWrap);
}



  vtkOpenGLCamera::vtkOpenGLCamera(System::IntPtr native, bool bConst) : vtkCamera(native, bConst) {}



  vtkOpenGLCamera::vtkOpenGLCamera(bool donothing) : vtkCamera(donothing) {}



  vtkOpenGLCamera::vtkOpenGLCamera() : vtkCamera(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLCamera::New()));
}



  vtkOpenGLCamera::~vtkOpenGLCamera() { }





} // end namespace vtkRendering
