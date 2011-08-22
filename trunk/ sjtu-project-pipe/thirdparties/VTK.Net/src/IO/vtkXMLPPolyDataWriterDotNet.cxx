

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPPolyDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPPolyDataWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPPolyDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPPolyDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPPolyDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPPolyDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPPolyDataWriter^ vtkXMLPPolyDataWriter::NewInstance()
{
  ::vtkXMLPPolyDataWriter* retVal = static_cast<::vtkXMLPPolyDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLPPolyDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPPolyDataWriter(IntPtr(retVal), false);
}



vtkXMLPPolyDataWriter^ vtkXMLPPolyDataWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPPolyDataWriter* retVal = static_cast<::vtkXMLPPolyDataWriter*>(::vtkXMLPPolyDataWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLPPolyDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPPolyDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPPolyDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPPolyDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPPolyDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLPPolyDataWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPPolyDataWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLPPolyDataWriter::vtkXMLPPolyDataWriter(System::IntPtr native, bool bConst) : vtkXMLPUnstructuredDataWriter(native, bConst) {}



  vtkXMLPPolyDataWriter::vtkXMLPPolyDataWriter(bool donothing) : vtkXMLPUnstructuredDataWriter(donothing) {}



  vtkXMLPPolyDataWriter::vtkXMLPPolyDataWriter() : vtkXMLPUnstructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPPolyDataWriter::New()));
}



  vtkXMLPPolyDataWriter::~vtkXMLPPolyDataWriter() { }





} // end namespace vtkIO
