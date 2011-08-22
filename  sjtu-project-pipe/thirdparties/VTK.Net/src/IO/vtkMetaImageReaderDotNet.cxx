

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkMetaImageReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkMetaImageReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkMetaImageReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMetaImageReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMetaImageReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMetaImageReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkMetaImageReader^ vtkMetaImageReader::NewInstance()
{
  ::vtkMetaImageReader* retVal = static_cast<::vtkMetaImageReader*>(vtk::ConvertManagedToNative<::vtkMetaImageReader>(m_instance)->NewInstance());
  return gcnew vtkMetaImageReader(IntPtr(retVal), false);
}



vtkMetaImageReader^ vtkMetaImageReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkMetaImageReader* retVal = static_cast<::vtkMetaImageReader*>(::vtkMetaImageReader::SafeDownCast(oWrap));
  return gcnew vtkMetaImageReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkMetaImageReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkMetaImageReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkMetaImageReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkMetaImageReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkMetaImageReader::SetFileName(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  vtk::ConvertManagedToNative<::vtkMetaImageReader>(m_instance)->SetFileName(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
}



System::String^ vtkMetaImageReader::GetFileName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkMetaImageReader>(m_instance)->GetFileName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkMetaImageReader::CanReadFile(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkMetaImageReader>(m_instance)->CanReadFile(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



  vtkMetaImageReader::vtkMetaImageReader(System::IntPtr native, bool bConst) : vtkImageReader(native, bConst) {}



  vtkMetaImageReader::vtkMetaImageReader(bool donothing) : vtkImageReader(donothing) {}



  vtkMetaImageReader::vtkMetaImageReader() : vtkImageReader(false) {
  this->SetNativePointer(IntPtr(::vtkMetaImageReader::New()));
}



  vtkMetaImageReader::~vtkMetaImageReader() { }





} // end namespace vtkIO
