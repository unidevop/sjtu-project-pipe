

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGenericDataSetAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkGenericDataSetDotNet.h"

// native includes
#include "strstream"
#include "vtkGenericDataSetAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkGenericDataSet.h"

using namespace System;

namespace vtk {

System::String^ vtkGenericDataSetAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGenericDataSetAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGenericDataSetAlgorithm^ vtkGenericDataSetAlgorithm::NewInstance()
{
  ::vtkGenericDataSetAlgorithm* retVal = static_cast<::vtkGenericDataSetAlgorithm*>(vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkGenericDataSetAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGenericDataSetAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGenericDataSetAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkGenericDataSet^ vtkGenericDataSetAlgorithm::GetOutput()
{
  ::vtkGenericDataSet* retVal = static_cast<::vtkGenericDataSet*>(vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkGenericDataSet(IntPtr(retVal), false);
}



vtkGenericDataSet^ vtkGenericDataSetAlgorithm::GetOutput(int arg0)
{
  ::vtkGenericDataSet* retVal = static_cast<::vtkGenericDataSet*>(vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkGenericDataSet(IntPtr(retVal), false);
}



void vtkGenericDataSetAlgorithm::SetOutput(vtkDataObject^ d)
{
  ::vtkDataObject* dWrap = vtk::ConvertManagedToNative<::vtkDataObject>(d->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->SetOutput(dWrap);
}



vtkDataObject^ vtkGenericDataSetAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkGenericDataSetAlgorithm::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkGenericDataSet^ vtkGenericDataSetAlgorithm::GetGenericDataSetInput(int port)
{
  ::vtkGenericDataSet* retVal = static_cast<::vtkGenericDataSet*>(vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->GetGenericDataSetInput(port));
  return gcnew vtkGenericDataSet(IntPtr(retVal), false);
}



void vtkGenericDataSetAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkGenericDataSetAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkGenericDataSetAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkGenericDataSetAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkGenericDataSetAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkGenericDataSetAlgorithm::vtkGenericDataSetAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkGenericDataSetAlgorithm::vtkGenericDataSetAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkGenericDataSetAlgorithm::vtkGenericDataSetAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkGenericDataSetAlgorithm::New()));
}



  vtkGenericDataSetAlgorithm::~vtkGenericDataSetAlgorithm() { }





} // end namespace vtkFiltering
