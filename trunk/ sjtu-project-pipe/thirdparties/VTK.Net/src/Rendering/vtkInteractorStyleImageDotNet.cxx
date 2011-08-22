

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleImageDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleImage.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleImage::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleImage::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleImage^ vtkInteractorStyleImage::NewInstance()
{
  ::vtkInteractorStyleImage* retVal = static_cast<::vtkInteractorStyleImage*>(vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleImage(IntPtr(retVal), false);
}



vtkInteractorStyleImage^ vtkInteractorStyleImage::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleImage* retVal = static_cast<::vtkInteractorStyleImage*>(::vtkInteractorStyleImage::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleImage(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleImage::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleImage::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<int>^ vtkInteractorStyleImage::GetWindowLevelStartPosition()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->GetWindowLevelStartPosition();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkInteractorStyleImage::GetWindowLevelCurrentPosition()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->GetWindowLevelCurrentPosition();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkInteractorStyleImage::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleImage::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleImage::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleImage::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyleImage::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyleImage::OnChar()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->OnChar();
}



void vtkInteractorStyleImage::WindowLevel()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->WindowLevel();
}



void vtkInteractorStyleImage::Pick()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->Pick();
}



void vtkInteractorStyleImage::StartWindowLevel()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->StartWindowLevel();
}



void vtkInteractorStyleImage::EndWindowLevel()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->EndWindowLevel();
}



void vtkInteractorStyleImage::StartPick()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->StartPick();
}



void vtkInteractorStyleImage::EndPick()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleImage>(m_instance)->EndPick();
}



  vtkInteractorStyleImage::vtkInteractorStyleImage(System::IntPtr native, bool bConst) : vtkInteractorStyleTrackballCamera(native, bConst) {}



  vtkInteractorStyleImage::vtkInteractorStyleImage(bool donothing) : vtkInteractorStyleTrackballCamera(donothing) {}



  vtkInteractorStyleImage::vtkInteractorStyleImage() : vtkInteractorStyleTrackballCamera(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleImage::New()));
}



  vtkInteractorStyleImage::~vtkInteractorStyleImage() { }





} // end namespace vtkRendering
