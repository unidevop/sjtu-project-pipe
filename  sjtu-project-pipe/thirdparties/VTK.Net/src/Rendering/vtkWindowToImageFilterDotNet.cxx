

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWindowToImageFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkWindowToImageFilter.h"
#include "vtkImageData.h"
#include "vtkObject.h"
#include "vtkWindow.h"

using namespace System;

namespace vtk {

System::String^ vtkWindowToImageFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWindowToImageFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWindowToImageFilter^ vtkWindowToImageFilter::NewInstance()
{
  ::vtkWindowToImageFilter* retVal = static_cast<::vtkWindowToImageFilter*>(vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->NewInstance());
  return gcnew vtkWindowToImageFilter(IntPtr(retVal), false);
}



vtkWindowToImageFilter^ vtkWindowToImageFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWindowToImageFilter* retVal = static_cast<::vtkWindowToImageFilter*>(::vtkWindowToImageFilter::SafeDownCast(oWrap));
  return gcnew vtkWindowToImageFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWindowToImageFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWindowToImageFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWindowToImageFilter::SetInput(vtkWindow^ input)
{
  ::vtkWindow* inputWrap = vtk::ConvertManagedToNative<::vtkWindow>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetInput(inputWrap);
}



vtkWindow^ vtkWindowToImageFilter::GetInput()
{
  ::vtkWindow* retVal = static_cast<::vtkWindow*>(vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetInput());
  return gcnew vtkWindow(IntPtr(retVal), false);
}



void vtkWindowToImageFilter::SetMagnification(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetMagnification(arg0);
}



int vtkWindowToImageFilter::GetMagnificationMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetMagnificationMinValue();
  return retVal;
}



int vtkWindowToImageFilter::GetMagnificationMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetMagnificationMaxValue();
  return retVal;
}



int vtkWindowToImageFilter::GetMagnification()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetMagnification();
  return retVal;
}



void vtkWindowToImageFilter::ReadFrontBufferOn()
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->ReadFrontBufferOn();
}



void vtkWindowToImageFilter::ReadFrontBufferOff()
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->ReadFrontBufferOff();
}



int vtkWindowToImageFilter::GetReadFrontBuffer()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetReadFrontBuffer();
  return retVal;
}



void vtkWindowToImageFilter::SetReadFrontBuffer(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetReadFrontBuffer(arg0);
}



void vtkWindowToImageFilter::ShouldRerenderOn()
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->ShouldRerenderOn();
}



void vtkWindowToImageFilter::ShouldRerenderOff()
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->ShouldRerenderOff();
}



void vtkWindowToImageFilter::SetShouldRerender(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetShouldRerender(arg0);
}



int vtkWindowToImageFilter::GetShouldRerender()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetShouldRerender();
  return retVal;
}



void vtkWindowToImageFilter::SetViewport(double arg0, double arg1, double arg2, double arg3)
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetViewport(arg0, arg1, arg2, arg3);
}



void vtkWindowToImageFilter::SetViewport(array<double>^ a)
{
  pin_ptr<double> aPin = &a[0];
  double* nativeaPin = aPin;
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetViewport(nativeaPin);
}



array<double>^ vtkWindowToImageFilter::GetViewport()
{
  const double* retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetViewport();
  array<double>^ mRetVal = gcnew array<double>(4);
  for (size_t cprIdx=0; cprIdx<4; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



void vtkWindowToImageFilter::SetInputBufferType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetInputBufferType(arg0);
}



int vtkWindowToImageFilter::GetInputBufferType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetInputBufferType();
  return retVal;
}



void vtkWindowToImageFilter::SetInputBufferTypeToRGB()
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetInputBufferTypeToRGB();
}



void vtkWindowToImageFilter::SetInputBufferTypeToRGBA()
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetInputBufferTypeToRGBA();
}



void vtkWindowToImageFilter::SetInputBufferTypeToZBuffer()
{
  vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->SetInputBufferTypeToZBuffer();
}



vtkImageData^ vtkWindowToImageFilter::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkWindowToImageFilter>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkWindowToImageFilter::vtkWindowToImageFilter(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkWindowToImageFilter::vtkWindowToImageFilter(bool donothing) : vtkAlgorithm(donothing) {}



  vtkWindowToImageFilter::vtkWindowToImageFilter() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkWindowToImageFilter::New()));
}



  vtkWindowToImageFilter::~vtkWindowToImageFilter() { }





} // end namespace vtkRendering
