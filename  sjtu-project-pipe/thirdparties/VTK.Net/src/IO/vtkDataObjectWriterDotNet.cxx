

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataObjectWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkDataObjectWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataObjectWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataObjectWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataObjectWriter^ vtkDataObjectWriter::NewInstance()
{
  ::vtkDataObjectWriter* retVal = static_cast<::vtkDataObjectWriter*>(vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->NewInstance());
  return gcnew vtkDataObjectWriter(IntPtr(retVal), false);
}



vtkDataObjectWriter^ vtkDataObjectWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataObjectWriter* retVal = static_cast<::vtkDataObjectWriter*>(::vtkDataObjectWriter::SafeDownCast(oWrap));
  return gcnew vtkDataObjectWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataObjectWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataObjectWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataObjectWriter::SetFileName(System::String^ filename)
{
  char* filenameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(filename).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->SetFileName(filenameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(filenameWrap));
}



System::String^ vtkDataObjectWriter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataObjectWriter::SetHeader(System::String^ header)
{
  char* headerWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(header).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->SetHeader(headerWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(headerWrap));
}



System::String^ vtkDataObjectWriter::GetHeader()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->GetHeader();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataObjectWriter::SetFileType(int type)
{
  vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->SetFileType(type);
}



int vtkDataObjectWriter::GetFileType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->GetFileType();
  return retVal;
}



void vtkDataObjectWriter::SetFileTypeToASCII()
{
  vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->SetFileTypeToASCII();
}



void vtkDataObjectWriter::SetFileTypeToBinary()
{
  vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->SetFileTypeToBinary();
}



void vtkDataObjectWriter::SetFieldDataName(System::String^ fieldname)
{
  char* fieldnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fieldname).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->SetFieldDataName(fieldnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fieldnameWrap));
}



System::String^ vtkDataObjectWriter::GetFieldDataName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataObjectWriter>(m_instance)->GetFieldDataName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkDataObjectWriter::vtkDataObjectWriter(System::IntPtr native, bool bConst) : vtkWriter(native, bConst) {}



  vtkDataObjectWriter::vtkDataObjectWriter(bool donothing) : vtkWriter(donothing) {}



  vtkDataObjectWriter::vtkDataObjectWriter() : vtkWriter(false) {
  this->SetNativePointer(IntPtr(::vtkDataObjectWriter::New()));
}



  vtkDataObjectWriter::~vtkDataObjectWriter() { }





} // end namespace vtkIO
