

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetToDataSetFilterDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkDataSetDotNet.h"
#include "vtkPolyDataDotNet.h"
#include "vtkRectilinearGridDotNet.h"
#include "vtkStructuredGridDotNet.h"
#include "vtkStructuredPointsDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetToDataSetFilter.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkPolyData.h"
#include "vtkRectilinearGrid.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredPoints.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetToDataSetFilter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetToDataSetFilter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetToDataSetFilter^ vtkDataSetToDataSetFilter::NewInstance()
{
  ::vtkDataSetToDataSetFilter* retVal = static_cast<::vtkDataSetToDataSetFilter*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->NewInstance());
  return gcnew vtkDataSetToDataSetFilter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetToDataSetFilter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetToDataSetFilter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataSetToDataSetFilter::SetInput(vtkDataSet^ input)
{
  ::vtkDataSet* inputWrap = vtk::ConvertManagedToNative<::vtkDataSet>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->SetInput(inputWrap);
}



vtkDataSet^ vtkDataSetToDataSetFilter::GetOutput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetOutput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetToDataSetFilter::GetOutput(int idx)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetOutput(idx));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkPolyData^ vtkDataSetToDataSetFilter::GetPolyDataOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetPolyDataOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkDataSetToDataSetFilter::GetStructuredPointsOutput()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetStructuredPointsOutput());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkDataSetToDataSetFilter::GetStructuredGridOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetStructuredGridOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkDataSetToDataSetFilter::GetUnstructuredGridOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetUnstructuredGridOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkDataSetToDataSetFilter::GetRectilinearGridOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetRectilinearGridOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetToDataSetFilter::GetInput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->GetInput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



void vtkDataSetToDataSetFilter::ComputeInputUpdateExtents(vtkDataObject^ output)
{
  ::vtkDataObject* outputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(output->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetToDataSetFilter>(m_instance)->ComputeInputUpdateExtents(outputWrap);
}



  vtkDataSetToDataSetFilter::vtkDataSetToDataSetFilter(System::IntPtr native, bool bConst) : vtkDataSetSource(native, bConst) {}



  vtkDataSetToDataSetFilter::vtkDataSetToDataSetFilter(bool donothing) : vtkDataSetSource(donothing) {}



  vtkDataSetToDataSetFilter::vtkDataSetToDataSetFilter() : vtkDataSetSource(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetToDataSetFilter::New()));
}



  vtkDataSetToDataSetFilter::~vtkDataSetToDataSetFilter() { }





} // end namespace vtkFiltering
