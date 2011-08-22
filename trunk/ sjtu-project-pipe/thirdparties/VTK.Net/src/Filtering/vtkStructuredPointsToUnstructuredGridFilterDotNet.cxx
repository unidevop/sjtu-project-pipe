

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredPointsToUnstructuredGridFilterDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredPointsToUnstructuredGridFilter.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredPointsToUnstructuredGridFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsToUnstructuredGridFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredPointsToUnstructuredGridFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredPointsToUnstructuredGridFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredPointsToUnstructuredGridFilter^ vtkStructuredPointsToUnstructuredGridFilter::NewInstance()
{
  ::vtkStructuredPointsToUnstructuredGridFilter* retVal = static_cast<::vtkStructuredPointsToUnstructuredGridFilter*>(vtk::ConvertManagedToNative<::vtkStructuredPointsToUnstructuredGridFilter>(m_instance)->NewInstance());
  return gcnew vtkStructuredPointsToUnstructuredGridFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredPointsToUnstructuredGridFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredPointsToUnstructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredPointsToUnstructuredGridFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredPointsToUnstructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredPointsToUnstructuredGridFilter::SetInput(vtkImageData^ input)
{
  ::vtkImageData* inputWrap = vtk::ConvertManagedToNative<::vtkImageData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredPointsToUnstructuredGridFilter>(m_instance)->SetInput(inputWrap);
}



vtkImageData^ vtkStructuredPointsToUnstructuredGridFilter::GetInput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkStructuredPointsToUnstructuredGridFilter>(m_instance)->GetInput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



  vtkStructuredPointsToUnstructuredGridFilter::vtkStructuredPointsToUnstructuredGridFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridSource(native, bConst) {}



  vtkStructuredPointsToUnstructuredGridFilter::vtkStructuredPointsToUnstructuredGridFilter(bool donothing) : vtkUnstructuredGridSource(donothing) {}



  vtkStructuredPointsToUnstructuredGridFilter::vtkStructuredPointsToUnstructuredGridFilter() : vtkUnstructuredGridSource(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredPointsToUnstructuredGridFilter::New()));
}



  vtkStructuredPointsToUnstructuredGridFilter::~vtkStructuredPointsToUnstructuredGridFilter() { }





} // end namespace vtkFiltering
