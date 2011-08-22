

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPolyDataWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPolyDataWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPolyDataWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPolyDataWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPolyDataWriter^ vtkXMLPolyDataWriter::NewInstance()
{
  ::vtkXMLPolyDataWriter* retVal = static_cast<::vtkXMLPolyDataWriter*>(vtk::ConvertManagedToNative<::vtkXMLPolyDataWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPolyDataWriter(IntPtr(retVal), false);
}



vtkXMLPolyDataWriter^ vtkXMLPolyDataWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPolyDataWriter* retVal = static_cast<::vtkXMLPolyDataWriter*>(::vtkXMLPolyDataWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLPolyDataWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPolyDataWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPolyDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPolyDataWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPolyDataWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLPolyDataWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPolyDataWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLPolyDataWriter::vtkXMLPolyDataWriter(System::IntPtr native, bool bConst) : vtkXMLUnstructuredDataWriter(native, bConst) {}



  vtkXMLPolyDataWriter::vtkXMLPolyDataWriter(bool donothing) : vtkXMLUnstructuredDataWriter(donothing) {}



  vtkXMLPolyDataWriter::vtkXMLPolyDataWriter() : vtkXMLUnstructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPolyDataWriter::New()));
}



  vtkXMLPolyDataWriter::~vtkXMLPolyDataWriter() { }





} // end namespace vtkIO
