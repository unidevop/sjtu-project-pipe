

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLPropertyDotNet.h"
#include "vtkActorDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLProperty.h"
#include "vtkActor.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLProperty::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLProperty>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLProperty::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLProperty>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLProperty^ vtkOpenGLProperty::NewInstance()
{
  ::vtkOpenGLProperty* retVal = static_cast<::vtkOpenGLProperty*>(vtk::ConvertManagedToNative<::vtkOpenGLProperty>(m_instance)->NewInstance());
  return gcnew vtkOpenGLProperty(IntPtr(retVal), false);
}



vtkOpenGLProperty^ vtkOpenGLProperty::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLProperty* retVal = static_cast<::vtkOpenGLProperty*>(::vtkOpenGLProperty::SafeDownCast(oWrap));
  return gcnew vtkOpenGLProperty(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLProperty::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLProperty::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLProperty>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLProperty::Render(vtkActor^ a, vtkRenderer^ ren)
{
  ::vtkActor* aWrap = vtk::ConvertManagedToNative<::vtkActor>(a->GetNativePointer());
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLProperty>(m_instance)->Render(aWrap, renWrap);
}



void vtkOpenGLProperty::BackfaceRender(vtkActor^ a, vtkRenderer^ ren)
{
  ::vtkActor* aWrap = vtk::ConvertManagedToNative<::vtkActor>(a->GetNativePointer());
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLProperty>(m_instance)->BackfaceRender(aWrap, renWrap);
}



  vtkOpenGLProperty::vtkOpenGLProperty(System::IntPtr native, bool bConst) : vtkProperty(native, bConst) {}



  vtkOpenGLProperty::vtkOpenGLProperty(bool donothing) : vtkProperty(donothing) {}



  vtkOpenGLProperty::vtkOpenGLProperty() : vtkProperty(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLProperty::New()));
}



  vtkOpenGLProperty::~vtkOpenGLProperty() { }





} // end namespace vtkRendering
