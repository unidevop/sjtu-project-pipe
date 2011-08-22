

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetToImageFilterDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetToImageFilter.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetToImageFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetToImageFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetToImageFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToImageFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetToImageFilter^ vtkDataSetToImageFilter::NewInstance()
{
  ::vtkDataSetToImageFilter* retVal = static_cast<::vtkDataSetToImageFilter*>(vtk::ConvertManagedToNative<::vtkDataSetToImageFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetToImageFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetToImageFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetToImageFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetToImageFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetToImageFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetToImageFilter::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetToImageFilter>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkDataSetToImageFilter::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetToImageFilter>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkDataSetToImageFilter::vtkDataSetToImageFilter(System::IntPtr native, bool bConst) : vtkImageSource(native, bConst) {}



  vtkDataSetToImageFilter::vtkDataSetToImageFilter(bool donothing) : vtkImageSource(donothing) {}



  vtkDataSetToImageFilter::vtkDataSetToImageFilter() : vtkImageSource(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetToImageFilter::New()));
}



  vtkDataSetToImageFilter::~vtkDataSetToImageFilter() { }





} // end namespace vtkFiltering
