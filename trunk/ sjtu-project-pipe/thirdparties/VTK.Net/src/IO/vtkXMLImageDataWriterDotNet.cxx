

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLImageDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLImageDataWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLImageDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLImageDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLImageDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLImageDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLImageDataWriter^ vtkXMLImageDataWriter::NewInstance()
{
  ::vtkXMLImageDataWriter* retVal = static_cast<::vtkXMLImageDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLImageDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLImageDataWriter(IntPtr(retVal), false);
}



vtkXMLImageDataWriter^ vtkXMLImageDataWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLImageDataWriter* retVal = static_cast<::vtkXMLImageDataWriter*>(::vtkXMLImageDataWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLImageDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLImageDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLImageDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLImageDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLImageDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLImageDataWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLImageDataWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLImageDataWriter::vtkXMLImageDataWriter(System::IntPtr native, bool bConst) : vtkXMLStructuredDataWriter(native, bConst) {}



  vtkXMLImageDataWriter::vtkXMLImageDataWriter(bool donothing) : vtkXMLStructuredDataWriter(donothing) {}



  vtkXMLImageDataWriter::vtkXMLImageDataWriter() : vtkXMLStructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLImageDataWriter::New()));
}



  vtkXMLImageDataWriter::~vtkXMLImageDataWriter() { }





} // end namespace vtkIO
