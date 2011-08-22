

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataToPolyDataFilterDotNet.h"
#include "vtkPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataToPolyDataFilter.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataToPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataToPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataToPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataToPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataToPolyDataFilter^ vtkPolyDataToPolyDataFilter::NewInstance()
{
  ::vtkPolyDataToPolyDataFilter* retVal = static_cast<::vtkPolyDataToPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkPolyDataToPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkPolyDataToPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataToPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataToPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPolyDataToPolyDataFilter::SetInput(vtkPolyData^ input)
{
  ::vtkPolyData* inputWrap = vtk::ConvertManagedToNative<::vtkPolyData>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataToPolyDataFilter>(m_instance)->SetInput(inputWrap);
}



vtkPolyData^ vtkPolyDataToPolyDataFilter::GetInput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataToPolyDataFilter>(m_instance)->GetInput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



  vtkPolyDataToPolyDataFilter::vtkPolyDataToPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataSource(native, bConst) {}



  vtkPolyDataToPolyDataFilter::vtkPolyDataToPolyDataFilter(bool donothing) : vtkPolyDataSource(donothing) {}



  vtkPolyDataToPolyDataFilter::vtkPolyDataToPolyDataFilter() : vtkPolyDataSource(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataToPolyDataFilter::New()));
}



  vtkPolyDataToPolyDataFilter::~vtkPolyDataToPolyDataFilter() { }





} // end namespace vtkFiltering
