

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleJoystickCameraDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleJoystickCamera.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleJoystickCamera::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleJoystickCamera::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleJoystickCamera^ vtkInteractorStyleJoystickCamera::NewInstance()
{
  ::vtkInteractorStyleJoystickCamera* retVal = static_cast<::vtkInteractorStyleJoystickCamera*>(vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleJoystickCamera(IntPtr(retVal), false);
}



vtkInteractorStyleJoystickCamera^ vtkInteractorStyleJoystickCamera::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleJoystickCamera* retVal = static_cast<::vtkInteractorStyleJoystickCamera*>(::vtkInteractorStyleJoystickCamera::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleJoystickCamera(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleJoystickCamera::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleJoystickCamera::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleJoystickCamera::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleJoystickCamera::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleJoystickCamera::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleJoystickCamera::OnMiddleButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnMiddleButtonDown();
}



void vtkInteractorStyleJoystickCamera::OnMiddleButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnMiddleButtonUp();
}



void vtkInteractorStyleJoystickCamera::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyleJoystickCamera::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyleJoystickCamera::OnMouseWheelForward()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnMouseWheelForward();
}



void vtkInteractorStyleJoystickCamera::OnMouseWheelBackward()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->OnMouseWheelBackward();
}



void vtkInteractorStyleJoystickCamera::Rotate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->Rotate();
}



void vtkInteractorStyleJoystickCamera::Spin()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->Spin();
}



void vtkInteractorStyleJoystickCamera::Pan()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->Pan();
}



void vtkInteractorStyleJoystickCamera::Dolly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleJoystickCamera>(m_instance)->Dolly();
}



  vtkInteractorStyleJoystickCamera::vtkInteractorStyleJoystickCamera(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleJoystickCamera::vtkInteractorStyleJoystickCamera(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleJoystickCamera::vtkInteractorStyleJoystickCamera() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleJoystickCamera::New()));
}



  vtkInteractorStyleJoystickCamera::~vtkInteractorStyleJoystickCamera() { }





} // end namespace vtkRendering
