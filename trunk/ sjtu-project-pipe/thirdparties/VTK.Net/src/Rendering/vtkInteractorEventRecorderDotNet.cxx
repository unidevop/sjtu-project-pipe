

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInteractorEventRecorderDotNet.h"
#include "vtkRenderWindowInteractorDotNet.h"

// native includes
#include "strstream"
#include "vtkInteractorEventRecorder.h"
#include "vtkObject.h"
#include "vtkRenderWindowInteractor.h"

using namespace System;

namespace vtk {

System::String^ vtkInteractorEventRecorder::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInteractorEventRecorder::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInteractorEventRecorder^ vtkInteractorEventRecorder::NewInstance()
{
  ::vtkInteractorEventRecorder* retVal = static_cast<::vtkInteractorEventRecorder*>(vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->NewInstance());
  return gcnew vtkInteractorEventRecorder(IntPtr(retVal), false);
}



vtkInteractorEventRecorder^ vtkInteractorEventRecorder::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInteractorEventRecorder* retVal = static_cast<::vtkInteractorEventRecorder*>(::vtkInteractorEventRecorder::SafeDownCast(oWrap));
  return gcnew vtkInteractorEventRecorder(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInteractorEventRecorder::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInteractorEventRecorder::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInteractorEventRecorder::SetEnabled(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->SetEnabled(arg0);
}



void vtkInteractorEventRecorder::SetInteractor(vtkRenderWindowInteractor^ iren)
{
  ::vtkRenderWindowInteractor* irenWrap = vtk::ConvertManagedToNative<::vtkRenderWindowInteractor>(iren->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->SetInteractor(irenWrap);
}



void vtkInteractorEventRecorder::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkInteractorEventRecorder::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkInteractorEventRecorder::Record()
{
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->Record();
}



void vtkInteractorEventRecorder::Play()
{
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->Play();
}



void vtkInteractorEventRecorder::Stop()
{
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->Stop();
}



void vtkInteractorEventRecorder::Rewind()
{
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->Rewind();
}



void vtkInteractorEventRecorder::SetReadFromInputString(int arg0)
{
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->SetReadFromInputString(arg0);
}



int vtkInteractorEventRecorder::GetReadFromInputString()
{
  int retVal = vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->GetReadFromInputString();
  return retVal;
}



void vtkInteractorEventRecorder::ReadFromInputStringOn()
{
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->ReadFromInputStringOn();
}



void vtkInteractorEventRecorder::ReadFromInputStringOff()
{
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->ReadFromInputStringOff();
}



void vtkInteractorEventRecorder::SetInputString(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->SetInputString(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkInteractorEventRecorder::GetInputString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInteractorEventRecorder>(m_instance)->GetInputString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkInteractorEventRecorder::vtkInteractorEventRecorder(System::IntPtr native, bool bConst) : vtkInteractorObserver(native, bConst) {}



  vtkInteractorEventRecorder::vtkInteractorEventRecorder(bool donothing) : vtkInteractorObserver(donothing) {}



  vtkInteractorEventRecorder::vtkInteractorEventRecorder() : vtkInteractorObserver(false) {
  this->SetNativePointer(IntPtr(::vtkInteractorEventRecorder::New()));
}



  vtkInteractorEventRecorder::~vtkInteractorEventRecorder() { }





} // end namespace vtkRendering
