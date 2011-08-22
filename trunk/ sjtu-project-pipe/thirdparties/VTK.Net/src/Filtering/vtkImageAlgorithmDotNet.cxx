

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkImageDataDotNet.h"

// native includes
#include "strstream"
#include "vtkImageAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkImageData.h"

using namespace System;

namespace vtk {

System::String^ vtkImageAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageAlgorithm^ vtkImageAlgorithm::NewInstance()
{
  ::vtkImageAlgorithm* retVal = static_cast<::vtkImageAlgorithm*>(vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkImageAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkImageData^ vtkImageAlgorithm::GetOutput()
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkImageData(IntPtr(retVal), false);
}



vtkImageData^ vtkImageAlgorithm::GetOutput(int arg0)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageAlgorithm::SetOutput(vtkDataObject^ d)
{
  ::vtkDataObject* dWrap = vtk::ConvertManagedToNative<::vtkDataObject>(d->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->SetOutput(dWrap);
}



void vtkImageAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkImageAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



vtkDataObject^ vtkImageAlgorithm::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkImageAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkImageData^ vtkImageAlgorithm::GetImageDataInput(int port)
{
  ::vtkImageData* retVal = static_cast<::vtkImageData*>(vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->GetImageDataInput(port));
  return gcnew vtkImageData(IntPtr(retVal), false);
}



void vtkImageAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkImageAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkImageAlgorithm::vtkImageAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkImageAlgorithm::vtkImageAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkImageAlgorithm::vtkImageAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageAlgorithm::New()));
}



  vtkImageAlgorithm::~vtkImageAlgorithm() { }





} // end namespace vtkFiltering
