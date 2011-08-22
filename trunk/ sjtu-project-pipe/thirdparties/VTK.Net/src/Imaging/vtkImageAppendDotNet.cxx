

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageAppendDotNet.h"

// native includes
#include "strstream"
#include "vtkImageAppend.h"
#include "vtkDataObject.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageAppend::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageAppend::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageAppend^ vtkImageAppend::NewInstance()
{
  ::vtkImageAppend* retVal = static_cast<::vtkImageAppend*>(vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->NewInstance());
  return gcnew vtkImageAppend(IntPtr(retVal), false);
}



vtkImageAppend^ vtkImageAppend::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageAppend* retVal = static_cast<::vtkImageAppend*>(::vtkImageAppend::SafeDownCast(oWrap));
  return gcnew vtkImageAppend(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageAppend::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageAppend::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageAppend::SetInput(int num, vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->SetInput(num, inputWrap);
}



void vtkImageAppend::SetInput(vtkDataObject^ input)
{
  ::vtkDataObject* inputWrap = vtk::ConvertManagedToNative<::vtkDataObject>(input->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->SetInput(inputWrap);
}



vtkDataObject^ vtkImageAppend::GetInput(int num)
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->GetInput(num));
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



vtkDataObject^ vtkImageAppend::GetInput()
{
  ::vtkDataObject* retVal = static_cast<::vtkDataObject*>(vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->GetInput());
  return gcnew vtkDataObject(IntPtr(retVal), false);
}



int vtkImageAppend::GetNumberOfInputs()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->GetNumberOfInputs();
  return retVal;
}



void vtkImageAppend::SetAppendAxis(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->SetAppendAxis(arg0);
}



int vtkImageAppend::GetAppendAxis()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->GetAppendAxis();
  return retVal;
}



void vtkImageAppend::SetPreserveExtents(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->SetPreserveExtents(arg0);
}



int vtkImageAppend::GetPreserveExtents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->GetPreserveExtents();
  return retVal;
}



void vtkImageAppend::PreserveExtentsOn()
{
  vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->PreserveExtentsOn();
}



void vtkImageAppend::PreserveExtentsOff()
{
  vtk::ConvertManagedToNative<::vtkImageAppend>(m_instance)->PreserveExtentsOff();
}



  vtkImageAppend::vtkImageAppend(System::IntPtr native, bool bConst) : vtkThreadedImageAlgorithm(native, bConst) {}



  vtkImageAppend::vtkImageAppend(bool donothing) : vtkThreadedImageAlgorithm(donothing) {}



  vtkImageAppend::vtkImageAppend() : vtkThreadedImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageAppend::New()));
}



  vtkImageAppend::~vtkImageAppend() { }





} // end namespace vtkImaging
