

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkTIFFReaderDotNet.h"

// native includes
#include "strstream"
#include "vtkTIFFReader.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkTIFFReader::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkTIFFReader::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkTIFFReader^ vtkTIFFReader::NewInstance()
{
  ::vtkTIFFReader* retVal = static_cast<::vtkTIFFReader*>(vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->NewInstance());
  return gcnew vtkTIFFReader(IntPtr(retVal), false);
}



vtkTIFFReader^ vtkTIFFReader::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkTIFFReader* retVal = static_cast<::vtkTIFFReader*>(::vtkTIFFReader::SafeDownCast(oWrap));
  return gcnew vtkTIFFReader(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkTIFFReader::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkTIFFReader::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkTIFFReader::CanReadFile(System::String^ fname)
{
  char* fnameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(fname).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->CanReadFile(fnameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(fnameWrap));
  return retVal;
}



System::String^ vtkTIFFReader::GetFileExtensions()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->GetFileExtensions();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



System::String^ vtkTIFFReader::GetDescriptiveName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->GetDescriptiveName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



void vtkTIFFReader::InitializeColors()
{
  vtk::ConvertManagedToNative<::vtkTIFFReader>(m_instance)->InitializeColors();
}



  vtkTIFFReader::vtkTIFFReader(System::IntPtr native, bool bConst) : vtkImageReader2(native, bConst) {}



  vtkTIFFReader::vtkTIFFReader(bool donothing) : vtkImageReader2(donothing) {}



  vtkTIFFReader::vtkTIFFReader() : vtkImageReader2(false) {
  this->SetNativePointer(IntPtr(::vtkTIFFReader::New()));
}



  vtkTIFFReader::~vtkTIFFReader() { }





} // end namespace vtkIO
