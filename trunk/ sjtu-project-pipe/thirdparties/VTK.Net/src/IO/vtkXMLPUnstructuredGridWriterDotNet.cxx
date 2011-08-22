

// managed includes
#include "vtkDotNetConvert.h"
#include "vtkXMLPUnstructuredGridWriterDotNet.h"

// native includes
#include "strstream"
#include "vtkXMLPUnstructuredGridWriter.h"
#include "vtkObject.h"

using namespace System;

namespace vtk {

System::String^ vtkXMLPUnstructuredGridWriter::GetClassName()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridWriter>(m_instance)->GetClassName();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



int vtkXMLPUnstructuredGridWriter::IsA(System::String^ name)
{
  char* nameWrap = static_cast<char*>(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(name).ToPointer());
  int retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridWriter>(m_instance)->IsA(nameWrap);
  System::Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(nameWrap));
  return retVal;
}



vtkXMLPUnstructuredGridWriter^ vtkXMLPUnstructuredGridWriter::NewInstance()
{
  ::vtkXMLPUnstructuredGridWriter* retVal = static_cast<::vtkXMLPUnstructuredGridWriter*>(vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridWriter>(m_instance)->NewInstance());
  return gcnew vtkXMLPUnstructuredGridWriter(IntPtr(retVal), false);
}



vtkXMLPUnstructuredGridWriter^ vtkXMLPUnstructuredGridWriter::SafeDownCast(vtkObject^ o)
{
  ::vtkObject* oWrap = vtk::ConvertManagedToNative<::vtkObject>(o->GetNativePointer());
  ::vtkXMLPUnstructuredGridWriter* retVal = static_cast<::vtkXMLPUnstructuredGridWriter*>(::vtkXMLPUnstructuredGridWriter::SafeDownCast(oWrap));
  return gcnew vtkXMLPUnstructuredGridWriter(IntPtr(retVal), false);
}



  /// <summary>
  /// PrintSelf writes the state of this object to a TextWriter.
  /// </summary>
  void vtkXMLPUnstructuredGridWriter::PrintSelf(System::IO::TextWriter^ writer, int indentLevel)
  {
    std::ostrstream writeStream;
    vtkIndent indent(indentLevel);
    vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    writer->Write(sRetVal);
  }

  /// <summary>
  /// This returns the state of this object as a string. It is equivalent to PrintSelf.
  /// </summary>
  System::String^ vtkXMLPUnstructuredGridWriter::ToString()
  {
    std::ostrstream writeStream;
    vtkIndent indent;
    vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridWriter>(m_instance)->PrintSelf(writeStream,indent);
    System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(writeStream.str())));
    return sRetVal;
  }




System::String^ vtkXMLPUnstructuredGridWriter::GetDefaultFileExtension()
{
  const char* retVal = vtk::ConvertManagedToNative<::vtkXMLPUnstructuredGridWriter>(m_instance)->GetDefaultFileExtension();
  System::String^ sRetVal = System::Runtime::InteropServices::Marshal::PtrToStringAnsi(IntPtr(const_cast<char*>(retVal)));
  return sRetVal;
}



  vtkXMLPUnstructuredGridWriter::vtkXMLPUnstructuredGridWriter(System::IntPtr native, bool bConst) : vtkXMLPUnstructuredDataWriter(native, bConst) {}



  vtkXMLPUnstructuredGridWriter::vtkXMLPUnstructuredGridWriter(bool donothing) : vtkXMLPUnstructuredDataWriter(donothing) {}



  vtkXMLPUnstructuredGridWriter::vtkXMLPUnstructuredGridWriter() : vtkXMLPUnstructuredDataWriter(false) {
  this->SetNativePointer(IntPtr(::vtkXMLPUnstructuredGridWriter::New()));
}



  vtkXMLPUnstructuredGridWriter::~vtkXMLPUnstructuredGridWriter() { }





} // end namespace vtkIO
