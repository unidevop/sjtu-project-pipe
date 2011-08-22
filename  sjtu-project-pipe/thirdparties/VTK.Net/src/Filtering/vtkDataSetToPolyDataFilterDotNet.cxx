

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetToPolyDataFilterDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetToPolyDataFilter.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetToPolyDataFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetToPolyDataFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetToPolyDataFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToPolyDataFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetToPolyDataFilter^ vtkDataSetToPolyDataFilter::NewInstance()
{
  ::vtkDataSetToPolyDataFilter* retVal = static_cast<::vtkDataSetToPolyDataFilter*>(vtk::ConvertManagedToNative<::vtkDataSetToPolyDataFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetToPolyDataFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetToPolyDataFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetToPolyDataFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetToPolyDataFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetToPolyDataFilter::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetToPolyDataFilter>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkDataSetToPolyDataFilter::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetToPolyDataFilter>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkDataSetToPolyDataFilter::ComputeInputUpdateExtents(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetToPolyDataFilter>(m_instance)->ComputeInputUpdateExtents(outputWrap);
}



  vtkDataSetToPolyDataFilter::vtkDataSetToPolyDataFilter(System::IntPtr native, bool bConst) : vtkPolyDataSource(native, bConst) {}



  vtkDataSetToPolyDataFilter::vtkDataSetToPolyDataFilter(bool donothing) : vtkPolyDataSource(donothing) {}



  vtkDataSetToPolyDataFilter::vtkDataSetToPolyDataFilter() : vtkPolyDataSource(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetToPolyDataFilter::New()));
}



  vtkDataSetToPolyDataFilter::~vtkDataSetToPolyDataFilter() { }





} // end namespace vtkFiltering
