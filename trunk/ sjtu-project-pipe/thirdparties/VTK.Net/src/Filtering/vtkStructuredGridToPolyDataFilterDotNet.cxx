

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridToPolyDataFilterDotNet.h"
#include "vtkStructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridToPolyDataFilter.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridToPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridToPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridToPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridToPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridToPolyDataFilter^ vtkStructuredGridToPolyDataFilter::NewInstance()
{
  ::vtkStructuredGridToPolyDataFilter* retVal = static_cast<::vtkStructuredGridToPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkStructuredGridToPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridToPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGridToPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGridToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGridToPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGridToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredGridToPolyDataFilter::SetInput(vtkStructuredGrid^ input)
{
  ::vtkStructuredGrid* inputWrap = vtk::ConvertManagedToNative<::vtkStructuredGrid>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridToPolyDataFilter>(m_instance)->SetInput(inputWrap);
}



vtkStructuredGrid^ vtkStructuredGridToPolyDataFilter::GetInput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridToPolyDataFilter>(m_instance)->GetInput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



  vtkStructuredGridToPolyDataFilter::vtkStructuredGridToPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataSource(native, bConst) {}



  vtkStructuredGridToPolyDataFilter::vtkStructuredGridToPolyDataFilter(bool donothing) : vtkPolyDataSource(donothing) {}



  vtkStructuredGridToPolyDataFilter::vtkStructuredGridToPolyDataFilter() : vtkPolyDataSource(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridToPolyDataFilter::New()));
}



  vtkStructuredGridToPolyDataFilter::~vtkStructuredGridToPolyDataFilter() { }





} // end namespace vtkFiltering
