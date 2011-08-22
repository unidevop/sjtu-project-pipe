

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleTrackballCameraDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleTrackballCamera.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleTrackballCamera::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleTrackballCamera::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleTrackballCamera^ vtkInteractorStyleTrackballCamera::NewInstance()
{
  ::vtkInteractorStyleTrackballCamera* retVal = static_cast<::vtkInteractorStyleTrackballCamera*>(vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleTrackballCamera(IntPtr(retVal), false);
}



vtkInteractorStyleTrackballCamera^ vtkInteractorStyleTrackballCamera::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleTrackballCamera* retVal = static_cast<::vtkInteractorStyleTrackballCamera*>(::vtkInteractorStyleTrackballCamera::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleTrackballCamera(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleTrackballCamera::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleTrackballCamera::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleTrackballCamera::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleTrackballCamera::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleTrackballCamera::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleTrackballCamera::OnMiddleButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnMiddleButtonDown();
}



void vtkInteractorStyleTrackballCamera::OnMiddleButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnMiddleButtonUp();
}



void vtkInteractorStyleTrackballCamera::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyleTrackballCamera::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyleTrackballCamera::OnMouseWheelForward()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnMouseWheelForward();
}



void vtkInteractorStyleTrackballCamera::OnMouseWheelBackward()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->OnMouseWheelBackward();
}



void vtkInteractorStyleTrackballCamera::Rotate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->Rotate();
}



void vtkInteractorStyleTrackballCamera::Spin()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->Spin();
}



void vtkInteractorStyleTrackballCamera::Pan()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->Pan();
}



void vtkInteractorStyleTrackballCamera::Dolly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballCamera>(m_instance)->Dolly();
}



  vtkInteractorStyleTrackballCamera::vtkInteractorStyleTrackballCamera(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleTrackballCamera::vtkInteractorStyleTrackballCamera(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleTrackballCamera::vtkInteractorStyleTrackballCamera() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleTrackballCamera::New()));
}



  vtkInteractorStyleTrackballCamera::~vtkInteractorStyleTrackballCamera() { }





} // end namespace vtkRendering
