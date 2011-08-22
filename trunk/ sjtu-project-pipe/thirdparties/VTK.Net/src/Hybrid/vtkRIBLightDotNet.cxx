

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRIBLightDotNet.h"

// native includes
#include "strstream"
#include "vtkRIBLight.h"
#include "vtkObject.h"
#include "vtkRenderer.h"

using namespace System;

namespace vtk {

System::String^ vtkRIBLight::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRIBLight::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRIBLight^ vtkRIBLight::NewInstance()
{
  ::vtkRIBLight* retVal = static_cast<::vtkRIBLight*>(vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->NewInstance());
  return gcnew vtkRIBLight(IntPtr(retVal), false);
}



vtkRIBLight^ vtkRIBLight::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRIBLight* retVal = static_cast<::vtkRIBLight*>(::vtkRIBLight::SafeDownCast(oWrap));
  return gcnew vtkRIBLight(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRIBLight::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRIBLight::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRIBLight::ShadowsOn()
{
  vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->ShadowsOn();
}



void vtkRIBLight::ShadowsOff()
{
  vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->ShadowsOff();
}



void vtkRIBLight::SetShadows(int arg0)
{
  vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->SetShadows(arg0);
}



int vtkRIBLight::GetShadows()
{
  int retVal = vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->GetShadows();
  return retVal;
}



void vtkRIBLight::Render(vtkRenderer^ ren, int index)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRIBLight>(m_instance)->Render(renWrap, index);
}



  vtkRIBLight::vtkRIBLight(System::IntPtr native, bool bConst) : vtkLight(native, bConst) {}



  vtkRIBLight::vtkRIBLight(bool donothing) : vtkLight(donothing) {}



  vtkRIBLight::vtkRIBLight() : vtkLight(false) {
  this->SetNativePointer(IntPtr(::vtkRIBLight::New()));
}



  vtkRIBLight::~vtkRIBLight() { }





} // end namespace vtkHybrid
