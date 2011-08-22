

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPImageDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPImageDataWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPImageDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPImageDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPImageDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPImageDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPImageDataWriter^ vtkXMLPImageDataWriter::NewInstance()
{
  ::vtkXMLPImageDataWriter* retVal = static_cast<::vtkXMLPImageDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLPImageDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPImageDataWriter(IntPtr(retVal), false);
}



vtkXMLPImageDataWriter^ vtkXMLPImageDataWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPImageDataWriter* retVal = static_cast<::vtkXMLPImageDataWriter*>(::vtkXMLPImageDataWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLPImageDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPImageDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPImageDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPImageDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPImageDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLPImageDataWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPImageDataWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLPImageDataWriter::vtkXMLPImageDataWriter(System::IntPtr native, bool bConst) : vtkXMLPStructuredDataWriter(native, bConst) {}



  vtkXMLPImageDataWriter::vtkXMLPImageDataWriter(bool donothing) : vtkXMLPStructuredDataWriter(donothing) {}



  vtkXMLPImageDataWriter::vtkXMLPImageDataWriter() : vtkXMLPStructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPImageDataWriter::New()));
}



  vtkXMLPImageDataWriter::~vtkXMLPImageDataWriter() { }





} // end namespace vtkIO
