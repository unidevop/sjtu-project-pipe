

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageToImageFilterDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageToImageFilter.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkImageToImageFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageToImageFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageToImageFilter^ vtkImageToImageFilter::NewInstance()
{
  ::vtkImageToImageFilter* retVal = static_cast<::vtkImageToImageFilter*>(vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->NewInstance());
  return gcnew vtkImageToImageFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageToImageFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageToImageFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageToImageFilter::SetInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->SetInput(inputWrap);
}



vtkImageData^ vtkImageToImageFilter::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageToImageFilter::SetBypass(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->SetBypass(arg0);
}



void vtkImageToImageFilter::BypassOn()
{
  vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->BypassOn();
}



void vtkImageToImageFilter::BypassOff()
{
  vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->BypassOff();
}



int vtkImageToImageFilter::GetBypass()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->GetBypass();
  return retVal;
}



void vtkImageToImageFilter::ThreadedExecute(vtkImageData^ inData, vtkImageData^ outData, array<int>^ extent, int threadId)
{
  ::vtkImageData* inDataWrap = vtk::ConvertManagedToNative<::vtkImageData>(inData->GetNativePointer());
  ::vtkImageData* outDataWrap = vtk::ConvertManagedToNative<::vtkImageData>(outData->GetNativePointer());
  pin_ptr<int> extentPin = &extent[0];
  int* nativeextentPin = extentPin;
  vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->ThreadedExecute(inDataWrap, outDataWrap, nativeextentPin, threadId);
}



void vtkImageToImageFilter::SetNumberOfThreads(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->SetNumberOfThreads(arg0);
}



int vtkImageToImageFilter::GetNumberOfThreadsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->GetNumberOfThreadsMinValue();
  return retVal;
}



int vtkImageToImageFilter::GetNumberOfThreadsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->GetNumberOfThreadsMaxValue();
  return retVal;
}



int vtkImageToImageFilter::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->GetNumberOfThreads();
  return retVal;
}



void vtkImageToImageFilter::SetInputMemoryLimit(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->SetInputMemoryLimit(arg0);
}



long vtkImageToImageFilter::GetInputMemoryLimit()
{
  long retVal = vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->GetInputMemoryLimit();
  return retVal;
}



int vtkImageToImageFilter::SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total)
{
  pin_ptr<int> splitExtPin = &splitExt[0];
  int* nativesplitExtPin = splitExtPin;
  pin_ptr<int> startExtPin = &startExt[0];
  int* nativestartExtPin = startExtPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageToImageFilter>(m_instance)->SplitExtent(nativesplitExtPin, nativestartExtPin, num, total);
  return retVal;
}



  vtkImageToImageFilter::vtkImageToImageFilter(System::IntPtr native, bool bConst) : vtkImageSource(native, bConst) {}



  vtkImageToImageFilter::vtkImageToImageFilter(bool donothing) : vtkImageSource(donothing) {}



  vtkImageToImageFilter::vtkImageToImageFilter() : vtkImageSource(false) {
  this->SetNativePointer(IntPtr(::vtkImageToImageFilter::New()));
}



  vtkImageToImageFilter::~vtkImageToImageFilter() { }





} // end namespace vtkFiltering
