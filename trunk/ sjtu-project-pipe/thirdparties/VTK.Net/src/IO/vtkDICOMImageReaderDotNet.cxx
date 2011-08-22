

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkDICOMImageReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkDICOMImageReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkDICOMImageReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDICOMImageReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkDICOMImageReader^ vtkDICOMImageReader::NewInstance()
{
  ::vtkDICOMImageReader* retVal = static_cast<::vtkDICOMImageReader*>(vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->NewInstance());
  return gcnew vtkDICOMImageReader(IntPtr(retVal), false);
}



vtkDICOMImageReader^ vtkDICOMImageReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkDICOMImageReader* retVal = static_cast<::vtkDICOMImageReader*>(::vtkDICOMImageReader::SafeDownCast(oWrap));
  return gcnew vtkDICOMImageReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkDICOMImageReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkDICOMImageReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkDICOMImageReader::SetFileName(System::String^ fn)
{
  char* fnWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fn).ToPointer());
  vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->SetFileName(fnWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnWrap));
}



void vtkDICOMImageReader::SetDirectoryName(System::String^ dn)
{
  char* dnWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(dn).ToPointer());
  vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->SetDirectoryName(dnWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dnWrap));
}



System::String^ vtkDICOMImageReader::GetDirectoryName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetDirectoryName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkDICOMImageReader::GetWidth()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetWidth();
  return retVal;
}



int vtkDICOMImageReader::GetHeight()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetHeight();
  return retVal;
}



int vtkDICOMImageReader::GetBitsAllocated()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetBitsAllocated();
  return retVal;
}



int vtkDICOMImageReader::GetPixelRepresentation()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetPixelRepresentation();
  return retVal;
}



int vtkDICOMImageReader::GetNumberOfComponents()
{
  int retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetNumberOfComponents();
  return retVal;
}



System::String^ vtkDICOMImageReader::GetTransferSyntaxUID()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetTransferSyntaxUID();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



float vtkDICOMImageReader::GetRescaleSlope()
{
  float retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetRescaleSlope();
  return retVal;
}



float vtkDICOMImageReader::GetRescaleOffset()
{
  float retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetRescaleOffset();
  return retVal;
}



System::String^ vtkDICOMImageReader::GetPatientName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetPatientName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDICOMImageReader::GetStudyUID()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetStudyUID();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkDICOMImageReader::GetStudyID()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetStudyID();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



float vtkDICOMImageReader::GetGantryAngle()
{
  float retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->GetGantryAngle();
  return retVal;
}



int vtkDICOMImageReader::CanReadFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkDICOMImageReader>(m_instance)->CanReadFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



  vtkDICOMImageReader::vtkDICOMImageReader(System::IntPtr native, bool bConst) : vtkImageReader2(native, bConst) {}



  vtkDICOMImageReader::vtkDICOMImageReader(bool donothing) : vtkImageReader2(donothing) {}



  vtkDICOMImageReader::vtkDICOMImageReader() : vtkImageReader2(false) {
  this->SetNativePointer(IntPtr(::vtkDICOMImageReader::New()));
}



  vtkDICOMImageReader::~vtkDICOMImageReader() { }





} // end namespace vtkIO
