

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkOutputStreamDotNet.h"

// native includes
#include "strstream"
#include "vtkOutputStream.h"

using namespace System;

namespace vtk {

System::String^ vtkOutputStream::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkOutputStream::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkOutputStream^ vtkOutputStream::NewInstance()
{
  ::vtkOutputStream* retVal = static_cast<::vtkOutputStream*>(vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->NewInstance());
  return gcnew vtkOutputStream(IntPtr(retVal), false);
}



vtkOutputStream^ vtkOutputStream::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkOutputStream* retVal = static_cast<::vtkOutputStream*>(::vtkOutputStream::SafeDownCast(oWrap));
  return gcnew vtkOutputStream(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkOutputStream::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkOutputStream::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




int vtkOutputStream::StartWriting()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->StartWriting();
  return retVal;
}



int vtkOutputStream::Write(array<unsigned char>^ data, unsigned long length)
{
  pin_ptr<unsigned char> dataPin = &data[0];
  unsigned char* nativedataPin = dataPin;
  int retVal = vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->Write(nativedataPin, length);
  return retVal;
}



int vtkOutputStream::Write(System::String^ data, unsigned long length)
{
  char* dataWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(data).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->Write(dataWrap, length);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dataWrap));
  return retVal;
}



int vtkOutputStream::EndWriting()
{
  int retVal = vtk::ConvertManagedToNative<::vtkOutputStream>(m_instance)->EndWriting();
  return retVal;
}



  vtkOutputStream::vtkOutputStream(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkOutputStream::vtkOutputStream(bool donothing) : vtkObject(donothing) {}



  vtkOutputStream::vtkOutputStream() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkOutputStream::New()));
}



  vtkOutputStream::~vtkOutputStream() { }





} // end namespace vtkIO
