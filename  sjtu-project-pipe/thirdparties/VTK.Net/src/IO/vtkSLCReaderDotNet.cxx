

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkSLCReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkSLCReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkSLCReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSLCReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkSLCReader^ vtkSLCReader::NewInstance()
{
  ::vtkSLCReader* retVal = static_cast<::vtkSLCReader*>(vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->NewInstance());
  return gcnew vtkSLCReader(IntPtr(retVal), false);
}



vtkSLCReader^ vtkSLCReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkSLCReader* retVal = static_cast<::vtkSLCReader*>(::vtkSLCReader::SafeDownCast(oWrap));
  return gcnew vtkSLCReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkSLCReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkSLCReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkSLCReader::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkSLCReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkSLCReader::GetError()
{
  int retVal = vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->GetError();
  return retVal;
}



int vtkSLCReader::CanReadFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->CanReadFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



System::String^ vtkSLCReader::GetFileExtensions()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->GetFileExtensions();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkSLCReader::GetDescriptiveName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkSLCReader>(m_instance)->GetDescriptiveName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkSLCReader::vtkSLCReader(System::IntPtr native, bool bConst) : vtkImageReader2(native, bConst) {}



  vtkSLCReader::vtkSLCReader(bool donothing) : vtkImageReader2(donothing) {}



  vtkSLCReader::vtkSLCReader() : vtkImageReader2(false) {
  this->SetNativePointer(IntPtr(::vtkSLCReader::New()));
}



  vtkSLCReader::~vtkSLCReader() { }





} // end namespace vtkIO
