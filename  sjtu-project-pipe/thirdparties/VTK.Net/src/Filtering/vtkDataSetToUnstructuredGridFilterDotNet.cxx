

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetToUnstructuredGridFilterDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetToUnstructuredGridFilter.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetToUnstructuredGridFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetToUnstructuredGridFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetToUnstructuredGridFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToUnstructuredGridFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetToUnstructuredGridFilter^ vtkDataSetToUnstructuredGridFilter::NewInstance()
{
  ::vtkDataSetToUnstructuredGridFilter* retVal = static_cast<::vtkDataSetToUnstructuredGridFilter*>(vtk::ConvertManagedToNative<::vtkDataSetToUnstructuredGridFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetToUnstructuredGridFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetToUnstructuredGridFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetToUnstructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetToUnstructuredGridFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetToUnstructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetToUnstructuredGridFilter::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetToUnstructuredGridFilter>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkDataSetToUnstructuredGridFilter::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetToUnstructuredGridFilter>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



  vtkDataSetToUnstructuredGridFilter::vtkDataSetToUnstructuredGridFilter(System::IntPtr native, bool bConst) : vtkUnstructuredGridSource(native, bConst) {}



  vtkDataSetToUnstructuredGridFilter::vtkDataSetToUnstructuredGridFilter(bool donothing) : vtkUnstructuredGridSource(donothing) {}



  vtkDataSetToUnstructuredGridFilter::vtkDataSetToUnstructuredGridFilter() : vtkUnstructuredGridSource(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetToUnstructuredGridFilter::New()));
}



  vtkDataSetToUnstructuredGridFilter::~vtkDataSetToUnstructuredGridFilter() { }





} // end namespace vtkFiltering
