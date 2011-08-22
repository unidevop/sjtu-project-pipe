

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkThreadMessagerDotNet.h"

// native includes
#include "strstream"
#include "vtkThreadMessager.h"

using namespace System;

namespace vtk {

System::String^ vtkThreadMessager::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkThreadMessager::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkThreadMessager^ vtkThreadMessager::NewInstance()
{
  ::vtkThreadMessager* retVal = static_cast<::vtkThreadMessager*>(vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->NewInstance());
  return gcnew vtkThreadMessager(IntPtr(retVal), false);
}



vtkThreadMessager^ vtkThreadMessager::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkThreadMessager* retVal = static_cast<::vtkThreadMessager*>(::vtkThreadMessager::SafeDownCast(oWrap));
  return gcnew vtkThreadMessager(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkThreadMessager::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkThreadMessager::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkThreadMessager::WaitForMessage()
{
  vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->WaitForMessage();
}



void vtkThreadMessager::SendWakeMessage()
{
  vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->SendWakeMessage();
}



void vtkThreadMessager::EnableWaitForReceiver()
{
  vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->EnableWaitForReceiver();
}



void vtkThreadMessager::DisableWaitForReceiver()
{
  vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->DisableWaitForReceiver();
}



void vtkThreadMessager::WaitForReceiver()
{
  vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->WaitForReceiver();
}



void vtkThreadMessager::SendMessage()
{
  vtk::ConvertManagedToNative<::vtkThreadMessager>(m_instance)->SendMessage();
}



  vtkThreadMessager::vtkThreadMessager(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkThreadMessager::vtkThreadMessager(bool donothing) : vtkObject(donothing) {}



  vtkThreadMessager::vtkThreadMessager() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkThreadMessager::New()));
}



  vtkThreadMessager::~vtkThreadMessager() { }





} // end namespace vtkCommon
