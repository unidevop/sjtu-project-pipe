

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointSetToPointSetFilterDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkPointSetDotNet.h"
#include "vtkPolyDataDotNet.h"
#include "vtkStructuredGridDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkPointSetToPointSetFilter.h"
#include "vtkDataObject.h"
#include "vtkPointSet.h"
#include "vtkPolyData.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkPointSetToPointSetFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointSetToPointSetFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointSetToPointSetFilter^ vtkPointSetToPointSetFilter::NewInstance()
{
  ::vtkPointSetToPointSetFilter* retVal = static_cast<::vtkPointSetToPointSetFilter*>(vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->NewInstance());
  return gcnew vtkPointSetToPointSetFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointSetToPointSetFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointSetToPointSetFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPointSetToPointSetFilter::SetInput(vtkPointSet^ input)
{
  ::vtkPointSet* inputWrap = vtk::ConvertManagedToNative<::vtkPointSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->SetInput(inputWrap);
}



vtkPointSet^ vtkPointSetToPointSetFilter::GetInput()
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->GetInput());
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



vtkPointSet^ vtkPointSetToPointSetFilter::GetOutput()
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->GetOutput());
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



vtkPointSet^ vtkPointSetToPointSetFilter::GetOutput(int idx)
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->GetOutput(idx));
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



vtkPolyData^ vtkPointSetToPointSetFilter::GetPolyDataOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->GetPolyDataOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkPointSetToPointSetFilter::GetStructuredGridOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->GetStructuredGridOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkPointSetToPointSetFilter::GetUnstructuredGridOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->GetUnstructuredGridOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkPointSetToPointSetFilter::ComputeInputUpdateExtents(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetToPointSetFilter>(m_instance)->ComputeInputUpdateExtents(outputWrap);
}



  vtkPointSetToPointSetFilter::vtkPointSetToPointSetFilter(System::IntPtr native, bool bConst) : vtkPointSetSource(native, bConst) {}



  vtkPointSetToPointSetFilter::vtkPointSetToPointSetFilter(bool donothing) : vtkPointSetSource(donothing) {}



  vtkPointSetToPointSetFilter::vtkPointSetToPointSetFilter() : vtkPointSetSource(false) {
  this->SetNativePointer(IntPtr(::vtkPointSetToPointSetFilter::New()));
}



  vtkPointSetToPointSetFilter::~vtkPointSetToPointSetFilter() { }





} // end namespace vtkFiltering
