

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkStructuredGridAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkStructuredGridDotNet.h"

// native includes
#include "strstream"
#include "vtkStructuredGridAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkObject.h"
#include "vtkStructuredGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkStructuredGridAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkStructuredGridAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkStructuredGridAlgorithm^ vtkStructuredGridAlgorithm::NewInstance()
{
  ::vtkStructuredGridAlgorithm* retVal = static_cast<::vtkStructuredGridAlgorithm*>(vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkStructuredGridAlgorithm(IntPtr(retVal), false);
}



vtkStructuredGridAlgorithm^ vtkStructuredGridAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkStructuredGridAlgorithm* retVal = static_cast<::vtkStructuredGridAlgorithm*>(::vtkStructuredGridAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkStructuredGridAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkStructuredGridAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkStructuredGridAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkStructuredGrid^ vtkStructuredGridAlgorithm::GetOutput()
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkStructuredGridAlgorithm::GetOutput(int arg0)
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



void vtkStructuredGridAlgorithm::SetOutput(vtkDataObject^ d)
{
  ::vtkDataObject* dWrap = vtk::ConvertManagedToNative<::vtkDataObject>(d->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->SetOutput(dWrap);
}



vtkDataObject^ vtkStructuredGridAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkStructuredGridAlgorithm::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkStructuredGrid^ vtkStructuredGridAlgorithm::GetStructuredGridInput(int port)
{
  ::vtkStructuredGrid* retVal = static_cast<::vtkStructuredGrid*>(vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->GetStructuredGridInput(port));
  return gcnew vtkStructuredGrid(IntPtr(retVal), false);
}



void vtkStructuredGridAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkStructuredGridAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkStructuredGridAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkStructuredGridAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkStructuredGridAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkStructuredGridAlgorithm::vtkStructuredGridAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkStructuredGridAlgorithm::vtkStructuredGridAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkStructuredGridAlgorithm::vtkStructuredGridAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkStructuredGridAlgorithm::New()));
}



  vtkStructuredGridAlgorithm::~vtkStructuredGridAlgorithm() { }





} // end namespace vtkFiltering
