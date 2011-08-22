

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkWin32VideoSourceDotNet.h"

// native includes
#include "strstream"
#include "vtkWin32VideoSource.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkWin32VideoSource::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkWin32VideoSource::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkWin32VideoSource^ vtkWin32VideoSource::NewInstance()
{
  ::vtkWin32VideoSource* retVal = static_cast<::vtkWin32VideoSource*>(vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->NewInstance());
  return gcnew vtkWin32VideoSource(IntPtr(retVal), false);
}



vtkWin32VideoSource^ vtkWin32VideoSource::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkWin32VideoSource* retVal = static_cast<::vtkWin32VideoSource*>(::vtkWin32VideoSource::SafeDownCast(oWrap));
  return gcnew vtkWin32VideoSource(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkWin32VideoSource::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkWin32VideoSource::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkWin32VideoSource::Record()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->Record();
}



void vtkWin32VideoSource::Play()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->Play();
}



void vtkWin32VideoSource::Stop()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->Stop();
}



void vtkWin32VideoSource::Grab()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->Grab();
}



void vtkWin32VideoSource::SetFrameSize(int x, int y, int z)
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->SetFrameSize(x, y, z);
}



void vtkWin32VideoSource::SetFrameSize(array<int>^ dim)
{
  pin_ptr<int> dimPin = &dim[0];
  int* nativedimPin = dimPin;
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->SetFrameSize(nativedimPin);
}



void vtkWin32VideoSource::SetFrameRate(float rate)
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->SetFrameRate(rate);
}



void vtkWin32VideoSource::SetOutputFormat(int format)
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->SetOutputFormat(format);
}



void vtkWin32VideoSource::SetPreview(int p)
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->SetPreview(p);
}



void vtkWin32VideoSource::PreviewOn()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->PreviewOn();
}



void vtkWin32VideoSource::PreviewOff()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->PreviewOff();
}



int vtkWin32VideoSource::GetPreview()
{
  int retVal = vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->GetPreview();
  return retVal;
}



void vtkWin32VideoSource::VideoFormatDialog()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->VideoFormatDialog();
}



void vtkWin32VideoSource::VideoSourceDialog()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->VideoSourceDialog();
}



void vtkWin32VideoSource::Initialize()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->Initialize();
}



void vtkWin32VideoSource::ReleaseSystemResources()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->ReleaseSystemResources();
}



void vtkWin32VideoSource::LocalInternalGrab(System::IntPtr arg0)
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->LocalInternalGrab(arg0.ToPointer());
}



void vtkWin32VideoSource::OnParentWndDestroy()
{
  vtk::ConvertManagedToNative<::vtkWin32VideoSource>(m_instance)->OnParentWndDestroy();
}



  vtkWin32VideoSource::vtkWin32VideoSource(System::IntPtr native, bool bConst) : vtkVideoSource(native, bConst) {}



  vtkWin32VideoSource::vtkWin32VideoSource(bool donothing) : vtkVideoSource(donothing) {}



  vtkWin32VideoSource::vtkWin32VideoSource() : vtkVideoSource(false) {
  this->SetNativePointer(IntPtr(::vtkWin32VideoSource::New()));
}



  vtkWin32VideoSource::~vtkWin32VideoSource() { }





} // end namespace vtkHybrid
