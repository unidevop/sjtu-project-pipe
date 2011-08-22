

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetToStructuredGridFilterDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetToStructuredGridFilter.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetToStructuredGridFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetToStructuredGridFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetToStructuredGridFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToStructuredGridFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetToStructuredGridFilter^ vtkDataSetToStructuredGridFilter::NewInstance()
{
  ::vtkDataSetToStructuredGridFilter* retVal = static_cast<::vtkDataSetToStructuredGridFilter*>(vtk::ConvertManagedToNative<::vtkDataSetToStructuredGridFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetToStructuredGridFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetToStructuredGridFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetToStructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetToStructuredGridFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetToStructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetToStructuredGridFilter::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetToStructuredGridFilter>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkDataSetToStructuredGridFilter::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetToStructuredGridFilter>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkDataSetToStructuredGridFilter::vtkDataSetToStructuredGridFilter(System::IntPtr native, bool bConst) : vtkStructuredGridSource(native, bConst) {}



  vtkDataSetToStructuredGridFilter::vtkDataSetToStructuredGridFilter(bool donothing) : vtkStructuredGridSource(donothing) {}



  vtkDataSetToStructuredGridFilter::vtkDataSetToStructuredGridFilter() : vtkStructuredGridSource(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetToStructuredGridFilter::New()));
}



  vtkDataSetToStructuredGridFilter::~vtkDataSetToStructuredGridFilter() { }





} // end namespace vtkFiltering
