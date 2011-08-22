

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridToPolyDataFilterDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridToPolyDataFilter.h"
#include "vtkDataObject.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridToPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridToPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridToPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridToPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridToPolyDataFilter^ vtkUnstructuredGridToPolyDataFilter::NewInstance()
{
  ::vtkUnstructuredGridToPolyDataFilter* retVal = static_cast<::vtkUnstructuredGridToPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridToPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridToPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridToPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridToPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkUnstructuredGridToPolyDataFilter::SetInput(vtkUnstructuredGrid^ input)
{
  ::vtkUnstructuredGrid* inputWrap = vtk::ConvertManagedToNative<::vtkUnstructuredGrid>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridToPolyDataFilter>(m_instance)->SetInput(inputWrap);
}



vtkUnstructuredGrid^ vtkUnstructuredGridToPolyDataFilter::GetInput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridToPolyDataFilter>(m_instance)->GetInput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkUnstructuredGridToPolyDataFilter::ComputeInputUpdateExtents(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridToPolyDataFilter>(m_instance)->ComputeInputUpdateExtents(outputWrap);
}



  vtkUnstructuredGridToPolyDataFilter::vtkUnstructuredGridToPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataSource(native, bConst) {}



  vtkUnstructuredGridToPolyDataFilter::vtkUnstructuredGridToPolyDataFilter(bool donothing) : vtkPolyDataSource(donothing) {}



  vtkUnstructuredGridToPolyDataFilter::vtkUnstructuredGridToPolyDataFilter() : vtkPolyDataSource(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridToPolyDataFilter::New()));
}



  vtkUnstructuredGridToPolyDataFilter::~vtkUnstructuredGridToPolyDataFilter() { }





} // end namespace vtkFiltering
