

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWindowDotNet.h"
#include "vtkUnsignedCharArrayDotNet.h"

// native includes
#include "strstream"
#include "vtkWindow.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWindow^ vtkWindow::NewInstance()
{
  ::vtkWindow* retVal = static_cast<::vtkWindow*>(vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->NewInstance());
  return gcnew vtkWindow(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWindow::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWindow::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWindow::SetDisplayId(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetDisplayId(arg0.ToPointer());
}



void vtkWindow::SetWindowId(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetWindowId(arg0.ToPointer());
}



void vtkWindow::SetParentId(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetParentId(arg0.ToPointer());
}



System::IntPtr vtkWindow::GetGenericDisplayId()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetGenericDisplayId();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkWindow::GetGenericWindowId()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetGenericWindowId();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkWindow::GetGenericParentId()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetGenericParentId();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkWindow::GetGenericContext()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetGenericContext();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



System::IntPtr vtkWindow::GetGenericDrawable()
{
  void* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetGenericDrawable();
  IntPtr retValWrap(retVal);
  return retValWrap;
}



void vtkWindow::SetWindowInfo(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetWindowInfo(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkWindow::SetParentInfo(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetParentInfo(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



array<int>^ vtkWindow::GetPosition()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetPosition();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWindow::SetPosition(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetPosition(arg0, arg1);
}



void vtkWindow::SetPosition(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetPosition(nativeaPin);
}



array<int>^ vtkWindow::GetSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetSize();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWindow::SetSize(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetSize(arg0, arg1);
}



void vtkWindow::SetSize(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetSize(nativeaPin);
}



void vtkWindow::SetMapped(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetMapped(arg0);
}



int vtkWindow::GetMapped()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetMapped();
  return retVal;
}



void vtkWindow::MappedOn()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->MappedOn();
}



void vtkWindow::MappedOff()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->MappedOff();
}



void vtkWindow::SetErase(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetErase(arg0);
}



int vtkWindow::GetErase()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetErase();
  return retVal;
}



void vtkWindow::EraseOn()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->EraseOn();
}



void vtkWindow::EraseOff()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->EraseOff();
}



void vtkWindow::SetDoubleBuffer(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetDoubleBuffer(arg0);
}



int vtkWindow::GetDoubleBuffer()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetDoubleBuffer();
  return retVal;
}



void vtkWindow::DoubleBufferOn()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->DoubleBufferOn();
}



void vtkWindow::DoubleBufferOff()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->DoubleBufferOff();
}



System::String^ vtkWindow::GetWindowName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetWindowName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkWindow::SetWindowName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetWindowName(arg0Wrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



void vtkWindow::Render()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->Render();
}



int vtkWindow::GetPixelData(int arg0, int arg1, int arg2, int arg3, int arg4, vtkUnsignedCharArray^ arg5)
{
  ::vtkUnsignedCharArray* arg5Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg5->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetPixelData(arg0, arg1, arg2, arg3, arg4, arg5Wrap);
  return retVal;
}



int vtkWindow::GetDPI()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetDPI();
  return retVal;
}



void vtkWindow::SetDPI(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetDPI(arg0);
}



int vtkWindow::GetDPIMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetDPIMinValue();
  return retVal;
}



int vtkWindow::GetDPIMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetDPIMaxValue();
  return retVal;
}



void vtkWindow::SetOffScreenRendering(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetOffScreenRendering(arg0);
}



int vtkWindow::GetOffScreenRendering()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetOffScreenRendering();
  return retVal;
}



void vtkWindow::OffScreenRenderingOn()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->OffScreenRenderingOn();
}



void vtkWindow::OffScreenRenderingOff()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->OffScreenRenderingOff();
}



void vtkWindow::MakeCurrent()
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->MakeCurrent();
}



void vtkWindow::SetTileScale(int arg0, int arg1)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetTileScale(arg0, arg1);
}



void vtkWindow::SetTileScale(array<int>^ a)
{
  pin_ptr<int> aPin = &a[0];
  int* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetTileScale(nativeaPin);
}



array<int>^ vtkWindow::GetTileScale()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetTileScale();
  array<int>^ mRetVal = gcnew array<int>(2);
  for (size_t cprIdx=0; cprIdx<2; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWindow::SetTileScale(int s)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetTileScale(s);
}



void vtkWindow::SetTileViewport(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetTileViewport(arg0, arg1, arg2, arg3);
}



void vtkWindow::SetTileViewport(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->SetTileViewport(nativeaPin);
}



array<double>^ vtkWindow::GetTileViewport()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkWindow>(m_instance)->GetTileViewport();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkWindow::vtkWindow(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkWindow::vtkWindow(bool donothing) : vtkObject(donothing) {}



  vtkWindow::vtkWindow() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkWindow::New()));
}



  vtkWindow::~vtkWindow() { }





} // end namespace vtkCommon
