

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkPNGWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkPNGWriter.h"
#include "vtkObject.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkPNGWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkPNGWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkPNGWriter^ vtkPNGWriter::NewInstance()
{
  ::vtkPNGWriter* retVal = static_cast<::vtkPNGWriter*>(vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->NewInstance());
  return gcnew vtkPNGWriter(IntPtr(retVal), false);
}



vtkPNGWriter^ vtkPNGWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkPNGWriter* retVal = static_cast<::vtkPNGWriter*>(::vtkPNGWriter::SafeDownCast(oWrap));
  return gcnew vtkPNGWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkPNGWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkPNGWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkPNGWriter::Write()
{
  vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->Write();
}



void vtkPNGWriter::SetWriteToMemory(unsigned int arg0)
{
  vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->SetWriteToMemory(arg0);
}



unsigned int vtkPNGWriter::GetWriteToMemory()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->GetWriteToMemory();
  return retVal;
}



void vtkPNGWriter::WriteToMemoryOn()
{
  vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->WriteToMemoryOn();
}



void vtkPNGWriter::WriteToMemoryOff()
{
  vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->WriteToMemoryOff();
}



void vtkPNGWriter::SetResult(vtkUnsignedCharArray^ arg0)
{
  ::vtkUnsignedCharArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->SetResult(arg0Wrap);
}



vtkUnsignedCharArray^ vtkPNGWriter::GetResult()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkPNGWriter>(m_instance)->GetResult());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



  vtkPNGWriter::vtkPNGWriter(System::IntPtr native, bool bConst) : vtkImageWriter(native, bConst) {}



  vtkPNGWriter::vtkPNGWriter(bool donothing) : vtkImageWriter(donothing) {}



  vtkPNGWriter::vtkPNGWriter() : vtkImageWriter(false) {
  this->SetNativePointer(IntPtr(::vtkPNGWriter::New()));
}



  vtkPNGWriter::~vtkPNGWriter() { }





} // end namespace vtkIO
