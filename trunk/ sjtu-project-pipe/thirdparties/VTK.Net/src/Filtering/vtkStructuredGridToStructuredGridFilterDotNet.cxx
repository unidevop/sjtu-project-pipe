

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridToStructuredGridFilterDotNet.h"
#include "vtkStructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridToStructuredGridFilter.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridToStructuredGridFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridToStructuredGridFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridToStructuredGridFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridToStructuredGridFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridToStructuredGridFilter^ vtkStructuredGridToStructuredGridFilter::NewInstance()
{
  ::vtkStructuredGridToStructuredGridFilter* retVal = static_cast<::vtkStructuredGridToStructuredGridFilter*>(vtk::ConvertManagedToNative<::vtkStructuredGridToStructuredGridFilter>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridToStructuredGridFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGridToStructuredGridFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGridToStructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGridToStructuredGridFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGridToStructuredGridFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkStructuredGridToStructuredGridFilter::SetInput(vtkStructuredGrid^ input)
{
  ::vtkStructuredGrid* inputWrap = vtk::ConvertManagedToNative<::vtkStructuredGrid>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridToStructuredGridFilter>(m_instance)->SetInput(inputWrap);
}



vtkStructuredGrid^ vtkStructuredGridToStructuredGridFilter::GetInput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridToStructuredGridFilter>(m_instance)->GetInput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



  vtkStructuredGridToStructuredGridFilter::vtkStructuredGridToStructuredGridFilter(System::IntPtr native, bool bConst) : vtkStructuredGridSource(native, bConst) {}



  vtkStructuredGridToStructuredGridFilter::vtkStructuredGridToStructuredGridFilter(bool donothing) : vtkStructuredGridSource(donothing) {}



  vtkStructuredGridToStructuredGridFilter::vtkStructuredGridToStructuredGridFilter() : vtkStructuredGridSource(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridToStructuredGridFilter::New()));
}



  vtkStructuredGridToStructuredGridFilter::~vtkStructuredGridToStructuredGridFilter() { }





} // end namespace vtkFiltering
