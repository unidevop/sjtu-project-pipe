

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPointSetAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkPointSetDotNet.h"
#include "vtkPolyDataDotNet.h"
#include "vtkStructuredGridDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkPointSetAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkObject.h"
#include "vtkPointSet.h"
#include "vtkPolyData.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkPointSetAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPointSetAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPointSetAlgorithm^ vtkPointSetAlgorithm::NewInstance()
{
  ::vtkPointSetAlgorithm* retVal = static_cast<::vtkPointSetAlgorithm*>(vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkPointSetAlgorithm(IntPtr(retVal), false);
}



vtkPointSetAlgorithm^ vtkPointSetAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPointSetAlgorithm* retVal = static_cast<::vtkPointSetAlgorithm*>(::vtkPointSetAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkPointSetAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPointSetAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPointSetAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkPointSet^ vtkPointSetAlgorithm::GetOutput()
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



vtkPointSet^ vtkPointSetAlgorithm::GetOutput(int arg0)
{
  ::vtkPointSet* retVal = static_cast<::vtkPointSet*>(vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkPointSet(IntPtr(retVal), false);
}



vtkPolyData^ vtkPointSetAlgorithm::GetPolyDataOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->GetPolyDataOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkPointSetAlgorithm::GetStructuredGridOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->GetStructuredGridOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkPointSetAlgorithm::GetUnstructuredGridOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->GetUnstructuredGridOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkPointSetAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkPointSetAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkPointSetAlgorithm::SetInput(vtkPointSet^ arg0)
{
  ::vtkPointSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkPointSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkPointSetAlgorithm::SetInput(int arg0, vtkPointSet^ arg1)
{
  ::vtkPointSet* arg1Wrap = vtk::ConvertManagedToNative<::vtkPointSet>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkPointSetAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkPointSetAlgorithm::AddInput(vtkPointSet^ arg0)
{
  ::vtkPointSet* arg0Wrap = vtk::ConvertManagedToNative<::vtkPointSet>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkPointSetAlgorithm::AddInput(int arg0, vtkPointSet^ arg1)
{
  ::vtkPointSet* arg1Wrap = vtk::ConvertManagedToNative<::vtkPointSet>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



void vtkPointSetAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



vtkDataObject^ vtkPointSetAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkPointSetAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



  vtkPointSetAlgorithm::vtkPointSetAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkPointSetAlgorithm::vtkPointSetAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkPointSetAlgorithm::vtkPointSetAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPointSetAlgorithm::New()));
}



  vtkPointSetAlgorithm::~vtkPointSetAlgorithm() { }





} // end namespace vtkFiltering
