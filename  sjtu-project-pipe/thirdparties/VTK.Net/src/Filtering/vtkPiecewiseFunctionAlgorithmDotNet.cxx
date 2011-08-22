

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPiecewiseFunctionAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkPiecewiseFunctionAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPiecewiseFunctionAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPiecewiseFunctionAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPiecewiseFunctionAlgorithm^ vtkPiecewiseFunctionAlgorithm::NewInstance()
{
  ::vtkPiecewiseFunctionAlgorithm* retVal = static_cast<::vtkPiecewiseFunctionAlgorithm*>(vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkPiecewiseFunctionAlgorithm(IntPtr(retVal), false);
}



vtkPiecewiseFunctionAlgorithm^ vtkPiecewiseFunctionAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPiecewiseFunctionAlgorithm* retVal = static_cast<::vtkPiecewiseFunctionAlgorithm*>(::vtkPiecewiseFunctionAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkPiecewiseFunctionAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPiecewiseFunctionAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPiecewiseFunctionAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkDataObject^ vtkPiecewiseFunctionAlgorithm::GetOutput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkPiecewiseFunctionAlgorithm::GetOutput(int arg0)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkPiecewiseFunctionAlgorithm::SetOutput(vtkDataObject^ d)
{
  ::vtkDataObject* dWrap = vtk::ConvertManagedToNative<::vtkDataObject>(d->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->SetOutput(dWrap);
}



vtkDataObject^ vtkPiecewiseFunctionAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkPiecewiseFunctionAlgorithm::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



void vtkPiecewiseFunctionAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkPiecewiseFunctionAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkPiecewiseFunctionAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkPiecewiseFunctionAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPiecewiseFunctionAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkPiecewiseFunctionAlgorithm::vtkPiecewiseFunctionAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkPiecewiseFunctionAlgorithm::vtkPiecewiseFunctionAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkPiecewiseFunctionAlgorithm::vtkPiecewiseFunctionAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPiecewiseFunctionAlgorithm::New()));
}



  vtkPiecewiseFunctionAlgorithm::~vtkPiecewiseFunctionAlgorithm() { }





} // end namespace vtkFiltering
