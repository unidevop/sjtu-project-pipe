

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMutexLockDotNet.h"

// native includes
#include "strstream"
#include "vtkMutexLock.h"

using namespace System;

namespace vtk {

System::String^ vtkMutexLock::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMutexLock>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMutexLock::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMutexLock>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMutexLock^ vtkMutexLock::NewInstance()
{
  ::vtkMutexLock* retVal = static_cast<::vtkMutexLock*>(vtk::ConvertManagedToNative<::vtkMutexLock>(m_instance)->NewInstance());
  return gcnew vtkMutexLock(IntPtr(retVal), false);
}



vtkMutexLock^ vtkMutexLock::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMutexLock* retVal = static_cast<::vtkMutexLock*>(::vtkMutexLock::SafeDownCast(oWrap));
  return gcnew vtkMutexLock(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMutexLock::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMutexLock>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMutexLock::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMutexLock>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMutexLock::Lock()
{
  vtk::ConvertManagedToNative<::vtkMutexLock>(m_instance)->Lock();
}



void vtkMutexLock::Unlock()
{
  vtk::ConvertManagedToNative<::vtkMutexLock>(m_instance)->Unlock();
}



  vtkMutexLock::vtkMutexLock(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkMutexLock::vtkMutexLock(bool donothing) : vtkObject(donothing) {}



  vtkMutexLock::vtkMutexLock() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkMutexLock::New()));
}



  vtkMutexLock::~vtkMutexLock() { }





} // end namespace vtkCommon
