

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLVolumeTextureMapper3DDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLVolumeTextureMapper3D.h"
#include "vtkObject.h"
#include "vtkVolumeProperty.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLVolumeTextureMapper3D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper3D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLVolumeTextureMapper3D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper3D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLVolumeTextureMapper3D^ vtkOpenGLVolumeTextureMapper3D::NewInstance()
{
  ::vtkOpenGLVolumeTextureMapper3D* retVal = static_cast<::vtkOpenGLVolumeTextureMapper3D*>(vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper3D>(m_instance)->NewInstance());
  return gcnew vtkOpenGLVolumeTextureMapper3D(IntPtr(retVal), false);
}



vtkOpenGLVolumeTextureMapper3D^ vtkOpenGLVolumeTextureMapper3D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLVolumeTextureMapper3D* retVal = static_cast<::vtkOpenGLVolumeTextureMapper3D*>(::vtkOpenGLVolumeTextureMapper3D::SafeDownCast(oWrap));
  return gcnew vtkOpenGLVolumeTextureMapper3D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLVolumeTextureMapper3D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLVolumeTextureMapper3D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper3D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkOpenGLVolumeTextureMapper3D::IsRenderSupported(vtkVolumeProperty^ arg0)
{
  ::vtkVolumeProperty* arg0Wrap = vtk::ConvertManagedToNative<::vtkVolumeProperty>(arg0->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper3D>(m_instance)->IsRenderSupported(arg0Wrap);
  return retVal;
}



int vtkOpenGLVolumeTextureMapper3D::GetInitialized()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper3D>(m_instance)->GetInitialized();
  return retVal;
}



void vtkOpenGLVolumeTextureMapper3D::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper3D>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



  vtkOpenGLVolumeTextureMapper3D::vtkOpenGLVolumeTextureMapper3D(System::IntPtr native, bool bConst) : vtkVolumeTextureMapper3D(native, bConst) {}



  vtkOpenGLVolumeTextureMapper3D::vtkOpenGLVolumeTextureMapper3D(bool donothing) : vtkVolumeTextureMapper3D(donothing) {}



  vtkOpenGLVolumeTextureMapper3D::vtkOpenGLVolumeTextureMapper3D() : vtkVolumeTextureMapper3D(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLVolumeTextureMapper3D::New()));
}



  vtkOpenGLVolumeTextureMapper3D::~vtkOpenGLVolumeTextureMapper3D() { }





} // end namespace vtkVolumeRendering
