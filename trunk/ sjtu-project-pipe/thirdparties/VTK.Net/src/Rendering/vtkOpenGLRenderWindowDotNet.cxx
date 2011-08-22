

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOpenGLRenderWindowDotNet.h"

// native includes
#include "strstream"
#include "vtkOpenGLRenderWindow.h"
#include "vtkFloatArray.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkOpenGLRenderWindow::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOpenGLRenderWindow::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOpenGLRenderWindow^ vtkOpenGLRenderWindow::NewInstance()
{
  ::vtkOpenGLRenderWindow* retVal = static_cast<::vtkOpenGLRenderWindow*>(vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->NewInstance());
  return gcnew vtkOpenGLRenderWindow(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOpenGLRenderWindow::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOpenGLRenderWindow::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkOpenGLRenderWindow::SetGlobalMaximumNumberOfMultiSamples(int val)
{
  ::vtkOpenGLRenderWindow::SetGlobalMaximumNumberOfMultiSamples(val);
}



int vtkOpenGLRenderWindow::GetGlobalMaximumNumberOfMultiSamples()
{
  int retVal = ::vtkOpenGLRenderWindow::GetGlobalMaximumNumberOfMultiSamples();
  return retVal;
}



void vtkOpenGLRenderWindow::SetMultiSamples(int arg0)
{
  vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetMultiSamples(arg0);
}



int vtkOpenGLRenderWindow::GetMultiSamples()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->GetMultiSamples();
  return retVal;
}



void vtkOpenGLRenderWindow::StereoUpdate()
{
  vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->StereoUpdate();
}



int vtkOpenGLRenderWindow::GetPixelData(int x, int y, int x2, int y2, int front, vtkUnsignedCharArray^ arg5)
{
  ::vtkUnsignedCharArray* arg5Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg5->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->GetPixelData(x, y, x2, y2, front, arg5Wrap);
  return retVal;
}



int vtkOpenGLRenderWindow::SetPixelData(int x, int y, int x2, int y2, array<unsigned char>^ arg4, int front)
{
  pin_ptr<unsigned char> arg4Pin = &arg4[0];
  unsigned char* nativearg4Pin = arg4Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetPixelData(x, y, x2, y2, nativearg4Pin, front);
  return retVal;
}



int vtkOpenGLRenderWindow::SetPixelData(int x, int y, int x2, int y2, vtkUnsignedCharArray^ arg4, int front)
{
  ::vtkUnsignedCharArray* arg4Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg4->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetPixelData(x, y, x2, y2, arg4Wrap, front);
  return retVal;
}



int vtkOpenGLRenderWindow::GetRGBAPixelData(int x, int y, int x2, int y2, int front, vtkFloatArray^ data)
{
  ::vtkFloatArray* dataWrap = vtk::ConvertManagedToNative<::vtkFloatArray>(data->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->GetRGBAPixelData(x, y, x2, y2, front, dataWrap);
  return retVal;
}



int vtkOpenGLRenderWindow::SetRGBAPixelData(int x, int y, int x2, int y2, array<float>^ arg4, int front, int blend)
{
  pin_ptr<float> arg4Pin = &arg4[0];
  float* nativearg4Pin = arg4Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetRGBAPixelData(x, y, x2, y2, nativearg4Pin, front, blend);
  return retVal;
}



int vtkOpenGLRenderWindow::SetRGBAPixelData(int x, int y, int x2, int y2, vtkFloatArray^ arg4, int front, int blend)
{
  ::vtkFloatArray* arg4Wrap = vtk::ConvertManagedToNative<::vtkFloatArray>(arg4->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetRGBAPixelData(x, y, x2, y2, arg4Wrap, front, blend);
  return retVal;
}



void vtkOpenGLRenderWindow::ReleaseRGBAPixelData(array<float>^ data)
{
  pin_ptr<float> dataPin = &data[0];
  float* nativedataPin = dataPin;
  vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->ReleaseRGBAPixelData(nativedataPin);
}



int vtkOpenGLRenderWindow::GetRGBACharPixelData(int x, int y, int x2, int y2, int front, vtkUnsignedCharArray^ data)
{
  ::vtkUnsignedCharArray* dataWrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(data->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->GetRGBACharPixelData(x, y, x2, y2, front, dataWrap);
  return retVal;
}



int vtkOpenGLRenderWindow::SetRGBACharPixelData(int x, int y, int x2, int y2, array<unsigned char>^ arg4, int front, int blend)
{
  pin_ptr<unsigned char> arg4Pin = &arg4[0];
  unsigned char* nativearg4Pin = arg4Pin;
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetRGBACharPixelData(x, y, x2, y2, nativearg4Pin, front, blend);
  return retVal;
}



int vtkOpenGLRenderWindow::SetRGBACharPixelData(int x, int y, int x2, int y2, vtkUnsignedCharArray^ arg4, int front, int blend)
{
  ::vtkUnsignedCharArray* arg4Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg4->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetRGBACharPixelData(x, y, x2, y2, arg4Wrap, front, blend);
  return retVal;
}



int vtkOpenGLRenderWindow::GetZbufferData(int x1, int y1, int x2, int y2, array<float>^ z)
{
  pin_ptr<float> zPin = &z[0];
  float* nativezPin = zPin;
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->GetZbufferData(x1, y1, x2, y2, nativezPin);
  return retVal;
}



int vtkOpenGLRenderWindow::GetZbufferData(int x1, int y1, int x2, int y2, vtkFloatArray^ z)
{
  ::vtkFloatArray* zWrap = vtk::ConvertManagedToNative<::vtkFloatArray>(z->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->GetZbufferData(x1, y1, x2, y2, zWrap);
  return retVal;
}



int vtkOpenGLRenderWindow::SetZbufferData(int x1, int y1, int x2, int y2, array<float>^ buffer)
{
  pin_ptr<float> bufferPin = &buffer[0];
  float* nativebufferPin = bufferPin;
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetZbufferData(x1, y1, x2, y2, nativebufferPin);
  return retVal;
}



int vtkOpenGLRenderWindow::SetZbufferData(int x1, int y1, int x2, int y2, vtkFloatArray^ buffer)
{
  ::vtkFloatArray* bufferWrap = vtk::ConvertManagedToNative<::vtkFloatArray>(buffer->GetNativePointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->SetZbufferData(x1, y1, x2, y2, bufferWrap);
  return retVal;
}



void vtkOpenGLRenderWindow::MakeCurrent()
{
  vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->MakeCurrent();
}



int vtkOpenGLRenderWindow::GetDepthBufferSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->GetDepthBufferSize();
  return retVal;
}



void vtkOpenGLRenderWindow::OpenGLInit()
{
  vtk::ConvertManagedToNative<::vtkOpenGLRenderWindow>(m_instance)->OpenGLInit();
}



  vtkOpenGLRenderWindow::vtkOpenGLRenderWindow(System::IntPtr native, bool bConst) : vtkRenderWindow(native, bConst) {}



  vtkOpenGLRenderWindow::vtkOpenGLRenderWindow(bool donothing) : vtkRenderWindow(donothing) {}



  vtkOpenGLRenderWindow::vtkOpenGLRenderWindow() : vtkRenderWindow(false) {
  this->SetNativePointer(IntPtr(::vtkOpenGLRenderWindow::New()));
}



  vtkOpenGLRenderWindow::~vtkOpenGLRenderWindow() { }





} // end namespace vtkRendering
