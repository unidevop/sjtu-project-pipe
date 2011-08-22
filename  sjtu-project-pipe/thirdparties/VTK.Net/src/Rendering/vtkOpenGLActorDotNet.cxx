

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLActorDotNet.h"
#include "vtkMapperDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLActor.h"
#include "vtkMapper.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLActor^ vtkOpenGLActor::NewInstance()
{
  ::vtkOpenGLActor* retVal = static_cast<::vtkOpenGLActor*>(vtk::ConvertManagedToNative<::vtkOpenGLActor>(m_instance)->NewInstance());
  return gcnew vtkOpenGLActor(IntPtr(retVal), false);
}



vtkOpenGLActor^ vtkOpenGLActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLActor* retVal = static_cast<::vtkOpenGLActor*>(::vtkOpenGLActor::SafeDownCast(oWrap));
  return gcnew vtkOpenGLActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLActor::Render(vtkRenderer^ ren, vtkMapper^ mapper)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkMapper* mapperWrap = vtk::ConvertManagedToNative<::vtkMapper>(mapper->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLActor>(m_instance)->Render(renWrap, mapperWrap);
}



  vtkOpenGLActor::vtkOpenGLActor(System::IntPtr native, bool bConst) : vtkActor(native, bConst) {}



  vtkOpenGLActor::vtkOpenGLActor(bool donothing) : vtkActor(donothing) {}



  vtkOpenGLActor::vtkOpenGLActor() : vtkActor(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLActor::New()));
}



  vtkOpenGLActor::~vtkOpenGLActor() { }





} // end namespace vtkRendering
