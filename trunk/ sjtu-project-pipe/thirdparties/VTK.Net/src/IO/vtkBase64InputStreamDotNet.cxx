

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBase64InputStreamDotNet.h"

// native includes
#include "strstream"
#include "vtkBase64InputStream.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBase64InputStream::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBase64InputStream::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBase64InputStream^ vtkBase64InputStream::NewInstance()
{
  ::vtkBase64InputStream* retVal = static_cast<::vtkBase64InputStream*>(vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->NewInstance());
  return gcnew vtkBase64InputStream(IntPtr(retVal), false);
}



vtkBase64InputStream^ vtkBase64InputStream::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBase64InputStream* retVal = static_cast<::vtkBase64InputStream*>(::vtkBase64InputStream::SafeDownCast(oWrap));
  return gcnew vtkBase64InputStream(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBase64InputStream::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBase64InputStream::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkBase64InputStream::StartReading()
{
  vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->StartReading();
}



int vtkBase64InputStream::Seek(unsigned long offset)
{
  int retVal = vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->Seek(offset);
  return retVal;
}



unsigned long vtkBase64InputStream::Read(array<unsigned char>^ data, unsigned long length)
{
  pin_ptr<unsigned char> dataPin = &data[0];
  unsigned char* nativedataPin = dataPin;
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->Read(nativedataPin, length);
  return retVal;
}



void vtkBase64InputStream::EndReading()
{
  vtk::ConvertManagedToNative<::vtkBase64InputStream>(m_instance)->EndReading();
}



  vtkBase64InputStream::vtkBase64InputStream(System::IntPtr native, bool bConst) : vtkInputStream(native, bConst) {}



  vtkBase64InputStream::vtkBase64InputStream(bool donothing) : vtkInputStream(donothing) {}



  vtkBase64InputStream::vtkBase64InputStream() : vtkInputStream(false) {
  this->SetNativePointer(IntPtr(::vtkBase64InputStream::New()));
}



  vtkBase64InputStream::~vtkBase64InputStream() { }





} // end namespace vtkIO
