

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLStructuredGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLStructuredGridWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLStructuredGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLStructuredGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLStructuredGridWriter^ vtkXMLStructuredGridWriter::NewInstance()
{
  ::vtkXMLStructuredGridWriter* retVal = static_cast<::vtkXMLStructuredGridWriter*>(vtk::ConvertManagedToNative<::vtkXMLStructuredGridWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLStructuredGridWriter(IntPtr(retVal), false);
}



vtkXMLStructuredGridWriter^ vtkXMLStructuredGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLStructuredGridWriter* retVal = static_cast<::vtkXMLStructuredGridWriter*>(::vtkXMLStructuredGridWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLStructuredGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLStructuredGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLStructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLStructuredGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLStructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLStructuredGridWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLStructuredGridWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLStructuredGridWriter::vtkXMLStructuredGridWriter(System::IntPtr native, bool bConst) : vtkXMLStructuredDataWriter(native, bConst) {}



  vtkXMLStructuredGridWriter::vtkXMLStructuredGridWriter(bool donothing) : vtkXMLStructuredDataWriter(donothing) {}



  vtkXMLStructuredGridWriter::vtkXMLStructuredGridWriter() : vtkXMLStructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLStructuredGridWriter::New()));
}



  vtkXMLStructuredGridWriter::~vtkXMLStructuredGridWriter() { }





} // end namespace vtkIO
