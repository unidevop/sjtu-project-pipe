

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorStyleUserDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorStyleUser.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorStyleUser::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleUser::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorStyleUser^ vtkInteractorStyleUser::NewInstance()
{
  ::vtkInteractorStyleUser* retVal = static_cast<::vtkInteractorStyleUser*>(vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->NewInstance());
  return gcnew vtkInteractorStyleUser(IntPtr(retVal), false);
}



vtkInteractorStyleUser^ vtkInteractorStyleUser::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorStyleUser* retVal = static_cast<::vtkInteractorStyleUser*>(::vtkInteractorStyleUser::SafeDownCast(oWrap));
  return gcnew vtkInteractorStyleUser(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorStyleUser::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorStyleUser::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<int>^ vtkInteractorStyleUser::GetLastPos()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->GetLastPos();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkInteractorStyleUser::GetOldPos()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->GetOldPos();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



int vtkInteractorStyleUser::GetShiftKey()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->GetShiftKey();
  return retVal;
}



int vtkInteractorStyleUser::GetCtrlKey()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->GetCtrlKey();
  return retVal;
}



int vtkInteractorStyleUser::GetChar()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->GetChar();
  return retVal;
}



System::String^ vtkInteractorStyleUser::GetKeySym()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->GetKeySym();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorStyleUser::GetButton()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->GetButton();
  return retVal;
}



void vtkInteractorStyleUser::OnMouseMove()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnMouseMove();
}



void vtkInteractorStyleUser::OnLeftButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnLeftButtonDown();
}



void vtkInteractorStyleUser::OnLeftButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnLeftButtonUp();
}



void vtkInteractorStyleUser::OnMiddleButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnMiddleButtonDown();
}



void vtkInteractorStyleUser::OnMiddleButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnMiddleButtonUp();
}



void vtkInteractorStyleUser::OnRightButtonDown()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnRightButtonDown();
}



void vtkInteractorStyleUser::OnRightButtonUp()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnRightButtonUp();
}



void vtkInteractorStyleUser::OnChar()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnChar();
}



void vtkInteractorStyleUser::OnKeyPress()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnKeyPress();
}



void vtkInteractorStyleUser::OnKeyRelease()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnKeyRelease();
}



void vtkInteractorStyleUser::OnExpose()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnExpose();
}



void vtkInteractorStyleUser::OnConfigure()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnConfigure();
}



void vtkInteractorStyleUser::OnEnter()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnEnter();
}



void vtkInteractorStyleUser::OnLeave()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnLeave();
}



void vtkInteractorStyleUser::OnTimer()
{
  vtk::ConvertManagedToNative<::vtkInteractorStyleUser>(m_instance)->OnTimer();
}



  vtkInteractorStyleUser::vtkInteractorStyleUser(System::IntPtr native, bool bConst) : vtkInteractorStyle(native, bConst) {}



  vtkInteractorStyleUser::vtkInteractorStyleUser(bool donothing) : vtkInteractorStyle(donothing) {}



  vtkInteractorStyleUser::vtkInteractorStyleUser() : vtkInteractorStyle(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorStyleUser::New()));
}



  vtkInteractorStyleUser::~vtkInteractorStyleUser() { }





} // end namespace vtkRendering
