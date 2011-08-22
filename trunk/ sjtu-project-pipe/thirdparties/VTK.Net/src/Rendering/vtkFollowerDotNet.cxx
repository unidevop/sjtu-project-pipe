

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkFollowerDotNet.h"
#include "vtkCameraDotNet.h"
#include "vtkRendererDotNet.h"

// native includes
#include "strstream"
#include "vtkFollower.h"
#include "vtkCamera.h"
#include "vtkMatrix4x4.h"
#include "vtkObject.h"
#include "vtkProp.h"
#include "vtkRenderer.h"
#include "vtkViewport.h"

using namespace System;

namespace vtk {

System::String^ vtkFollower::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkFollower::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkFollower^ vtkFollower::NewInstance()
{
  ::vtkFollower* retVal = static_cast<::vtkFollower*>(vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->NewInstance());
  return gcnew vtkFollower(IntPtr(retVal), false);
}



vtkFollower^ vtkFollower::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkFollower* retVal = static_cast<::vtkFollower*>(::vtkFollower::SafeDownCast(oWrap));
  return gcnew vtkFollower(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkFollower::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkFollower::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkFollower::SetCamera(vtkCamera^ arg0)
{
  ::vtkCamera* arg0Wrap = vtk::ConvertManagedToNative<::vtkCamera>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->SetCamera(arg0Wrap);
}



vtkCamera^ vtkFollower::GetCamera()
{
  ::vtkCamera* retVal = static_cast<::vtkCamera*>(vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->GetCamera());
  return gcnew vtkCamera(IntPtr(retVal), false);
}



int vtkFollower::RenderOpaqueGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->RenderOpaqueGeometry(viewportWrap);
  return retVal;
}



int vtkFollower::RenderTranslucentGeometry(vtkViewport^ viewport)
{
  ::vtkViewport* viewportWrap = vtk::ConvertManagedToNative<::vtkViewport>(viewport->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->RenderTranslucentGeometry(viewportWrap);
  return retVal;
}



void vtkFollower::Render(vtkRenderer^ ren)
{
  ::vtkRenderer* renWrap = vtk::ConvertManagedToNative<::vtkRenderer>(ren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->Render(renWrap);
}



void vtkFollower::GetMatrix(vtkMatrix4x4^ m)
{
  ::vtkMatrix4x4* mWrap = vtk::ConvertManagedToNative<::vtkMatrix4x4>(m->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->GetMatrix(mWrap);
}



void vtkFollower::GetMatrix(array<double>^ m)
{
  pin_ptr<double> mPin = &m[0];
  double* nativemPin = mPin;
  vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->GetMatrix(nativemPin);
}



vtkMatrix4x4^ vtkFollower::GetMatrix()
{
  ::vtkMatrix4x4* retVal = static_cast<::vtkMatrix4x4*>(vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->GetMatrix());
  return gcnew vtkMatrix4x4(IntPtr(retVal), false);
}



void vtkFollower::ShallowCopy(vtkProp^ prop)
{
  ::vtkProp* propWrap = vtk::ConvertManagedToNative<::vtkProp>(prop->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkFollower>(m_instance)->ShallowCopy(propWrap);
}



  vtkFollower::vtkFollower(System::IntPtr native, bool bConst) : vtkActor(native, bConst) {}



  vtkFollower::vtkFollower(bool donothing) : vtkActor(donothing) {}



  vtkFollower::vtkFollower() : vtkActor(false) {
  this->SetNativePointer(IntPtr(::vtkFollower::New()));
}



  vtkFollower::~vtkFollower() { }





} // end namespace vtkRendering
