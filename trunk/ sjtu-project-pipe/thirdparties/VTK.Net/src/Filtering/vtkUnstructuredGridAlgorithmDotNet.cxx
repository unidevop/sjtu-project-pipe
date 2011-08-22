

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkUnstructuredGridAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkUnstructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkUnstructuredGridAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkObject.h"
#include "vtkUnstructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkUnstructuredGridAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkUnstructuredGridAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkUnstructuredGridAlgorithm^ vtkUnstructuredGridAlgorithm::NewInstance()
{
  ::vtkUnstructuredGridAlgorithm* retVal = static_cast<::vtkUnstructuredGridAlgorithm*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkUnstructuredGridAlgorithm(IntPtr(retVal), false);
}



vtkUnstructuredGridAlgorithm^ vtkUnstructuredGridAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkUnstructuredGridAlgorithm* retVal = static_cast<::vtkUnstructuredGridAlgorithm*>(::vtkUnstructuredGridAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkUnstructuredGridAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkUnstructuredGridAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkUnstructuredGridAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkUnstructuredGrid^ vtkUnstructuredGridAlgorithm::GetOutput()
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkUnstructuredGridAlgorithm::GetOutput(int arg0)
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkUnstructuredGridAlgorithm::SetOutput(vtkDataObject^ d)
{
  ::vtkDataObject* dWrap = vtk::ConvertManagedToNative<::vtkDataObject>(d->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->SetOutput(dWrap);
}



vtkDataObject^ vtkUnstructuredGridAlgorithm::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkUnstructuredGridAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkUnstructuredGrid^ vtkUnstructuredGridAlgorithm::GetUnstructuredGridInput(int port)
{
  ::vtkUnstructuredGrid* retVal = static_cast<::vtkUnstructuredGrid*>(vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->GetUnstructuredGridInput(port));
  return gcnew vtkUnstructuredGrid(IntPtr(retVal), false);
}



void vtkUnstructuredGridAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkUnstructuredGridAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkUnstructuredGridAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkUnstructuredGridAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkUnstructuredGridAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkUnstructuredGridAlgorithm::vtkUnstructuredGridAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkUnstructuredGridAlgorithm::vtkUnstructuredGridAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkUnstructuredGridAlgorithm::vtkUnstructuredGridAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkUnstructuredGridAlgorithm::New()));
}



  vtkUnstructuredGridAlgorithm::~vtkUnstructuredGridAlgorithm() { }





} // end namespace vtkFiltering
