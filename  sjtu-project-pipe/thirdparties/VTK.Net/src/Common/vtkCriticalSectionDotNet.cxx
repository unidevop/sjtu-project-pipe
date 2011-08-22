

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkCriticalSectionDotNet.h"

// native includes
#include "strstream"
#include "vtkCriticalSection.h"

using namespace System;

namespace vtk {

System::String^ vtkCriticalSection::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkCriticalSection>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkCriticalSection::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkCriticalSection>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkCriticalSection^ vtkCriticalSection::NewInstance()
{
  ::vtkCriticalSection* retVal = static_cast<::vtkCriticalSection*>(vtk::ConvertManagedToNative<::vtkCriticalSection>(m_instance)->NewInstance());
  return gcnew vtkCriticalSection(IntPtr(retVal), false);
}



vtkCriticalSection^ vtkCriticalSection::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkCriticalSection* retVal = static_cast<::vtkCriticalSection*>(::vtkCriticalSection::SafeDownCast(oWrap));
  return gcnew vtkCriticalSection(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkCriticalSection::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkCriticalSection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkCriticalSection::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkCriticalSection>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkCriticalSection::Lock()
{
  vtk::ConvertManagedToNative<::vtkCriticalSection>(m_instance)->Lock();
}



void vtkCriticalSection::Unlock()
{
  vtk::ConvertManagedToNative<::vtkCriticalSection>(m_instance)->Unlock();
}



  vtkCriticalSection::vtkCriticalSection(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkCriticalSection::vtkCriticalSection(bool donothing) : vtkObject(donothing) {}



  vtkCriticalSection::vtkCriticalSection() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkCriticalSection::New()));
}



  vtkCriticalSection::~vtkCriticalSection() { }





} // end namespace vtkCommon
