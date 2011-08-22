

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLImageMapperDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLImageMapper.h"
#include "vtkActor2D.h"
#include "vtkImageData.h"
#include "vtkObject.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLImageMapper::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLImageMapper>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLImageMapper::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLImageMapper>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLImageMapper^ vtkOpenGLImageMapper::NewInstance()
{
  ::vtkOpenGLImageMapper* retVal = static_cast<::vtkOpenGLImageMapper*>(vtk::ConvertManagedToNative<::vtkOpenGLImageMapper>(m_instance)->NewInstance());
  return gcnew vtkOpenGLImageMapper(IntPtr(retVal), false);
}



vtkOpenGLImageMapper^ vtkOpenGLImageMapper::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLImageMapper* retVal = static_cast<::vtkOpenGLImageMapper*>(::vtkOpenGLImageMapper::SafeDownCast(oWrap));
  return gcnew vtkOpenGLImageMapper(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLImageMapper::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLImageMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLImageMapper::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLImageMapper>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLImageMapper::RenderOverlay(vtkViewport^ viewport, vtkActor2D^ actor)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  ::vtkActor2D* actorWrap = vtk::ConvertManagedToNative<::vtkActor2D>(actor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLImageMapper>(m_instance)->RenderOverlay(viewportWrap, actorWrap);
}



void vtkOpenGLImageMapper::RenderData(vtkViewport^ viewport, vtkImageData^ data, vtkActor2D^ actor)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  ::vtkImageData* dataWrap = vtk::ConvertManagedToNative<::vtkImageData>(data->GetNativePointer());
  ::vtkActor2D* actorWrap = vtk::ConvertManagedToNative<::vtkActor2D>(actor->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLImageMapper>(m_instance)->RenderData(viewportWrap, dataWrap, actorWrap);
}



  vtkOpenGLImageMapper::vtkOpenGLImageMapper(System::IntPtr native, bool bConst) : vtkImageMapper(native, bConst) {}



  vtkOpenGLImageMapper::vtkOpenGLImageMapper(bool donothing) : vtkImageMapper(donothing) {}



  vtkOpenGLImageMapper::vtkOpenGLImageMapper() : vtkImageMapper(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLImageMapper::New()));
}



  vtkOpenGLImageMapper::~vtkOpenGLImageMapper() { }





} // end namespace vtkRendering
