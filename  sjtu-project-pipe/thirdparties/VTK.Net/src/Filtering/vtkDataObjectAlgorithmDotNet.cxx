

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataObjectAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkDataObjectAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataObjectAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataObjectAlgorithm^ vtkDataObjectAlgorithm::NewInstance()
{
  ::vtkDataObjectAlgorithm* retVal = static_cast<::vtkDataObjectAlgorithm*>(vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkDataObjectAlgorithm(IntPtr(retVal), false);
}



vtkDataObjectAlgorithm^ vtkDataObjectAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataObjectAlgorithm* retVal = static_cast<::vtkDataObjectAlgorithm*>(::vtkDataObjectAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkDataObjectAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataObjectAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataObjectAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataObject^ vtkDataObjectAlgorithm::GetOutput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkDataObjectAlgorithm::GetOutput(int arg0)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkDataObjectAlgorithm::SetOutput(vtkDataObject^ d)
{
  ::vtkDataObject* dWrap = vtk::ConvertManagedToNative<::vtkDataObject>(d->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->SetOutput(dWrap);
}



vtkDataObject^ vtkDataObjectAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkDataObjectAlgorithm::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkDataObjectAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkDataObjectAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkDataObjectAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkDataObjectAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkDataObjectAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkDataObjectAlgorithm::vtkDataObjectAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkDataObjectAlgorithm::vtkDataObjectAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkDataObjectAlgorithm::vtkDataObjectAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkDataObjectAlgorithm::New()));
}



  vtkDataObjectAlgorithm::~vtkDataObjectAlgorithm() { }





} // end namespace vtkFiltering
