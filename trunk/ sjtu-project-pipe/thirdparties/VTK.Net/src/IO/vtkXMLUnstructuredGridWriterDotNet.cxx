

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLUnstructuredGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLUnstructuredGridWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLUnstructuredGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLUnstructuredGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLUnstructuredGridWriter^ vtkXMLUnstructuredGridWriter::NewInstance()
{
  ::vtkXMLUnstructuredGridWriter* retVal = static_cast<::vtkXMLUnstructuredGridWriter*>(vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLUnstructuredGridWriter(IntPtr(retVal), false);
}



vtkXMLUnstructuredGridWriter^ vtkXMLUnstructuredGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLUnstructuredGridWriter* retVal = static_cast<::vtkXMLUnstructuredGridWriter*>(::vtkXMLUnstructuredGridWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLUnstructuredGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLUnstructuredGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLUnstructuredGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLUnstructuredGridWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLUnstructuredGridWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLUnstructuredGridWriter::vtkXMLUnstructuredGridWriter(System::IntPtr native, bool bConst) : vtkXMLUnstructuredDataWriter(native, bConst) {}



  vtkXMLUnstructuredGridWriter::vtkXMLUnstructuredGridWriter(bool donothing) : vtkXMLUnstructuredDataWriter(donothing) {}



  vtkXMLUnstructuredGridWriter::vtkXMLUnstructuredGridWriter() : vtkXMLUnstructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLUnstructuredGridWriter::New()));
}



  vtkXMLUnstructuredGridWriter::~vtkXMLUnstructuredGridWriter() { }





} // end namespace vtkIO
