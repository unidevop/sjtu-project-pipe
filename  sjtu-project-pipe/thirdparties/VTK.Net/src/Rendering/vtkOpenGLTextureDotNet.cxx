

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLTextureDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLTexture.h"
#include "vtkObject.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLTexture::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLTexture>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLTexture::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLTexture>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLTexture^ vtkOpenGLTexture::NewInstance()
{
  ::vtkOpenGLTexture* retVal = static_cast<::vtkOpenGLTexture*>(vtk::ConvertManagedToNative<::vtkOpenGLTexture>(m_instance)->NewInstance());
  return gcnew vtkOpenGLTexture(IntPtr(retVal), false);
}



vtkOpenGLTexture^ vtkOpenGLTexture::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLTexture* retVal = static_cast<::vtkOpenGLTexture*>(::vtkOpenGLTexture::SafeDownCast(oWrap));
  return gcnew vtkOpenGLTexture(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLTexture::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLTexture::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLTexture>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLTexture::Load(vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLTexture>(m_instance)->Load(renWrap);
}



void vtkOpenGLTexture::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLTexture>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



  vtkOpenGLTexture::vtkOpenGLTexture(System::IntPtr native, bool bConst) : vtkTexture(native, bConst) {}



  vtkOpenGLTexture::vtkOpenGLTexture(bool donothing) : vtkTexture(donothing) {}



  vtkOpenGLTexture::vtkOpenGLTexture() : vtkTexture(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLTexture::New()));
}



  vtkOpenGLTexture::~vtkOpenGLTexture() { }





} // end namespace vtkRendering
