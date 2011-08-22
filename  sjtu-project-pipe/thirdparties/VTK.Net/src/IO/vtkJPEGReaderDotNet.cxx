

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkJPEGReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkJPEGReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkJPEGReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkJPEGReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkJPEGReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkJPEGReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkJPEGReader^ vtkJPEGReader::NewInstance()
{
  ::vtkJPEGReader* retVal = static_cast<::vtkJPEGReader*>(vtk::ConvertManagedToNative<::vtkJPEGReader>(m_instance)->NewInstance());
  return gcnew vtkJPEGReader(IntPtr(retVal), false);
}



vtkJPEGReader^ vtkJPEGReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkJPEGReader* retVal = static_cast<::vtkJPEGReader*>(::vtkJPEGReader::SafeDownCast(oWrap));
  return gcnew vtkJPEGReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkJPEGReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkJPEGReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkJPEGReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkJPEGReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkJPEGReader::CanReadFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkJPEGReader>(m_instance)->CanReadFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



System::String^ vtkJPEGReader::GetFileExtensions()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkJPEGReader>(m_instance)->GetFileExtensions();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkJPEGReader::GetDescriptiveName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkJPEGReader>(m_instance)->GetDescriptiveName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkJPEGReader::vtkJPEGReader(System::IntPtr native, bool bConst) : vtkImageReader2(native, bConst) {}



  vtkJPEGReader::vtkJPEGReader(bool donothing) : vtkImageReader2(donothing) {}



  vtkJPEGReader::vtkJPEGReader() : vtkImageReader2(false) {
  this->SetNativePointer(IntPtr(::vtkJPEGReader::New()));
}



  vtkJPEGReader::~vtkJPEGReader() { }





} // end namespace vtkIO
