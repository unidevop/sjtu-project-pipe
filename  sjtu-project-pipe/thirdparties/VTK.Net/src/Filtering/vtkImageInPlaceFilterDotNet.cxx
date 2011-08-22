

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageInPlaceFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageInPlaceFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkImageInPlaceFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageInPlaceFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageInPlaceFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageInPlaceFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageInPlaceFilter^ vtkImageInPlaceFilter::NewInstance()
{
  ::vtkImageInPlaceFilter* retVal = static_cast<::vtkImageInPlaceFilter*>(vtk::ConvertManagedToNative<::vtkImageInPlaceFilter>(m_instance)->NewInstance());
  return gcnew vtkImageInPlaceFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageInPlaceFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageInPlaceFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageInPlaceFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageInPlaceFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




  vtkImageInPlaceFilter::vtkImageInPlaceFilter(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageInPlaceFilter::vtkImageInPlaceFilter(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageInPlaceFilter::vtkImageInPlaceFilter() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageInPlaceFilter::New()));
}



  vtkImageInPlaceFilter::~vtkImageInPlaceFilter() { }





} // end namespace vtkFiltering
