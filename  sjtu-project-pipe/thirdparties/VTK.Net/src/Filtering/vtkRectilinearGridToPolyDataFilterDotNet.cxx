

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridToPolyDataFilterDotNet.h"
#include "vtkRectilinearGridDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGridToPolyDataFilter.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGridToPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridToPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGridToPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridToPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGridToPolyDataFilter^ vtkRectilinearGridToPolyDataFilter::NewInstance()
{
  ::vtkRectilinearGridToPolyDataFilter* retVal = static_cast<::vtkRectilinearGridToPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkRectilinearGridToPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGridToPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGridToPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGridToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGridToPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGridToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkRectilinearGridToPolyDataFilter::SetInput(vtkRectilinearGrid^ input)
{
  ::vtkRectilinearGrid* inputWrap = vtk::ConvertManagedToNative<::vtkRectilinearGrid>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridToPolyDataFilter>(m_instance)->SetInput(inputWrap);
}



vtkRectilinearGrid^ vtkRectilinearGridToPolyDataFilter::GetInput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridToPolyDataFilter>(m_instance)->GetInput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



  vtkRectilinearGridToPolyDataFilter::vtkRectilinearGridToPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataSource(native, bConst) {}



  vtkRectilinearGridToPolyDataFilter::vtkRectilinearGridToPolyDataFilter(bool donothing) : vtkPolyDataSource(donothing) {}



  vtkRectilinearGridToPolyDataFilter::vtkRectilinearGridToPolyDataFilter() : vtkPolyDataSource(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGridToPolyDataFilter::New()));
}



  vtkRectilinearGridToPolyDataFilter::~vtkRectilinearGridToPolyDataFilter() { }





} // end namespace vtkFiltering
