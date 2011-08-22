

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLPolyDataMapperDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLPolyDataMapper.h"
#include "vtkActor.h"
#include "vtkObject.h"
#include "vtkRenderer.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLPolyDataMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLPolyDataMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLPolyDataMapper^ vtkOpenGLPolyDataMapper::NewInstance()
{
  ::vtkOpenGLPolyDataMapper* retVal = static_cast<::vtkOpenGLPolyDataMapper*>(vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper>(m_instance)->NewInstance());
  return gcnew vtkOpenGLPolyDataMapper(IntPtr(retVal), false);
}



vtkOpenGLPolyDataMapper^ vtkOpenGLPolyDataMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLPolyDataMapper* retVal = static_cast<::vtkOpenGLPolyDataMapper*>(::vtkOpenGLPolyDataMapper::SafeDownCast(oWrap));
  return gcnew vtkOpenGLPolyDataMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLPolyDataMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLPolyDataMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLPolyDataMapper::RenderPiece(vtkRenderer^ ren, vtkActor^ a)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkActor* aWrap = vtk::ConvertManagedToNative<::vtkActor>(a->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper>(m_instance)->RenderPiece(renWrap, aWrap);
}



void vtkOpenGLPolyDataMapper::ReleaseGraphicsResources(vtkWindow^ arg0)
{
  ::vtkWindow* arg0Wrap = vtk::ConvertManagedToNative<::vtkWindow>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper>(m_instance)->ReleaseGraphicsResources(arg0Wrap);
}



int vtkOpenGLPolyDataMapper::Draw(vtkRenderer^ ren, vtkActor^ a)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  ::vtkActor* aWrap = vtk::ConvertManagedToNative<::vtkActor>(a->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper>(m_instance)->Draw(renWrap, aWrap);
  return retVal;
}



  vtkOpenGLPolyDataMapper::vtkOpenGLPolyDataMapper(System::IntPtr native, bool bConst) : vtkPolyDataMapper(native, bConst) {}



  vtkOpenGLPolyDataMapper::vtkOpenGLPolyDataMapper(bool donothing) : vtkPolyDataMapper(donothing) {}



  vtkOpenGLPolyDataMapper::vtkOpenGLPolyDataMapper() : vtkPolyDataMapper(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLPolyDataMapper::New()));
}



  vtkOpenGLPolyDataMapper::~vtkOpenGLPolyDataMapper() { }





} // end namespace vtkRendering
