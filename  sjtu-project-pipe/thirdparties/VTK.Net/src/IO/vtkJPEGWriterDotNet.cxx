

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkJPEGWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkJPEGWriter.h"
#include "vtkObject.h"
#include "vtkUnsignedCharArray.h"

using namespace System;

namespace vtk {

System::String^ vtkJPEGWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkJPEGWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkJPEGWriter^ vtkJPEGWriter::NewInstance()
{
  ::vtkJPEGWriter* retVal = static_cast<::vtkJPEGWriter*>(vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->NewInstance());
  return gcnew vtkJPEGWriter(IntPtr(retVal), false);
}



vtkJPEGWriter^ vtkJPEGWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkJPEGWriter* retVal = static_cast<::vtkJPEGWriter*>(::vtkJPEGWriter::SafeDownCast(oWrap));
  return gcnew vtkJPEGWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkJPEGWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkJPEGWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




void vtkJPEGWriter::Write()
{
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->Write();
}



void vtkJPEGWriter::SetQuality(int arg0)
{
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->SetQuality(arg0);
}



int vtkJPEGWriter::GetQualityMinValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->GetQualityMinValue();
  return retVal;
}



int vtkJPEGWriter::GetQualityMaxValue()
{
  int retVal = vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->GetQualityMaxValue();
  return retVal;
}



int vtkJPEGWriter::GetQuality()
{
  int retVal = vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->GetQuality();
  return retVal;
}



void vtkJPEGWriter::SetProgressive(unsigned int arg0)
{
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->SetProgressive(arg0);
}



unsigned int vtkJPEGWriter::GetProgressive()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->GetProgressive();
  return retVal;
}



void vtkJPEGWriter::ProgressiveOn()
{
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->ProgressiveOn();
}



void vtkJPEGWriter::ProgressiveOff()
{
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->ProgressiveOff();
}



void vtkJPEGWriter::SetWriteToMemory(unsigned int arg0)
{
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->SetWriteToMemory(arg0);
}



unsigned int vtkJPEGWriter::GetWriteToMemory()
{
  unsigned int retVal = vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->GetWriteToMemory();
  return retVal;
}



void vtkJPEGWriter::WriteToMemoryOn()
{
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->WriteToMemoryOn();
}



void vtkJPEGWriter::WriteToMemoryOff()
{
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->WriteToMemoryOff();
}



void vtkJPEGWriter::SetResult(vtkUnsignedCharArray^ arg0)
{
  ::vtkUnsignedCharArray* arg0Wrap = vtk::ConvertManagedToNative<::vtkUnsignedCharArray>(arg0->GetNativePointer());
  vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->SetResult(arg0Wrap);
}



vtkUnsignedCharArray^ vtkJPEGWriter::GetResult()
{
  ::vtkUnsignedCharArray* retVal = static_cast<::vtkUnsignedCharArray*>(vtk::ConvertManagedToNative<::vtkJPEGWriter>(m_instance)->GetResult());
  return gcnew vtkUnsignedCharArray(IntPtr(retVal), false);
}



  vtkJPEGWriter::vtkJPEGWriter(System::IntPtr native, bool bConst) : vtkImageWriter(native, bConst) {}



  vtkJPEGWriter::vtkJPEGWriter(bool donothing) : vtkImageWriter(donothing) {}



  vtkJPEGWriter::vtkJPEGWriter() : vtkImageWriter(false) {
  this->SetNativePointer(IntPtr(::vtkJPEGWriter::New()));
}



  vtkJPEGWriter::~vtkJPEGWriter() { }





} // end namespace vtkIO
