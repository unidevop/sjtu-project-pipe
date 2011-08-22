

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkInputStreamDotNet.h"

// native includes
#include "strstream"
#include "vtkInputStream.h"

using namespace System;

namespace vtk {

System::String^ vtkInputStream::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkInputStream::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkInputStream^ vtkInputStream::NewInstance()
{
  ::vtkInputStream* retVal = static_cast<::vtkInputStream*>(vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->NewInstance());
  return gcnew vtkInputStream(IntPtr(retVal), false);
}



vtkInputStream^ vtkInputStream::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkInputStream* retVal = static_cast<::vtkInputStream*>(::vtkInputStream::SafeDownCast(oWrap));
  return gcnew vtkInputStream(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkInputStream::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkInputStream::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkInputStream::StartReading()
{
  vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->StartReading();
}



int vtkInputStream::Seek(unsigned long offset)
{
  int retVal = vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->Seek(offset);
  return retVal;
}



unsigned long vtkInputStream::Read(array<unsigned char>^ data, unsigned long length)
{
  pin_ptr<unsigned char> dataPin = &data[0];
  unsigned char* nativedataPin = dataPin;
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->Read(nativedataPin, length);
  return retVal;
}



unsigned long vtkInputStream::Read(System::String^ data, unsigned long length)
{
  char* dataWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(data).ToPointer());
  unsigned long retVal = vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->Read(dataWrap, length);
  data->Remove(0,data->Length);
  data->Insert(0,System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(dataWrap)));
System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(dataWrap));
  return retVal;
}



void vtkInputStream::EndReading()
{
  vtk::ConvertManagedToNative<::vtkInputStream>(m_instance)->EndReading();
}



  vtkInputStream::vtkInputStream(System::IntPtr native, bool bConst) : vtkObject(native, bConst) {}



  vtkInputStream::vtkInputStream(bool donothing) : vtkObject(donothing) {}



  vtkInputStream::vtkInputStream() : vtkObject(false) {
  this->SetNativePointer(IntPtr(::vtkInputStream::New()));
}



  vtkInputStream::~vtkInputStream() { }





} // end namespace vtkIO
