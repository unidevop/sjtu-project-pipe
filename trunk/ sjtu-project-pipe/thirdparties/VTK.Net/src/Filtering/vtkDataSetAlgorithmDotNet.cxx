

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataSetAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkDataSetDotNet.h"
#include "vtkImageDataDotNet.h"
#include "vtkPolyDataDotNet.h"
#include "vtkRectilinearGridDotNet.h"
#include "vtkStructuredGridDotNet.h"
#include "vtkStructuredPointsDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkDataSetAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkImageData.h"
#include "vtkObject.h"
#include "vtkPolyData.h"
#include "vtkRectilinearGrid.h"
#include "vtkStructuredGrid.h"
#include "vtkStructuredPoints.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkDataSetAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataSetAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataSetAlgorithm^ vtkDataSetAlgorithm::NewInstance()
{
  ::vtkDataSetAlgorithm* retVal = static_cast<::vtkDataSetAlgorithm*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkDataSetAlgorithm(IntPtr(retVal), false);
}



vtkDataSetAlgorithm^ vtkDataSetAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataSetAlgorithm* retVal = static_cast<::vtkDataSetAlgorithm*>(::vtkDataSetAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkDataSetAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataSetAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataSetAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataSet^ vtkDataSetAlgorithm::GetOutput()
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataSet^ vtkDataSetAlgorithm::GetOutput(int arg0)
{
  ::vtkDataSet* retVal = static_cast<::vtkDataSet*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkDataSet(IntPtr(retVal), false);
}



vtkDataObject^ vtkDataSetAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkPolyData^ vtkDataSetAlgorithm::GetPolyDataOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetPolyDataOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkStructuredPoints^ vtkDataSetAlgorithm::GetStructuredPointsOutput()
{
  ::vtkStructuredPoints* retVal = static_cast<::vtkStructuredPoints*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetStructuredPointsOutput());
  return gcnew vtkStructuredPoints(IntPtr(retVal), false);
}



vtkImageData^ vtkDataSetAlgorithm::GetImageDataOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetImageDataOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkDataSetAlgorithm::GetStructuredGridOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetStructuredGridOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkDataSetAlgorithm::GetUnstructuredGridOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetUnstructuredGridOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkDataSetAlgorithm::GetRectilinearGridOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->GetRectilinearGridOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



void vtkDataSetAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkDataSetAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkDataSetAlgorithm::SetInput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkDataSetAlgorithm::SetInput(int arg0, vtkDataSet^ arg1)
{
  ::vtkDataSet* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkDataSetAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkDataSetAlgorithm::AddInput(vtkDataSet^ arg0)
{
  ::vtkDataSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkDataSetAlgorithm::AddInput(int arg0, vtkDataSet^ arg1)
{
  ::vtkDataSet* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataSet>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



void vtkDataSetAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataSetAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkDataSetAlgorithm::vtkDataSetAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkDataSetAlgorithm::vtkDataSetAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkDataSetAlgorithm::vtkDataSetAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDataSetAlgorithm::New()));
}



  vtkDataSetAlgorithm::~vtkDataSetAlgorithm() { }





} // end namespace vtkFiltering
