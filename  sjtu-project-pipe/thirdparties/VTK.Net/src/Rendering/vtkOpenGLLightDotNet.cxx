

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLLightDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLLight.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLLight::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLLight>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLLight::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLLight>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLLight^ vtkOpenGLLight::NewInstance()
{
  ::vtkOpenGLLight* retVal = static_cast<::vtkOpenGLLight*>(vtk::ConvertManagedToNative<::vtkOpenGLLight>(m_instance)->NewInstance());
  return gcnew vtkOpenGLLight(IntPtr(retVal), false);
}



vtkOpenGLLight^ vtkOpenGLLight::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOpenGLLight* retVal = static_cast<::vtkOpenGLLight*>(::vtkOpenGLLight::SafeDownCast(oWrap));
  return gcnew vtkOpenGLLight(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLLight::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLLight>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLLight::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLLight>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLLight::Render(vtkRenderer^ ren, int light_index)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkOpenGLLight>(m_instance)->Render(renWrap, light_index);
}



  vtkOpenGLLight::vtkOpenGLLight(System::IntPtr native, bool bConst) : vtkLight(native, bConst) {}



  vtkOpenGLLight::vtkOpenGLLight(bool donothing) : vtkLight(donothing) {}



  vtkOpenGLLight::vtkOpenGLLight() : vtkLight(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLLight::New()));
}



  vtkOpenGLLight::~vtkOpenGLLight() { }





} // end namespace vtkRendering
