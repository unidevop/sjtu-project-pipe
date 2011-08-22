

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetToStructuredPointsFilterDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetToStructuredPointsFilter.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetToStructuredPointsFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetToStructuredPointsFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetToStructuredPointsFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToStructuredPointsFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetToStructuredPointsFilter^ vtkDataSetToStructuredPointsFilter::NewInstance()
{
  ::vtkDataSetToStructuredPointsFilter* retVal = static_cast<::vtkDataSetToStructuredPointsFilter*>(vtk::ConvertManagedToNative<::vtkDataSetToStructuredPointsFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetToStructuredPointsFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetToStructuredPointsFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetToStructuredPointsFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetToStructuredPointsFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetToStructuredPointsFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetToStructuredPointsFilter::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetToStructuredPointsFilter>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkDataSetToStructuredPointsFilter::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetToStructuredPointsFilter>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkDataSetToStructuredPointsFilter::vtkDataSetToStructuredPointsFilter(System::IntPtr native, bool bConst) : vtkStructuredPointsSource(native, bConst) {}



  vtkDataSetToStructuredPointsFilter::vtkDataSetToStructuredPointsFilter(bool donothing) : vtkStructuredPointsSource(donothing) {}



  vtkDataSetToStructuredPointsFilter::vtkDataSetToStructuredPointsFilter() : vtkStructuredPointsSource(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetToStructuredPointsFilter::New()));
}



  vtkDataSetToStructuredPointsFilter::~vtkDataSetToStructuredPointsFilter() { }





} // end namespace vtkFiltering
