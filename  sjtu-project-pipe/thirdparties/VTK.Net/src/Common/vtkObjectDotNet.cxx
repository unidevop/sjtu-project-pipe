

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkObjectDotNet.h"

// native includes
#include "strstream"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkObject::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkObject>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkObject::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkObject>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkObject^ vtkObject::NewInstance()
{
  ::vtkObject* retVal = static_cast<::vtkObject*>(vtk::ConvertManagedToNative<::vtkObject>(m_instance)->NewInstance());
  return gcnew vtkObject(IntPtr(retVal), false);
}



vtkObject^ vtkObject::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkObject* retVal = static_cast<::vtkObject*>(::vtkObject::SafeDownCast(oWrap));
  return gcnew vtkObject(IntPtr(retVal), false);
}



void vtkObject::DebugOn()
{
  vtk::ConvertManagedToNative<::vtkObject>(m_instance)->DebugOn();
}



void vtkObject::DebugOff()
{
  vtk::ConvertManagedToNative<::vtkObject>(m_instance)->DebugOff();
}



unsigned char vtkObject::GetDebug()
{
  unsigned char retVal = vtk::ConvertManagedToNative<::vtkObject>(m_instance)->GetDebug();
  return retVal;
}



void vtkObject::SetDebug(unsigned char debugFlag)
{
  vtk::ConvertManagedToNative<::vtkObject>(m_instance)->SetDebug(debugFlag);
}



void vtkObject::BreakOnError()
{
  ::vtkObject::BreakOnError();
}



void vtkObject::Modified()
{
  vtk::ConvertManagedToNative<::vtkObject>(m_instance)->Modified();
}



unsigned long vtkObject::GetMTime()
{
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkObject>(m_instance)->GetMTime();
  return retVal;
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkObject::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkObject>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkObject::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkObject>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkObject::SetGlobalWarningDisplay(int val)
{
  ::vtkObject::SetGlobalWarningDisplay(val);
}



void vtkObject::GlobalWarningDisplayOn()
{
  ::vtkObject::GlobalWarningDisplayOn();
}



void vtkObject::GlobalWarningDisplayOff()
{
  ::vtkObject::GlobalWarningDisplayOff();
}



int vtkObject::GetGlobalWarningDisplay()
{
  int retVal = ::vtkObject::GetGlobalWarningDisplay();
  return retVal;
}



void vtkObject::RemoveObserver(unsigned long tag)
{
  vtk::ConvertManagedToNative<::vtkObject>(m_instance)->RemoveObserver(tag);
}



void vtkObject::RemoveObservers(unsigned long event)
{
  vtk::ConvertManagedToNative<::vtkObject>(m_instance)->RemoveObservers(event);
}



void vtkObject::RemoveObservers(System::String^ event)
{
  char* eventWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(event).ToPointer());
  vtk::ConvertManagedToNative<::vtkObject>(m_instance)->RemoveObservers(eventWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(eventWrap));
}



int vtkObject::HasObserver(unsigned long event)
{
  int retVal = vtk::ConvertManagedToNative<::vtkObject>(m_instance)->HasObserver(event);
  return retVal;
}



int vtkObject::HasObserver(System::String^ event)
{
  char* eventWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(event).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkObject>(m_instance)->HasObserver(eventWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(eventWrap));
  return retVal;
}



int vtkObject::InvokeEvent(unsigned long event)
{
  int retVal = vtk::ConvertManagedToNative<::vtkObject>(m_instance)->InvokeEvent(event);
  return retVal;
}



int vtkObject::InvokeEvent(System::String^ event)
{
  char* eventWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(event).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkObject>(m_instance)->InvokeEvent(eventWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(eventWrap));
  return retVal;
}



unsigned long vtkObject::AddObserver(unsigned long eid, vtkDotNetCallback^ delegateCallback)
{
  vtkDotNetCommand* cmd = vtkDotNetCommand::New();
  cmd->SetCallback(delegateCallback);
  ::vtkObject* obj = ::vtkObject::SafeDownCast(static_cast<::vtkObjectBase*>(m_instance.ToPointer()));
  unsigned long observerId = obj->AddObserver(eid, cmd);
  cmd->Delete();
  return observerId;
}



unsigned long vtkObject::AddObserver(unsigned long eid, vtkDotNetCallback^ delegateCallback,
                                     Object^ data)
{
  vtkDotNetCommand* cmd = vtkDotNetCommand::New();
  cmd->SetCallback(delegateCallback);
  cmd->SetClientData(data);
  ::vtkObject* obj = ::vtkObject::SafeDownCast(static_cast<::vtkObjectBase*>(m_instance.ToPointer()));
  unsigned long observerId = obj->AddObserver(eid, cmd);
  cmd->Delete();
  return observerId;
}



  vtkObject::vtkObject(System::IntPtr native, bool bConst) : vtkObjectBase(native, bConst) {}



  vtkObject::vtkObject(bool donothing) : vtkObjectBase(donothing) {}



  vtkObject::vtkObject() : vtkObjectBase(false) {
  this->SetNativePointer(IntPtr(::vtkObject::New()));
}



  vtkObject::~vtkObject() { }





} // end namespace vtkCommon
