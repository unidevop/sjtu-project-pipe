

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkBase64OutputStreamDotNet.h"

// native includes
#include "strstream"
#include "vtkBase64OutputStream.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkBase64OutputStream::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkBase64OutputStream>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkBase64OutputStream::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkBase64OutputStream>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkBase64OutputStream^ vtkBase64OutputStream::NewInstance()
{
  ::vtkBase64OutputStream* retVal = static_cast<::vtkBase64OutputStream*>(vtk::ConvertManagedToNative<::vtkBase64OutputStream>(m_instance)->NewInstance());
  return gcnew vtkBase64OutputStream(IntPtr(retVal), false);
}



vtkBase64OutputStream^ vtkBase64OutputStream::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkBase64OutputStream* retVal = static_cast<::vtkBase64OutputStream*>(::vtkBase64OutputStream::SafeDownCast(oWrap));
  return gcnew vtkBase64OutputStream(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkBase64OutputStream::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkBase64OutputStream>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkBase64OutputStream::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkBase64OutputStream>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkBase64OutputStream::StartWriting()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBase64OutputStream>(m_instance)->StartWriting();
  return retVal;
}



int vtkBase64OutputStream::Write(array<unsigned char>^ data, unsigned long length)
{
  pin_ptr<unsigned char> dataPin = &data[0];
  unsigned char* nativedataPin = dataPin;
  int retVal = vtk::ConvertManagedToNative<::vtkBase64OutputStream>(m_instance)->Write(nativedataPin, length);
  return retVal;
}



int vtkBase64OutputStream::EndWriting()
{
  int retVal = vtk::ConvertManagedToNative<::vtkBase64OutputStream>(m_instance)->EndWriting();
  return retVal;
}



  vtkBase64OutputStream::vtkBase64OutputStream(System::IntPtr native, bool bConst) : vtkOutputStream(native, bConst) {}



  vtkBase64OutputStream::vtkBase64OutputStream(bool donothing) : vtkOutputStream(donothing) {}



  vtkBase64OutputStream::vtkBase64OutputStream() : vtkOutputStream(false) {
  this->SetNativePointer(IntPtr(::vtkBase64OutputStream::New()));
}



  vtkBase64OutputStream::~vtkBase64OutputStream() { }





} // end namespace vtkIO
