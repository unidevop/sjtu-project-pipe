

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDirectoryDotNet.h"

// native includes
#include "strstream"
#include "vtkDirectory.h"

using namespace System;

namespace vtk {

System::String^ vtkDirectory::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDirectory>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDirectory::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDirectory>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDirectory^ vtkDirectory::NewInstance()
{
  ::vtkDirectory* retVal = static_cast<::vtkDirectory*>(vtk::ConvertManagedToNative<::vtkDirectory>(m_instance)->NewInstance());
  return gcnew vtkDirectory(IntPtr(retVal), false);
}



vtkDirectory^ vtkDirectory::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDirectory* retVal = static_cast<::vtkDirectory*>(::vtkDirectory::SafeDownCast(oWrap));
  return gcnew vtkDirectory(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDirectory::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDirectory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDirectory::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDirectory>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkDirectory::Open(System::String^ dir)
{
  char* dirWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(dir).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDirectory>(m_instance)->Open(dirWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dirWrap));
  return retVal;
}



int vtkDirectory::GetNumberOfFiles()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDirectory>(m_instance)->GetNumberOfFiles();
  return retVal;
}



System::String^ vtkDirectory::GetFile(int index)
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDirectory>(m_instance)->GetFile(index);
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDirectory::GetCurrentWorkingDirectory(System::String^ buf, unsigned int len)
{
  char* bufWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(buf).ToPointer());
  const char* retVal = ::vtkDirectory::GetCurrentWorkingDirectory(bufWrap, len);
  buf->Remove(0,buf->Length);
  buf->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(bufWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(bufWrap));
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDirectory::MakeDirectory(System::String^ dir)
{
  char* dirWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(dir).ToPointer());
  int retVal = ::vtkDirectory::MakeDirectory(dirWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dirWrap));
  return retVal;
}



int vtkDirectory::CreateDirectory(System::String^ dir)
{
  char* dirWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(dir).ToPointer());
  int retVal = ::vtkDirectory::CreateDirectory(dirWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dirWrap));
  return retVal;
}



  vtkDirectory::vtkDirectory(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkDirectory::vtkDirectory(bool donothing) : vtkObject(donothing) {}



  vtkDirectory::vtkDirectory() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkDirectory::New()));
}



  vtkDirectory::~vtkDirectory() { }





} // end namespace vtkCommon
