

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageMultipleInputOutputFilterDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageMultipleInputOutputFilter.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkImageMultipleInputOutputFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputOutputFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageMultipleInputOutputFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageMultipleInputOutputFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageMultipleInputOutputFilter^ vtkImageMultipleInputOutputFilter::NewInstance()
{
  ::vtkImageMultipleInputOutputFilter* retVal = static_cast<::vtkImageMultipleInputOutputFilter*>(vtk::ConvertManagedToNative<::vtkImageMultipleInputOutputFilter>(m_instance)->NewInstance());
  return gcnew vtkImageMultipleInputOutputFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageMultipleInputOutputFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageMultipleInputOutputFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageMultipleInputOutputFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageMultipleInputOutputFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkImageData^ vtkImageMultipleInputOutputFilter::GetOutput(int num)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageMultipleInputOutputFilter>(m_instance)->GetOutput(num));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkImageMultipleInputOutputFilter::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageMultipleInputOutputFilter>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkImageMultipleInputOutputFilter::vtkImageMultipleInputOutputFilter(System::IntPtr native, bool bConst) : vtkImageMultipleInputFilter(native, bConst) {}



  vtkImageMultipleInputOutputFilter::vtkImageMultipleInputOutputFilter(bool donothing) : vtkImageMultipleInputFilter(donothing) {}



  vtkImageMultipleInputOutputFilter::vtkImageMultipleInputOutputFilter() : vtkImageMultipleInputFilter(false) {
  this->SetNativePointer(IntPtr(::vtkImageMultipleInputOutputFilter::New()));
}



  vtkImageMultipleInputOutputFilter::~vtkImageMultipleInputOutputFilter() { }





} // end namespace vtkFiltering
