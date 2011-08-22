

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLFreeTypeTextMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLFreeTypeTextMapper.h"
#include "vtkActor2D.h"
#include "vtkObject.h"
#include "vtkViewport.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLFreeTypeTextMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLFreeTypeTextMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLFreeTypeTextMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLFreeTypeTextMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLFreeTypeTextMapper^ vtkOpenGLFreeTypeTextMapper::NewInstance()
{
  ::vtkOpenGLFreeTypeTextMapper* retVal = static_cast<::vtkOpenGLFreeTypeTextMapper*>(vtk::ConvertManagedToNative<::vtkOpenGLFreeTypeTextMapper>(m_instance)->NewInstance());
  return gcnew vtkOpenGLFreeTypeTextMapper(IntPtr(retVal), false);
}



vtkOpenGLFreeTypeTextMapper^ vtkOpenGLFreeTypeTextMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLFreeTypeTextMapper* retVal = static_cast<::vtkOpenGLFreeTypeTextMapper*>(::vtkOpenGLFreeTypeTextMapper::SafeDownCast(oWrap));
  return gcnew vtkOpenGLFreeTypeTextMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLFreeTypeTextMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLFreeTypeTextMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLFreeTypeTextMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLFreeTypeTextMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLFreeTypeTextMapper::RenderOverlay(vtkViewport^ viewport, vtkActor2D^ actor)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  ::vtkActor2D* actorWrap = vtk::ConvertManagedToNative<::vtkActor2D>(actor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLFreeTypeTextMapper>(m_instance)->RenderOverlay(viewportWrap, actorWrap);
}



void vtkOpenGLFreeTypeTextMapper::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLFreeTypeTextMapper>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



void vtkOpenGLFreeTypeTextMapper::GetSize(vtkViewport^ viewport, array<int>^ size)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  pin_ptr<int> sizePin = &size[0];
  int* nativesizePin = sizePin;
  vtk::ConvertManagedToNative<::vtkOpenGLFreeTypeTextMapper>(m_instance)->GetSize(viewportWrap, nativesizePin);
}



  vtkOpenGLFreeTypeTextMapper::vtkOpenGLFreeTypeTextMapper(System::IntPtr native, bool bConst) : vtkTextMapper(native, bConst) {}



  vtkOpenGLFreeTypeTextMapper::vtkOpenGLFreeTypeTextMapper(bool donothing) : vtkTextMapper(donothing) {}



  vtkOpenGLFreeTypeTextMapper::vtkOpenGLFreeTypeTextMapper() : vtkTextMapper(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLFreeTypeTextMapper::New()));
}



  vtkOpenGLFreeTypeTextMapper::~vtkOpenGLFreeTypeTextMapper() { }





} // end namespace vtkRendering
