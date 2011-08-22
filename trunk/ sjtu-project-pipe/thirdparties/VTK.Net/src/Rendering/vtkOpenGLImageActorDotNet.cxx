

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLImageActorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLImageActor.h"
#include "vtkObject.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLImageActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLImageActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLImageActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLImageActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLImageActor^ vtkOpenGLImageActor::NewInstance()
{
  ::vtkOpenGLImageActor* retVal = static_cast<::vtkOpenGLImageActor*>(vtk::ConvertManagedToNative<::vtkOpenGLImageActor>(m_instance)->NewInstance());
  return gcnew vtkOpenGLImageActor(IntPtr(retVal), false);
}



vtkOpenGLImageActor^ vtkOpenGLImageActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLImageActor* retVal = static_cast<::vtkOpenGLImageActor*>(::vtkOpenGLImageActor::SafeDownCast(oWrap));
  return gcnew vtkOpenGLImageActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLImageActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLImageActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLImageActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLImageActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLImageActor::Load(vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLImageActor>(m_instance)->Load(renWrap);
}



void vtkOpenGLImageActor::Render(vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLImageActor>(m_instance)->Render(renWrap);
}



void vtkOpenGLImageActor::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLImageActor>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



  vtkOpenGLImageActor::vtkOpenGLImageActor(System::IntPtr native, bool bConst) : vtkImageActor(native, bConst) {}



  vtkOpenGLImageActor::vtkOpenGLImageActor(bool donothing) : vtkImageActor(donothing) {}



  vtkOpenGLImageActor::vtkOpenGLImageActor() : vtkImageActor(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLImageActor::New()));
}



  vtkOpenGLImageActor::~vtkOpenGLImageActor() { }





} // end namespace vtkRendering
