

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkDataWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDataWriter^ vtkDataWriter::NewInstance()
{
  ::vtkDataWriter* retVal = static_cast<::vtkDataWriter*>(vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->NewInstance());
  return gcnew vtkDataWriter(IntPtr(retVal), false);
}



vtkDataWriter^ vtkDataWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDataWriter* retVal = static_cast<::vtkDataWriter*>(::vtkDataWriter::SafeDownCast(oWrap));
  return gcnew vtkDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDataWriter::SetFileName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetFileName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetWriteToOutputString(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetWriteToOutputString(arg0);
}



int vtkDataWriter::GetWriteToOutputString()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetWriteToOutputString();
  return retVal;
}



void vtkDataWriter::WriteToOutputStringOn()
{
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->WriteToOutputStringOn();
}



void vtkDataWriter::WriteToOutputStringOff()
{
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->WriteToOutputStringOff();
}



int vtkDataWriter::GetOutputStringLength()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetOutputStringLength();
  return retVal;
}



System::String^ vtkDataWriter::GetOutputString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetOutputString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDataWriter::RegisterAndGetOutputString()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->RegisterAndGetOutputString();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetHeader(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetHeader(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetHeader()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetHeader();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetFileType(int arg0)
{
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetFileType(arg0);
}



int vtkDataWriter::GetFileTypeMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetFileTypeMinValue();
  return retVal;
}



int vtkDataWriter::GetFileTypeMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetFileTypeMaxValue();
  return retVal;
}



int vtkDataWriter::GetFileType()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetFileType();
  return retVal;
}



void vtkDataWriter::SetFileTypeToASCII()
{
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetFileTypeToASCII();
}



void vtkDataWriter::SetFileTypeToBinary()
{
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetFileTypeToBinary();
}



void vtkDataWriter::SetScalarsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetScalarsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetScalarsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetScalarsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetVectorsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetVectorsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetVectorsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetVectorsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetTensorsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetTensorsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetTensorsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetTensorsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetNormalsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetNormalsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetNormalsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetNormalsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetTCoordsName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetTCoordsName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetTCoordsName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetTCoordsName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetLookupTableName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetLookupTableName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetLookupTableName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetLookupTableName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkDataWriter::SetFieldDataName(System::String^ arg0)
{
  char* arg0Wrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(arg0).ToPointer());
  vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->SetFieldDataName(arg0Wrap);
  arg0->Remove(0,arg0->Length);
  arg0->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(arg0Wrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(arg0Wrap));
}



System::String^ vtkDataWriter::GetFieldDataName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDataWriter>(m_instance)->GetFieldDataName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkDataWriter::vtkDataWriter(System::IntPtr native, bool bConst) : vtkWriter(native, bConst) {}



  vtkDataWriter::vtkDataWriter(bool donothing) : vtkWriter(donothing) {}



  vtkDataWriter::vtkDataWriter() : vtkWriter(false) {
  this->SetNativePointer(IntPtr(::vtkDataWriter::New()));
}



  vtkDataWriter::~vtkDataWriter() { }





} // end namespace vtkIO
