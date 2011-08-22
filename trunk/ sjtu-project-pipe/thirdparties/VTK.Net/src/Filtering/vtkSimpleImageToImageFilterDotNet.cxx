

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSimpleImageToImageFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkSimpleImageToImageFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkSimpleImageToImageFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSimpleImageToImageFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSimpleImageToImageFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSimpleImageToImageFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSimpleImageToImageFilter^ vtkSimpleImageToImageFilter::NewInstance()
{
  ::vtkSimpleImageToImageFilter* retVal = static_cast<::vtkSimpleImageToImageFilter*>(vtk::ConvertManagedToNative<::vtkSimpleImageToImageFilter>(m_instance)->NewInstance());
  return gcnew vtkSimpleImageToImageFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSimpleImageToImageFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSimpleImageToImageFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSimpleImageToImageFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSimpleImageToImageFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkSimpleImageToImageFilter::vtkSimpleImageToImageFilter(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkSimpleImageToImageFilter::vtkSimpleImageToImageFilter(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkSimpleImageToImageFilter::vtkSimpleImageToImageFilter() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkSimpleImageToImageFilter::New()));
}



  vtkSimpleImageToImageFilter::~vtkSimpleImageToImageFilter() { }





} // end namespace vtkFiltering
