

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTimerLogDotNet.h"

// native includes
#include "strstream"
#include "vtkTimerLog.h"

using namespace System;

namespace vtk {

System::String^ vtkTimerLog::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTimerLog>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTimerLog::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTimerLog>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTimerLog^ vtkTimerLog::NewInstance()
{
  ::vtkTimerLog* retVal = static_cast<::vtkTimerLog*>(vtk::ConvertManagedToNative<::vtkTimerLog>(m_instance)->NewInstance());
  return gcnew vtkTimerLog(IntPtr(retVal), false);
}



vtkTimerLog^ vtkTimerLog::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTimerLog* retVal = static_cast<::vtkTimerLog*>(::vtkTimerLog::SafeDownCast(oWrap));
  return gcnew vtkTimerLog(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTimerLog::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTimerLog>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTimerLog::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTimerLog>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkTimerLog::SetLogging(int v)
{
  ::vtkTimerLog::SetLogging(v);
}



int vtkTimerLog::GetLogging()
{
  int retVal = ::vtkTimerLog::GetLogging();
  return retVal;
}



void vtkTimerLog::LoggingOn()
{
  ::vtkTimerLog::LoggingOn();
}



void vtkTimerLog::LoggingOff()
{
  ::vtkTimerLog::LoggingOff();
}



void vtkTimerLog::SetMaxEntries(int a)
{
  ::vtkTimerLog::SetMaxEntries(a);
}



int vtkTimerLog::GetMaxEntries()
{
  int retVal = ::vtkTimerLog::GetMaxEntries();
  return retVal;
}



void vtkTimerLog::DumpLog(System::String^ filename)
{
  char* filenameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename).ToPointer());
  ::vtkTimerLog::DumpLog(filenameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(filenameWrap));
}



void vtkTimerLog::MarkStartEvent(System::String^ EventString)
{
  char* EventStringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(EventString).ToPointer());
  ::vtkTimerLog::MarkStartEvent(EventStringWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(EventStringWrap));
}



void vtkTimerLog::MarkEndEvent(System::String^ EventString)
{
  char* EventStringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(EventString).ToPointer());
  ::vtkTimerLog::MarkEndEvent(EventStringWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(EventStringWrap));
}



int vtkTimerLog::GetNumberOfEvents()
{
  int retVal = ::vtkTimerLog::GetNumberOfEvents();
  return retVal;
}



int vtkTimerLog::GetEventIndent(int i)
{
  int retVal = ::vtkTimerLog::GetEventIndent(i);
  return retVal;
}



double vtkTimerLog::GetEventWallTime(int i)
{
  double retVal = ::vtkTimerLog::GetEventWallTime(i);
  return retVal;
}



System::String^ vtkTimerLog::GetEventString(int i)
{
  const char* retVal = ::vtkTimerLog::GetEventString(i);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTimerLog::MarkEvent(System::String^ EventString)
{
  char* EventStringWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(EventString).ToPointer());
  ::vtkTimerLog::MarkEvent(EventStringWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(EventStringWrap));
}



void vtkTimerLog::ResetLog()
{
  ::vtkTimerLog::ResetLog();
}



void vtkTimerLog::AllocateLog()
{
  ::vtkTimerLog::AllocateLog();
}



void vtkTimerLog::CleanupLog()
{
  ::vtkTimerLog::CleanupLog();
}



double vtkTimerLog::GetUniversalTime()
{
  double retVal = ::vtkTimerLog::GetUniversalTime();
  return retVal;
}



double vtkTimerLog::GetCPUTime()
{
  double retVal = ::vtkTimerLog::GetCPUTime();
  return retVal;
}



void vtkTimerLog::StartTimer()
{
  vtk::ConvertManagedToNative<::vtkTimerLog>(m_instance)->StartTimer();
}



void vtkTimerLog::StopTimer()
{
  vtk::ConvertManagedToNative<::vtkTimerLog>(m_instance)->StopTimer();
}



double vtkTimerLog::GetElapsedTime()
{
  double retVal = vtk::ConvertManagedToNative<::vtkTimerLog>(m_instance)->GetElapsedTime();
  return retVal;
}



double vtkTimerLog::GetCurrentTime()
{
  double retVal = ::vtkTimerLog::GetCurrentTime();
  return retVal;
}



  vtkTimerLog::vtkTimerLog(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkTimerLog::vtkTimerLog(bool donothing) : vtkObject(donothing) {}



  vtkTimerLog::vtkTimerLog() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkTimerLog::New()));
}



  vtkTimerLog::~vtkTimerLog() { }





} // end namespace vtkCommon
