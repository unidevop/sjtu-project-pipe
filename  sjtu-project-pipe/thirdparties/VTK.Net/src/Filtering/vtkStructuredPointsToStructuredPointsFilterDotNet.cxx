

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsToStructuredPointsFilterDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPointsToStructuredPointsFilter.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPointsToStructuredPointsFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsToStructuredPointsFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPointsToStructuredPointsFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsToStructuredPointsFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPointsToStructuredPointsFilter^ vtkStructuredPointsToStructuredPointsFilter::NewInstance()
{
  ::vtkStructuredPointsToStructuredPointsFilter* retVal = static_cast<::vtkStructuredPointsToStructuredPointsFilter*>(vtk::ConvertManagedToNative<::vtkStructuredPointsToStructuredPointsFilter>(m_instance)->NewInstance());
  return gcnew vtkStructuredPointsToStructuredPointsFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredPointsToStructuredPointsFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredPointsToStructuredPointsFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredPointsToStructuredPointsFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredPointsToStructuredPointsFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredPointsToStructuredPointsFilter::SetInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredPointsToStructuredPointsFilter>(m_instance)->SetInput(inputWrap);
}



vtkImageData^ vtkStructuredPointsToStructuredPointsFilter::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkStructuredPointsToStructuredPointsFilter>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkStructuredPointsToStructuredPointsFilter::vtkStructuredPointsToStructuredPointsFilter(System::IntPtr native, bool bConst) : vtkStructuredPointsSource(native, bConst) {}



  vtkStructuredPointsToStructuredPointsFilter::vtkStructuredPointsToStructuredPointsFilter(bool donothing) : vtkStructuredPointsSource(donothing) {}



  vtkStructuredPointsToStructuredPointsFilter::vtkStructuredPointsToStructuredPointsFilter() : vtkStructuredPointsSource(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPointsToStructuredPointsFilter::New()));
}



  vtkStructuredPointsToStructuredPointsFilter::~vtkStructuredPointsToStructuredPointsFilter() { }





} // end namespace vtkFiltering
