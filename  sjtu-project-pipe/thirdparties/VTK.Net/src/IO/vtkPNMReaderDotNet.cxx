

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPNMReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkPNMReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkPNMReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPNMReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPNMReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPNMReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPNMReader^ vtkPNMReader::NewInstance()
{
  ::vtkPNMReader* retVal = static_cast<::vtkPNMReader*>(vtk::ConvertManagedToNative<::vtkPNMReader>(m_instance)->NewInstance());
  return gcnew vtkPNMReader(IntPtr(retVal), false);
}



vtkPNMReader^ vtkPNMReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPNMReader* retVal = static_cast<::vtkPNMReader*>(::vtkPNMReader::SafeDownCast(oWrap));
  return gcnew vtkPNMReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPNMReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPNMReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPNMReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPNMReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkPNMReader::CanReadFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPNMReader>(m_instance)->CanReadFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



System::String^ vtkPNMReader::GetFileExtensions()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPNMReader>(m_instance)->GetFileExtensions();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkPNMReader::GetDescriptiveName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPNMReader>(m_instance)->GetDescriptiveName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkPNMReader::vtkPNMReader(System::IntPtr native, bool bConst) : vtkImageReader(native, bConst) {}



  vtkPNMReader::vtkPNMReader(bool donothing) : vtkImageReader(donothing) {}



  vtkPNMReader::vtkPNMReader() : vtkImageReader(false) {
  this->SetNativePointer(IntPtr(::vtkPNMReader::New()));
}



  vtkPNMReader::~vtkPNMReader() { }





} // end namespace vtkIO
