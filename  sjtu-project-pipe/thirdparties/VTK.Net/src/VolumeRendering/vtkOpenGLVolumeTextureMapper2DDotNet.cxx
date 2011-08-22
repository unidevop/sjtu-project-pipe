

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLVolumeTextureMapper2DDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLVolumeTextureMapper2D.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLVolumeTextureMapper2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLVolumeTextureMapper2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLVolumeTextureMapper2D^ vtkOpenGLVolumeTextureMapper2D::NewInstance()
{
  ::vtkOpenGLVolumeTextureMapper2D* retVal = static_cast<::vtkOpenGLVolumeTextureMapper2D*>(vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper2D>(m_instance)->NewInstance());
  return gcnew vtkOpenGLVolumeTextureMapper2D(IntPtr(retVal), false);
}



vtkOpenGLVolumeTextureMapper2D^ vtkOpenGLVolumeTextureMapper2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLVolumeTextureMapper2D* retVal = static_cast<::vtkOpenGLVolumeTextureMapper2D*>(::vtkOpenGLVolumeTextureMapper2D::SafeDownCast(oWrap));
  return gcnew vtkOpenGLVolumeTextureMapper2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLVolumeTextureMapper2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLVolumeTextureMapper2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLVolumeTextureMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkOpenGLVolumeTextureMapper2D::vtkOpenGLVolumeTextureMapper2D(System::IntPtr native, bool bConst) : vtkVolumeTextureMapper2D(native, bConst) {}



  vtkOpenGLVolumeTextureMapper2D::vtkOpenGLVolumeTextureMapper2D(bool donothing) : vtkVolumeTextureMapper2D(donothing) {}



  vtkOpenGLVolumeTextureMapper2D::vtkOpenGLVolumeTextureMapper2D() : vtkVolumeTextureMapper2D(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLVolumeTextureMapper2D::New()));
}



  vtkOpenGLVolumeTextureMapper2D::~vtkOpenGLVolumeTextureMapper2D() { }





} // end namespace vtkVolumeRendering
