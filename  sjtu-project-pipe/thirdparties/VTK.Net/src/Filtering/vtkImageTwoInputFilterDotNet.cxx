

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageTwoInputFilterDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageTwoInputFilter.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkImageTwoInputFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageTwoInputFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageTwoInputFilter^ vtkImageTwoInputFilter::NewInstance()
{
  ::vtkImageTwoInputFilter* retVal = static_cast<::vtkImageTwoInputFilter*>(vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->NewInstance());
  return gcnew vtkImageTwoInputFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageTwoInputFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageTwoInputFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageTwoInputFilter::SetInput1(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->SetInput1(inputWrap);
}



void vtkImageTwoInputFilter::SetInput2(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->SetInput2(inputWrap);
}



vtkImageData^ vtkImageTwoInputFilter::GetInput1()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->GetInput1());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkImageTwoInputFilter::GetInput2()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageTwoInputFilter>(m_instance)->GetInput2());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkImageTwoInputFilter::vtkImageTwoInputFilter(System::IntPtr native, bool bConst) : vtkImageMultipleInputFilter(native, bConst) {}



  vtkImageTwoInputFilter::vtkImageTwoInputFilter(bool donothing) : vtkImageMultipleInputFilter(donothing) {}



  vtkImageTwoInputFilter::vtkImageTwoInputFilter() : vtkImageMultipleInputFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageTwoInputFilter::New()));
}



  vtkImageTwoInputFilter::~vtkImageTwoInputFilter() { }





} // end namespace vtkFiltering
