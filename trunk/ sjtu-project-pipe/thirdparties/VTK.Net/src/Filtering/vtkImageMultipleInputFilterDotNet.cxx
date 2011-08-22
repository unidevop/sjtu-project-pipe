

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMultipleInputFilterDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMultipleInputFilter.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMultipleInputFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMultipleInputFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMultipleInputFilter^ vtkImageMultipleInputFilter::NewInstance()
{
  ::vtkImageMultipleInputFilter* retVal = static_cast<::vtkImageMultipleInputFilter*>(vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->NewInstance());
  return gcnew vtkImageMultipleInputFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMultipleInputFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMultipleInputFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageMultipleInputFilter::SetInput(int num, vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->SetInput(num, inputWrap);
}



void vtkImageMultipleInputFilter::AddInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->AddInput(inputWrap);
}



void vtkImageMultipleInputFilter::RemoveInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->RemoveInput(inputWrap);
}



vtkImageData^ vtkImageMultipleInputFilter::GetInput(int num)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->GetInput(num));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkImageMultipleInputFilter::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageMultipleInputFilter::SetBypass(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->SetBypass(arg0);
}



int vtkImageMultipleInputFilter::GetBypass()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->GetBypass();
  return retVal;
}



void vtkImageMultipleInputFilter::BypassOn()
{
  vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->BypassOn();
}



void vtkImageMultipleInputFilter::BypassOff()
{
  vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->BypassOff();
}



void vtkImageMultipleInputFilter::SetNumberOfThreads(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->SetNumberOfThreads(arg0);
}



int vtkImageMultipleInputFilter::GetNumberOfThreadsMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->GetNumberOfThreadsMinValue();
  return retVal;
}



int vtkImageMultipleInputFilter::GetNumberOfThreadsMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->GetNumberOfThreadsMaxValue();
  return retVal;
}



int vtkImageMultipleInputFilter::GetNumberOfThreads()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->GetNumberOfThreads();
  return retVal;
}



int vtkImageMultipleInputFilter::SplitExtent(array<int>^ splitExt, array<int>^ startExt, int num, int total)
{
  pin_ptr<int> splitExtPin = &splitExt[0];
  int* nativesplitExtPin = splitExtPin;
  pin_ptr<int> startExtPin = &startExt[0];
  int* nativestartExtPin = startExtPin;
  int retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputFilter>(m_instance)->SplitExtent(nativesplitExtPin, nativestartExtPin, num, total);
  return retVal;
}



  vtkImageMultipleInputFilter::vtkImageMultipleInputFilter(System::IntPtr native, bool bConst) : vtkImageSource(native, bConst) {}



  vtkImageMultipleInputFilter::vtkImageMultipleInputFilter(bool donothing) : vtkImageSource(donothing) {}



  vtkImageMultipleInputFilter::vtkImageMultipleInputFilter() : vtkImageSource(false) {
  this->SetNativePointer(IntPtr(::vtkImageMultipleInputFilter::New()));
}



  vtkImageMultipleInputFilter::~vtkImageMultipleInputFilter() { }





} // end namespace vtkFiltering
