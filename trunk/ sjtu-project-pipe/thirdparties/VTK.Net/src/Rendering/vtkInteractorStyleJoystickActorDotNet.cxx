

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleJoystickActorDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleJoystickActor.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleJoystickActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleJoystickActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleJoystickActor^ vtkInteractorStyleJoystickActor::NewInstance()
{
  ::vtkInteractorStyleJoystickActor* retVal = static_cast<::vtkInteractorStyleJoystickActor*>(vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleJoystickActor(IntPtr(retVal), false);
}



vtkInteractorStyleJoystickActor^ vtkInteractorStyleJoystickActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleJoystickActor* retVal = static_cast<::vtkInteractorStyleJoystickActor*>(::vtkInteractorStyleJoystickActor::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleJoystickActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleJoystickActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleJoystickActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleJoystickActor::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleJoystickActor::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleJoystickActor::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleJoystickActor::OnMiddleButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->OnMiddleButtonDown();
}



void vtkInteractorStyleJoystickActor::OnMiddleButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->OnMiddleButtonUp();
}



void vtkInteractorStyleJoystickActor::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyleJoystickActor::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyleJoystickActor::Rotate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->Rotate();
}



void vtkInteractorStyleJoystickActor::Spin()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->Spin();
}



void vtkInteractorStyleJoystickActor::Pan()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->Pan();
}



void vtkInteractorStyleJoystickActor::Dolly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->Dolly();
}



void vtkInteractorStyleJoystickActor::UniformScale()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickActor>(m_instance)->UniformScale();
}



  vtkInteractorStyleJoystickActor::vtkInteractorStyleJoystickActor(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleJoystickActor::vtkInteractorStyleJoystickActor(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleJoystickActor::vtkInteractorStyleJoystickActor() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleJoystickActor::New()));
}



  vtkInteractorStyleJoystickActor::~vtkInteractorStyleJoystickActor() { }





} // end namespace vtkRendering
