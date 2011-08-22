

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsToPolyDataFilterDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPointsToPolyDataFilter.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPointsToPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsToPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPointsToPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsToPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPointsToPolyDataFilter^ vtkStructuredPointsToPolyDataFilter::NewInstance()
{
  ::vtkStructuredPointsToPolyDataFilter* retVal = static_cast<::vtkStructuredPointsToPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkStructuredPointsToPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkStructuredPointsToPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredPointsToPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredPointsToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredPointsToPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredPointsToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredPointsToPolyDataFilter::SetInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredPointsToPolyDataFilter>(m_instance)->SetInput(inputWrap);
}



vtkImageData^ vtkStructuredPointsToPolyDataFilter::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkStructuredPointsToPolyDataFilter>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkStructuredPointsToPolyDataFilter::vtkStructuredPointsToPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataSource(native, bConst) {}



  vtkStructuredPointsToPolyDataFilter::vtkStructuredPointsToPolyDataFilter(bool donothing) : vtkPolyDataSource(donothing) {}



  vtkStructuredPointsToPolyDataFilter::vtkStructuredPointsToPolyDataFilter() : vtkPolyDataSource(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPointsToPolyDataFilter::New()));
}



  vtkStructuredPointsToPolyDataFilter::~vtkStructuredPointsToPolyDataFilter() { }





} // end namespace vtkFiltering
