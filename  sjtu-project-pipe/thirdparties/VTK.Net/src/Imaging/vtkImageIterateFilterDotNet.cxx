

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageIterateFilterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageIterateFilter.h"

using namespace System;

namespace vtk {

System::String^ vtkImageIterateFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageIterateFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageIterateFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageIterateFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageIterateFilter^ vtkImageIterateFilter::NewInstance()
{
  ::vtkImageIterateFilter* retVal = static_cast<::vtkImageIterateFilter*>(vtk::ConvertManagedToNative<::vtkImageIterateFilter>(m_instance)->NewInstance());
  return gcnew vtkImageIterateFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageIterateFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageIterateFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageIterateFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageIterateFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkImageIterateFilter::GetIteration()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageIterateFilter>(m_instance)->GetIteration();
  return retVal;
}



int vtkImageIterateFilter::GetNumberOfIterations()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageIterateFilter>(m_instance)->GetNumberOfIterations();
  return retVal;
}



  vtkImageIterateFilter::vtkImageIterateFilter(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageIterateFilter::vtkImageIterateFilter(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageIterateFilter::vtkImageIterateFilter() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageIterateFilter::New()));
}



  vtkImageIterateFilter::~vtkImageIterateFilter() { }





} // end namespace vtkImaging
