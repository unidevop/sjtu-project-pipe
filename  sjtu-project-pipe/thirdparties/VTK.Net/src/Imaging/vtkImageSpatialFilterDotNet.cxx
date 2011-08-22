

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageSpatialFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageSpatialFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkImageSpatialFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageSpatialFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageSpatialFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageSpatialFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageSpatialFilter^ vtkImageSpatialFilter::NewInstance()
{
  ::vtkImageSpatialFilter* retVal = static_cast<::vtkImageSpatialFilter*>(vtk::ConvertManagedToNative<::vtkImageSpatialFilter>(m_instance)->NewInstance());
  return gcnew vtkImageSpatialFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageSpatialFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageSpatialFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageSpatialFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageSpatialFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




array<int>^ vtkImageSpatialFilter::GetKernelSize()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageSpatialFilter>(m_instance)->GetKernelSize();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



array<int>^ vtkImageSpatialFilter::GetKernelMiddle()
{
  const int* retVal = vtk::ConvertManagedToNative<::vtkImageSpatialFilter>(m_instance)->GetKernelMiddle();
  array<int>^ mRetVal = gcnew array<int>(3);
  for (size_t cprIdx=0; cprIdx<3; cprIdx++) mRetVal[cprIdx] = retVal[cprIdx];
  return mRetVal;
}



  vtkImageSpatialFilter::vtkImageSpatialFilter(System::IntPtr native, bool bConst) : vtkImageToImageFilter(native, bConst) {}



  vtkImageSpatialFilter::vtkImageSpatialFilter(bool donothing) : vtkImageToImageFilter(donothing) {}



  vtkImageSpatialFilter::vtkImageSpatialFilter() : vtkImageToImageFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageSpatialFilter::New()));
}



  vtkImageSpatialFilter::~vtkImageSpatialFilter() { }





} // end namespace vtkImaging
