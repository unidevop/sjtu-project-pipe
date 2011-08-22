

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleTrackballActorDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleTrackballActor.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleTrackballActor::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleTrackballActor::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleTrackballActor^ vtkInteractorStyleTrackballActor::NewInstance()
{
  ::vtkInteractorStyleTrackballActor* retVal = static_cast<::vtkInteractorStyleTrackballActor*>(vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleTrackballActor(IntPtr(retVal), false);
}



vtkInteractorStyleTrackballActor^ vtkInteractorStyleTrackballActor::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleTrackballActor* retVal = static_cast<::vtkInteractorStyleTrackballActor*>(::vtkInteractorStyleTrackballActor::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleTrackballActor(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleTrackballActor::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleTrackballActor::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorStyleTrackballActor::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleTrackballActor::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleTrackballActor::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleTrackballActor::OnMiddleButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->OnMiddleButtonDown();
}



void vtkInteractorStyleTrackballActor::OnMiddleButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->OnMiddleButtonUp();
}



void vtkInteractorStyleTrackballActor::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyleTrackballActor::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyleTrackballActor::Rotate()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->Rotate();
}



void vtkInteractorStyleTrackballActor::Spin()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->Spin();
}



void vtkInteractorStyleTrackballActor::Pan()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->Pan();
}



void vtkInteractorStyleTrackballActor::Dolly()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->Dolly();
}



void vtkInteractorStyleTrackballActor::UniformScale()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleTrackballActor>(m_instance)->UniformScale();
}



  vtkInteractorStyleTrackballActor::vtkInteractorStyleTrackballActor(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleTrackballActor::vtkInteractorStyleTrackballActor(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleTrackballActor::vtkInteractorStyleTrackballActor() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleTrackballActor::New()));
}



  vtkInteractorStyleTrackballActor::~vtkInteractorStyleTrackballActor() { }





} // end namespace vtkRendering
