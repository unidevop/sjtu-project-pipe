

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPolyDataAlgorithmDotNet.h"
#include "vtkDataObjectDotNet.h"
#include "vtkPolyDataDotNet.h"

// native includes
#include "strstream"
#include "vtkPolyDataAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkObject.h"
#include "vtkPolyData.h"

using namespace System;

namespace vtk {

System::String^ vtkPolyDataAlgorithm::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPolyDataAlgorithm::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPolyDataAlgorithm^ vtkPolyDataAlgorithm::NewInstance()
{
  ::vtkPolyDataAlgorithm* retVal = static_cast<::vtkPolyDataAlgorithm*>(vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->NewInstance());
  return gcnew vtkPolyDataAlgorithm(IntPtr(retVal), false);
}



vtkPolyDataAlgorithm^ vtkPolyDataAlgorithm::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPolyDataAlgorithm* retVal = static_cast<::vtkPolyDataAlgorithm*>(::vtkPolyDataAlgorithm::SafeDownCast(oWrap));
  return gcnew vtkPolyDataAlgorithm(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPolyDataAlgorithm::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPolyDataAlgorithm::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




vtkPolyData^ vtkPolyDataAlgorithm::GetOutput()
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->GetOutput());
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



vtkPolyData^ vtkPolyDataAlgorithm::GetOutput(int arg0)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->GetOutput(arg0));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkPolyDataAlgorithm::SetOutput(vtkDataObject^ d)
{
  ::vtkDataObject* dWrap = vtk::ConvertManagedToNative<::vtkDataObject>(d->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->SetOutput(dWrap);
}



vtkDataObject^ vtkPolyDataAlgorithm::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkPolyDataAlgorithm::GetInput(int port)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->GetInput(port));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkPolyData^ vtkPolyDataAlgorithm::GetPolyDataInput(int port)
{
  ::vtkPolyData* retVal = static_cast<::vtkPolyData*>(vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->GetPolyDataInput(port));
  return gcnew vtkPolyData(IntPtr(retVal), false);
}



void vtkPolyDataAlgorithm::SetInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->SetInput(arg0Wrap);
}



void vtkPolyDataAlgorithm::SetInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->SetInput(arg0, arg1Wrap);
}



void vtkPolyDataAlgorithm::AddInput(vtkDataObject^ arg0)
{
  ::vtkDataObject* arg0Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->AddInput(arg0Wrap);
}



void vtkPolyDataAlgorithm::AddInput(int arg0, vtkDataObject^ arg1)
{
  ::vtkDataObject* arg1Wrap = vtk::ConvertManagedToNative<::vtkDataObject>(arg1->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPolyDataAlgorithm>(m_instance)->AddInput(arg0, arg1Wrap);
}



  vtkPolyDataAlgorithm::vtkPolyDataAlgorithm(System::IntPtr native, bool bConst) : vtkAlgorithm(native, bConst) {}



  vtkPolyDataAlgorithm::vtkPolyDataAlgorithm(bool donothing) : vtkAlgorithm(donothing) {}



  vtkPolyDataAlgorithm::vtkPolyDataAlgorithm() : vtkAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkPolyDataAlgorithm::New()));
}



  vtkPolyDataAlgorithm::~vtkPolyDataAlgorithm() { }





} // end namespace vtkFiltering
