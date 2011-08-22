

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageCacheFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageCacheFilter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageCacheFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageCacheFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageCacheFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageCacheFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageCacheFilter^ vtkImageCacheFilter::NewInstance()
{
  ::vtkImageCacheFilter* retVal = static_cast<::vtkImageCacheFilter*>(vtk::ConvertManagedToNative<::vtkImageCacheFilter>(m_instance)->NewInstance());
  return gcnew vtkImageCacheFilter(IntPtr(retVal), false);
}



vtkImageCacheFilter^ vtkImageCacheFilter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageCacheFilter* retVal = static_cast<::vtkImageCacheFilter*>(::vtkImageCacheFilter::SafeDownCast(oWrap));
  return gcnew vtkImageCacheFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageCacheFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageCacheFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageCacheFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageCacheFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageCacheFilter::SetCacheSize(int size)
{
  vtk::ConvertManagedToNative<::vtkImageCacheFilter>(m_instance)->SetCacheSize(size);
}



int vtkImageCacheFilter::GetCacheSize()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageCacheFilter>(m_instance)->GetCacheSize();
  return retVal;
}



  vtkImageCacheFilter::vtkImageCacheFilter(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageCacheFilter::vtkImageCacheFilter(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageCacheFilter::vtkImageCacheFilter() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageCacheFilter::New()));
}



  vtkImageCacheFilter::~vtkImageCacheFilter() { }





} // end namespace vtkImaging
