

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkImageWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkImageWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkImageWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkImageWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkImageWriter^ vtkImageWriter::NewInstance()
{
  ::vtkImageWriter* retVal = static_cast<::vtkImageWriter*>(vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->NewInstance());
  return gcnew vtkImageWriter(IntPtr(retVal), false);
}



vtkImageWriter^ vtkImageWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkImageWriter* retVal = static_cast<::vtkImageWriter*>(::vtkImageWriter::SafeDownCast(oWrap));
  return gcnew vtkImageWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkImageWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkImageWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkImageWriter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkImageWriter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageWriter::SetFilePrefix(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->SetFilePrefix(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkImageWriter::GetFilePrefix()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->GetFilePrefix();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageWriter::SetFilePattern(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->SetFilePattern(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkImageWriter::GetFilePattern()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->GetFilePattern();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkImageWriter::SetFileDimensionality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->SetFileDimensionality(arg0);
}



int vtkImageWriter::GetFileDimensionality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->GetFileDimensionality();
  return retVal;
}



void vtkImageWriter::Write()
{
  vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->Write();
}



void vtkImageWriter::DeleteFiles()
{
  vtk::ConvertManagedToNative<::vtkImageWriter>(m_instance)->DeleteFiles();
}



  vtkImageWriter::vtkImageWriter(System::IntPtr native, bool bConst) : vtkImageAlgorithm(native, bConst) {}



  vtkImageWriter::vtkImageWriter(bool donothing) : vtkImageAlgorithm(donothing) {}



  vtkImageWriter::vtkImageWriter() : vtkImageAlgorithm(false) {
  this->SetNativePointer(IntPtr(::vtkImageWriter::New()));
}



  vtkImageWriter::~vtkImageWriter() { }





} // end namespace vtkIO
