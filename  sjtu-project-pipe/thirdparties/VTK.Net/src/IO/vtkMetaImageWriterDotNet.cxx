

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMetaImageWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkMetaImageWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMetaImageWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMetaImageWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMetaImageWriter^ vtkMetaImageWriter::NewInstance()
{
  ::vtkMetaImageWriter* retVal = static_cast<::vtkMetaImageWriter*>(vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->NewInstance());
  return gcnew vtkMetaImageWriter(IntPtr(retVal), false);
}



vtkMetaImageWriter^ vtkMetaImageWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMetaImageWriter* retVal = static_cast<::vtkMetaImageWriter*>(::vtkMetaImageWriter::SafeDownCast(oWrap));
  return gcnew vtkMetaImageWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMetaImageWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMetaImageWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMetaImageWriter::SetFileName(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->SetFileName(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
}



System::String^ vtkMetaImageWriter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkMetaImageWriter::SetRAWFileName(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->SetRAWFileName(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
}



System::String^ vtkMetaImageWriter::GetRAWFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMetaImageWriter>(m_instance)->GetRAWFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkMetaImageWriter::vtkMetaImageWriter(System::IntPtr native, bool bConst) : vtkImageWriter(native, bConst) {}



  vtkMetaImageWriter::vtkMetaImageWriter(bool donothing) : vtkImageWriter(donothing) {}



  vtkMetaImageWriter::vtkMetaImageWriter() : vtkImageWriter(false) {
  this->SetNativePointer(IntPtr(::vtkMetaImageWriter::New()));
}



  vtkMetaImageWriter::~vtkMetaImageWriter() { }





} // end namespace vtkIO
