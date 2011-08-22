

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkRectilinearGridAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkRectilinearGridDotNet.h"

// native includes
#include "strstream"
#include "vtkRectilinearGridAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkObject.h"
#include "vtkRectilinearGrid.h"

using namespace System;

namespace vtk {

System::String^ vtkRectilinearGridAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkRectilinearGridAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkRectilinearGridAlgorithm^ vtkRectilinearGridAlgorithm::NewInstance()
{
  ::vtkRectilinearGridAlgorithm* retVal = static_cast<::vtkRectilinearGridAlgorithm*>(vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkRectilinearGridAlgorithm(IntPtr(retVal), false);
}



vtkRectilinearGridAlgorithm^ vtkRectilinearGridAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkRectilinearGridAlgorithm* retVal = static_cast<::vtkRectilinearGridAlgorithm*>(::vtkRectilinearGridAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkRectilinearGridAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkRectilinearGridAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkRectilinearGridAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkRectilinearGrid^ vtkRectilinearGridAlgorithm::GetOutput()
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkRectilinearGridAlgorithm::GetOutput(int arg0)
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



void vtkRectilinearGridAlgorithm::SetOutput(vtkDataObject^ d)
{
  ::vtkDataObject* dWrap = vtk::ConvertManagedToNative<::vtkDataObject>(d->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->SetOutput(dWrap);
}



vtkDataObject^ vtkRectilinearGridAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkRectilinearGridAlgorithm::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkRectilinearGrid^ vtkRectilinearGridAlgorithm::GetRectilinearGridInput(int port)
{
  ::vtkRectilinearGrid* retVal = static_cast<::vtkRectilinearGrid*>(vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->GetRectilinearGridInput(port));
  return gcnew vtkRectilinearGrid(IntPtr(retVal), false);
}



void vtkRectilinearGridAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkRectilinearGridAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkRectilinearGridAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkRectilinearGridAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkRectilinearGridAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkRectilinearGridAlgorithm::vtkRectilinearGridAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkRectilinearGridAlgorithm::vtkRectilinearGridAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkRectilinearGridAlgorithm::vtkRectilinearGridAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkRectilinearGridAlgorithm::New()));
}



  vtkRectilinearGridAlgorithm::~vtkRectilinearGridAlgorithm() { }





} // end namespace vtkFiltering
