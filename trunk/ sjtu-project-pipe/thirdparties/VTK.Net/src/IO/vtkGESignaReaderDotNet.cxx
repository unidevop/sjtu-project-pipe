

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkGESignaReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkGESignaReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkGESignaReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGESignaReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkGESignaReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGESignaReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkGESignaReader^ vtkGESignaReader::NewInstance()
{
  ::vtkGESignaReader* retVal = static_cast<::vtkGESignaReader*>(vtk::ConvertManagedToNative<::vtkGESignaReader>(m_instance)->NewInstance());
  return gcnew vtkGESignaReader(IntPtr(retVal), false);
}



vtkGESignaReader^ vtkGESignaReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkGESignaReader* retVal = static_cast<::vtkGESignaReader*>(::vtkGESignaReader::SafeDownCast(oWrap));
  return gcnew vtkGESignaReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkGESignaReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkGESignaReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkGESignaReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkGESignaReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkGESignaReader::CanReadFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkGESignaReader>(m_instance)->CanReadFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



System::String^ vtkGESignaReader::GetFileExtensions()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGESignaReader>(m_instance)->GetFileExtensions();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkGESignaReader::GetDescriptiveName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkGESignaReader>(m_instance)->GetDescriptiveName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkGESignaReader::vtkGESignaReader(System::IntPtr native, bool bConst) : vtkMedicalImageReader2(native, bConst) {}



  vtkGESignaReader::vtkGESignaReader(bool donothing) : vtkMedicalImageReader2(donothing) {}



  vtkGESignaReader::vtkGESignaReader() : vtkMedicalImageReader2(false) {
  this->SetNativePointer(IntPtr(::vtkGESignaReader::New()));
}



  vtkGESignaReader::~vtkGESignaReader() { }





} // end namespace vtkIO
