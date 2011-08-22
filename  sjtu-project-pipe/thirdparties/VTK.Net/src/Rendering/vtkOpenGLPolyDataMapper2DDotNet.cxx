

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLPolyDataMapper2DDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLPolyDataMapper2D.h"
#include "vtkActor2D.h"
#include "vtkObject.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLPolyDataMapper2D::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper2D>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLPolyDataMapper2D::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper2D>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLPolyDataMapper2D^ vtkOpenGLPolyDataMapper2D::NewInstance()
{
  ::vtkOpenGLPolyDataMapper2D* retVal = static_cast<::vtkOpenGLPolyDataMapper2D*>(vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper2D>(m_instance)->NewInstance());
  return gcnew vtkOpenGLPolyDataMapper2D(IntPtr(retVal), false);
}



vtkOpenGLPolyDataMapper2D^ vtkOpenGLPolyDataMapper2D::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLPolyDataMapper2D* retVal = static_cast<::vtkOpenGLPolyDataMapper2D*>(::vtkOpenGLPolyDataMapper2D::SafeDownCast(oWrap));
  return gcnew vtkOpenGLPolyDataMapper2D(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLPolyDataMapper2D::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLPolyDataMapper2D::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper2D>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLPolyDataMapper2D::RenderOverlay(vtkViewport^ viewport, vtkActor2D^ actor)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  ::vtkActor2D* actorWrap = vtk::ConvertManagedToNative<::vtkActor2D>(actor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLPolyDataMapper2D>(m_instance)->RenderOverlay(viewportWrap, actorWrap);
}



  vtkOpenGLPolyDataMapper2D::vtkOpenGLPolyDataMapper2D(System::IntPtr native, bool bConst) : vtkPolyDataMapper2D(native, bConst) {}



  vtkOpenGLPolyDataMapper2D::vtkOpenGLPolyDataMapper2D(bool donothing) : vtkPolyDataMapper2D(donothing) {}



  vtkOpenGLPolyDataMapper2D::vtkOpenGLPolyDataMapper2D() : vtkPolyDataMapper2D(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLPolyDataMapper2D::New()));
}



  vtkOpenGLPolyDataMapper2D::~vtkOpenGLPolyDataMapper2D() { }





} // end namespace vtkRendering
